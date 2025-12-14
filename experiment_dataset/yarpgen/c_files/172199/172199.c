/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172199
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_15 = (arr_0 [i_0] [i_0]);
        var_16 ^= (((arr_2 [i_0]) + ((((arr_2 [i_0]) <= var_8)))));
        var_17 = (max(var_17, -var_3));

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            arr_7 [i_0] [i_0] [i_0] = ((arr_4 [i_1] [i_0] [i_0]) ? (arr_4 [i_0] [i_1] [i_1]) : (arr_4 [i_0] [i_1] [i_1]));
            var_18 = (arr_6 [i_0] [i_1]);
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        var_19 = (~var_8);
                        var_20 += var_6;
                        var_21 = var_8;
                        var_22 = var_1;
                    }
                }
            }
            var_23 = 219792339;
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 1; i_4 < 14;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 16;i_6 += 1)
            {
                {
                    var_24 = ((126 ? ((min((var_0 || var_13), ((~(arr_9 [i_4] [i_4])))))) : (((arr_17 [i_4] [i_5] [i_6]) ? (arr_6 [i_4 + 1] [i_6]) : var_6))));
                    arr_20 [i_4] [i_4] [i_4] [i_4] = max(-495, -51);
                    arr_21 [0] [i_5] [0] &= (((((3652767261 * 3865258785) != var_3))) >> ((((+((var_11 ? (arr_3 [i_4] [i_4]) : var_0)))) + 1238130595683240078)));
                    var_25 = (max(var_25, ((min((((!(((16829126745178842951 ^ (arr_15 [i_4] [2]))))))), (arr_13 [i_5]))))));
                    arr_22 [i_4] [i_6] = ((((-var_12 ? var_4 : var_4))) ? -1071650185 : ((-1071650185 ? 6807844606205939256 : 429708509)));
                }
            }
        }
    }
    #pragma endscop
}
