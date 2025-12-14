/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184094
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= var_4;
    var_21 = var_12;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_22 = ((arr_1 [i_0]) + (arr_1 [i_0]));

        for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
        {
            var_23 = (min(var_23, (((+(((arr_3 [i_0] [0] [i_0]) + (arr_2 [19] [i_1]))))))));
            arr_5 [i_0] [i_1] = (((((-(((arr_4 [i_0] [i_0] [1]) ? 35 : (arr_0 [i_0] [i_1])))))) < ((~((var_19 ? (arr_4 [i_0] [i_1] [i_1]) : var_10))))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
        {

            for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
            {
                var_24 = (arr_2 [i_3] [i_3]);

                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {

                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        var_25 = ((((arr_8 [i_0] [i_0]) << (5588490191510455899 - 5588490191510455891))));
                        var_26 = ((-(arr_10 [i_4])));
                        var_27 = (!2062870735);
                    }

                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        var_28 = (arr_0 [i_3] [i_6]);
                        var_29 = (arr_12 [i_0] [3] [i_3] [i_4]);
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        var_30 = (((arr_10 [i_0]) < (arr_10 [i_0])));
                        var_31 = ((arr_0 [i_4] [i_2]) || var_8);
                        arr_22 [i_0] [i_2] [i_3] [i_4] [i_7] = (((arr_19 [i_0] [i_2] [i_3] [i_4] [i_7] [i_7]) - 32748));
                    }
                    var_32 = (arr_7 [i_2] [i_3]);
                    arr_23 [1] [i_0] [1] [i_2] [1] = (arr_3 [i_0] [i_0] [i_0]);
                }
            }
            for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
            {
                arr_27 [i_0] [i_2] [i_8] = 3594048970;
                arr_28 [i_0] [i_8] [i_0] [i_8] = ((!(arr_7 [i_0] [i_8])));
                var_33 *= 5588490191510455900;
            }
            for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
            {
                arr_31 [i_0] [i_9] = (((arr_6 [i_0] [i_9]) - (arr_6 [i_0] [i_9])));
                var_34 = (((arr_10 [i_2]) && (arr_10 [i_0])));
            }
            var_35 = (max(var_35, (!var_3)));
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 25;i_10 += 1) /* same iter space */
        {
            arr_34 [i_0] [i_0] = (((arr_29 [i_10] [7]) ^ (arr_29 [i_0] [i_10])));
            var_36 = (((arr_4 [i_0] [i_0] [9]) < var_11));
            var_37 = (arr_13 [i_0] [i_0] [i_10] [i_10]);
        }
    }
    #pragma endscop
}
