/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116139
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((max((min(var_0, 5612005687703824447)), (var_8 && -25))) % (((-(var_4 / var_6))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_1 [i_0]) ? (((arr_1 [i_0]) ? 32753 : 19)) : 37));
        arr_3 [i_0] [6] &= (74 > 3531823559);
        var_12 = (((arr_1 [i_0]) + var_8));
    }
    var_13 = (max(var_13, var_0));

    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_14 = (-6590024441148698724 >= 236);
        var_15 = (max(var_15, (((((var_3 || 0) ? (((arr_4 [i_1] [i_1]) * -112)) : 21)) * (((((var_9 | (arr_5 [i_1]))))))))));
        var_16 = (max(var_16, var_8));
        var_17 = (((((((163 ? 18446744073709551595 : -20894)) > (((-3 / (arr_5 [10]))))))) != var_2));
        /* LoopNest 3 */
        for (int i_2 = 3; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    {

                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            arr_17 [i_1] [i_2] [i_5] [i_4] [i_5] |= (arr_16 [i_1] [i_2] [i_3] [12] [i_5]);
                            var_18 = ((((((max(1, var_2))) ? (~1073741824) : (var_1 - 15))) >= ((((((-2147483647 - 1) ^ 1))) ? -2003709641 : 0))));
                            arr_18 [i_2] [i_2] = 120;
                            arr_19 [i_1] [i_4] [i_3] [i_2] [i_5] = arr_4 [i_3] [i_3];
                        }
                        var_19 += 127;
                    }
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
    {
        var_20 = (min(var_20, ((((((var_8 * (~var_8)))) ? ((63 ? -1 : 224)) : (max(((max(1, -17))), ((11 ? var_3 : (arr_16 [i_6] [i_6] [i_6] [i_6] [14]))))))))));
        var_21 = (-((((((arr_5 [i_6]) ? (arr_21 [10] [i_6]) : var_4))) ? (arr_15 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]) : (arr_11 [i_6] [i_6]))));
    }
    #pragma endscop
}
