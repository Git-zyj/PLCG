/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112145
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_7 [14] &= (arr_2 [8] [i_1]);
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_14 ^= (min((((!(((var_2 + (arr_1 [i_3 - 1]))))))), var_4));
                            var_15 += (arr_3 [i_0] [i_1]);
                        }
                    }
                }
            }
        }
    }
    var_16 |= var_11;
    var_17 = (min((((var_11 ? var_10 : var_11))), ((max(((min(-62, 35))), var_6)))));
    #pragma endscop
}
