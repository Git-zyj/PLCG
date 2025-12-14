/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158017
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= (var_1 ^ var_11);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_1] [1] = var_6;
                var_17 *= (((arr_3 [i_0 + 1] [i_0 - 2]) <= var_12));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_18 = (arr_7 [i_0]);
                            arr_13 [i_1] = var_10;
                        }
                    }
                }
                var_19 = ((((((119 && 18050) && var_5))) | var_10));
            }
        }
    }
    #pragma endscop
}
