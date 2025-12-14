/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114867
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
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 24; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 22; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned short i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_11), (((/* implicit */unsigned short) var_3)))))) : (((unsigned int) ((arr_0 [i_0]) << (((arr_0 [i_1 + 2]) - (2070363167545661272ULL))))))));
                    var_19 = ((/* implicit */long long int) var_11);
                    arr_8 [i_2] [i_2] [i_2] = ((((/* implicit */_Bool) ((unsigned int) var_3))) ? (((((((/* implicit */int) (unsigned short)44680)) << (((((/* implicit */int) var_11)) - (26058))))) | (((/* implicit */int) arr_5 [i_1 + 1])))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_5 [i_1 - 2])) : (((/* implicit */int) var_7)))));
                }
                for (signed char i_3 = 1; i_3 < 24; i_3 += 1) 
                {
                    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((min((arr_9 [i_3] [i_1 + 1] [(_Bool)1]), (((/* implicit */long long int) var_2)))), (((/* implicit */long long int) min((arr_1 [i_0]), (((/* implicit */unsigned int) var_14)))))))) ? ((~(((/* implicit */int) var_8)))) : (((((/* implicit */int) min(((signed char)-100), (arr_7 [i_0] [i_0 + 1])))) + (((/* implicit */int) var_5))))));
                    var_21 = var_10;
                    arr_11 [i_3] [i_1 - 2] [i_0] = ((/* implicit */int) ((_Bool) min((((/* implicit */int) var_12)), ((-(((/* implicit */int) var_8)))))));
                }
                /* vectorizable */
                for (unsigned char i_4 = 0; i_4 < 25; i_4 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 25; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 25; i_6 += 1) 
                        {
                            {
                                arr_18 [i_0 - 1] [i_6] [i_6] [i_0 - 1] = ((/* implicit */int) arr_2 [i_0 - 1] [i_5]);
                                var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((unsigned long long int) arr_4 [i_1 + 1])))));
                                var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) ((var_0) << (((/* implicit */int) (_Bool)1)))))));
                                var_24 += ((/* implicit */unsigned long long int) (-(arr_4 [i_0 - 1])));
                                arr_19 [i_0] [i_1] [i_6] [i_4] [i_5] [i_6] = ((/* implicit */_Bool) arr_2 [i_0] [i_0]);
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned short)47515)))) : (((/* implicit */int) (unsigned short)65535)))))));
                }
                arr_20 [i_0] [i_0] = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) arr_14 [i_1] [i_1] [i_0 + 1] [i_0 + 1])))) == (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_17))) | (arr_9 [i_1] [i_1] [i_1])))) ? (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (arr_13 [i_0 - 1])))) : (((/* implicit */int) var_16))))));
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned char) var_12);
}
