/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161916
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                var_11 = (((max((max((arr_2 [i_0] [i_1 + 2]), 2719950695750357915)), (((15726793377959193701 ? 2613935902 : (arr_3 [i_0 + 4] [13] [18])))))) | -var_1));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_12 = (min(15726793377959193701, 15726793377959193728));
                            var_13 = (((max(65535, 2719950695750357883)) ^ ((((arr_7 [i_0 + 2]) ? (arr_7 [i_0 - 1]) : 1039383959)))));
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    var_14 = (arr_3 [19] [i_1] [i_4]);

                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            var_15 -= 36;
                            var_16 = ((var_3 ? -633248362 : 1));
                        }
                        /* vectorizable */
                        for (int i_7 = 1; i_7 < 23;i_7 += 1)
                        {
                            var_17 ^= ((var_4 > 2719950695750357893) > (~43527));
                            var_18 ^= ((arr_16 [i_0] [i_0] [1] [i_0 + 1] [i_0 + 3]) ? (arr_19 [i_0 - 2] [6] [i_4] [i_5] [6] [i_4] [i_7]) : 9138721335121967382);
                        }
                        arr_23 [i_4] [i_1] [i_4] = (arr_10 [i_0] [i_1] [i_4] [i_4] [i_4]);
                    }
                    var_19 += (max(var_5, 1517420229));
                }
            }
        }
    }
    var_20 = ((var_4 ? (min((~1), (var_1 % var_3))) : (min(((9308022738587584227 ? 61 : var_8)), var_4))));
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 12;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 12;i_9 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_10 = 1; i_10 < 11;i_10 += 1)
                {
                    for (int i_11 = 2; i_11 < 10;i_11 += 1)
                    {
                        for (int i_12 = 4; i_12 < 9;i_12 += 1)
                        {
                            {
                                var_21 ^= (min(((((max(var_4, 1))) ? (arr_31 [i_10 - 1] [i_10 + 1] [i_11 - 1]) : (arr_20 [19] [i_9]))), ((4643698627551755628 ? ((1 ? (arr_11 [i_12] [i_12] [i_12] [i_12 - 3] [i_12] [i_12 - 2]) : (arr_31 [i_8] [i_11] [i_8]))) : -1436584769))));
                                arr_39 [i_12] [i_8] [i_8] [i_11] [i_8] [i_9] [i_8] = (max(((min((arr_19 [i_12 - 2] [i_12] [i_12] [i_12] [i_11] [i_12 - 3] [i_11]), var_4))), var_2));
                                var_22 = (min(var_22, var_1));
                                var_23 = (min(var_23, (arr_2 [i_12 - 1] [i_11])));
                            }
                        }
                    }
                }
                var_24 += var_0;
            }
        }
    }
    #pragma endscop
}
