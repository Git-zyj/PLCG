/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159804
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_10 = (max((arr_2 [i_0] [i_0]), -4160508299));
                arr_4 [i_0] [i_0] [i_0] = (arr_3 [i_1]);
            }
        }
    }
    var_11 = (min(var_11, ((((18446744073709551615 && (var_3 >= var_2)))))));
    #pragma endscop
}
