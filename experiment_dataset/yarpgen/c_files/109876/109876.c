/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109876
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_11 = ((-(arr_0 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_12 = (min(7771237215653177557, 562949953421311));

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        var_13 = (arr_2 [i_0]);
                        arr_8 [i_0 - 1] [i_0 - 1] = ((!(((11496996748248609480 ? -var_6 : 2672171218733534211)))));
                        arr_9 [i_0] [i_0 - 1] [i_0] [i_0] = (arr_7 [i_0]);
                        var_14 = (max(((7771237215653177568 + (arr_7 [i_0]))), ((7771237215653177557 ? 288230367561777152 : (7771237215653177557 - 2150255166117540377)))));
                    }
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        var_15 = (arr_3 [8] [3] [i_2]);
                        var_16 = 18158513706147774474;
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 9;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_17 = 7771237215653177557;
                                arr_19 [i_0] [3] [3] [3] = (((((max(-1, -7771237215653177557)))) && var_0));
                                var_18 = (min(var_18, (min((((((288230367561777142 ? 288230367561777149 : -7891791249283246772)) >= (var_2 / 63)))), (((arr_13 [i_0 - 1]) ? var_2 : 18158513706147774482))))));
                                var_19 ^= arr_18 [i_1] [i_2] [i_1] [9];
                            }
                        }
                    }
                }
            }
        }
        arr_20 [i_0] [i_0] = ((((-127 - 1) % -7178141874813242576)) * (-2 >= 5));
        arr_21 [i_0] = (min(((~(max(288230367561777152, 18158513706147774488)))), var_3));
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {
                for (int i_9 = 2; i_9 < 10;i_9 += 1)
                {
                    {
                        var_20 = (min(var_20, -1));
                        var_21 = ((-(((!(!18158513706147774451))))));
                        var_22 = (min((((-(arr_18 [i_0] [i_7] [i_8] [i_7])))), (max(7771237215653177557, var_1))));
                    }
                }
            }
        }
    }
    var_23 = (var_4 & 288230367561777137);
    #pragma endscop
}
