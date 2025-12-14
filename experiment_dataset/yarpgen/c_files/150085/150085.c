/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150085
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = min(2016303681, 2278663632);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    arr_6 [i_2] [i_2] [i_2] [i_0] = -1438921002;
                    var_15 = (arr_1 [i_2] [i_0]);
                }
                var_16 = (min(var_16, ((((((2510015 ? 2016303667 : 1))) ? (arr_2 [i_0] [i_0]) : -0)))));
                var_17 -= ((((min(-109, (min(0, 108))))) ? 1 : 26734));
                var_18 -= (arr_1 [i_0] [i_0]);
            }
        }
    }
    var_19 ^= ((min((~var_4), ((var_10 ? 5 : 16840257559612765800)))));
    var_20 = (min(var_20, 2016303681));
    #pragma endscop
}
