/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171982
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (var_16 | var_8);

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            arr_5 [i_0] [i_1] = ((max((arr_0 [i_1]), -2029521630)));
            var_21 = max(((max((max(var_0, -20667)), (arr_4 [i_0] [i_1] [i_1])))), (~2199023255551));
        }
        for (int i_2 = 1; i_2 < 23;i_2 += 1)
        {
            var_22 = ((var_19 >= (max((arr_4 [i_0] [i_2] [7]), var_10))));
            arr_9 [i_0] [19] = (((-(arr_4 [i_2 - 1] [i_2 + 2] [i_2 - 1]))));
            var_23 = -22;
            arr_10 [i_0] [i_2] [i_2] = ((!((max(116792327, -1592450662)))));
        }
        var_24 = ((!(!20682)));
        arr_11 [i_0] |= (max((arr_6 [i_0] [i_0] [i_0]), 4178174992));
        var_25 ^= (max((max(4178174968, ((var_2 ? 20667 : 18446744073709551603)))), ((max((arr_4 [i_0] [i_0] [i_0]), (arr_4 [i_0] [i_0] [i_0]))))));
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 15;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                {
                    var_26 = (var_5 >> (((arr_16 [i_5]) - 2385689115)));
                    var_27 ^= (-20677 ? 313912841 : (arr_0 [i_3 - 2]));
                }
            }
        }
        var_28 = ((!(arr_0 [i_3 + 1])));
        arr_21 [i_3] = (arr_14 [i_3] [i_3 - 2]);
        arr_22 [i_3] [i_3] = ((!(arr_1 [i_3 + 1])));
        arr_23 [i_3] [i_3] = ((!(arr_4 [i_3 + 3] [i_3 - 1] [i_3])));
    }
    var_29 = var_16;
    var_30 = max(var_12, ((20682 ? ((-1266911874 ? 11881045772563982213 : 13114)) : var_15)));
    var_31 = (66846720 ? var_5 : var_15);
    #pragma endscop
}
