/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123644
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
    for (unsigned short i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 19; i_2 += 2) 
                {
                    for (int i_3 = 2; i_3 < 22; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (short i_4 = 0; i_4 < 23; i_4 += 1) 
                            {
                                var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) max((var_6), (((/* implicit */unsigned long long int) var_7)))))));
                                var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) min((max((var_11), (((/* implicit */unsigned long long int) var_9)))), (min((((/* implicit */unsigned long long int) max((var_8), (((/* implicit */long long int) var_7))))), (min((((/* implicit */unsigned long long int) var_8)), (var_2))))))))));
                                var_14 = ((/* implicit */int) min((min((max((((/* implicit */long long int) var_1)), (var_8))), (((/* implicit */long long int) max((var_7), (((/* implicit */short) var_1))))))), (((/* implicit */long long int) var_3))));
                            }
                            var_15 = ((/* implicit */short) min((((/* implicit */unsigned long long int) max((((/* implicit */short) var_1)), (var_0)))), (min((((/* implicit */unsigned long long int) max((var_9), (var_9)))), (min((var_5), (var_11)))))));
                            /* LoopSeq 4 */
                            /* vectorizable */
                            for (unsigned short i_5 = 0; i_5 < 23; i_5 += 2) 
                            {
                                arr_16 [i_0 - 2] [i_1] [i_2] [(short)12] [i_1] = ((/* implicit */unsigned char) var_5);
                                var_16 = ((/* implicit */unsigned char) var_11);
                                arr_17 [i_1] [i_3] = ((/* implicit */unsigned short) var_7);
                                arr_18 [i_0] [i_0] [i_0] [i_1] [(short)4] = ((/* implicit */unsigned short) var_10);
                            }
                            for (unsigned long long int i_6 = 2; i_6 < 22; i_6 += 3) 
                            {
                                arr_22 [i_0] [i_0] [22ULL] [6LL] [i_1] [i_3] [13ULL] = ((/* implicit */int) var_4);
                                var_17 = max((min((max((var_11), (((/* implicit */unsigned long long int) var_3)))), (((/* implicit */unsigned long long int) min((((/* implicit */short) var_10)), (var_0)))))), (((/* implicit */unsigned long long int) var_9)));
                            }
                            for (unsigned short i_7 = 0; i_7 < 23; i_7 += 3) 
                            {
                                var_18 -= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) var_9)), (max((((/* implicit */unsigned long long int) min((var_4), (var_4)))), (max((((/* implicit */unsigned long long int) var_9)), (var_2)))))));
                                arr_26 [i_7] [i_1] [i_2 - 2] [i_1] [i_0] = ((/* implicit */int) var_1);
                            }
                            for (unsigned long long int i_8 = 3; i_8 < 19; i_8 += 1) 
                            {
                                var_19 = ((/* implicit */unsigned short) min((var_6), (((/* implicit */unsigned long long int) var_0))));
                                arr_30 [i_8] [i_1] [i_3] [i_2 + 1] [i_1] [i_0] = ((/* implicit */int) max((min((max((((/* implicit */long long int) var_10)), (var_8))), (((/* implicit */long long int) var_9)))), (((/* implicit */long long int) var_1))));
                                var_20 = ((/* implicit */unsigned char) min((var_5), (min((max((((/* implicit */unsigned long long int) var_9)), (var_5))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_9)), (var_8))))))));
                            }
                            var_21 *= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) var_10)), (min((var_2), (((/* implicit */unsigned long long int) var_0))))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_1)), (var_8)));
                arr_31 [i_1] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_7)), (max((var_5), (min((((/* implicit */unsigned long long int) var_7)), (var_11)))))));
            }
        } 
    } 
    var_23 = ((/* implicit */short) max((max((var_5), (((/* implicit */unsigned long long int) max((var_3), (((/* implicit */int) var_0))))))), (((/* implicit */unsigned long long int) max((max((var_7), (((/* implicit */short) var_10)))), (max((var_0), (((/* implicit */short) var_10)))))))));
}
