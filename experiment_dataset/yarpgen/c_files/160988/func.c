/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160988
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
    var_20 = ((/* implicit */_Bool) ((var_15) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_19)))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 4; i_1 < 11; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                arr_15 [i_0] [i_2] [i_0] = ((/* implicit */int) arr_2 [i_0] [i_1]);
                                arr_16 [i_4] [i_4] [(signed char)8] [i_0] [i_4] = arr_11 [i_0] [i_1] [i_2] [i_0];
                                arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)0) ? (arr_4 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [0LL] [i_3] [0LL] [i_1] [(unsigned char)5] [i_0] [i_0])))))) ? (((long long int) max(((_Bool)1), ((_Bool)1)))) : (((/* implicit */long long int) ((/* implicit */int) min(((_Bool)1), ((!(((/* implicit */_Bool) var_2))))))))));
                            }
                        } 
                    } 
                    arr_18 [i_0] [4] = var_14;
                    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) max((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_8 [i_1])) : (var_8)))), ((-(arr_4 [i_2] [i_2]))))), (((/* implicit */unsigned long long int) ((long long int) arr_9 [i_1 + 1] [(signed char)6] [i_1 - 3] [i_1] [i_1]))))))));
                    arr_19 [(signed char)10] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_17);
                    arr_20 [i_0] [(unsigned char)10] [9LL] [i_2] = ((/* implicit */signed char) arr_5 [i_1] [i_0]);
                }
            } 
        } 
    } 
}
