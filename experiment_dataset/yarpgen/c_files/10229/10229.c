/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10229
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = max(var_12, var_16);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] = ((3679 | (((arr_3 [i_0] [i_0]) | var_4))));
                var_19 += (arr_0 [i_1]);
                arr_5 [4] [i_1] = (min((min(var_6, -30946)), (arr_0 [i_0])));
                var_20 *= var_1;
                var_21 &= min(1537969306512393058, (arr_0 [i_0]));
            }
        }
    }
    var_22 = (((!2461706762) ^ (!var_12)));
    var_23 = (min((~921750067), var_14));
    #pragma endscop
}
