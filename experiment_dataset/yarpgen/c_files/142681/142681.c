/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142681
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_7 [i_1] = (arr_2 [i_0] [i_0]);
                arr_8 [i_1] = -4032185340700685217;
            }
        }
    }
    var_20 -= ((((min((85 || 60908), 451658536))) ? ((~(var_5 <= var_10))) : var_10));
    var_21 = 1530087180226215021;
    #pragma endscop
}
