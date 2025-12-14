/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135918
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_10 = 3;

        for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
        {
            arr_5 [i_1] [i_1] = (max(-4, -4));
            arr_6 [i_1] [i_1] = ((((!((max(437961668972575171, 14))))) ? (min(777893996, 3)) : (!0)));
            arr_7 [8] [0] &= ((((~697640613) || ((min(6, 1))))) ? (min((min(3, 4815053083282992196)), 4573)) : (((4815053083282992196 ? 255 : (!-16)))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
        {
            var_11 = (17360921105027757792 >> ((127 ? 1 : 9037846485447703341)));
            var_12 = 689070600;
        }
    }
    var_13 = (((-689070613 + 2147483647) << (5871854187666935143 - 5871854187666935143)));
    var_14 = 2134262383;
    var_15 = ((1023 ? (min(var_5, var_5)) : ((max(var_3, (max(4815053083282992196, 5871854187666935143)))))));
    var_16 = (max((max(5590293948194697363, 1)), 56692));
    #pragma endscop
}
