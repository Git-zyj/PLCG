/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164046
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_15 -= ((8160 & (arr_0 [i_0] [i_0])));
        arr_2 [i_0] = (arr_1 [i_0]);
    }
    for (int i_1 = 1; i_1 < 21;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [i_1] = ((-(min((max(57387, var_4)), var_2))));
        arr_8 [i_1] = (~var_11);
        var_16 = ((((min((max(var_0, 4115699045)), ((min(25, (-2147483647 - 1))))))) ? (~3231241281) : 7));
    }
    for (int i_2 = 1; i_2 < 21;i_2 += 1) /* same iter space */
    {
        arr_12 [i_2] [i_2] = ((-(min(2147483647, 1))));
        var_17 -= (arr_10 [i_2]);
    }
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {

        for (int i_4 = 2; i_4 < 12;i_4 += 1)
        {
            var_18 = var_9;
            arr_18 [i_3] = ((!(arr_1 [i_4 - 1])));
            arr_19 [i_3] [i_3] [i_3] = ((-(((arr_17 [7] [i_4]) & ((~(arr_10 [i_3])))))));
            var_19 -= (max(((var_8 ? var_0 : (arr_11 [i_4 - 1]))), (((var_12 <= (arr_11 [i_4 + 1]))))));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            var_20 *= var_12;
            arr_23 [i_3] [i_3] [i_5] = (!17140);
            arr_24 [13] [i_5] [i_5] = var_5;
        }
        /* vectorizable */
        for (int i_6 = 4; i_6 < 14;i_6 += 1)
        {
            arr_27 [i_6] = ((~(arr_22 [i_6 - 4])));
            arr_28 [i_6] [i_6] = var_0;
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 15;i_8 += 1)
            {
                {
                    arr_35 [i_3] [i_7] [i_8] = (((arr_16 [i_8] [i_3] [i_3]) + (max(var_8, (max((arr_22 [i_3]), (arr_17 [i_3] [i_8])))))));
                    arr_36 [i_3] = (min(2, 23993));
                    arr_37 [i_3] [i_7] [i_3] [i_7] = var_0;
                }
            }
        }
        var_21 -= ((!((((var_4 ? (arr_4 [12] [i_3]) : (arr_17 [i_3] [i_3])))))));
        var_22 += min(var_6, (max((2147483647 & var_1), (arr_17 [5] [5]))));
    }
    var_23 = ((+(max((~var_10), (~41543)))));
    var_24 = ((-(min((23999 == 3464969299132752269), 15))));
    var_25 = (min(var_4, 1));
    #pragma endscop
}
