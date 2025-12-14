/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111768
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_13 = (max(var_13, (((((max(-23220, 4294967295))) ? (arr_0 [18]) : ((var_1 ? (arr_2 [i_0] [i_0]) : 65533)))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 24;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            var_14 = ((((!((max((arr_7 [i_4] [i_3] [i_0] [i_0]), (arr_0 [i_0])))))) ? (!65533) : (((max(((((arr_0 [i_0]) <= (arr_12 [21] [i_1] [i_0] [i_1] [i_0])))), (max((arr_12 [i_0] [i_2] [i_0] [i_3 + 1] [i_2]), var_2))))))));
                            var_15 = var_12;
                        }
                        var_16 = ((((min(65533, var_9))) || ((min(65534, var_4)))));
                        var_17 = (min(var_17, var_3));
                        arr_13 [i_0] [i_0] [i_0] [i_0] = 2;
                    }
                    var_18 |= 65528;
                }
            }
        }
        arr_14 [i_0] [i_0] = (min((arr_4 [i_0] [i_0]), var_8));
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            {
                var_19 = (max((((((max((arr_9 [i_5] [i_5] [i_5] [i_5]), (arr_8 [i_5] [i_5] [i_5] [i_5])))) > ((2 >> (((arr_6 [i_5]) - 138))))))), (max(((-(arr_16 [i_6]))), ((max(var_12, var_9)))))));
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    for (int i_8 = 4; i_8 < 17;i_8 += 1)
                    {
                        for (int i_9 = 3; i_9 < 15;i_9 += 1)
                        {
                            {
                                var_20 ^= ((((arr_5 [i_6] [i_6] [i_5]) | ((5 ? (arr_19 [i_8]) : (arr_0 [i_8]))))));
                                var_21 = (!-7870659413117512617);
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_10 = 1; i_10 < 15;i_10 += 1)
    {
        arr_30 [i_10] = var_11;
        var_22 = (~(arr_0 [4]));
    }
    var_23 = ((((var_5 != (max(var_5, 1)))) ? var_10 : (((((var_4 ? var_4 : var_2))) ? (~443230078912117258) : ((((var_0 + 2147483647) >> (var_9 - 2711852488))))))));
    #pragma endscop
}
