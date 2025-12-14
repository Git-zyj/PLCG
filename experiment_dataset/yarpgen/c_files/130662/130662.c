/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130662
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 1738460110;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 21;i_2 += 1) /* same iter space */
                {
                    var_13 = (min(1738460110, (arr_2 [i_0])));
                    var_14 = (-((max((arr_1 [i_0 - 1]), var_9))));
                }
                for (int i_3 = 3; i_3 < 21;i_3 += 1) /* same iter space */
                {
                    arr_9 [i_0] [i_1] [i_1] = ((!((!(!1738460113)))));
                    var_15 -= 54133;
                }
                /* vectorizable */
                for (int i_4 = 3; i_4 < 21;i_4 += 1) /* same iter space */
                {
                    arr_14 [i_4] [i_4 - 1] [i_0] [i_0] = 0;
                    arr_15 [i_0] [i_1] [i_4] = arr_10 [i_1] [i_1] [i_1];
                    var_16 = (+-1738460111);
                }
                for (int i_5 = 2; i_5 < 19;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            {
                                var_17 = (arr_1 [i_0]);
                                arr_24 [13] [i_1] [13] [i_1] [i_1] [i_1] [13] &= ((~((((arr_23 [i_0] [i_0] [i_5] [i_6] [i_7]) >= (min(var_6, (arr_11 [i_0] [i_0] [i_0] [i_0]))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 19;i_9 += 1)
                        {
                            {
                                arr_29 [i_8] [i_8] [i_5] [i_8] [i_9] = (41426 << (var_7 - 62672));
                                var_18 = var_4;
                                var_19 = 62837;
                            }
                        }
                    }
                }
                var_20 &= (((!-1141811361) >> (1738460113 - 1738460091)));
                arr_30 [i_1] = (max((arr_23 [i_0] [i_0] [i_0] [i_1] [i_1]), ((min(10879, (arr_22 [i_0] [i_0] [i_1]))))));
            }
        }
    }

    /* vectorizable */
    for (int i_10 = 4; i_10 < 13;i_10 += 1)
    {
        var_21 = (((arr_26 [i_10 + 1]) == ((6144 ? 2034822582 : (arr_20 [i_10] [i_10] [i_10] [i_10] [i_10 + 2])))));
        arr_35 [i_10 - 2] = 64611;
        arr_36 [i_10 - 2] = (!1738460132);
    }
    #pragma endscop
}
