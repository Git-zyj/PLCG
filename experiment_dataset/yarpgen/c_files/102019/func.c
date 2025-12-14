/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102019
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
    var_10 ^= ((/* implicit */long long int) var_4);
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) arr_2 [(_Bool)1]);
                var_11 += ((/* implicit */_Bool) min((min(((~(((/* implicit */int) var_8)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))), (((/* implicit */int) var_4))));
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_11 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((min((min((18446744073709551610ULL), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (arr_2 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))))) | (var_7)));
                    arr_12 [i_0] [i_0] = (_Bool)1;
                    var_12 = ((/* implicit */_Bool) (~(min((634351464905767928LL), (((/* implicit */long long int) var_4))))));
                }
                for (unsigned short i_3 = 0; i_3 < 17; i_3 += 4) 
                {
                    arr_15 [i_0] [i_0] [i_0] = ((/* implicit */signed char) min((min((((/* implicit */long long int) min((arr_10 [(short)13] [i_1] [i_3]), (var_1)))), ((+(arr_13 [i_0 - 2] [i_0] [i_1] [i_3]))))), (((/* implicit */long long int) (~(((/* implicit */int) min((var_9), (((/* implicit */signed char) arr_10 [i_3] [i_1] [i_0]))))))))));
                    arr_16 [i_0] [i_0] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~((~(((/* implicit */int) var_9))))))) ? (((/* implicit */long long int) (~(((/* implicit */int) min((((/* implicit */short) arr_10 [i_0] [i_1] [i_0])), (var_6))))))) : (arr_5 [i_0])));
                    /* LoopNest 2 */
                    for (long long int i_4 = 1; i_4 < 16; i_4 += 4) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                arr_24 [i_0] [i_0] [i_3] [i_4] [3LL] = ((/* implicit */signed char) var_6);
                                arr_25 [i_5] [i_0] [i_5] [i_5] [i_5] = ((/* implicit */short) arr_0 [i_0]);
                                arr_26 [i_0] [i_1] [(short)12] [i_4] [i_5] [i_5] = ((/* implicit */unsigned long long int) var_1);
                                arr_27 [i_0] = ((/* implicit */short) min((((/* implicit */int) var_2)), (((((/* implicit */_Bool) min((arr_3 [i_0] [i_1]), (((/* implicit */unsigned long long int) var_2))))) ? ((~(((/* implicit */int) var_6)))) : (((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) (signed char)-84))))))));
                            }
                        } 
                    } 
                    arr_28 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((((/* implicit */int) arr_4 [i_0])) - (((/* implicit */int) var_6))))))) ? (((((/* implicit */long long int) (+(((/* implicit */int) var_6))))) + (min((((/* implicit */long long int) arr_9 [i_3])), (634351464905767952LL))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (min((((/* implicit */long long int) (_Bool)1)), (-634351464905767946LL))) : (((/* implicit */long long int) (-(((/* implicit */int) var_2)))))))));
                    var_13 += ((/* implicit */unsigned short) (+(((/* implicit */int) min((((((/* implicit */_Bool) arr_23 [i_1] [i_1])) && (arr_20 [i_0 - 2]))), (arr_9 [(_Bool)1]))))));
                }
                arr_29 [i_0] [i_0] = min(((-(arr_14 [i_0]))), (min((((/* implicit */unsigned long long int) var_4)), (arr_14 [i_0]))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) min(((-(((/* implicit */int) var_1)))), (((/* implicit */int) var_2))));
    var_15 |= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8))))))), (((min((((/* implicit */unsigned long long int) (signed char)127)), (var_7))) / (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_5), (((/* implicit */unsigned short) var_9))))))))));
}
