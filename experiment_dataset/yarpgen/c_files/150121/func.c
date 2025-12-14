/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150121
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */int) (unsigned short)24);
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (-3963354999067564160LL)));
    }
    for (long long int i_1 = 0; i_1 < 25; i_1 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */long long int) (((+(((((/* implicit */unsigned int) ((/* implicit */int) var_14))) ^ (arr_3 [i_1] [i_1]))))) & (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1])))));
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 25; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 2704420716982468610LL))));
                    var_21 &= ((/* implicit */short) arr_11 [i_1]);
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned int i_4 = 0; i_4 < 25; i_4 += 2) 
        {
            for (long long int i_5 = 1; i_5 < 24; i_5 += 1) 
            {
                for (unsigned short i_6 = 2; i_6 < 22; i_6 += 1) 
                {
                    {
                        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) ((long long int) var_5)))) ? (((/* implicit */int) (!(((arr_19 [i_6] [i_6] [i_6] [i_1]) > (-3805348470642123662LL)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_4])))))));
                        var_23 *= ((/* implicit */short) ((((/* implicit */_Bool) (+(max((var_1), (((/* implicit */long long int) (unsigned short)21))))))) ? (((((/* implicit */_Bool) (unsigned short)18)) ? (((/* implicit */int) (unsigned short)65511)) : (((/* implicit */int) (short)32747)))) : (((/* implicit */int) ((((unsigned long long int) var_11)) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_4] [i_4]))))))));
                    }
                } 
            } 
        } 
        arr_21 [i_1] = ((/* implicit */long long int) var_16);
        var_24 = ((/* implicit */short) var_10);
    }
    var_25 *= ((/* implicit */signed char) var_3);
    var_26 = ((/* implicit */unsigned char) (short)5);
}
