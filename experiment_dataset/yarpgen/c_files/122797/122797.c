/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122797
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((min((min(var_17, var_9)), (~2620166790))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_10 [i_1] [i_1] [i_1] = ((1652365763 ? (max((arr_9 [i_2] [1] [i_1] [i_0]), ((min(-1186, var_14))))) : var_15));
                    var_21 = ((max(1180, (-9223372036854775807 - 1))));
                }
            }
        }
    }
    #pragma endscop
}
