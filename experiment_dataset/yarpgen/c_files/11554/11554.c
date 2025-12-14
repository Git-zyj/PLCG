/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11554
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    var_12 = (((((arr_6 [i_0] [i_1]) ? 329467288 : (((arr_2 [i_0]) ? 17818 : (arr_8 [5] [5]))))) / 246));
                    var_13 = ((((!(arr_0 [i_2 - 1])))));
                    var_14 = (((((var_8 ? (arr_4 [i_1] [i_2 - 2] [i_1]) : (arr_0 [i_2 - 2])))) ? (((-(arr_5 [i_1] [i_1])))) : ((((((arr_7 [i_2]) ? var_5 : (arr_4 [i_1] [i_1] [i_2])))) ? 3044899833581438220 : (((15401844240128113396 ? var_1 : (arr_2 [i_2]))))))));

                    for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
                    {
                        arr_14 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((-(15401844240128113418 <= 3044899833581438225)));

                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            arr_19 [i_1] [i_1] = 115;
                            var_15 -= (((((arr_18 [i_2] [i_2 - 1] [i_2] [i_2] [6] [6]) ? 127 : (arr_18 [i_2] [i_2 + 1] [i_2] [i_2 - 1] [i_2] [i_2]))) * (((((arr_17 [i_0] [i_0] [i_4] [i_2 + 1] [i_2 - 1] [i_3] [i_1]) <= 59))))));
                        }
                        for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
                        {
                            var_16 = ((!((((var_4 || var_8) * 18446744073709551615)))));
                            var_17 -= ((((!119) ? (arr_2 [i_0]) : ((var_11 ? -536870912 : 4882367364406716209)))));
                            var_18 -= ((var_2 > ((max((arr_22 [i_2]), 1)))));
                            var_19 = arr_11 [i_3] [i_1] [i_3] [i_3] [i_3];
                            var_20 -= ((~15401844240128113395) | (((((29 ? 422480455813442312 : 2125756461))) ? (arr_6 [i_2 + 1] [i_5]) : var_2)));
                        }
                        for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
                        {
                            var_21 -= ((!(arr_7 [i_3])));
                            var_22 = (max(var_22, -6940689815608487700));
                            var_23 -= (max(((64 ? 254 : (((arr_1 [i_0]) ? -1904646253077754165 : 136)))), (((((8244793824330314633 ? var_8 : (arr_3 [i_6] [i_6])))) ? -5366671633776938469 : (((var_1 ? (arr_16 [i_0] [i_0] [i_0] [i_6]) : var_1)))))));
                        }
                        for (int i_7 = 0; i_7 < 13;i_7 += 1)
                        {
                            var_24 -= (max(504, 136));
                            var_25 = (min(var_25, ((((((((var_0 / (arr_25 [i_0] [i_0]))) * (var_4 * 3)))) ? (arr_20 [i_0] [i_0] [i_1] [i_2] [i_3] [i_3] [i_7]) : ((((((arr_0 [i_2]) / 65519))) ? -var_9 : (max(-3978106834615525342, 192)))))))));
                            var_26 = -3978106834615525361;
                            var_27 = (-2147483647 - 1);
                        }

                        /* vectorizable */
                        for (int i_8 = 1; i_8 < 12;i_8 += 1)
                        {
                            var_28 = (max(var_28, (((~(arr_3 [i_2 + 1] [i_2]))))));
                            var_29 = (arr_12 [i_0] [i_1] [i_1] [2] [i_8 - 1]);
                            arr_33 [6] [6] [i_1] [6] [i_8 - 1] [i_8 - 1] = ((737653749 == (arr_16 [i_0] [i_2 - 2] [i_0] [i_8 + 1])));
                        }
                    }
                    for (int i_9 = 0; i_9 < 13;i_9 += 1) /* same iter space */
                    {
                        var_30 -= ((-((4294967288 ? var_6 : 103))));
                        var_31 = 11692911502348006232;
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 13;i_10 += 1)
                    {

                        for (int i_11 = 3; i_11 < 12;i_11 += 1)
                        {
                            var_32 = 2147483647;
                            var_33 = ((7050075343261717839 ? 144 : 1));
                        }
                        var_34 = (min(var_34, (!6813)));
                    }
                }
            }
        }
    }
    var_35 -= var_7;
    var_36 = ((-(max(var_0, 22974))));
    var_37 = (max((~var_11), ((var_5 ? var_4 : (max(var_2, var_0))))));
    #pragma endscop
}
