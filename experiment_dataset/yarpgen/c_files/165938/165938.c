/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165938
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= (min(var_12, var_15));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_18 = ((5737305407119848517 ? -14398 : 126100789566373888));
                    var_19 += ((~(((((34122 ? (arr_7 [i_0] [i_0] [14] [10]) : (arr_0 [7] [i_1])))) ? (arr_6 [i_0] [0] [4]) : (~34122)))));
                }
            }
        }
    }
    var_20 = (var_2 - var_13);
    #pragma endscop
}
