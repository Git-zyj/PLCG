/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164394
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] &= (((((arr_2 [i_0]) ? -120 : (arr_1 [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_20 = (min(var_20, ((((arr_7 [i_0] [i_0] [i_2]) ? ((((min(30405, 30405))) & (arr_2 [i_2]))) : ((8651582476734349625 ? var_0 : (arr_7 [i_1 + 2] [i_1 - 2] [i_1]))))))));
                    arr_9 [i_0] [i_1] [0] = (arr_5 [i_1] [i_2]);
                    var_21 = (min(((-20040 & (arr_0 [i_1 - 3] [i_1 - 3]))), (arr_4 [i_1 - 3] [i_1] [i_2])));
                    var_22 = (max(var_22, (((25 ? 3 : 1946665280)))));
                    arr_10 [i_2] [i_1] [i_0] = (max(-30403, ((((min(1, -1076986395))) ? 255 : 8179))));
                }
            }
        }
        var_23 = (min(var_23, (((((max((arr_8 [0] [i_0] [i_0] [i_0]), -1946665276))) ? 3932983046 : (arr_2 [1]))))));
    }
    var_24 = (max(var_24, var_5));
    var_25 = (((var_18 - var_2) ? ((max(var_14, ((var_6 ? var_14 : 116))))) : (((~67108736) ? var_6 : (max(-6231449483430891663, var_10))))));
    #pragma endscop
}
