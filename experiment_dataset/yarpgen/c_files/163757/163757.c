/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163757
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= ((((((~var_4) ? var_9 : -var_13))) ? (max(var_1, (max(22, 140720308486144)))) : ((((!var_10) ? (!1737960123) : -1737960123)))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 22;i_2 += 1)
                {
                    arr_9 [i_0] [i_1] = ((-((1737960123 ? 0 : 1))));

                    /* vectorizable */
                    for (int i_3 = 3; i_3 < 23;i_3 += 1)
                    {
                        var_15 = (-(arr_4 [i_3 - 1] [i_2 - 3]));
                        arr_13 [i_1] [i_1] [i_2] [i_1] [i_0] [i_1] = (((arr_10 [i_0] [i_0] [i_0] [i_0 + 2]) <= 1));
                        arr_14 [i_1] [i_1] [i_1] [i_0] [i_1] = ((((((arr_4 [i_0] [i_0]) ? (arr_6 [i_1] [i_1]) : 1339583436108885826))) ? 1635314702 : (arr_6 [i_1] [i_1])));
                    }
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        arr_17 [i_1] [i_2] [i_1] = (((~(arr_5 [i_0 - 1] [i_2]))));
                        var_16 ^= (-(max((arr_1 [i_0 - 2] [i_2 - 1]), (arr_1 [i_0 - 2] [i_2 - 2]))));
                    }
                }
                /* vectorizable */
                for (int i_5 = 1; i_5 < 24;i_5 += 1)
                {
                    var_17 = ((-(arr_18 [i_0 - 1] [i_0 - 1] [5])));
                    arr_21 [i_1] [i_0] [10] [i_1] = ((1 ? 14865775730802602168 : 17928937223627969100));
                }
                var_18 -= (max(((max((((arr_3 [7]) / 120)), (((9738752803594476816 >= (arr_15 [i_1] [1] [6] [1]))))))), (min(1, (max(0, 4839968071396599201))))));
            }
        }
    }

    /* vectorizable */
    for (int i_6 = 1; i_6 < 21;i_6 += 1)
    {
        arr_24 [i_6] = 14865775730802602168;
        arr_25 [i_6] = -120;

        for (int i_7 = 3; i_7 < 22;i_7 += 1)
        {
            arr_29 [22] [22] |= ((120 ? 602285220 : -22));
            arr_30 [i_7] [i_7] [i_6] = (arr_18 [i_6] [i_6] [i_6]);
        }
    }
    var_19 = (max(var_19, ((max((min((min(17784797346191138814, 1339583436108885826)), 10449439813557694749)), ((max((~var_2), var_13))))))));
    #pragma endscop
}
