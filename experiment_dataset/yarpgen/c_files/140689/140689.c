/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140689
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_18 = (min(var_18, (((arr_3 [i_0] [i_0] [i_0]) ? (((max(960, var_9)) / (((2836432290781626979 ? (-32767 - 1) : 4294967295))))) : ((((((156272396210396152 ? var_15 : 4294967295))) ? (~var_4) : (~var_5))))))));
                var_19 += (((min(2147483647, (var_13 || 963))) >> ((-11091 ? ((-32762 ? 3 : 13762588670643259345)) : 1940344419))));
                var_20 = var_5;
            }
        }
    }
    var_21 = (((!14394660174792938868) * -1029122220));
    #pragma endscop
}
