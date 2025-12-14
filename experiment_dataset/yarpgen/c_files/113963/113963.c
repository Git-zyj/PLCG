/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113963
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
                arr_4 [i_1] = (-1352708364 ? (-9223372036854775807 - 1) : -1);
                var_14 = (max(var_14, 15972237680100745427));
                var_15 = var_4;
                var_16 = (((arr_3 [i_1] [i_1]) ^ (((max(var_2, (arr_1 [i_0])))))));
            }
        }
    }
    var_17 = ((var_11 ? var_0 : ((12 + (((max(19885, 32767))))))));
    #pragma endscop
}
