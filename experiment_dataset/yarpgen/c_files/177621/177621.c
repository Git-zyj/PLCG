/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177621
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = (arr_0 [i_0]);
                var_16 = (min(var_16, ((min((((3544514571334086436 >= (arr_5 [i_0] [4])))), ((0 ? (arr_2 [i_0]) : ((((arr_3 [i_0] [i_0] [i_1]) <= (arr_0 [i_1])))))))))));
                var_17 *= (max((max(4294967295, (((arr_1 [i_1]) * 1957956211)))), 2355803338));
                arr_7 [i_0] &= 14902229502375465195;
            }
        }
    }
    var_18 = (max(var_18, var_1));
    var_19 = (((((9439 ? (64565 || 1) : var_14))) ? -1 : 2147483647));
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                {
                    var_20 = ((arr_11 [14] [i_3 - 1] [i_4]) ? 2770761839 : (((((arr_11 [11] [i_3] [i_3]) == -7384776949630727697)))));
                    var_21 = (((((28830 >> (arr_10 [i_2 + 1])))) ? ((((arr_10 [i_2 + 1]) < (arr_16 [i_4] [i_3] [i_3 + 1] [i_2 + 1])))) : ((((arr_12 [i_3 + 1] [i_3 + 1] [i_2 + 1]) && (arr_12 [i_4] [i_3 + 1] [i_2 + 1]))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 18;i_6 += 1)
                        {
                            {
                                var_22 = (min(var_22, (917504 / -9223372036854775793)));
                                var_23 = (max(var_23, ((min(13, (((arr_17 [i_2 + 1] [i_3 + 2]) / 255)))))));
                                arr_21 [i_2] [i_3 + 3] [i_2] [i_5] [i_6] = ((((min((arr_16 [i_6] [8] [i_4] [i_2]), (((15096 || (arr_13 [5] [i_2] [i_2]))))))) ? ((2316141696 ? ((min((arr_12 [i_2 + 1] [i_3 - 2] [i_4]), 32767))) : (arr_19 [i_6 - 1] [i_6 - 2] [i_6] [i_6 + 2] [i_6] [i_6 + 1]))) : (((~(arr_11 [i_3] [i_4] [0]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = (min((((691790650 + 5595) ? var_11 : 3)), var_3));
    #pragma endscop
}
