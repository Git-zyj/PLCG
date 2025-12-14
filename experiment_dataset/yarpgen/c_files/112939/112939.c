/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112939
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_11;

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0 - 1] = ((+(((!4294967295) ? (((((arr_1 [i_0]) > (arr_1 [i_0]))))) : (arr_0 [i_0])))));
        var_15 = (arr_1 [16]);
        var_16 = ((-(((((-(arr_1 [i_0])))) ? (((arr_1 [i_0]) ? var_1 : (arr_0 [i_0]))) : (arr_1 [i_0 + 1])))));
        var_17 = ((!(((-11369 ? -1216841436 : (((!(arr_0 [i_0])))))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = ((((arr_5 [2]) ? var_4 : (arr_1 [i_1]))));

        for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
        {
            var_18 = ((arr_8 [i_1] [i_1] [i_1]) ? (arr_8 [i_1] [i_1] [i_1]) : var_3);
            arr_10 [i_1] [i_1] = ((var_2 ? (((var_9 ? (arr_7 [i_1] [i_1] [i_1]) : var_4))) : (((arr_8 [i_2] [i_2] [i_2]) ? (arr_3 [i_1]) : (arr_0 [i_1])))));
            arr_11 [i_2] = ((arr_3 [i_2]) ? (arr_3 [i_2]) : (arr_3 [i_1]));
        }
        for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
        {
            var_19 = (arr_3 [i_1]);

            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                arr_19 [i_3] [i_3] [i_3] [i_4] = ((36410 ? -1108339514 : 19437));
                var_20 = (min(var_20, (((-(arr_9 [i_1] [i_1] [i_1]))))));
                var_21 = (min(var_21, ((((arr_14 [i_3]) ? var_1 : (arr_14 [i_1]))))));
            }
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {

                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    var_22 = (((arr_17 [i_1]) ? -var_13 : (!var_1)));
                    var_23 *= (((arr_14 [i_3]) ? (arr_14 [i_1]) : (arr_14 [i_5])));
                    var_24 = ((-(((!(arr_14 [i_1]))))));
                }
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    var_25 &= (var_13 ? var_0 : (arr_0 [i_1]));

                    for (int i_8 = 2; i_8 < 13;i_8 += 1)
                    {
                        arr_30 [i_1] [i_1] [i_1] [i_1] [i_5] [i_5] [i_1] = ((~(arr_26 [i_8] [i_8 + 1] [i_8 + 1] [i_8] [i_8 - 2])));
                        var_26 += -var_13;
                        var_27 = (min(var_27, ((((arr_17 [i_8 + 1]) ? (arr_4 [i_8 + 1] [i_8 - 2]) : (arr_17 [i_8 - 2]))))));
                    }
                    arr_31 [i_1] [i_1] [i_5] [0] [i_7] = (var_8 ? (((var_1 ? (arr_9 [i_7] [i_7] [i_7]) : (arr_26 [i_1] [i_1] [i_1] [i_1] [i_1])))) : (arr_0 [i_1]));
                }
                var_28 = ((~(arr_20 [i_1] [i_1] [i_5])));
                var_29 = ((((((arr_23 [i_1] [i_1] [i_1]) ? (arr_12 [i_1] [i_1]) : (arr_14 [7])))) ? (arr_27 [i_1] [i_1] [i_5] [i_5]) : ((var_6 ? var_8 : var_2))));
                arr_32 [i_5] = 428128504093571664;
            }
            var_30 = (((arr_1 [i_1]) ? (arr_1 [i_1]) : (arr_1 [i_1])));
            var_31 ^= (((arr_13 [i_1] [i_1]) ? (arr_20 [i_1] [i_1] [i_3]) : var_9));
            arr_33 [i_1] [i_3] [i_1] &= ((!((((arr_14 [i_3]) ? (arr_20 [i_3] [i_1] [i_3]) : (arr_7 [i_1] [i_1] [i_1]))))));
        }
        var_32 = ((arr_5 [i_1]) ? (arr_8 [i_1] [i_1] [i_1]) : (arr_21 [i_1] [i_1] [i_1] [i_1]));
    }
    var_33 = var_10;
    var_34 = var_13;
    #pragma endscop
}
