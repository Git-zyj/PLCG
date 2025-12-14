/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167048
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_2;
    var_11 = var_1;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        var_12 += (arr_4 [i_0]);
                        arr_10 [i_0] [i_0] = (min(((((((arr_7 [i_0] [i_1] [i_3]) ? -1004206395 : 0))) ? var_5 : ((var_8 ? -1496610571430745744 : var_1)))), (((!(((1 ? (arr_0 [1]) : var_8))))))));
                    }
                }
            }
        }
        arr_11 [i_0] = (arr_0 [i_0]);
        var_13 = (min(var_13, (((!((min(((1 ? 1048575 : 1)), (-1 % 16)))))))));
        var_14 = (max(var_14, ((min((((var_3 <= (1 <= 1)))), (~4024230422))))));
    }
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        arr_15 [i_4] = ((((((!var_1) ? var_9 : ((-(arr_3 [i_4] [i_4])))))) == var_0));
        var_15 = (arr_5 [i_4] [11] [i_4]);
        var_16 = (arr_13 [i_4]);
    }
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        var_17 |= ((((min(6098092618598998448, -var_8))) + ((((min((arr_16 [i_5] [18]), var_2))) ? (!var_3) : ((var_8 ? (arr_18 [0]) : var_0))))));
        var_18 = (max(var_18, ((min(((((arr_16 [i_5] [13]) << (((arr_16 [i_5] [i_5]) - 10783699625292585037))))), (((var_7 ? var_9 : (!var_0)))))))));
        var_19 = (max(var_19, var_6));
        var_20 &= 1;
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        var_21 = 275482765;
        var_22 = (((arr_17 [i_6] [i_6]) ? (arr_17 [i_6] [i_6]) : (arr_17 [i_6] [i_6])));
    }
    #pragma endscop
}
