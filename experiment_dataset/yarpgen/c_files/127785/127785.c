/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127785
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((min(((44198 ? var_6 : var_15)), ((min(var_2, var_13))))) >> (var_8 > var_9)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_18 = (arr_0 [i_0]);

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        var_19 = ((-2536 ? (arr_2 [i_0] [i_3]) : (arr_2 [i_1] [i_1])));
                        arr_12 [4] [i_2] [8] |= ((~(arr_1 [i_0])));
                    }
                }
            }
            var_20 ^= ((arr_2 [i_1] [i_0]) == (44182 && var_0));
            var_21 = (max(var_21, ((((arr_2 [11] [5]) ^ (((!(arr_9 [i_0] [i_0] [i_0] [15])))))))));
            arr_13 [i_0] [i_0] = ((142747535 | (arr_4 [i_0])));
        }
        var_22 += var_0;
    }
    #pragma endscop
}
