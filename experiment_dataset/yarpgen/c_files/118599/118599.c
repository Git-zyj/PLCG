/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118599
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_11 -= ((!(((var_1 ? (704903434 == var_0) : var_2)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_8 [i_0] = ((~(((((0 && (arr_2 [i_2] [i_0])))) * ((min(0, var_1)))))));
                    var_12 = 0;
                    var_13 = var_0;
                }
            }
        }
        var_14 = (1 * 1);
    }
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        arr_11 [i_3] = (min(1, (arr_10 [i_3])));

        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            var_15 = (min(1, ((var_3 > (arr_9 [i_3] [i_3])))));
            var_16 &= ((28 ? (arr_13 [i_3] [i_4] [i_3]) : (((!(arr_10 [i_4]))))));
        }
        var_17 = 1;
        arr_15 [i_3] [i_3] = (arr_9 [i_3] [i_3]);
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 1;i_6 += 1)
            {
                {
                    var_18 = (arr_17 [i_5]);
                    arr_21 [i_5] = 1;
                }
            }
        }
    }
    var_19 |= (((((max(28, var_7))) >> ((((25636 ? var_7 : var_4)) - 180)))));
    var_20 = var_1;
    var_21 = var_8;
    var_22 = ((var_6 ? ((((-29312 + 2147483647) >> 1))) : 5800898369762050108));
    #pragma endscop
}
