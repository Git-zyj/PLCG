/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134693
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((-14982 ? var_15 : (63 + var_8)))) ? 9597496209958938951 : var_12));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_21 = (((arr_1 [i_0]) ? (arr_0 [i_0]) : ((11367 ? (var_9 * 1) : ((((arr_1 [i_0]) ? 2097150 : 0)))))));
        var_22 += (arr_0 [i_0]);
        var_23 = (max((((~441624960) ? ((12405469133860640546 ? (arr_1 [i_0]) : (arr_0 [i_0]))) : (max(var_17, (arr_0 [i_0]))))), 0));

        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            var_24 = (arr_3 [i_1] [i_1 - 2]);
            arr_6 [i_1] = (!var_14);
        }
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            var_25 = ((((max((!0), (~var_19)))) ^ ((4294967295 << ((148 / (arr_9 [14] [i_0])))))));
            var_26 = (((((32767 ? ((var_13 % (arr_4 [1]))) : 608670780))) ? (!var_19) : ((var_8 ? var_3 : (arr_5 [i_0])))));
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                {
                    var_27 = (((arr_13 [i_0] [i_0]) ? ((min((arr_3 [i_0] [i_0]), (max(3413, (arr_1 [i_4])))))) : (((!(arr_8 [i_0] [i_3] [i_4]))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 16;i_6 += 1)
                        {
                            {
                                var_28 ^= ((~(min((((arr_18 [i_6 + 2] [i_3] [i_4] [i_3] [i_0]) ? 3579 : 120)), 132))));
                                var_29 = ((((32767 ? 9698205507301686960 : (arr_4 [i_0])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 17;i_8 += 1)
                        {
                            {
                                arr_26 [i_7] = 18446744073709551594;
                                var_30 = (max(var_30, (((~((18446744073709551615 ? (((~(arr_7 [i_0] [i_0] [i_0])))) : ((var_8 ? (arr_10 [i_3]) : (arr_21 [10] [2] [i_4]))))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_9 = 2; i_9 < 15;i_9 += 1)
    {
        arr_29 [i_9] = ((-((37174 ? 5046 : 32746))));
        arr_30 [i_9 + 1] [14] = (min((arr_18 [i_9] [1] [i_9] [i_9 - 1] [i_9 - 2]), (((!(arr_18 [i_9] [i_9 - 1] [i_9] [i_9] [i_9 - 2]))))));
    }
    #pragma endscop
}
