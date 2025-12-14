/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101372
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 10;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_0] [i_0] = (arr_2 [i_0] [i_0]);
                    var_15 ^= ((+(max((arr_2 [i_2 - 3] [6]), (arr_2 [i_2 - 3] [0])))));
                }
            }
        }
    }
    var_16 = -6235494425689090309;
    var_17 = (min(var_17, (((~(max(4972252729632409317, 25)))))));
    #pragma endscop
}
