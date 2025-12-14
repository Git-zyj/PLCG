/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101281
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                var_14 = (arr_0 [i_0]);
                arr_6 [i_0] [i_0] [i_1] = (arr_4 [4] [i_1]);
                var_15 = (max(var_15, ((((((13 ? 57123 : ((var_9 ? 63 : var_12))))) ? ((((arr_4 [i_0 - 1] [i_1 - 2]) < 680388644))) : ((((max(-1, (arr_0 [i_1 + 1])))) ? (!-1804798051) : (~var_5))))))));
                var_16 = (min((2114035574 != 127090920), ((-576973344 ? (4167876376 + -1052025978) : (arr_3 [i_1])))));
            }
        }
    }
    var_17 = (min(var_17, var_12));
    var_18 = var_6;
    #pragma endscop
}
