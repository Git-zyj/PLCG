/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121344
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(15, var_12));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 23;i_2 += 1)
            {
                {
                    arr_8 [14] [i_1] [12] = (((((((max(var_9, 249))) ? var_4 : ((var_13 ? -3857776371574117784 : var_4))))) ? (((-(~var_5)))) : var_10));
                    var_15 = ((((((max(0, var_7))) ? ((655750103965460397 ? var_12 : -3857776371574117776)) : (70 && var_12))) / (min(var_0, ((3464871415473279803 ? var_11 : -3857776371574117800))))));
                }
            }
        }
    }
    #pragma endscop
}
