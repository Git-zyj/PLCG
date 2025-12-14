/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109740
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = -0;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 12;i_2 += 1)
                {
                    var_21 = (min(var_21, (((~((~(arr_4 [i_2] [i_2 - 1] [i_2]))))))));
                    arr_8 [i_0] = (((!4294967295) ? (((~((~(arr_5 [6])))))) : -4294967295));
                }
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    arr_12 [i_0 - 1] [i_1] [1] = ((((~(~77297410))) >> (((~0) - 18446744073709551585))));
                    var_22 -= ((!((((arr_1 [i_0 + 1] [i_0 - 3]) ? (arr_1 [i_0 + 2] [i_0 - 1]) : (arr_1 [i_0 + 2] [i_0 - 1]))))));
                }
                for (int i_4 = 1; i_4 < 12;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            {
                                var_23 -= (((1529037339 ? -1057183917 : 3283678591)));
                                var_24 = ((((!((max(1057183917, 0)))))));
                                arr_21 [i_0] [i_0] [i_1] [9] [1] [0] [i_6] = ((+(((!12) ? ((873745153 - (arr_19 [2]))) : (arr_7 [i_0 - 3])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 12;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            {
                                arr_26 [i_0 - 1] [i_1] [i_4 + 1] [i_7] [i_8] = ((77297410 ? (((!((!(arr_20 [i_0 - 3] [1])))))) : (arr_6 [i_4 + 2])));
                                var_25 = (max(var_25, (((((min((((arr_10 [10]) <= (arr_16 [5] [13] [10] [5] [i_8]))), ((!(arr_0 [i_7 - 1])))))) & (((!(0 != 0)))))))));
                                arr_27 [i_4] [3] [i_4] [1] [i_0] [i_0] [1] = ((+(((!(((0 ? (arr_22 [i_7] [i_1] [i_4]) : (arr_16 [7] [2] [2] [i_7] [i_0 + 2])))))))));
                            }
                        }
                    }
                    var_26 = (((((!(arr_17 [i_4] [9] [i_4 + 2] [i_1] [3] [i_0])) ? (arr_16 [i_4 - 1] [i_4 - 1] [i_4] [i_4] [1]) : (((!(arr_25 [0]))))))));
                }
                arr_28 [i_0 + 1] [9] = min((!-10685), ((!(((-127 | (arr_14 [i_0] [i_0] [1])))))));
            }
        }
    }
    var_27 -= ((-1953940635 >= (!100)));
    var_28 = (max(1, (!var_5)));
    var_29 -= ((((!(!var_4)))));
    #pragma endscop
}
