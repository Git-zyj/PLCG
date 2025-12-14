/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186855
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_10 = (((((3263078370 ? 1 : 6553381897991645935))) ? ((18446744073709551605 ? (arr_6 [i_0] [i_1] [i_0]) : -4785946107331977492)) : (max((arr_3 [i_0]), -4785946107331977492))));
                        arr_10 [i_0] [i_1] [1] [i_3] = (~-77);
                    }

                    /* vectorizable */
                    for (int i_4 = 3; i_4 < 17;i_4 += 1)
                    {

                        for (int i_5 = 1; i_5 < 15;i_5 += 1)
                        {
                            arr_16 [i_0] [i_0] [18] [6] = var_7;
                            arr_17 [i_0] [i_2] [i_0] [11] = (((((var_7 / (arr_4 [i_2] [11] [i_5])))) != ((-(arr_5 [7] [i_4] [i_1] [i_0])))));
                        }
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            var_11 = (max(var_11, 7406707507972536579));
                            arr_20 [i_0] [i_6] [i_2] = (~var_0);
                        }
                        for (int i_7 = 0; i_7 < 19;i_7 += 1) /* same iter space */
                        {
                            var_12 = -4101528382260930808;
                            arr_25 [i_0] [i_1] [i_2] [i_4] [i_4] = ((var_7 & (((((arr_23 [i_0]) != var_1))))));
                            arr_26 [8] [1] [i_4] [i_0] = (arr_1 [i_0]);
                            arr_27 [i_7] [1] [i_0] [1] [i_0] = (~((6227588795478356870 ? 4101528382260930808 : (arr_15 [i_0] [i_0] [i_2] [i_4] [1]))));
                            var_13 = ((var_0 ? 65520 : var_5));
                        }
                        for (int i_8 = 0; i_8 < 19;i_8 += 1) /* same iter space */
                        {
                            arr_32 [i_0] = ((var_1 || (arr_1 [i_0])));
                            var_14 = 0;
                            var_15 += (((!-19892) << (9223372036854775807 - 9223372036854775798)));
                        }
                        var_16 = (min(var_16, (((~(arr_23 [6]))))));
                        var_17 = 16747;
                    }

                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        var_18 = (min(77, (((-2147483647 - 1) ? 81 : 130))));
                        var_19 = ((var_4 ? (((((72 ? var_8 : 5970864470885817579))))) : 32767));
                        var_20 = -942896863;
                    }
                    var_21 = (((arr_9 [i_0] [i_1] [i_2] [i_2] [i_0] [i_0]) ? (max((arr_9 [i_0] [i_0] [i_1] [i_2] [i_1] [i_2]), (arr_9 [i_0] [i_0] [16] [0] [i_2] [10]))) : ((var_2 ? (arr_9 [i_2] [i_1] [i_2] [i_1] [i_2] [i_1]) : (arr_9 [i_0] [i_0] [i_0] [i_0] [i_1] [i_2])))));
                }
            }
        }
    }
    var_22 = ((((-var_1 ? 1 : 15)) <= (((max((!var_6), (!5970864470885817582)))))));
    #pragma endscop
}
