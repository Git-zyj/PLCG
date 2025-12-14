/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115699
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= -37;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 = (!((max(-21212, ((-(arr_1 [1] [i_1])))))));
                arr_4 [i_0] = (max((arr_1 [i_0] [9]), ((~(6937586327552667269 | 5925551070554309272)))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_21 = (((arr_8 [9] [i_3 - 1] [i_0] [1] [i_2 - 1] [i_0]) != (arr_2 [i_0] [i_2 - 2] [i_2 - 2])));
                            arr_10 [1] [i_1] [1] [i_3] [7] [i_0] = (((~-32757) >> (((max((arr_9 [i_3 - 1] [i_3] [i_3 - 1] [i_3]), 7718473485975477351)) - 11828839315538456690))));
                            var_22 = (arr_2 [i_3] [i_3] [i_3]);
                        }
                    }
                }

                /* vectorizable */
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    var_23 += 11509157746156884347;
                    var_24 = (arr_7 [i_0]);
                    var_25 += ((!(9300465406830596221 + -60)));
                    arr_13 [i_0] [i_0] [13] = (arr_5 [i_1]);
                }
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    var_26 = max(((((min(-25, -25))))), (8191 | 9300465406830596242));

                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        var_27 = (max(var_27, (arr_1 [3] [5])));
                        var_28 *= ((-(((arr_1 [i_5] [i_1]) - (arr_1 [i_5] [i_6])))));
                        arr_19 [2] = (((min(215, 11509157746156884347)) ^ 9146278666878955395));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        var_29 = (min(var_29, (arr_1 [i_0] [i_5])));
                        var_30 = (min(var_30, (arr_21 [2] [4] [4] [4] [1])));
                        var_31 |= (((arr_5 [i_1]) ^ (arr_5 [1])));

                        for (int i_8 = 3; i_8 < 14;i_8 += 1) /* same iter space */
                        {
                            var_32 += ((!(arr_21 [i_8] [i_8] [i_8] [6] [i_8 - 1])));
                            var_33 += (arr_8 [14] [12] [13] [i_5] [14] [i_8]);
                        }
                        for (int i_9 = 3; i_9 < 14;i_9 += 1) /* same iter space */
                        {
                            arr_29 [11] [12] [i_5] [i_7] [i_9] = (((arr_27 [i_9] [i_9] [i_9 - 2] [i_9 - 2] [i_9 - 2]) + (arr_27 [7] [7] [i_9 - 3] [i_9 - 3] [i_9 - 3])));
                            var_34 = (min(var_34, ((((arr_18 [i_9 + 1]) * (arr_22 [i_0] [i_0] [i_7] [1] [i_9 - 1]))))));
                        }
                        var_35 = ((~(arr_6 [i_0] [5] [i_5])));
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 15;i_10 += 1)
                    {
                        var_36 &= ((((arr_11 [i_0] [i_1] [i_5] [i_1]) + (arr_18 [i_1]))));
                        var_37 -= (((arr_22 [i_0] [i_0] [6] [i_0] [i_0]) < (arr_9 [i_0] [i_1] [i_0] [i_10])));
                        var_38 = arr_23 [i_0] [i_1];
                    }
                }
            }
        }
    }
    var_39 = var_18;
    #pragma endscop
}
