/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130016
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_16 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)75)))))))), (((max((var_6), (((/* implicit */unsigned long long int) (signed char)84)))) * (var_6)))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            for (long long int i_2 = 3; i_2 < 18; i_2 += 2) 
            {
                {
                    var_17 ^= (+(-1));
                    var_18 = ((/* implicit */long long int) (signed char)63);
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned short i_3 = 1; i_3 < 22; i_3 += 3) /* same iter space */
    {
        arr_9 [i_3] [i_3] = ((/* implicit */unsigned char) ((unsigned int) (~(-1836923549))));
        arr_10 [i_3] [i_3] = ((/* implicit */unsigned char) max((arr_8 [i_3]), (((/* implicit */unsigned long long int) ((unsigned char) (-(((/* implicit */int) (unsigned short)31))))))));
    }
    for (unsigned short i_4 = 1; i_4 < 22; i_4 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (signed char i_5 = 1; i_5 < 22; i_5 += 1) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (short i_7 = 0; i_7 < 23; i_7 += 1) 
                {
                    {
                        var_19 ^= ((((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) -725120368358618180LL)), (21ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)65502)))))))) || ((!(arr_16 [i_7] [i_5 + 1] [i_4 + 1] [i_4 + 1]))));
                        arr_24 [i_4] [i_5 - 1] [i_5] [i_6] [i_5] [i_7] = (~(var_15));
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)119))) > (4294967295U))))));
        arr_25 [i_4] = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) ((_Bool) arr_12 [(unsigned char)22]))), (((unsigned long long int) (signed char)-84)))), (((/* implicit */unsigned long long int) (_Bool)1))));
    }
}
