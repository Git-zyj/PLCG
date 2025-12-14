/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137759
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_0] [15] [i_0] = (((((arr_1 [i_0]) / (arr_5 [i_0]))) | (((var_7 || (arr_3 [i_0]))))));
                arr_7 [i_0] [i_0] [i_0] = (max((max((3953280931403962391 || 4032), ((-(arr_3 [i_0]))))), var_2));
                arr_8 [i_0] [i_0] [i_0] = (((((3953280931403962394 && var_0) ? (((arr_1 [i_0]) ? -127 : 7483618240776602171)) : 864450280)) <= var_1));
            }
        }
    }
    var_11 = (min(var_3, ((((((var_8 << (30720 - 30718)))) || ((max(30720, var_7))))))));
    var_12 = var_1;
    #pragma endscop
}
