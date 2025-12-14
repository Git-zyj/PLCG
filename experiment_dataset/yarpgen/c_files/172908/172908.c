/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172908
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_15;
    var_17 = var_3;

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_18 = (((((((375456842 << (var_15 + 1507610339352288427)))) ? (arr_2 [i_0 + 1]) : ((var_10 ? -8388608 : var_5)))) ^ (arr_1 [i_0 + 2])));
        var_19 -= ((!(((max((arr_1 [i_0 + 2]), (arr_1 [i_0])))))));

        for (int i_1 = 1; i_1 < 1;i_1 += 1) /* same iter space */
        {

            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                arr_9 [i_1 - 1] [i_1 - 1] [i_0] = ((!((max(((375456857 ? 3919510459 : 3919510440)), 375456833)))));
                arr_10 [i_0] [7] [i_0] = ((((min(64, 4294967295)) / -125)));
            }
            arr_11 [13] [i_0] = var_11;
            var_20 = (min(var_20, ((min((arr_7 [i_0 + 2] [i_0 - 2] [i_0 - 1] [i_1 - 1]), (min((arr_8 [10] [i_0 - 2] [i_1 - 1]), (((arr_1 [i_0 - 2]) ? var_2 : (arr_6 [6]))))))))));
            arr_12 [0] [i_0] = 22916;
            var_21 -= -13218;
        }
        for (int i_3 = 1; i_3 < 1;i_3 += 1) /* same iter space */
        {
            var_22 = (min(var_22, -312342634));
            arr_15 [i_0] = var_10;
            var_23 = var_13;
        }
    }
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                {
                    arr_24 [i_5] [i_4] = (max(((~(arr_20 [i_4] [8] [i_6]))), (arr_20 [i_6] [i_5] [0])));
                    var_24 = (min(var_24, ((max(((18437 * (max(375456853, var_5)))), (var_8 && var_7))))));
                    var_25 = (min(var_25, (((min(var_6, (arr_20 [i_4] [i_5] [i_6])))))));
                    var_26 = (max(((375456842 ? (arr_16 [i_6]) : 6357996695976922510)), ((min((arr_20 [i_4] [i_4] [i_4]), (arr_20 [i_4] [i_5] [i_4]))))));
                }
            }
        }
        var_27 = -6357996695976922537;
    }
    for (int i_7 = 1; i_7 < 16;i_7 += 1)
    {
        /* LoopNest 3 */
        for (int i_8 = 1; i_8 < 14;i_8 += 1)
        {
            for (int i_9 = 4; i_9 < 16;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 18;i_10 += 1)
                {
                    {
                        arr_34 [5] = (arr_29 [i_7] [1] [i_9] [11]);
                        arr_35 [i_7 + 2] [i_7 + 2] [i_9] [i_10] = (min(4182270027, 1));
                        var_28 = (((~14569496854341766451) | (arr_23 [i_9] [i_8] [i_9 - 4])));
                    }
                }
            }
        }
        var_29 = (arr_25 [15]);
        arr_36 [9] [i_7] = ((((max((arr_20 [i_7 + 2] [i_7 + 1] [i_7 - 1]), (arr_20 [i_7 + 2] [i_7 + 1] [i_7 + 2])))) / 4));
    }
    #pragma endscop
}
