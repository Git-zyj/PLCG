/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149336
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= var_0;
    var_13 = ((17713717188892486077 ? var_3 : ((((((min(var_11, var_2)))) < ((var_11 ? 192 : 733026884817065536)))))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = ((63 ? ((-62 ? var_7 : (arr_0 [i_0] [i_0]))) : (((~(arr_0 [i_0] [i_0 - 1]))))));
        arr_3 [i_0] = (((733026884817065538 <= 196) >= (arr_1 [i_0])));
        var_14 = (17713717188892486096 || 39237);
        var_15 -= (arr_1 [14]);
    }
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        for (int i_2 = 3; i_2 < 20;i_2 += 1)
        {
            {

                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    var_16 ^= (min((((0 << (64 - 64)))), (((arr_9 [2]) ? (arr_9 [18]) : (arr_9 [2])))));
                    var_17 = (min(var_17, ((min(((min((arr_11 [i_1 - 1] [i_1 - 1] [i_2 + 2] [i_3]), (arr_11 [i_1 - 1] [i_2 - 1] [22] [i_3])))), (min(((1 ? var_10 : var_3)), ((((arr_6 [i_2]) * 38))))))))));
                }
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    var_18 -= (min((((18446744073709551615 ? (arr_9 [0]) : (arr_9 [20])))), (min((min(16826506684934768630, (arr_4 [i_1 - 1]))), ((min(2147483639, var_4)))))));
                    arr_15 [i_1] [i_2] [18] = (arr_11 [i_1] [i_1 - 1] [i_4] [i_4]);
                }
                for (int i_5 = 2; i_5 < 22;i_5 += 1)
                {
                    arr_19 [13] [i_1] [i_1] [i_5 - 1] = 25;
                    var_19 = ((!((min((min((arr_10 [i_1 - 1] [i_5] [i_5] [i_5]), (arr_8 [1] [i_2 - 3] [i_5]))), 60)))));
                    var_20 = ((~((((arr_13 [i_1 - 1]) > var_1)))));
                    var_21 = (min(((!(arr_7 [i_2 - 2] [i_2] [i_5]))), ((-0 < (arr_17 [5] [5] [i_5] [12])))));
                    arr_20 [i_1 - 1] [i_1 - 1] [i_1] [8] = (min((((!(((3158362046160620746 ? var_10 : 25)))))), (41283 / 1)));
                }
                /* LoopNest 2 */
                for (int i_6 = 3; i_6 < 21;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 22;i_7 += 1)
                    {
                        {
                            arr_25 [i_1 - 1] [13] [i_1 - 1] [i_1 - 1] [i_1] [7] = min(2578732215, 2578732228);
                            arr_26 [i_1 - 1] [5] [i_1] [i_7 - 2] = 29;
                        }
                    }
                }
            }
        }
    }
    var_22 = (~1);
    #pragma endscop
}
