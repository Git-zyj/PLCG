/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112653
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_1] [i_0] = 1;
                arr_8 [i_1] [i_0] [0] = (((((0 ? (arr_2 [i_0 + 1]) : ((min(var_5, 34)))))) ? ((((min((arr_2 [i_1]), (arr_2 [i_0])))) * 236)) : (arr_1 [i_1])));
                var_11 *= (~1);
            }
        }
    }
    var_12 *= 1;
    #pragma endscop
}
