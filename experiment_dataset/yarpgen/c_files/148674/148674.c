/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148674
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_4;
    var_16 = -6697;
    var_17 = -1;
    var_18 = var_5;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_19 = min((!var_5), (arr_1 [i_0] [i_0]));
        var_20 = ((((min(-12, 4294967295))) ? -12 : (arr_0 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        arr_5 [3] = (max((arr_4 [i_1] [i_1]), (arr_2 [i_1])));
        var_21 -= ((-33 ? (((((!-104) >= (arr_4 [8] [i_1]))))) : (arr_3 [i_1])));
        var_22 -= arr_4 [i_1] [i_1];
        arr_6 [i_1] = 255;

        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            var_23 -= (~14);
            /* LoopNest 2 */
            for (int i_3 = 2; i_3 < 8;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 9;i_4 += 1)
                {
                    {
                        var_24 -= ((!((min((arr_3 [i_3 - 2]), (arr_3 [i_3 - 2]))))));
                        var_25 = (min((arr_1 [i_4 + 1] [i_3 - 1]), (arr_12 [i_1] [i_4] [i_4] [i_4 - 1])));

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            var_26 -= var_6;
                            arr_18 [i_1] [i_2] [1] [2] = (((((arr_3 [i_1]) && 241)) && (arr_16 [i_1] [i_4 - 2] [i_3] [i_4] [i_3 - 2])));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 7;i_7 += 1)
                {
                    {
                        arr_27 [i_2] [i_2] [i_6] [i_7] = (arr_8 [i_1] [i_6]);
                        var_27 -= (min((arr_13 [i_6]), (1 || 127)));
                        var_28 = (min((max(716274941, (arr_16 [i_1] [i_2] [i_6] [i_6] [2]))), ((((arr_16 [i_2] [i_2] [i_2] [i_2] [i_2]) && 2)))));
                    }
                }
            }
            var_29 = (min(((((((arr_23 [i_1] [i_2] [i_2] [i_2]) ? -7 : 3674711759))) ? -3114710268584885595 : (arr_0 [i_1] [i_2]))), (!var_12)));
            var_30 = var_11;
        }
        for (int i_8 = 0; i_8 < 10;i_8 += 1)
        {
            var_31 = (min(var_31, -201326592));
            arr_32 [i_1] [i_8] = (min((arr_14 [6] [i_8] [i_8] [i_1] [i_1]), (((!(arr_22 [i_1] [i_8] [i_8]))))));
            var_32 = max((((!((104 <= (arr_29 [i_1] [2])))))), (((arr_20 [i_1]) ? (arr_0 [i_8] [i_8]) : (((var_0 && (arr_17 [i_1] [i_8] [i_8] [i_8])))))));
        }
        for (int i_9 = 1; i_9 < 8;i_9 += 1)
        {
            var_33 -= (min(((54816 ? (arr_22 [i_9 + 2] [i_9 + 1] [i_9 + 2]) : (arr_17 [i_9 + 2] [i_9 - 1] [i_9 + 2] [i_9 + 2]))), (86 < 31)));
            arr_36 [i_1] = ((((((((var_13 ? var_13 : var_8))) ? 45 : (arr_19 [i_9] [i_9] [i_9 - 1] [4])))) ? (arr_34 [i_9]) : (max((arr_8 [i_1] [i_1]), (arr_8 [i_1] [i_9 + 1])))));
        }
    }
    #pragma endscop
}
