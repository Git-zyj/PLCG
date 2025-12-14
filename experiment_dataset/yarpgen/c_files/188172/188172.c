/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188172
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_17 = ((arr_1 [i_0]) || (((-(arr_1 [i_0])))));
        arr_2 [1] = 32753;
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = (min((min((max(3637972229461465728, (arr_5 [i_1]))), var_16)), 3689287777));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 13;i_3 += 1)
            {
                {
                    var_18 = ((16449848627262822881 | var_15) << -0);
                    arr_15 [i_3] [i_1] [i_1] [i_1] |= (((!var_4) > ((~(arr_13 [i_3 - 3] [i_1] [i_3 - 3])))));
                    arr_16 [i_1] [13] [i_3] = (((-(~var_15))));
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        arr_21 [i_4] = ((19177 & (((3782256952 ? var_2 : 8582580280935154003)))));
        arr_22 [i_4] = (-((-(arr_17 [i_4]))));
    }
    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        var_19 = ((((((~-7848371581115840912) <= ((11174335566783389874 ? (arr_12 [i_5]) : var_8))))) | (!1)));
        arr_25 [i_5] [i_5] = (~((((min(0, (arr_12 [i_5])))) | (arr_6 [13] [i_5]))));
        arr_26 [i_5] [i_5] = (max((((((7 ? var_16 : 86))) ? (!1) : (~9333315420675609346))), 32208));
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 12;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                {
                    var_20 = (max(var_20, (((-(~-27731))))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 13;i_9 += 1)
                        {
                            {
                                var_21 = (min(var_21, (((~(arr_38 [8] [i_6 - 1] [i_7] [1] [i_9]))))));
                                arr_39 [i_5] [i_6] [i_6] [2] [i_8] [1] [i_9] = 48;
                                var_22 |= arr_33 [0];
                            }
                        }
                    }
                    var_23 = (arr_6 [i_6 - 1] [i_6 + 1]);
                    arr_40 [i_5] = (((((925202033313506869 ? ((((arr_31 [i_5] [i_5]) << (-384727618904750063 + 384727618904750072)))) : (0 ^ 211)))) && ((((3419346058 << 1) ^ (arr_8 [i_5] [i_7]))))));
                }
            }
        }
    }
    var_24 = 186;
    var_25 = ((((((var_10 * var_4) + (~var_11)))) ? (((max(15438033515913366121, var_9)) & ((min(1, var_1))))) : ((((~9007061815787520) - var_1)))));
    var_26 = (min(var_26, (((-4006774144672902612 || ((1 && (-4 || var_12))))))));
    #pragma endscop
}
