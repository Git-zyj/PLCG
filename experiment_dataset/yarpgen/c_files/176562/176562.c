/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176562
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, 4294967295));

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        var_13 = (max(var_13, (((!(((arr_0 [i_0 - 2]) != -var_6)))))));
        arr_2 [i_0 - 2] = 9;
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            var_14 = (min(var_14, ((((arr_3 [i_1 - 1]) ? (arr_3 [i_1 - 1]) : (arr_3 [i_1 - 1]))))));
            /* LoopNest 2 */
            for (int i_3 = 3; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 16;i_4 += 1)
                {
                    {
                        arr_14 [i_1] [i_2] [i_3 + 1] [i_4] [6] [i_1] = (arr_11 [i_1] [i_2] [i_3] [i_4] [i_4] [i_4]);
                        var_15 = 9;
                        var_16 = 9;
                    }
                }
            }
        }
        for (int i_5 = 2; i_5 < 14;i_5 += 1) /* same iter space */
        {
            var_17 = (((max(0, ((var_4 ? 247 : var_11)))) > (arr_12 [i_5] [i_5 + 2] [i_1 - 1])));
            arr_18 [i_1] [i_5] = (337849812 ? 0 : (arr_11 [1] [1] [i_5] [i_5] [i_5] [i_5]));
            var_18 = ((-14291955991231099681 ? -var_6 : (-var_5 != var_10)));
        }
        /* vectorizable */
        for (int i_6 = 2; i_6 < 14;i_6 += 1) /* same iter space */
        {
            var_19 = (min(var_19, (((0 & 1346991537273082050) ? var_4 : ((1755 ? 247 : 155))))));
            arr_21 [i_1] = (((arr_5 [i_6 - 1] [i_1 - 1]) ? var_0 : (arr_13 [i_1 - 1] [i_6 - 2] [i_6 + 4] [i_6 - 1])));
        }
        var_20 += var_2;
        var_21 = 28523;
    }
    for (int i_7 = 0; i_7 < 21;i_7 += 1)
    {
        arr_25 [i_7] = ((-((((((-(arr_23 [i_7])))) <= 4294967286)))));
        var_22 = min(((((arr_22 [i_7] [i_7]) > var_5))), ((-(arr_1 [i_7] [i_7]))));
        var_23 ^= ((((-8683414022046765414 ? 0 : -7898))) ? (min(-1212129097, (arr_23 [i_7]))) : (arr_1 [i_7] [i_7]));
    }
    #pragma endscop
}
