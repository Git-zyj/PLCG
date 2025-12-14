/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154211
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_11 [i_2] [i_2] [i_2] [i_2] |= ((((arr_6 [i_3 + 1] [i_3] [i_3] [i_3 + 1]) ? var_9 : (arr_6 [i_3 + 2] [i_3 + 2] [i_3] [i_3]))));
                            var_18 = (~-30);
                        }
                    }
                }
                var_19 = (arr_2 [i_0] [i_0] [i_1]);
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 16;i_5 += 1)
                    {
                        {
                            var_20 = var_16;
                            arr_16 [i_0] [i_0] [i_0] = (~((((((arr_15 [i_0] [i_1] [i_4] [i_4]) ^ -30))) ? (max(962833359417021758, (arr_13 [i_0] [i_1] [i_4]))) : (arr_9 [i_0]))));
                        }
                    }
                }
            }
        }
    }
    var_21 = (((!((min(var_1, 15762265888510509637))))));
    #pragma endscop
}
