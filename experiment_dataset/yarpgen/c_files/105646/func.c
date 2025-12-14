/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105646
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
    var_20 = min((var_9), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_15)) : (var_13)))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */int) arr_1 [i_0])) | (((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) var_15))));
        var_21 &= ((/* implicit */int) arr_0 [i_0]);
    }
    /* LoopNest 3 */
    for (short i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        for (signed char i_2 = 2; i_2 < 19; i_2 += 4) 
        {
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_4 = 0; i_4 < 20; i_4 += 1) 
                    {
                        for (signed char i_5 = 1; i_5 < 19; i_5 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */short) ((int) min((max((var_7), (var_15))), (((/* implicit */short) ((var_6) != (((/* implicit */unsigned long long int) var_8))))))));
                                arr_16 [i_4] [i_4] = ((/* implicit */short) arr_13 [i_2 + 1] [(unsigned short)10] [i_4]);
                                var_23 |= ((/* implicit */_Bool) max((((/* implicit */long long int) var_11)), (max((var_17), (min((((/* implicit */long long int) var_5)), (var_17)))))));
                            }
                        } 
                    } 
                    arr_17 [i_3 - 1] [i_2] [(short)7] = var_3;
                    arr_18 [i_3] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) arr_13 [i_1] [(short)0] [i_3])), (min((((/* implicit */unsigned long long int) arr_14 [(signed char)19] [i_2] [3ULL] [i_2 - 1] [8ULL])), (arr_8 [5LL] [i_2] [i_2] [i_2 + 1])))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_9))));
}
