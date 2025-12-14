/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161937
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_15 = (max(var_15, 4128346516));
                    arr_8 [i_1] [i_0] = max((arr_7 [17] [i_1] [i_2]), (~var_12));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_15 [0] [i_3] [i_2] [i_2] [i_1] [0] = (((((var_8 / var_4) - ((var_1 ? var_8 : var_14)))) / var_12));
                                arr_16 [i_0] [8] [i_2] [i_3] [i_3] [i_3] [i_4] = (arr_10 [i_0] [i_1] [i_2] [i_3]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                var_16 = ((((var_2 ? var_14 : var_9)) < ((((arr_2 [i_0] [i_5]) != (arr_20 [i_5]))))));
                                arr_22 [23] [23] [23] [i_5] [i_6] = (arr_12 [19] [i_2] [0] [i_0]);
                                arr_23 [i_5] [i_1] = var_13;
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = ((-((min(var_4, var_4)))));
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 18;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 18;i_8 += 1)
        {
            {
                var_18 = (max(var_18, (~-107)));
                arr_29 [i_7] [i_7] [i_7] = var_6;
                arr_30 [i_8] [i_8] [5] = (((((var_3 != var_13) != ((min(var_9, var_12))))) ? (~8191) : ((~((3244255794361817289 ? 7576548998486623315 : (arr_9 [i_7] [1] [i_8] [4])))))));
                var_19 = (((((-917840975 >> (var_14 + 113)))) ? (arr_0 [i_8] [i_7]) : var_2));

                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    var_20 = var_5;
                    var_21 = (max((((arr_1 [i_7]) ^ ((-(arr_10 [i_7] [i_7] [i_7] [i_7]))))), 166620780));
                    arr_33 [i_7] [i_7] [i_7] = var_11;
                    arr_34 [i_7] [i_7] [i_8] [1] = -1949191056;
                    /* LoopNest 2 */
                    for (int i_10 = 4; i_10 < 17;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 18;i_11 += 1)
                        {
                            {
                                arr_39 [i_7] [i_11] [i_7] [6] [i_11] = (arr_20 [i_7]);
                                var_22 = ((-(min(((max(var_9, (arr_17 [10] [i_9] [i_11])))), (min(-32, 8193))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
