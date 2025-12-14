/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165235
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            arr_4 [i_0] = (min((arr_3 [i_0]), ((~(arr_1 [i_0] [i_0])))));
            arr_5 [i_0] = (((((+(min((arr_3 [i_0]), 14454021970465968128))))) ? (min((arr_1 [i_1] [i_0]), (((arr_1 [i_0] [i_0]) | (arr_2 [i_0] [i_1]))))) : var_12));
            var_17 = (max((arr_3 [i_0]), (((((0 * (arr_3 [i_0])))) ? -11327 : (!1)))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_18 = (((-(arr_0 [i_0]))));
                            var_19 = (((((~((min((arr_14 [i_0] [i_0] [i_2] [i_4] [i_4]), (arr_9 [i_0] [i_1] [6]))))))) ? 11317 : ((~((max(var_15, 1)))))));
                            var_20 = (min((min((arr_3 [i_0]), (arr_3 [i_0]))), ((((~-11317) <= (arr_14 [i_0] [i_0] [i_2] [i_3] [i_2]))))));
                        }
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_21 = (min(((((arr_16 [i_0] [i_0]) || -1065904124))), (arr_14 [i_0] [i_0] [i_2] [i_0] [i_5])));
                            var_22 = 1;
                        }
                        var_23 = (min((arr_10 [i_0] [i_0] [i_2] [i_0]), 18446744073709551615));
                    }
                }
            }
        }
        for (int i_6 = 2; i_6 < 18;i_6 += 1)
        {
            var_24 = (!var_14);
            var_25 = (min(((((arr_7 [i_0] [i_0] [i_6] [i_6 - 1]) ? (arr_16 [i_6] [i_0]) : var_6))), (min((!29), (arr_6 [i_0] [i_0] [i_0] [i_0])))));
            var_26 = (((arr_19 [i_6 + 1] [i_6]) >> ((((min(4294967290, var_10)) == -118)))));
            var_27 = (min((arr_1 [i_0] [i_0]), var_4));

            for (int i_7 = 1; i_7 < 18;i_7 += 1)
            {

                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    var_28 = 1761216104;
                    arr_25 [i_0] [i_6] [i_0] [i_8] = 1;

                    for (int i_9 = 0; i_9 < 19;i_9 += 1)
                    {
                        arr_28 [i_0] [i_7 + 1] [i_7 + 1] = ((min(11310, ((min((arr_22 [i_6] [i_0]), var_15))))));
                        var_29 = ((-(arr_18 [5] [1] [i_0])));
                    }
                    /* vectorizable */
                    for (int i_10 = 1; i_10 < 17;i_10 += 1)
                    {
                        arr_31 [i_0] [i_6] [i_0] [i_0] [i_8] [i_0] = 0;
                        arr_32 [i_0] [i_6 - 2] [i_7] [i_6 - 2] [i_0] = -10207;
                    }
                    arr_33 [i_0] [i_0] [i_0] [i_0] = (arr_13 [i_0] [i_0]);
                }
                for (int i_11 = 3; i_11 < 18;i_11 += 1)
                {
                    var_30 = (min(((min((arr_30 [i_6 - 1] [i_7 - 1] [i_7 + 1] [i_0] [i_11 - 2]), (arr_30 [i_0] [i_0] [i_7 + 1] [i_0] [i_11 - 3])))), (((arr_30 [i_6] [i_7 + 1] [i_7 - 1] [i_0] [i_11 - 2]) ? (arr_30 [i_0] [i_7 + 1] [i_7 + 1] [i_0] [i_11 - 1]) : 1))));
                    arr_36 [i_0] [i_11] [i_0] [i_0] [i_0] = (min(4294967283, 9004101329296105255));
                    var_31 = var_15;
                }
                var_32 = 1;
                arr_37 [i_0] [i_6] [i_0] = (min(((((min((arr_20 [i_0] [i_0]), var_5))) ? (min(var_3, 18010000462970880)) : 1065904142)), var_12));
            }
        }
        /* vectorizable */
        for (int i_12 = 2; i_12 < 17;i_12 += 1)
        {
            var_33 = ((arr_38 [i_0] [i_12 + 1] [i_0]) + (arr_38 [i_12] [i_12 + 1] [i_12 + 1]));
            arr_42 [i_0] = ((1 ? (arr_13 [i_0] [i_12 - 2]) : (arr_19 [12] [i_12])));
            var_34 = var_12;
        }
        var_35 = (min(var_4, var_9));
        arr_43 [i_0] = ((((-(!var_7))) >> (((!(arr_20 [i_0] [i_0]))))));
    }
    var_36 = ((142 ? var_14 : var_5));
    var_37 = (!var_3);
    #pragma endscop
}
