/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109251
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
    var_13 = ((/* implicit */long long int) min((((((/* implicit */_Bool) var_4)) ? (min((var_1), (var_12))) : (((unsigned int) (short)32748)))), (var_1)));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (unsigned int i_1 = 4; i_1 < 19; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    arr_9 [i_2] [i_1 - 1] [i_0] [i_0 + 1] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 0))))), (((((((/* implicit */_Bool) 2019782802U)) ? (var_8) : (2019782802U))) << (((/* implicit */int) ((((/* implicit */_Bool) 2019782802U)) || (((/* implicit */_Bool) arr_1 [i_2])))))))));
                    arr_10 [i_2] = ((/* implicit */int) max((max((((/* implicit */unsigned int) max((((/* implicit */int) arr_0 [i_0])), (var_4)))), (arr_8 [i_0 + 3] [i_0 + 3] [i_0 + 1]))), (((max((((/* implicit */unsigned int) arr_6 [i_0] [i_0] [i_1 - 3] [i_2])), (var_0))) ^ (((/* implicit */unsigned int) (~(var_2))))))));
                    arr_11 [i_2] [i_1] [i_0] [i_0 + 2] = ((var_5) ^ (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((1011720333747274626LL) & (((/* implicit */long long int) 1125362601U))))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_18 [i_3] [i_3] [i_0 + 2] [i_0] [i_0 + 2] [i_0] [i_0 + 3] = ((/* implicit */_Bool) max((((unsigned long long int) ((arr_5 [i_0] [i_0]) ^ (((/* implicit */unsigned int) var_6))))), (((/* implicit */unsigned long long int) ((_Bool) arr_6 [i_0] [i_0] [i_0] [i_0])))));
                                arr_19 [i_0] [i_0 + 2] [i_0] [i_1 - 4] [i_2] [i_3] [i_4] = max((max((((unsigned int) var_1)), (((/* implicit */unsigned int) var_2)))), (((((/* implicit */_Bool) ((unsigned int) arr_14 [i_3] [i_1 + 1] [i_1 + 1] [i_3] [i_4]))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_17 [i_0 + 3] [i_4] [i_2] [i_3] [i_4] [i_2]), (var_10))))) : (((arr_16 [i_0] [i_1 - 4] [i_0] [i_3] [i_4]) | (var_0))))));
                                arr_20 [i_4] [i_3] [i_2] [i_0] [i_1] [i_0 - 1] [i_0] = ((/* implicit */int) var_3);
                            }
                        } 
                    } 
                    arr_21 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned int) max((((((1904688269) == (var_6))) ? (((unsigned long long int) var_3)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))), (((/* implicit */unsigned long long int) arr_4 [i_1]))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_5 = 1; i_5 < 10; i_5 += 2) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (unsigned int i_7 = 1; i_7 < 10; i_7 += 1) 
            {
                {
                    arr_32 [i_5] [i_5] [i_7 + 3] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_6]))) ^ (8388608U))), (((/* implicit */unsigned int) ((_Bool) arr_22 [i_5])))))) ? (((((/* implicit */int) min((var_11), (((/* implicit */unsigned short) arr_24 [i_5 + 1] [i_6] [i_7 + 1]))))) & ((-(((/* implicit */int) var_7)))))) : (var_6)));
                    arr_33 [i_7] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) / (1101228216U)));
                    arr_34 [i_5] [i_5] [i_5 + 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned int) (!((_Bool)1))))))) ? ((-(((((/* implicit */_Bool) -56019278)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (arr_12 [i_5] [i_6] [i_6]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_7])))));
                }
            } 
        } 
    } 
}
