/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172627
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= ((var_2 % ((((max(214, var_0))) ? var_2 : (!var_5)))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {

            for (int i_2 = 1; i_2 < 22;i_2 += 1) /* same iter space */
            {
                var_11 = (~205);
                arr_8 [18] [i_2] [18] = (((arr_6 [i_2 - 1] [0]) ? (arr_6 [i_2 - 1] [i_2 + 1]) : (arr_0 [i_2 - 1])));
            }
            for (int i_3 = 1; i_3 < 22;i_3 += 1) /* same iter space */
            {
                var_12 *= ((var_6 ? var_0 : var_8));
                var_13 = ((~(((arr_7 [i_1] [i_1] [i_1] [i_1]) ? (arr_7 [i_3 - 1] [i_1] [i_1] [i_0]) : (arr_7 [20] [i_1] [i_1] [14])))));
                var_14 = (arr_7 [i_0] [i_0] [i_1] [i_0]);
            }
            for (int i_4 = 1; i_4 < 22;i_4 += 1) /* same iter space */
            {
                var_15 = min(((max(41, (arr_9 [i_4 + 1] [i_1])))), 205);
                var_16 = ((~(((arr_3 [i_4 + 2] [i_4 + 3]) ? var_0 : (arr_0 [i_4 + 3])))));

                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    var_17 = ((!((((max(42, (arr_12 [i_5] [i_0] [i_0]))))))));
                    var_18 = (min(var_18, ((min(0, 0)))));
                    var_19 = (min(((min(-36, 125))), ((~((var_2 ? var_7 : 26361))))));
                    var_20 += ((((min(1, 0))) ? (((+((0 ? (arr_10 [i_4] [4] [i_4 - 1]) : (arr_1 [i_5])))))) : ((0 * (arr_0 [i_4 - 1])))));
                }
                /* vectorizable */
                for (int i_6 = 1; i_6 < 23;i_6 += 1)
                {
                    var_21 = (max(var_21, (((214 * (1 == var_4))))));
                    var_22 = (min(var_22, (((-7479 ? ((0 ? -16 : (arr_16 [i_0] [5] [5] [6] [i_4 - 1] [i_6 + 1]))) : var_5)))));
                    var_23 = -26197;
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    arr_21 [i_4] [i_4] [i_7] = (((arr_14 [3] [i_1] [i_4]) | ((-(arr_18 [4] [i_4] [i_4])))));
                    arr_22 [i_4] [i_1] [17] = 21;
                    arr_23 [i_0] [i_0] [i_4] [23] [i_7] = ((0 || (arr_17 [i_4])));
                    var_24 += (((arr_12 [i_1] [i_4 + 1] [i_4 + 1]) << (((arr_7 [i_0] [i_0] [i_1] [i_0]) - 124))));
                    var_25 = 26180;
                }
            }
            var_26 = (min(var_26, ((min(65535, (((max(var_0, var_8)) % var_7)))))));
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 25;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 25;i_9 += 1)
            {
                {
                    arr_32 [i_9] [i_8] [8] [21] = (((arr_10 [i_0] [16] [21]) / ((min(var_5, (arr_25 [i_0] [i_8]))))));
                    var_27 = (max(var_27, ((((((arr_27 [i_0] [i_8]) % (arr_0 [i_9]))) < (arr_18 [i_0] [i_8] [i_9]))))));
                }
            }
        }
        arr_33 [i_0] = (((((((-1 ? 32383 : (arr_27 [i_0] [i_0])))) ? (arr_3 [i_0] [i_0]) : (((var_0 ? var_4 : (arr_17 [20])))))) & (((((0 ^ 22212) <= 0))))));
    }
    for (int i_10 = 0; i_10 < 1;i_10 += 1)
    {
        var_28 -= var_1;
        arr_38 [i_10] [i_10] = ((max(((var_2 ? 1 : 42), (arr_26 [3] [i_10] [0])))));
    }
    #pragma endscop
}
