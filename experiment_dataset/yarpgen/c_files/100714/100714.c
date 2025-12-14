/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100714
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = -1027883155;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_21 = (arr_2 [i_1] [i_1]);
                var_22 = ((((((arr_1 [19] [4]) < ((127 << (((arr_3 [3] [i_1]) - 74))))))) + 970649397));
                arr_4 [i_0] [i_1] [i_1] = arr_2 [i_1] [i_1];
            }
        }
    }
    #pragma endscop
}
