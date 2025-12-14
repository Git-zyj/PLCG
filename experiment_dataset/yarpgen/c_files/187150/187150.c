/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187150
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_16 ? ((max(var_12, (max(var_8, var_16))))) : (max(((max(9494, var_7))), ((var_10 ? var_7 : var_15))))));

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_18 += (((max(-13936988682276244372, ((min(-1462290476, (arr_0 [0] [i_0 + 1])))))) == ((((min(57549, var_6)))))));

        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_1] [i_3] = var_1;
                        var_19 = (max(var_19, ((((((arr_8 [i_0] [18] [i_2] [i_0]) || var_2)) ? (min(var_7, (arr_1 [i_2] [i_2]))) : 1360673277)))));
                    }
                }
            }
            var_20 = (max(var_20, 32553));
        }
        for (int i_4 = 4; i_4 < 22;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 23;i_6 += 1)
                {
                    {
                        var_21 ^= var_16;
                        arr_21 [i_6] [i_0] [18] [i_6 - 1] = (arr_14 [7] [7] [i_5]);
                        var_22 = (max(var_22, var_15));
                        var_23 = var_11;
                        arr_22 [i_4] [i_4] [i_5] [i_0] = (min((((arr_1 [i_0] [i_4]) ? var_0 : (arr_1 [i_0] [i_4]))), (((((max(var_12, var_16))) ? ((~(arr_9 [8] [i_4 - 2] [i_5] [i_6 - 2]))) : ((max(4652, var_1))))))));
                    }
                }
            }
            var_24 = 48101;
        }
        for (int i_7 = 1; i_7 < 23;i_7 += 1)
        {
            arr_25 [7] [i_0] [i_0] = (arr_9 [i_7 + 1] [i_7] [1] [i_0]);
            var_25 = -1462290451;
            var_26 = ((!(((4 ? ((var_16 ? (arr_15 [i_0] [i_0] [i_7] [i_0]) : var_10)) : (min(var_2, var_3)))))));
            /* LoopNest 2 */
            for (int i_8 = 2; i_8 < 22;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 22;i_9 += 1)
                {
                    {
                        var_27 = ((((((var_4 ? var_10 : 0)) != (arr_31 [i_0 - 1] [22] [i_0] [i_0]))) ? ((var_0 >> (((((arr_31 [i_9] [16] [i_0] [i_0]) ? (arr_9 [14] [i_8 - 1] [1] [i_8 - 1]) : -121)) + 137)))) : var_4));
                        arr_33 [i_0] = var_2;
                    }
                }
            }
        }
    }
    var_28 = (max(var_5, var_15));
    #pragma endscop
}
