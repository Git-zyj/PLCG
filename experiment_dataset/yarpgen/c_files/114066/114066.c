/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114066
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_4 [i_0] = (~1);

        /* vectorizable */
        for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        {
                            arr_15 [i_1] [i_0] [i_2] [i_3] [i_0] [i_0] = (((var_3 < var_14) == 246));
                            var_16 -= (arr_13 [i_0] [i_1] [i_3] [10]);
                            arr_16 [i_0] [i_1] [i_1] [i_1] [i_1] = (((arr_10 [i_0]) & (arr_14 [i_0] [i_1] [i_2] [i_4] [i_0] [i_1])));
                            var_17 -= 31;
                        }
                    }
                }
            }
            var_18 = (3817755035 <= 1333722958);
            var_19 = (((var_2 == var_15) >> (-32753 + 32784)));
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 0;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        {
                            var_20 = ((((((arr_0 [i_0]) ? 10184845901036300036 : 110))) ? (arr_23 [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6 + 1]) : (((194 < (arr_3 [19]))))));
                            var_21 = (~1);
                            var_22 = (((arr_11 [i_1] [i_6 + 1] [i_6 + 1] [i_6] [i_6 + 1]) < ((158 ? -1769284332207683415 : 92))));
                            arr_27 [i_0] [i_0] [i_5] [i_6] [i_7] [i_5] = 23763;
                        }
                    }
                }
            }
        }
        for (int i_8 = 0; i_8 < 22;i_8 += 1) /* same iter space */
        {
            arr_30 [i_0] [i_0] [i_0] = 549755813887;
            var_23 = (-32767 - 1);
            var_24 = (max(var_24, 230));
        }
    }
    for (int i_9 = 0; i_9 < 19;i_9 += 1)
    {
        arr_35 [i_9] = (max((min((max(32, var_7)), (arr_12 [i_9] [i_9]))), (arr_25 [i_9] [i_9])));
        arr_36 [i_9] = 16;
    }
    var_25 = (var_1 ? -9 : var_13);
    var_26 = (((max((!155), ((var_7 ? var_6 : 28))))) ? (((var_14 ? var_12 : var_14))) : (((((var_13 ? -92 : var_0))))));
    #pragma endscop
}
