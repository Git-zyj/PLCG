/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137653
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_16 = ((((((!(arr_0 [i_3]))) ? (arr_3 [i_0]) : ((((arr_2 [i_3]) > 2855439078))))) | ((((((var_11 ? 1 : var_11))) || (arr_5 [i_0] [i_1] [i_2] [i_3]))))));
                        var_17 = var_9;
                    }
                }
            }
        }
        arr_9 [i_0] = (min(1439528217, 1701094204));
        var_18 = (min(-1, ((-var_10 ? 510064424 : 1))));
        arr_10 [i_0] = (((arr_7 [21] [i_0] [7] [i_0] [i_0]) ? ((~(arr_4 [i_0] [i_0]))) : (((min((arr_0 [i_0]), var_5))))));
    }
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        arr_13 [i_4] [i_4] = (((((1439528230 && 2874241624) ? (arr_3 [i_4]) : ((var_11 * (arr_3 [3])))))) ? (min(12, 3620426646)) : (min(((1 ? (arr_0 [17]) : var_1)), 32256)));
        arr_14 [i_4] = (arr_6 [8] [8] [i_4] [i_4]);
        var_19 -= (arr_7 [17] [i_4] [i_4] [i_4] [i_4]);
    }
    for (int i_5 = 1; i_5 < 10;i_5 += 1)
    {
        var_20 = ((((((~(arr_16 [12] [5]))))) ? (((~var_1) ? (((max((arr_0 [i_5]), var_8)))) : var_1)) : (((674540639 ? var_3 : (arr_17 [i_5]))))));
        var_21 ^= ((((max((((arr_3 [i_5]) ? 3721312088824534282 : var_15)), ((min(2855439063, var_4)))))) ? (-577696996 <= 510064438) : ((~(min(29, 1166103328087862786))))));
    }
    var_22 = (((max(var_10, (min(var_5, var_0)))) | ((~(max(3620426651, -21))))));
    var_23 = var_15;
    #pragma endscop
}
