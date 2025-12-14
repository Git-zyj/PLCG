/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187529
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((7793596080437015261 > (((((-13111 ? 1973976312141332383 : -6851606941743527341))) ? (max(var_4, 0)) : (min(var_4, 7797280999470420014))))));
    var_21 = var_15;
    var_22 ^= (!-var_10);

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_23 &= (arr_1 [8]);
        arr_4 [i_0] = min((arr_2 [i_0] [2]), (arr_3 [i_0]));
        var_24 = -98;
        var_25 = (((((((9119 ? -4507608351421847343 : var_1)) ^ (((arr_2 [4] [i_0]) / 28672))))) ? ((0 ? (arr_3 [i_0]) : ((6851606941743527341 ? 7793596080437015261 : (arr_0 [i_0] [i_0]))))) : (((((arr_3 [i_0]) || (arr_3 [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_26 = ((((((arr_5 [i_1]) ? ((max(-28672, 315095145))) : (min(98, -7077310698326969726))))) ? (((~(((-818378596 > (arr_6 [i_1]))))))) : (arr_6 [i_1])));
        /* LoopNest 2 */
        for (int i_2 = 4; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                {
                    var_27 = min((arr_10 [i_1] [i_2 - 4] [i_3] [i_3]), (max((arr_8 [i_3]), 0)));

                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        var_28 = (-2147483647 - 1);
                        arr_14 [i_1] [i_2] [i_1] [i_2] = ((((~3544996502414899475) ? ((var_3 ? (arr_9 [i_3] [i_4]) : (arr_9 [i_1] [i_1]))) : (arr_9 [23] [23]))));
                    }
                    var_29 = (arr_11 [i_3] [i_2] [i_1]);
                    arr_15 [i_1] [i_2] [i_3] = ((((min(((-115 ? var_18 : -31238)), (min((arr_11 [i_1] [i_2 - 4] [i_3]), (arr_6 [i_2])))))) ? (min((arr_5 [i_2 + 3]), ((min(818378596, 0))))) : ((((((arr_12 [i_2] [i_2] [i_3]) + 0))) + (arr_5 [i_1])))));
                }
            }
        }
        arr_16 [i_1] = (max((((arr_6 [i_1]) / (arr_6 [i_1]))), (arr_6 [i_1])));
        arr_17 [i_1] = (max((((~((9112793644123322041 ? (arr_10 [5] [i_1] [i_1] [5]) : (arr_13 [i_1] [16] [i_1])))))), (((arr_8 [i_1]) | (arr_12 [22] [i_1] [22])))));
    }
    #pragma endscop
}
