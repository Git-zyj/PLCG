/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165843
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_10 = ((var_3 ? (arr_0 [1] [1]) : ((((arr_0 [i_0] [i_1]) > ((min((arr_2 [15]), var_4))))))));
                arr_5 [i_0] [7] = 112;
                arr_6 [i_0] [i_1] [i_0] |= max(((max((arr_0 [i_1 + 1] [i_1]), var_4))), (arr_3 [i_0] [i_1]));
            }
        }
    }
    var_11 = ((!((((65528 != var_6) ? ((min(-102, -106))) : -633802550)))));
    var_12 = var_4;
    #pragma endscop
}
