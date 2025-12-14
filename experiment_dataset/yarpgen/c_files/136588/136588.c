/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136588
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_18 = (max(var_18, -1964705653));
                arr_5 [i_0] = (max(5553235327501085528, 24925));

                for (int i_2 = 4; i_2 < 21;i_2 += 1)
                {
                    var_19 = ((-(((arr_4 [i_2] [i_2 - 4] [i_2 - 3]) + ((-(arr_6 [i_2] [i_1] [i_0])))))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        var_20 &= ((!(arr_8 [i_2 + 1] [i_2 - 3] [i_2 - 3] [i_2])));
                        arr_10 [i_0] = ((~(arr_9 [i_0])));

                        for (int i_4 = 1; i_4 < 20;i_4 += 1) /* same iter space */
                        {
                            var_21 = (((arr_7 [i_0] [i_1]) > (arr_1 [i_0])));
                            var_22 = ((~(arr_1 [i_0])));
                            arr_13 [i_2] [i_2] [i_2] [i_3] [i_4] [i_0] &= var_16;
                        }
                        for (int i_5 = 1; i_5 < 20;i_5 += 1) /* same iter space */
                        {
                            arr_16 [i_2] [i_2 - 4] [i_2] [i_2] [i_2 - 2] &= (((arr_1 [i_2]) > (((~(arr_2 [i_2] [i_2]))))));
                            var_23 = (arr_1 [i_0]);
                            arr_17 [i_0] [10] [i_2] [i_3] [i_0] = 26377;
                            var_24 &= ((!(arr_4 [i_2 - 2] [i_5 + 1] [17])));
                            var_25 = (arr_6 [i_2] [i_2] [i_2 - 3]);
                        }
                    }
                    var_26 &= (((1073741823 - 140) ? (arr_14 [i_0] [i_2] [i_1] [i_2] [i_2] [i_2] [i_2 - 2]) : ((-1964705653 ? (arr_15 [i_0] [i_0] [i_0] [i_2] [i_0]) : (arr_14 [i_2] [i_2] [i_2] [i_2 - 1] [i_2] [8] [i_2 - 4])))));
                    arr_18 [i_2] [i_0] [i_0] [i_0] = (((arr_7 [i_2] [i_0]) > (((-721837970996425356 > (!var_16))))));
                    var_27 = (((arr_0 [i_0]) > ((-5553235327501085524 ? 1675394335 : (max((arr_6 [i_0] [i_1] [i_0]), (arr_14 [i_1] [i_0] [i_1] [i_1] [21] [i_1] [i_1])))))));
                }
                var_28 = ((((((((!(arr_9 [i_0])))) > (arr_15 [i_0] [2] [i_0] [i_0] [i_0])))) > var_0));
            }
        }
    }
    var_29 = var_11;
    var_30 = (max(var_30, var_0));
    var_31 = (max(var_31, ((((4100813096748467324 > -25526) > ((((min(var_17, var_2))) ? var_11 : var_13)))))));
    #pragma endscop
}
