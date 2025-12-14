/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126957
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
    var_11 = var_7;
    var_12 = ((/* implicit */short) min((max((((long long int) var_2)), (((/* implicit */long long int) 1292603411U)))), (((/* implicit */long long int) var_9))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) arr_1 [i_0]))) ? ((-(4294967295U))) : (((/* implicit */unsigned int) (~((~(var_7))))))));
                /* LoopSeq 3 */
                for (short i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    arr_10 [i_0] [i_1] [5LL] [i_2] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((0U), (((/* implicit */unsigned int) (signed char)-89))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) arr_0 [i_0] [i_0])) : (4294967295U))) : (((/* implicit */unsigned int) -1292195494))))));
                    var_13 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_2])) || (((/* implicit */_Bool) arr_3 [i_0])))))));
                }
                /* vectorizable */
                for (long long int i_3 = 0; i_3 < 21; i_3 += 4) 
                {
                    var_14 = ((/* implicit */unsigned long long int) ((unsigned char) (~(((/* implicit */int) arr_5 [i_0] [i_0] [i_3])))));
                    arr_13 [i_1] = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0] [17LL]))) != (arr_8 [i_1]))))));
                    var_15 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (arr_0 [i_3] [i_3]) : (((/* implicit */int) (signed char)-1))))) ? (4294967294U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_1])) || (((/* implicit */_Bool) 0U))))))));
                    var_16 = ((/* implicit */short) 7047301903359651966ULL);
                }
                for (signed char i_4 = 1; i_4 < 17; i_4 += 4) 
                {
                    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (min((((((/* implicit */_Bool) arr_8 [i_1])) ? (((/* implicit */long long int) 4294967295U)) : (33776997205278720LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) : (0U)))))) : (((((arr_15 [(short)12] [i_1] [i_4] [(short)12]) / (((/* implicit */long long int) ((/* implicit */int) (short)-9202))))) / (((long long int) arr_8 [i_1]))))));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 21; i_5 += 1) 
                    {
                        for (long long int i_6 = 0; i_6 < 21; i_6 += 3) 
                        {
                            {
                                arr_22 [i_0] [i_1] [i_4] [i_5] [i_1] [i_1] = ((/* implicit */unsigned int) arr_21 [i_6] [i_1] [i_1] [17LL] [17LL]);
                                arr_23 [i_0] [i_0] [14] [i_5] [i_6] [i_0] |= ((((/* implicit */int) ((min((arr_6 [i_0] [i_0]), (((/* implicit */long long int) arr_9 [4] [i_4] [4] [4])))) <= (((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_6])) ? (arr_17 [(_Bool)1] [i_1] [i_1] [9LL]) : (arr_17 [i_1] [i_4] [i_4] [i_6]))))))) % (((/* implicit */int) min((((/* implicit */short) (_Bool)0)), ((short)-11653)))));
                            }
                        } 
                    } 
                    arr_24 [i_0] [i_1] [i_4 + 3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_0] [(_Bool)1] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [i_0])))))));
                    var_18 = ((/* implicit */signed char) 508163655U);
                }
                arr_25 [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) (((_Bool)1) ? (4294967295U) : (arr_8 [i_1]))))))), (var_6)));
            }
        } 
    } 
}
