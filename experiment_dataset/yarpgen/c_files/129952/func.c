/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129952
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_13 *= ((/* implicit */unsigned long long int) (((~(var_4))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1)))));
        var_14 |= ((/* implicit */unsigned short) ((short) (unsigned char)0));
        var_15 += ((/* implicit */long long int) var_11);
        var_16 = ((/* implicit */unsigned int) ((var_5) < (((/* implicit */long long int) ((/* implicit */int) (unsigned char)234)))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 3) 
    {
        var_17 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) -4470909013328689587LL)) ? (((/* implicit */int) (unsigned char)6)) : (((/* implicit */int) (_Bool)0)))) >> (((arr_3 [i_1]) - (4881827635248032158ULL)))));
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 23; i_2 += 2) 
        {
            for (unsigned int i_3 = 1; i_3 < 22; i_3 += 2) 
            {
                {
                    var_18 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(max((arr_8 [i_3] [i_2]), (((/* implicit */unsigned long long int) arr_2 [i_2] [14ULL]))))))) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) (~(arr_2 [i_1] [i_1])))) : (max((6468136091028759246ULL), (((/* implicit */unsigned long long int) var_6)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_3 [i_3 - 1]) <= (arr_3 [i_3 - 1])))))));
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 2; i_4 < 21; i_4 += 3) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 23; i_5 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) var_7);
                                var_20 ^= ((/* implicit */_Bool) max((1152921504606814208ULL), (min((6468136091028759246ULL), (((/* implicit */unsigned long long int) (unsigned char)49))))));
                                arr_15 [i_5] [i_5] [i_4 + 1] [i_3] [i_2] [i_1] [i_1] = ((/* implicit */long long int) var_12);
                                arr_16 [i_3 - 1] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)0))))) : (6468136091028759246ULL)));
                            }
                        } 
                    } 
                    var_21 += ((/* implicit */long long int) (+((~(((/* implicit */int) arr_13 [(signed char)2] [20LL] [i_2] [(short)15] [i_2] [i_3] [i_3]))))));
                }
            } 
        } 
        var_22 = ((/* implicit */signed char) var_1);
    }
    var_23 = ((/* implicit */signed char) var_3);
    var_24 += ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((unsigned long long int) var_12)) : ((+(var_3)))));
}
