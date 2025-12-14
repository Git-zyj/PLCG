/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173843
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = (arr_4 [i_1]);
                arr_6 [i_0] [i_0] [i_0] = (max((arr_0 [i_0] [1]), var_7));
            }
        }
    }
    var_10 = (max(var_10, var_9));
    var_11 = ((((max(27195, (max(var_2, 2380187777581543071))))) ? (var_1 - var_2) : var_8));
    #pragma endscop
}
