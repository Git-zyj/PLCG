/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11260
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_3 / (var_15 * var_4)));
    var_19 = var_9;
    var_20 = var_3;

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        arr_2 [23] = (((-1 && 41463) ? ((1 ? 4287 : 253)) : ((~(arr_0 [i_0 - 1])))));
        var_21 ^= (arr_0 [1]);
        arr_3 [20] = (-(min((((24057 ? -1916227369 : 41463))), var_5)));
    }
    for (int i_1 = 3; i_1 < 9;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                {
                    var_22 = (-var_16 / var_13);
                    arr_13 [i_3] [2] &= ((+((min((var_9 > 4255), 31)))));
                    arr_14 [4] [1] [3] [i_1] = ((-(((var_1 + 2147483647) >> (((((arr_1 [4]) ? -512 : var_7)) + 530))))));

                    for (int i_4 = 3; i_4 < 10;i_4 += 1) /* same iter space */
                    {
                        arr_18 [6] [10] [0] [1] [i_1] [1] = (max(24077, var_8));
                        var_23 = (min(var_23, ((((((arr_15 [i_3]) << (-7672515360351439887 + 7672515360351439898))) > ((min(192, 109))))))));
                    }
                    for (int i_5 = 3; i_5 < 10;i_5 += 1) /* same iter space */
                    {
                        var_24 |= -70;
                        arr_22 [9] [i_1] [i_1] [1] = 59;
                        arr_23 [i_1] [9] [i_1] = ((((512 << (((arr_1 [i_1 + 1]) - 2305927134)))) - (~var_16)));
                    }
                }
            }
        }
        var_25 = ((~((var_6 >> ((min(0, 142)))))));
        /* LoopNest 2 */
        for (int i_6 = 3; i_6 < 8;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 8;i_7 += 1)
            {
                {
                    var_26 = ((((((((0 ? var_0 : 69))) ? (((4287 ? 114 : 61249))) : var_5))) ? (!0) : ((((max(-4, var_8))) ? (max(var_11, 1)) : 743281547))));
                    var_27 = (min(var_27, (arr_16 [i_7] [i_6 - 3] [i_6 + 1] [i_6 + 2])));
                }
            }
        }
        var_28 ^= (min(((~((-18 / (arr_24 [0] [0] [2]))))), (192 <= var_16)));
    }

    for (int i_8 = 0; i_8 < 14;i_8 += 1)
    {
        arr_31 [3] = 51878;
        arr_32 [9] [1] = ((~(((((var_12 >> (((((-2147483647 - 1) - -2147483630)) + 43))))) ? (min(458752, 18749)) : (max(var_12, var_9))))));
        arr_33 [12] = ((var_10 >> ((((var_12 ? ((max(var_7, var_0))) : ((var_14 % (arr_29 [5]))))) - 65))));
    }
    #pragma endscop
}
