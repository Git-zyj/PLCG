/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169622
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
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        var_20 = ((/* implicit */unsigned int) var_10);
        arr_3 [1U] [i_0 - 1] = ((/* implicit */unsigned long long int) arr_1 [16] [16]);
        arr_4 [i_0] [i_0] = arr_2 [i_0 - 1] [i_0];
        arr_5 [i_0] = arr_1 [(signed char)12] [i_0];
        arr_6 [i_0] = arr_2 [i_0] [i_0];
    }
    var_21 = ((/* implicit */unsigned int) var_5);
    var_22 = ((/* implicit */long long int) max((min((var_0), (min((var_5), (((/* implicit */unsigned long long int) var_4)))))), (((/* implicit */unsigned long long int) min((min((var_6), (((/* implicit */unsigned int) var_19)))), (var_6))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_1 = 2; i_1 < 21; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_2 = 2; i_2 < 22; i_2 += 1) 
        {
            for (short i_3 = 4; i_3 < 22; i_3 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 23; i_4 += 3) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 23; i_5 += 4) 
                        {
                            {
                                var_23 *= ((/* implicit */unsigned int) var_15);
                                arr_21 [i_1] [i_1] [i_2] [i_3] [i_2] [i_2] = var_8;
                                arr_22 [i_3 - 2] [i_2] [i_2] [i_3 - 2] [i_3 - 2] [i_2] = ((/* implicit */unsigned char) var_17);
                                var_24 = ((/* implicit */unsigned long long int) arr_13 [i_2] [i_4]);
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */unsigned int) var_16);
                }
            } 
        } 
        arr_23 [i_1 + 2] [i_1] = ((/* implicit */signed char) max((min((max((arr_10 [i_1] [i_1]), (((/* implicit */unsigned long long int) arr_19 [(signed char)16] [i_1] [i_1] [i_1] [i_1] [i_1])))), (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_7 [i_1 + 1] [(signed char)19])), (arr_14 [i_1 + 1] [i_1 - 1] [i_1])))))), (((/* implicit */unsigned long long int) var_15))));
        var_26 ^= ((/* implicit */unsigned int) var_16);
    }
    /* vectorizable */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        arr_27 [i_6] = ((/* implicit */unsigned int) arr_12 [i_6] [i_6] [i_6]);
        var_27 = ((/* implicit */_Bool) arr_10 [i_6] [i_6]);
    }
}
