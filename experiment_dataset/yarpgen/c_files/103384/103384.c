/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103384
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((-(min((((var_6 + 2147483647) >> (var_0 - 20104))), (!var_8)))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (-(((0 < ((((arr_0 [i_0]) <= 161)))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_11 = ((~((39509 ^ (arr_5 [i_0])))));
                    var_12 = (arr_4 [i_0] [5] [5]);
                    arr_9 [i_0] [i_0] [i_0] [0] |= ((((max(1, 1789609182))) ? (min((arr_5 [i_1]), (arr_0 [i_0]))) : 39509));
                    var_13 = (min(var_13, ((max((((arr_4 [i_0] [i_0] [i_2]) / (arr_7 [i_0] [0] [i_1] [i_2]))), (4294967295 <= 1))))));
                    var_14 = 2505358114;
                }
            }
        }
        arr_10 [i_0] = ((!((((-(arr_5 [i_0]))) >= (arr_8 [i_0])))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
    {
        arr_14 [9] = (arr_0 [i_3]);
        arr_15 [6] [i_3] &= (((arr_13 [16]) + ((0 * (arr_4 [i_3] [i_3] [i_3])))));
    }
    for (int i_4 = 3; i_4 < 21;i_4 += 1)
    {
        arr_20 [18] &= var_1;
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 22;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 20;i_6 += 1)
            {
                {
                    arr_26 [i_4] [1] [1] = (1089216109 / var_3);
                    var_15 = (((+-1) ? (arr_24 [i_4] [i_5] [i_5]) : (arr_19 [i_4] [i_4])));
                }
            }
        }
        arr_27 [i_4] = ((var_5 ? ((((((min(0, var_3))) >= (min(1, -1089216109)))))) : (arr_19 [i_4] [i_4])));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 23;i_8 += 1)
            {
                {
                    var_16 = (min(var_16, ((((((!((((arr_21 [i_7] [14]) ^ (arr_24 [20] [i_7] [i_4 - 3])))))))) <= (min(var_0, ((var_8 ? 3183463110 : (arr_28 [6] [i_8])))))))));
                    arr_32 [i_4] [i_4] = (arr_28 [i_4] [i_8]);
                    arr_33 [i_4] [1] [i_4] = (max((-39509 + 65440), ((((~var_5) && ((min((arr_22 [i_4] [i_4]), 1))))))));
                    arr_34 [i_4] [i_8] = var_3;
                }
            }
        }
    }
    #pragma endscop
}
