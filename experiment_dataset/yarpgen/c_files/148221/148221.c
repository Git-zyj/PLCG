/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148221
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_16 = ((-((((((arr_4 [i_0] [i_1] [i_0] [i_0]) ? 4129752460 : (arr_1 [i_1] [i_2])))) ? (arr_0 [7] [i_1]) : 25))));
                    var_17 -= ((-1886868961 ? ((79 ? (arr_1 [i_0] [i_1]) : (!3184605724269078441))) : (arr_3 [i_0] [i_0] [i_0])));

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        var_18 = (arr_4 [0] [i_1] [i_0] [i_2]);
                        arr_9 [i_3] [i_3] [i_1] [i_1] [i_0] &= (+((((((arr_3 [i_3] [i_2] [i_0]) ? (arr_3 [i_0] [7] [i_3]) : 16376))) ? 2606712818402478602 : (((4122574704694368151 ? (arr_3 [i_0] [i_1] [i_0]) : (arr_5 [i_0] [i_1] [i_2])))))));
                        arr_10 [i_0] = (((((((min(9223372036854775807, (arr_1 [6] [i_2])))) ? (arr_7 [i_0] [i_1]) : (arr_6 [i_0] [i_0] [i_0] [i_0])))) ? (((arr_4 [i_3] [i_2] [i_1] [i_0]) ? (arr_4 [i_3] [i_3] [i_3] [i_3]) : (arr_4 [i_0] [i_0] [i_0] [i_0]))) : (min(2147483647, (arr_7 [i_0] [i_1])))));
                    }
                    var_19 |= ((((((arr_2 [i_2]) ? (arr_2 [i_0]) : (arr_2 [i_1])))) ? ((max((arr_2 [i_0]), (arr_2 [i_0])))) : (arr_2 [i_1])));
                }
            }
        }
    }

    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        arr_15 [i_4] = (arr_6 [i_4] [i_4] [i_4] [i_4]);
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 18;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                {
                    var_20 &= (((arr_17 [i_5 - 1] [i_5 + 2] [i_5 - 1]) ? (arr_17 [i_5] [i_5 + 2] [i_5 - 1]) : 24576));
                    var_21 = 27052;
                    arr_21 [i_4] [i_5] [i_5] = (((((((((arr_13 [i_4]) ? 60 : (arr_14 [i_4])))) ? ((785380671359095962 ? (arr_18 [i_4] [i_5] [i_6]) : 3925480235)) : -24576))) ? ((1411635044 ? (min(17661363402350455662, 9418)) : 4129752445)) : 1));
                }
            }
        }
        var_22 = arr_19 [8] [i_4];

        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            var_23 = (arr_16 [i_4] [i_4] [i_7]);
            var_24 = 3611350741;
            arr_24 [11] [i_4] [i_4] = -3184605724269078447;
        }
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        var_25 = (arr_25 [i_8] [i_8]);
        var_26 = 7805659270020359465;
        arr_27 [i_8] = ((!(arr_4 [i_8] [i_8] [i_8] [i_8])));
        var_27 = ((-24593 ? -24576 : (arr_6 [i_8] [i_8] [i_8] [i_8])));
    }
    for (int i_9 = 1; i_9 < 1;i_9 += 1)
    {
        /* LoopNest 2 */
        for (int i_10 = 1; i_10 < 1;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 21;i_11 += 1)
            {
                {
                    arr_34 [i_9] [i_10] [i_9] = (arr_7 [i_10 - 1] [i_9 - 1]);
                    var_28 = (min((arr_1 [i_9 - 1] [i_10 - 1]), (arr_1 [i_9 - 1] [i_10 - 1])));
                    arr_35 [i_9] [i_9] = (-(((arr_7 [i_9 - 1] [i_10 - 1]) ? (arr_29 [i_11]) : 24)));
                    var_29 = (min((((arr_30 [i_10 - 1]) ? 14196295053355452889 : (arr_30 [i_10 - 1]))), (arr_30 [i_10 - 1])));
                }
            }
        }
        var_30 = 165214835;
        arr_36 [i_9] [i_9] = 3072;
        var_31 = (max((arr_3 [i_9 - 1] [i_9] [i_9 - 1]), (max(32, -200730521))));
    }
    var_32 = var_6;
    var_33 = var_6;
    var_34 = (!var_3);
    #pragma endscop
}
