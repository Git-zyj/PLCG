/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169420
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((((max(62335, 120))) ? var_3 : (~var_12)))) ? ((max((~var_17), var_0))) : (((-1 & 131) ? (((max(130, 125)))) : ((var_10 ? -1152921504606846976 : 496))))));

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        var_21 = min(var_14, (min((arr_5 [i_0] [i_0 - 1]), (min(4800036007414793513, -151236458)))));
                        var_22 = (min((((arr_4 [i_0 - 1] [i_0 + 1]) ? 135 : (arr_4 [i_0 - 2] [i_0 - 2]))), (((arr_4 [i_0 + 1] [1]) ? (arr_4 [i_0 + 1] [i_0]) : (arr_4 [i_0 + 1] [9])))));

                        for (int i_4 = 2; i_4 < 17;i_4 += 1)
                        {
                            var_23 = (min(((((((arr_8 [i_0] [i_2] [i_2] [i_1] [i_0] [i_0]) ? (arr_2 [i_0]) : (arr_9 [i_3] [i_3])))) ? ((var_14 ? var_10 : (arr_1 [i_2]))) : (((arr_12 [3] [i_1] [i_2] [i_2] [14]) ^ (arr_12 [i_4] [8] [i_2] [i_0 - 2] [i_0 - 2]))))), var_5));
                            var_24 = (((arr_3 [i_0 + 1] [i_0 + 1] [i_2 + 1]) ? (arr_13 [i_4] [i_3] [i_1] [i_1] [i_0]) : 15920));
                        }
                    }
                }
            }
        }
        var_25 = (((((((!var_17) || (arr_3 [i_0] [i_0] [i_0 - 2]))))) | ((((min(var_12, (arr_1 [i_0])))) ? var_6 : (arr_6 [1])))));
        var_26 = 22884;
    }
    #pragma endscop
}
