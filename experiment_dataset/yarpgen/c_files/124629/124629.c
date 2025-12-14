/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124629
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_17 = ((2147483647 ? 221 : 1907705948));
                    var_18 = var_6;
                }
            }
        }
    }
    var_19 = (max(0, var_6));
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 21;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            {
                arr_15 [i_3] [i_3] = ((((((arr_9 [i_3 - 1]) - (arr_8 [i_3] [i_3 - 1])))) ? (max(-2404391469384219461, ((1762273865 ? -1907705948 : -2404391469384219461)))) : 771584383));
                var_20 |= var_13;
                var_21 = (max(var_21, (~var_8)));
            }
        }
    }
    #pragma endscop
}
