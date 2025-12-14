/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169369
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_10 = (max(var_10, (((-((((min(var_5, var_8))) ? (arr_1 [i_0]) : ((var_4 | (arr_1 [i_0 - 1]))))))))));
        arr_3 [i_0] = ((-((((arr_1 [i_0]) <= var_4)))));
    }
    var_11 = (min(var_5, ((-var_3 ? ((min(var_4, var_9))) : var_6))));
    var_12 *= ((+((var_6 ? (var_8 || var_0) : var_1))));
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        for (int i_2 = 3; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
                    {
                        var_13 = (min(var_13, (((arr_8 [0] [i_2] [i_1]) ? var_9 : 8064))));
                        arr_14 [i_4] [4] [2] [i_4] |= (((arr_8 [i_1] [i_2 - 2] [i_1]) || var_3));
                        var_14 = ((-(arr_5 [i_2 + 1])));
                    }
                    for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
                    {
                        var_15 = ((!(var_3 || -8047)));
                        var_16 = var_2;
                    }
                    var_17 = (max(var_17, 255));
                }
            }
        }
    }
    #pragma endscop
}
