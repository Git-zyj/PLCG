/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152381
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
    var_11 -= ((/* implicit */unsigned long long int) var_7);
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_12 = var_6;
                arr_6 [i_1] = ((/* implicit */unsigned int) var_10);
                var_13 += var_0;
                var_14 = ((/* implicit */_Bool) var_6);
                arr_7 [i_1] [i_1] = ((/* implicit */int) var_5);
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_2 = 4; i_2 < 23; i_2 += 3) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) var_2))));
                    /* LoopSeq 2 */
                    for (signed char i_5 = 0; i_5 < 24; i_5 += 4) 
                    {
                        arr_20 [i_2 - 2] [i_2 - 3] [i_2 - 4] [i_2 - 4] = ((/* implicit */unsigned long long int) var_3);
                        arr_21 [i_2] [1] [i_2] [i_2 - 3] [i_2 - 3] [i_2] = ((/* implicit */_Bool) var_2);
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned char i_6 = 3; i_6 < 21; i_6 += 4) 
                        {
                            var_16 = ((/* implicit */signed char) var_0);
                            var_17 = ((/* implicit */unsigned int) var_10);
                            var_18 = ((/* implicit */_Bool) var_1);
                            var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) var_0))));
                        }
                        for (short i_7 = 0; i_7 < 24; i_7 += 1) /* same iter space */
                        {
                            arr_28 [i_2] [i_2] [(_Bool)1] [i_2] [(_Bool)1] [(signed char)21] = ((/* implicit */signed char) var_4);
                            arr_29 [i_7] [i_5] [i_4] [i_2] = var_5;
                            var_20 = var_7;
                            var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) var_5))));
                        }
                        for (short i_8 = 0; i_8 < 24; i_8 += 1) /* same iter space */
                        {
                            arr_33 [i_2] [i_2] [i_2] [i_2 + 1] = ((/* implicit */unsigned char) var_0);
                            var_22 = var_3;
                        }
                        arr_34 [i_2 - 3] [i_2] = ((/* implicit */_Bool) var_1);
                    }
                    for (unsigned char i_9 = 2; i_9 < 22; i_9 += 4) 
                    {
                        arr_37 [i_9 - 2] [i_4] [i_2] [i_3] [i_2] [i_2] = var_6;
                        arr_38 [i_2] [i_2] [i_2] [(signed char)23] [i_2 - 2] [i_2] = ((/* implicit */long long int) var_4);
                    }
                    arr_39 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */short) var_1);
                }
            } 
        } 
    } 
}
