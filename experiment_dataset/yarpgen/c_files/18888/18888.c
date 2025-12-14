/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18888
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((~(min((max(var_12, (arr_4 [i_1] [i_1] [i_0]))), (arr_2 [0] [i_0 + 3] [i_0 + 2])))));
                var_17 |= (max(-17364, 105));
            }
        }
    }
    var_18 = ((var_10 ? ((var_13 ? (!0) : var_7)) : ((max((!var_0), (max(1266415080, 117)))))));
    var_19 = var_8;
    var_20 = ((((var_14 ? (~var_12) : var_11)) > ((((max(1569560505, 117))) / ((-83 ? 2719909689643108789 : 18922))))));
    #pragma endscop
}
