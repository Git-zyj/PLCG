/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106640
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
    var_19 = ((/* implicit */long long int) var_15);
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        for (unsigned short i_1 = 4; i_1 < 12; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 11; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 3; i_3 < 11; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                var_20 = arr_6 [i_1] [i_2] [i_2];
                                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) arr_3 [i_0]))));
                                arr_12 [i_0] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) arr_10 [i_2] [i_0] [i_0] [i_0] [i_2]);
                                arr_13 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) arr_8 [i_0] [i_2]);
                                var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) arr_11 [i_0] [i_0] [i_1]))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned char i_5 = 0; i_5 < 13; i_5 += 1) 
                    {
                        arr_17 [i_0] [i_2] = ((/* implicit */signed char) arr_6 [i_0] [i_2] [i_2]);
                        /* LoopSeq 2 */
                        for (signed char i_6 = 2; i_6 < 12; i_6 += 3) /* same iter space */
                        {
                            var_23 -= arr_2 [i_5];
                            var_24 -= ((/* implicit */short) arr_6 [i_0] [i_0] [i_0]);
                            arr_20 [i_2] = ((/* implicit */unsigned int) arr_7 [i_1]);
                            arr_21 [i_2] = ((/* implicit */unsigned long long int) arr_19 [i_2] [i_2]);
                            arr_22 [i_0] [i_0] [i_2] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) arr_16 [i_0]);
                        }
                        /* vectorizable */
                        for (signed char i_7 = 2; i_7 < 12; i_7 += 3) /* same iter space */
                        {
                            var_25 = ((/* implicit */_Bool) arr_7 [i_7]);
                            arr_27 [i_2] = ((/* implicit */unsigned int) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0]);
                            var_26 += arr_1 [i_0];
                        }
                        arr_28 [i_1] [i_2] [i_2] = ((/* implicit */unsigned int) arr_19 [i_0] [i_2]);
                        var_27 = ((/* implicit */long long int) arr_6 [i_0] [i_2] [i_2]);
                        /* LoopSeq 1 */
                        for (int i_8 = 0; i_8 < 13; i_8 += 1) 
                        {
                            var_28 &= ((/* implicit */long long int) arr_2 [i_2]);
                            var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]))));
                            arr_31 [i_0] [i_0] [i_2] [i_2] [i_2] = ((/* implicit */signed char) arr_4 [i_0] [i_0]);
                            arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] [i_2] = ((/* implicit */long long int) arr_30 [i_0] [i_0] [i_0] [i_0] [i_2] [i_2] [i_2]);
                            var_30 = ((/* implicit */short) arr_26 [i_0] [i_2] [i_0] [i_2] [i_0]);
                        }
                    }
                }
            } 
        } 
    } 
    var_31 = ((/* implicit */unsigned short) var_0);
}
