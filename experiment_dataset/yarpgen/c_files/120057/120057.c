/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120057
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_10 += -275283843;

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            arr_4 [i_1] = var_5;
            var_11 = (275283845 <= -1);
            arr_5 [i_0] [i_0] [i_0] = var_5;
            var_12 = var_9;
            var_13 = ((!(((1 ? ((min(var_9, -275283843))) : ((1 % (arr_3 [i_0] [i_0] [i_0]))))))));
        }
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            arr_9 [i_2] &= (((arr_0 [i_0] [i_2]) ? (max((((arr_0 [i_0] [i_2]) ? 11158861297983041162 : 6301368504931045445)), ((min(0, var_6))))) : (!6927149975339940776)));
            var_14 -= var_9;
        }
    }
    var_15 = max(0, var_1);
    var_16 = ((var_2 ? var_6 : 0));
    var_17 = var_5;
    /* LoopNest 3 */
    for (int i_3 = 1; i_3 < 10;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 9;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 10;i_5 += 1)
            {
                {
                    arr_19 [i_5] [i_5] [i_5] = (max(((23 ? (arr_0 [i_3 + 1] [i_4 - 1]) : (arr_0 [i_4 - 1] [i_4 - 1]))), ((max(((var_5 ? (arr_12 [i_3]) : -5054645783308690264)), var_9)))));
                    var_18 = ((arr_8 [i_3 + 1] [i_3 + 1] [i_3]) ? (((arr_3 [i_3] [i_3] [i_3 + 1]) ? (arr_3 [i_3] [i_3] [i_5 - 2]) : var_7)) : 2847876569);
                    var_19 = ((var_3 ? (((((arr_15 [i_3 + 1] [i_4 - 1]) > 80)))) : var_7));
                    var_20 = (max(var_20, (((-(arr_2 [i_4 + 2]))))));
                    var_21 = (min(var_21, (~var_7)));
                }
            }
        }
    }
    #pragma endscop
}
