/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176063
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((var_13 ^ var_3) ? var_0 : var_13));
    var_18 = (min(((~(var_8 | 14126131978200772436))), ((var_5 ? (var_5 ^ 1) : var_8))));
    var_19 = (max(var_19, var_10));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    var_20 = var_0;
                    var_21 = ((!((((arr_6 [i_0 + 2] [i_0 + 1] [i_1] [10]) ? (arr_6 [i_0] [i_0 - 1] [i_1] [i_2]) : (arr_6 [i_0] [i_0 + 1] [i_1] [9]))))));
                }
                var_22 = min(var_11, var_12);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 20;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            {
                var_23 = (min(var_23, ((((((2855322687 ? ((-1 ? 1 : -4176)) : -1))) ? 65535 : 0)))));
                var_24 = var_7;
                var_25 |= (arr_9 [i_4] [i_3]);
                var_26 = var_15;

                for (int i_5 = 1; i_5 < 23;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            {
                                var_27 = (min(var_27, ((max(((((var_15 ? 0 : (arr_8 [i_6] [i_5]))))), (((((var_0 ? var_11 : 1))) ? (var_1 <= 2271743841) : (max(var_1, (arr_13 [i_3 + 3] [i_3 + 3] [i_3 + 3]))))))))));
                                var_28 = 0;
                                var_29 &= (((arr_18 [0] [i_3 - 2] [i_5 - 1]) && (0 != 1)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 3; i_8 < 23;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 23;i_9 += 1)
                        {
                            {
                                var_30 = (max(var_30, (arr_13 [i_5 - 1] [i_4] [i_3 - 2])));
                                var_31 += ((1 > ((var_16 ? 373910530655090676 : 8921211322314690430))));
                                var_32 = ((((max((arr_11 [i_3 - 2] [i_8 - 2]), (arr_23 [i_3 - 2] [i_8 - 2] [i_4] [i_8] [i_8 - 2])))) ? (arr_11 [i_3 - 2] [i_8 - 2]) : (57426 == 1)));
                                var_33 = 1;
                            }
                        }
                    }
                    var_34 = ((1 ? var_6 : -1942647578));
                }
            }
        }
    }
    #pragma endscop
}
