/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159020
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(9147939661944767562, (((((min(12294863302432297631, 4095))) ? (max(-577004310, 1)) : var_2)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_0] [7] = ((((min(((~(arr_0 [i_0]))), 104))) ? (((var_14 - ((var_7 ? var_6 : 0))))) : (((arr_5 [i_1] [i_1] [i_0]) ? 0 : (-2048 - 6151880771277253992)))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_19 -= var_1;
                            arr_13 [i_2] = (arr_7 [i_0] [3] [i_2]);
                            arr_14 [i_0] [6] [i_0] [i_3 - 1] = (((arr_11 [1] [i_2]) | (arr_10 [i_0] [3] [i_3 + 3])));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
