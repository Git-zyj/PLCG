/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115273
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_17 = (min(var_17, 15929090086697883781));
                    var_18 = ((-(min(var_6, var_6))));
                    arr_7 [1] [i_1] [i_2] [1] = (((2517653987011667834 ^ 2517653987011667860) ? 15929090086697883756 : (arr_5 [i_0] [i_0] [i_0] [i_0])));
                }
            }
        }
    }
    var_19 = 2251799813685247;
    #pragma endscop
}
