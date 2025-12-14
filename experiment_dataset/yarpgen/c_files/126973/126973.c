/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126973
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = max(793539817, ((((var_5 | 12) < ((3755782828 ? 19 : 1))))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_15 ^= ((1 >= ((((arr_1 [i_0]) && var_1)))));
            var_16 = ((((1601811199047876081 - ((((arr_2 [i_0]) - 1))))) << (((arr_2 [i_1]) - 722837648))));
            var_17 = (max(var_17, (((16123173454594986662 & (((((var_6 && 93) && ((((-8144 + 2147483647) >> (65535 - 65531)))))))))))));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 18;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        {
                            var_18 = ((((6750117126923857752 + ((((arr_4 [i_2]) | -1))))) / (((((var_10 && (arr_7 [16]))) ? (-1601811199047876067 || 1) : (arr_6 [i_0] [1] [i_3 + 1]))))));
                            arr_12 [i_4] [i_4] [i_1] [i_2] [i_3] [i_4] [i_4] = ((((((arr_10 [i_4] [i_4] [i_4] [i_3 + 1] [10] [i_3 + 1] [i_4]) != (arr_5 [i_0]))))) >= (max((((417299037 ? (arr_7 [i_2]) : (arr_0 [i_2])))), 4237715055)));
                            var_19 = (min(var_19, (((((1 / ((1 ? 9 : 141)))) == -2934)))));
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 3; i_5 < 19;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 18;i_6 += 1)
            {
                {
                    var_20 -= (((min((arr_15 [i_6 + 1] [i_6 + 1] [i_5 - 1]), (arr_15 [i_6 - 2] [i_6 - 2] [i_5 + 1]))) - 17971));
                    var_21 = (max(var_21, (114 != 1601811199047876081)));
                }
            }
        }
        var_22 = var_0;
        var_23 = arr_9 [i_0] [i_0] [i_0] [i_0];
    }
    var_24 = (max((min((var_9 & -2913), ((-1 ? 65535 : var_3)))), (((((max(22717, 127))) || (var_13 / -1214963232))))));
    var_25 = var_2;
    #pragma endscop
}
