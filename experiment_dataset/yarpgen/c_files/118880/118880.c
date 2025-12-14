/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118880
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = 0;
        var_11 = 1;

        for (int i_1 = 2; i_1 < 19;i_1 += 1) /* same iter space */
        {
            var_12 = (arr_6 [i_1 - 2] [i_1]);
            arr_7 [i_1] [i_1 - 2] = 8321499136;
        }
        for (int i_2 = 2; i_2 < 19;i_2 += 1) /* same iter space */
        {
            var_13 -= 0;
            /* LoopNest 2 */
            for (int i_3 = 2; i_3 < 19;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {

                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            arr_18 [i_2] [i_4] [i_3 - 1] [i_2] [i_2] = (((-1530347373842332464 ? 1 : (arr_11 [i_0]))));
                            arr_19 [i_0] [i_0] [i_2 - 2] [i_2] [i_4] [i_5] = 1530347373842332464;
                            arr_20 [i_5] [i_3] [i_4] &= (((arr_12 [i_0]) ? (arr_5 [i_2 + 1]) : (arr_5 [i_2])));
                        }
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_14 = (max(var_14, (((var_5 ? var_10 : (arr_15 [i_0] [i_3 + 1] [i_3] [i_4]))))));
                            var_15 = 1;
                            arr_23 [2] [i_0] &= -0;
                            arr_24 [i_0] [1] [i_0] [i_4] [i_2] = (arr_17 [i_2 - 2] [14] [i_3 + 1]);
                            arr_25 [i_0] [i_2] [i_3 - 1] [i_4] [i_2] = (((((0 ? 8466202301964357902 : (arr_1 [i_4])))) ? (-32764 / var_6) : 1530347373842332440));
                        }
                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            arr_29 [i_0] [i_2] [i_3] [i_2] [i_7] = ((var_6 << (!var_5)));
                            var_16 *= ((((arr_8 [i_7]) ? (arr_8 [i_0]) : var_10)));
                            var_17 *= var_10;
                            var_18 = (((var_4 && 1530081637) ? (arr_16 [i_2] [i_2 + 1] [3] [i_3 - 2]) : var_3));
                        }
                        var_19 -= (arr_17 [i_4] [i_2] [i_4]);
                        var_20 -= (((arr_3 [i_0] [i_2 - 1]) ? (arr_3 [i_0] [i_2 - 1]) : var_10));
                        arr_30 [i_2] [i_2 - 2] = -1530347373842332457;
                        var_21 = (arr_17 [i_0] [i_2] [i_3 - 1]);
                    }
                }
            }
        }
        var_22 = (((((-(arr_28 [i_0] [i_0] [i_0] [i_0] [i_0])))) ? 1 : (arr_14 [6] [14] [i_0] [i_0])));
        arr_31 [i_0] [i_0] &= 0;
    }
    for (int i_8 = 0; i_8 < 20;i_8 += 1) /* same iter space */
    {
        arr_35 [i_8] = 3474;
        var_23 += (((arr_13 [i_8] [i_8] [i_8]) + (!var_9)));
        var_24 = 1;
    }
    var_25 = var_0;
    var_26 = ((-1 ? var_10 : 1));
    #pragma endscop
}
