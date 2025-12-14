/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100504
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((~(((((var_7 ? 10363 : 1))) ? (!var_4) : var_5))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_16 = (~89);
                arr_6 [i_0] [i_1] = (~1);

                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    arr_9 [i_0] [i_1] [i_1] [i_2 + 2] = 1;
                    var_17 ^= (!((!(1 ^ 0))));
                    arr_10 [i_2] [i_0] &= ((!((!(~var_0)))));
                }
            }
        }
    }
    var_18 *= var_10;
    #pragma endscop
}
