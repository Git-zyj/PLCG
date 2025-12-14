/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15375
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= (min(var_14, (((!(((var_15 ? var_14 : var_11))))))));
    var_17 = ((!((max((1 % 20041), var_8)))));
    var_18 = var_3;
    var_19 = (((min((max(-4196, var_14)), ((max(var_13, var_9))))) + (var_7 < var_3)));

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_20 = min((((arr_0 [i_0 - 1] [i_0 - 1]) ? var_3 : (arr_0 [i_0 + 2] [i_0 + 2]))), var_1);
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        arr_13 [i_0] [i_0] [i_0] [6] = max((((max(335522811, -8202636206340019068)) * ((max(-536870912, 536870899))))), (min((arr_2 [i_0] [i_0]), -8202636206340019086)));
                        var_21 = ((((((arr_4 [i_0 + 1] [i_0]) ? (max(var_15, -8202636206340019081)) : (1 - 8202636206340019068)))) ? (((~((-1171548320 ? -4217885074186039569 : 1))))) : (((arr_11 [i_0 + 2] [i_0] [i_0] [i_0 - 1]) ? (arr_10 [i_1] [i_1 + 2] [i_1 - 3] [i_0 + 1] [i_0]) : (arr_0 [i_0 + 1] [i_1 + 1])))));
                        var_22 = (max(((((((arr_5 [i_0 + 1] [i_1 + 1]) ? (arr_3 [i_0] [i_0] [15]) : (arr_4 [i_3] [i_0]))) >= 68584470))), (max((arr_5 [i_1 - 1] [i_1]), ((274877775872 ? var_9 : (arr_2 [i_1] [i_0])))))));
                    }
                    var_23 -= (max(((((((arr_6 [i_2] [i_2] [i_2] [i_0]) ? (arr_11 [16] [i_1] [i_1 + 1] [i_0]) : (arr_7 [i_0])))) || (((55915697 ? (arr_3 [9] [1] [9]) : -945423551))))), ((var_2 && (arr_3 [i_2] [i_1] [i_0])))));
                }
            }
        }
        var_24 = (min((((arr_8 [i_0]) - var_0)), (((arr_6 [i_0] [i_0] [i_0 - 1] [i_0]) ? (arr_8 [i_0]) : (arr_4 [i_0] [i_0])))));
    }
    #pragma endscop
}
