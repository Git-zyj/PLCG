/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110812
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_14;
    var_17 = ((max(32768, (var_2 + var_0))));
    var_18 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_19 &= 32767;
                arr_6 [i_0] [i_0] = ((32768 ? 32778 : 32768));
                arr_7 [1] [1] [1] = ((((var_15 ? var_7 : (~var_5))) % (((32781 ? -27842 : 32772)))));
            }
        }
    }
    #pragma endscop
}
