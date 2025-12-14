/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113397
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((!(((((max(var_5, var_10))) ? (min(var_7, var_5)) : ((min(var_9, 2989169887))))))));
    var_14 = (31 ^ 131040);
    var_15 = var_12;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {

            /* vectorizable */
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        {
                            arr_17 [i_0] [i_1] [i_1] [i_2] [17] [i_1] = var_12;
                            var_16 = (min(var_16, (arr_11 [i_0])));
                        }
                    }
                }
                var_17 = (arr_3 [i_2]);
            }
            arr_18 [i_1] [i_0] = (min((arr_16 [i_1] [i_1] [i_0] [7] [0] [i_0]), ((var_0 ? (arr_11 [i_0]) : 131040))));
        }
        var_18 = (min(var_18, (((!((min((arr_7 [i_0] [i_0]), var_6))))))));
        var_19 |= ((!var_8) ? ((((!(arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))) : (((arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [14] [i_0]) * (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));

        for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
        {
            arr_21 [i_5] = ((!((!(arr_20 [i_5] [i_5] [i_0])))));
            arr_22 [i_0] [i_5] = ((!(!var_2)));
            var_20 = var_6;
        }
        for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
        {

            for (int i_7 = 1; i_7 < 16;i_7 += 1)
            {
                arr_28 [i_7] [i_6] [i_6] [i_7] = (((min(var_5, (((arr_0 [i_0]) ? var_6 : var_2)))) < var_0));
                var_21 = (!((max((arr_12 [i_7 - 1]), (4294836241 ^ var_8)))));
                var_22 = (!4294836256);
            }
            arr_29 [i_0] [i_0] |= (arr_6 [10]);
            arr_30 [i_0] = var_5;
            var_23 &= ((((min((arr_10 [i_0] [3] [i_0]), (arr_10 [1] [16] [i_6])))) < (!-6179270436163594916)));
            arr_31 [0] = ((!(((var_1 ? 4294836256 : (arr_3 [i_6]))))));
        }
        for (int i_8 = 0; i_8 < 18;i_8 += 1) /* same iter space */
        {
            arr_35 [i_0] [i_8] [11] = var_1;
            arr_36 [i_8] [i_0] |= (arr_32 [i_8] [16] [i_0]);

            for (int i_9 = 0; i_9 < 18;i_9 += 1)
            {
                arr_41 [i_0] &= (((((var_5 ? ((var_8 ? var_9 : (arr_2 [i_0] [i_8]))) : (((max(var_0, (arr_12 [17])))))))) ? (((!(!1408294780)))) : var_10));
                arr_42 [i_9] [i_8] [0] = ((!(!608817618)));
            }
        }
    }
    var_24 = 1305797408;
    #pragma endscop
}
