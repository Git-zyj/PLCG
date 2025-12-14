/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140665
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
    var_11 = ((/* implicit */short) (-(max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) & (((/* implicit */int) (unsigned short)32053))))), ((-(var_6)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_0 - 1] [i_0 + 2])) ^ (((/* implicit */int) (unsigned short)32075))));
        var_13 = ((/* implicit */signed char) ((((/* implicit */int) arr_2 [i_0] [i_0 - 1])) * (((/* implicit */int) arr_0 [i_0 + 2] [i_0 + 2]))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_14 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_0 [21] [i_3])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)511)))) >= ((+(((/* implicit */int) var_0))))));
                        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)65534)) ? (2067463591U) : (2067463591U)));
                    }
                } 
            } 
        } 
        arr_13 [i_0 + 2] [i_0] = (((+(((/* implicit */int) (unsigned short)33489)))) ^ ((-(((/* implicit */int) (signed char)76)))));
        arr_14 [i_0] = ((/* implicit */short) (signed char)-1);
    }
    for (unsigned short i_4 = 4; i_4 < 21; i_4 += 1) 
    {
        var_16 += ((/* implicit */signed char) max(((~(arr_16 [i_4 - 2]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 2067463591U)))))));
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 1) 
            {
                {
                    var_17 = ((/* implicit */signed char) (((((-(var_8))) / (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))))) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)76)))));
                    var_18 = ((/* implicit */unsigned char) min(((-((-(14552355218436256258ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (8545499598264932623LL)))) || (((/* implicit */_Bool) var_3)))))));
                }
            } 
        } 
    }
}
