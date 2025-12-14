/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114911
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_8;
    var_20 = ((!(!-31638)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            {
                var_21 = 1;

                for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
                {
                    var_22 = (var_9 || ((((!1) ? ((min(31637, (arr_2 [i_2])))) : (((var_1 && (arr_1 [i_0 + 1]))))))));
                    var_23 += ((8388607 ? (20371 != -var_15) : (max((min(-1321477621, (arr_6 [i_0]))), ((~(arr_9 [i_0] [i_0] [i_0])))))));
                    var_24 = (arr_4 [i_0] [9]);
                }
                for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
                {
                    arr_12 [6] = var_12;
                    arr_13 [i_0] [i_3] [i_3] = var_11;
                    arr_14 [2] [i_1] [2] &= (((!(arr_1 [i_0 + 2]))) || ((((arr_4 [i_0 - 1] [i_0 + 1]) ? 48 : (arr_4 [i_0 + 2] [i_0 - 1])))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            {
                                var_25 = (min(var_25, ((max((((((arr_5 [i_0] [i_5]) && 290842093)) ? (!43) : (arr_18 [6] [4] [i_3] [i_1 + 3] [1]))), ((~(((arr_0 [i_4]) - var_12)))))))));
                                arr_20 [i_0] = var_11;
                            }
                        }
                    }
                }
                var_26 = (min(var_26, (((((min((arr_11 [i_0 - 1] [i_0 + 2] [i_1] [i_0 - 1]), 139))) ^ (~var_12))))));
            }
        }
    }
    var_27 = (((((~-118) <= var_2))) >> (((!(((0 ? 5984349389107254983 : 5984349389107254983)))))));
    var_28 = var_3;
    #pragma endscop
}
