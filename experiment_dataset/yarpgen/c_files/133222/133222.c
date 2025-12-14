/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133222
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_1;

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_17 -= (arr_1 [i_0] [16]);
        arr_2 [i_0] = (max((var_11 & var_9), (((arr_1 [i_0 - 1] [i_0 + 2]) ? 18446744073709551615 : (arr_0 [i_0 + 1])))));
        var_18 *= (min((!var_3), 67));

        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            var_19 *= (255 % -1043665572);
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        var_20 = min(var_12, (var_3 % 3942906878112479797));

                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            var_21 = (max(((-1043665560 ? ((var_5 ? -4530553622913886309 : 49)) : -15417)), 30));
                            arr_15 [i_1] [0] [0] [0] [i_1] = (((((var_0 ? 30 : (arr_12 [i_1])))) ? 175 : (~32755)));
                            arr_16 [i_1] [i_1 + 1] [i_1] [i_1 - 1] [i_1] [i_2] [i_0] = (arr_8 [i_0]);
                        }
                        for (int i_5 = 1; i_5 < 17;i_5 += 1)
                        {
                            var_22 = (min(1, -1043665560));
                            arr_20 [i_0] [i_0] [i_2] [i_3] [i_1] = var_12;
                            arr_21 [i_0] [3] [i_1] [i_3] [i_5 - 1] = (max(1, (~var_3)));
                            var_23 = ((var_11 + ((((arr_8 [1]) != (max(8668213922735028376, (arr_5 [i_5]))))))));
                            arr_22 [i_1] = var_4;
                        }
                        var_24 -= ((((~((var_14 ? 37405 : var_15)))) * 0));
                    }
                }
            }
            var_25 |= var_6;
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            {

                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    var_26 = ((+((((((arr_18 [i_6] [i_6] [i_6] [i_6] [i_6]) % 1793047647))) ? (((max(65523, 9)))) : ((var_1 ? 2501919652 : 7))))));
                    arr_31 [i_6] [i_8] = (arr_25 [i_6] [i_6]);
                }
                arr_32 [i_6] [i_6] [i_7] = (max((min(1354947816292806826, 4384269101797270009)), (((var_11 ? var_11 : (arr_19 [i_6] [i_7] [16] [i_7] [16] [9]))))));
                arr_33 [12] [12] |= (min(var_14, (((18446744073709551615 * -25123) * (arr_24 [8])))));
                arr_34 [i_6] [i_6] [i_6] = (0 ? (2501919652 - 50274027) : (arr_10 [i_6] [1] [i_7] [5]));
            }
        }
    }
    #pragma endscop
}
