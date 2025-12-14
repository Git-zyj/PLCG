/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182029
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_10 = (((0 ? (238 << 7) : (arr_3 [i_1] [i_0]))));
                arr_6 [i_0] [i_0] = 0;
                arr_7 [1] [1] = (((((max((!var_2), (arr_3 [i_1] [i_0]))))) * (max(4294967288, 4240469157))));
                arr_8 [i_0] [i_0] = 0;
            }
        }
    }
    var_11 = (~-var_0);
    #pragma endscop
}
