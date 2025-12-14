/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150096
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 888064977;
    var_17 = var_7;
    var_18 = ((min(var_15, var_3)));

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (((max((arr_1 [i_0] [i_0]), (max((arr_0 [7] [i_0]), -888064978)))) * (((!(arr_1 [6] [i_0]))))));
        var_19 += (((((((-2147483647 - 1) + 2147483647)) + 2147483647)) << (((max((!888064977), ((57 ? var_0 : var_5)))) - 32627))));
        arr_3 [4] |= (((arr_0 [i_0] [8]) << (((var_10 + 51) - 18))));
        var_20 = var_12;
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {
        var_21 = var_9;
        var_22 = (min(var_22, (((((min(var_9, 2644732673))) && 12)))));
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 8;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    {
                        arr_16 [i_1] [i_1] = (arr_8 [i_1]);
                        var_23 = (min((arr_12 [i_1] [i_1] [i_1] [i_1]), (((((arr_4 [i_3]) * (arr_8 [3]))) ^ (arr_7 [i_1] [i_1] [9])))));
                        var_24 = var_14;
                    }
                }
            }
        }
        arr_17 [i_1] [i_1] = (((((arr_4 [i_1]) > var_13)) ? ((((!(arr_9 [i_1] [i_1] [i_1] [i_1]))))) : (max(1, -8903943555771892987))));
        var_25 = 1;
    }
    var_26 = (max(var_26, (~var_13)));
    #pragma endscop
}
