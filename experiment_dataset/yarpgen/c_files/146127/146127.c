/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146127
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= var_8;
    var_15 = (max(var_15, (~4203400704)));

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_16 = (min(var_16, ((min((((!(((48 ? 91566592 : (arr_0 [i_0] [14]))))))), ((+((var_11 ? (arr_0 [i_0 + 2] [20]) : 830341969)))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                {
                    var_17 *= var_1;
                    arr_9 [i_0] [i_0] [i_2] = (min(-91566570, var_3));
                }
            }
        }

        for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
        {

            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                arr_14 [i_0] [i_0] = var_1;
                var_18 = (max(var_18, ((((((((max(4203400704, 2117904222))) ? 181022183 : (arr_2 [i_4] [i_3])))) ? (arr_12 [i_0 + 1] [i_4] [0]) : (arr_5 [i_4] [i_3] [i_4] [8]))))));
            }
            arr_15 [18] [18] |= (arr_7 [16] [20] [16] [i_3]);
        }
        for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
        {

            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                var_19 = (((!51) ? var_0 : ((-((100 ? var_12 : (arr_10 [i_0] [i_0])))))));
                arr_22 [i_0] [i_5] [i_0] = (((arr_20 [i_0] [i_0]) + (((((-(arr_21 [i_0] [i_0] [i_0] [i_0])))) ? ((((!(arr_3 [i_0] [i_5]))))) : ((4146523609 ? (arr_11 [i_0] [i_5]) : 91566570))))));
                var_20 = (arr_19 [i_0] [21] [i_0]);
                arr_23 [i_0] [18] [i_6] |= var_9;
            }
            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {
                arr_27 [i_0 + 2] [i_0] [14] = ((var_2 | ((~(((arr_2 [i_0] [i_0]) ? var_13 : 6699460))))));
                arr_28 [i_0] [i_0] [i_7] = 33554431;
                arr_29 [i_0] [i_0] [i_0] [i_7] = (arr_4 [i_0] [i_0] [i_0]);
            }
            for (int i_8 = 0; i_8 < 22;i_8 += 1)
            {
                arr_34 [i_0] = 123;
                var_21 = (min(var_21, -1));
                arr_35 [i_0] [2] [14] [i_8] = (arr_21 [i_0] [i_5] [i_5] [i_5]);
                var_22 -= (((!(arr_25 [i_8] [i_8] [i_8] [i_0 + 2]))));
            }
            var_23 = 1637384388;
        }
        for (int i_9 = 0; i_9 < 22;i_9 += 1) /* same iter space */
        {
            arr_40 [4] |= (arr_19 [6] [14] [i_9]);
            arr_41 [i_0] [19] [i_9] = (106 | (((arr_33 [i_0]) ? 69 : (min(21, 4288267836)))));
        }
    }
    for (int i_10 = 1; i_10 < 20;i_10 += 1)
    {
        var_24 = arr_43 [i_10];

        /* vectorizable */
        for (int i_11 = 1; i_11 < 22;i_11 += 1)
        {
            var_25 = (arr_45 [i_10]);
            arr_47 [i_10] = 51;
            arr_48 [i_10] [22] [i_10] = var_1;
        }
    }
    var_26 = 3936348507;
    #pragma endscop
}
