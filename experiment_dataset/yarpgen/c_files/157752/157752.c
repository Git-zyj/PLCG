/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157752
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            var_11 = (max(var_11, (arr_0 [i_0] [i_0])));
            var_12 = 38013;

            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                arr_6 [i_0] [i_1 + 2] [i_2] |= var_3;

                /* vectorizable */
                for (int i_3 = 2; i_3 < 18;i_3 += 1)
                {
                    arr_9 [i_0] [i_0] [i_0] = ((!(arr_4 [i_2 + 1] [11])));
                    var_13 = -11530491802698961739;
                    var_14 = (arr_0 [i_2 - 1] [i_1 - 1]);
                }
                /* vectorizable */
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    var_15 = ((!(arr_11 [i_2 - 1])));
                    var_16 = (--6916252271010589876);
                }
                var_17 = (max(var_17, 6916252271010589876));
                var_18 = ((((arr_12 [i_1 - 1] [i_2 + 1]) ? (arr_12 [i_1 - 1] [i_2 - 1]) : (arr_0 [i_1 - 1] [i_2 + 2]))));
                arr_14 [i_2] [i_1] [i_0] = min((((arr_8 [i_1] [i_1] [i_2 - 1] [i_1 + 2]) & (arr_5 [i_1 - 2] [i_2 + 2]))), ((max((arr_13 [i_2 + 1] [i_0] [i_1] [i_1 + 2] [i_1] [i_0]), (arr_13 [i_2 + 1] [i_1] [i_1] [i_1 + 1] [17] [i_1])))));
            }
        }
        for (int i_5 = 1; i_5 < 17;i_5 += 1)
        {
            arr_19 [i_5] = (min(((min((min((arr_5 [i_0] [i_5]), 1)), (9223371968135299072 && var_5)))), (arr_10 [i_0] [i_5 + 2] [i_5])));
            var_19 ^= var_6;
            arr_20 [i_0] [i_5 - 1] = (max((min(var_2, (arr_7 [i_5 + 3] [i_5 - 1] [i_5 + 3]))), (((1 ? -3596 : 28443)))));
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            var_20 += (((var_2 / (arr_5 [i_0] [i_6]))));
            var_21 -= var_9;
        }
        var_22 = var_7;
        var_23 = ((min((~11530491802698961723), ((((arr_1 [6]) && (arr_15 [i_0] [i_0] [i_0])))))));
        arr_25 [i_0] = (min((((arr_23 [i_0] [i_0]) && ((min(8658654068736, var_2))))), ((!(arr_4 [i_0] [i_0])))));
        arr_26 [i_0] = (!(((~(arr_1 [i_0])))));
    }
    var_24 = -1;

    for (int i_7 = 0; i_7 < 16;i_7 += 1)
    {
        var_25 ^= (min((((((arr_5 [i_7] [i_7]) || (arr_21 [i_7] [i_7]))) ? ((-7998226397970156669 ? var_3 : (arr_16 [2] [i_7] [i_7]))) : (((!(arr_12 [i_7] [i_7])))))), var_1));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 16;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 16;i_9 += 1)
            {
                {
                    var_26 = (min((arr_8 [i_7] [i_7] [i_7] [i_7]), (((1 - ((-(arr_3 [i_7] [i_8] [i_7]))))))));
                    var_27 = (-3603 | 1);
                    var_28 = (arr_3 [i_7] [i_7] [i_7]);
                    var_29 = (max(var_29, (((var_2 ? -1 : (((arr_13 [i_7] [i_7] [i_8] [i_7] [i_9] [i_7]) & var_4)))))));
                }
            }
        }
        var_30 &= (max(((-(arr_33 [12] [i_7] [i_7] [i_7]))), ((min((arr_31 [0] [0] [i_7]), (arr_32 [i_7] [i_7] [i_7]))))));
    }
    #pragma endscop
}
