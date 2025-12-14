/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146857
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_8;
    var_21 *= ((((max(var_4, var_2)) << (((-2025633140 - var_2) - 1150004496)))));
    var_22 = var_6;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = (((!1224557831) ? (arr_2 [i_0]) : var_7));
        var_23 = var_0;
        var_24 = ((((((!(arr_1 [0] [i_0]))))) - (((arr_2 [i_0]) % (arr_2 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_25 = (((var_11 % (arr_4 [i_1]))));
        var_26 ^= (((min((arr_6 [i_1]), (arr_7 [i_1]))) ^ (((min(0, 14763))))));
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
    {
        var_27 = ((1 ? 1 : -1959965826));
        var_28 = (arr_11 [i_2] [i_2]);
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 18;i_5 += 1)
                {
                    {
                        var_29 ^= (((arr_15 [i_4] [12] [i_3] [i_4]) ? (((min(0, 1)))) : var_3));
                        var_30 = (max(var_30, ((min(1, (((arr_14 [i_3 + 2] [i_3 + 2] [i_5 + 2] [i_5 + 2]) ? var_5 : (arr_11 [i_3 - 1] [i_3 - 1]))))))));
                    }
                }
            }
        }
    }
    var_31 = var_0;
    #pragma endscop
}
