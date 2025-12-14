/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148970
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 18;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] |= (((arr_0 [i_0 - 3]) < 52));
        var_17 = (max(var_17, ((max((((max((arr_1 [i_0]), var_1)))), -1)))));
    }
    for (int i_1 = 4; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_18 = (min(var_18, (arr_4 [10] [i_1])));
        var_19 = ((!(((max((arr_4 [11] [i_1 + 1]), 17523466567680))))));
    }

    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {

        for (int i_3 = 3; i_3 < 14;i_3 += 1)
        {
            var_20 = (arr_8 [i_2]);
            var_21 = (arr_0 [i_2]);
            var_22 = ((min(((254 ? (arr_9 [7] [i_3] [i_3 - 2]) : (arr_0 [i_3]))), (~46))));
        }
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            var_23 = 0;
            arr_15 [i_2] [i_4] = ((((min((arr_10 [i_2] [i_4] [i_4]), (arr_13 [i_2] [i_4])))) ? 7131354373194988447 : (((-5099552319759225860 ? 58850 : 2540408668)))));
        }
        arr_16 [i_2] = (arr_3 [1]);
        /* LoopNest 2 */
        for (int i_5 = 4; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 12;i_6 += 1)
            {
                {
                    var_24 = (61247 + 0);
                    var_25 ^= var_5;
                    arr_23 [i_2] [i_5] = (max(var_9, 57));
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 20;i_7 += 1)
    {
        var_26 = ((!((max((((~(arr_25 [i_7])))), -6768046478657261729)))));
        var_27 = 250;
    }
    var_28 = var_15;
    var_29 = (max(var_29, var_1));
    #pragma endscop
}
