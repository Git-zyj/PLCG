/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186734
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, (((-((var_10 ? (min(var_9, -5680299411834478045)) : (4611686018427387903 && 194))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_21 = (((!var_1) && ((min((arr_6 [i_0] [i_0] [i_0]), ((0 ? var_11 : var_10)))))));
                    var_22 = (var_16 || var_6);

                    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
                    {
                        var_23 = (min(var_23, ((((max((arr_2 [i_1 + 1] [i_1 + 1] [i_1 + 1]), var_15)) & ((((((var_8 ? var_11 : (arr_7 [17] [i_1] [i_2] [i_3])))) ? (~var_11) : (arr_4 [i_0] [i_0])))))))));
                        arr_11 [i_3] [i_2] [i_0] [i_1] [i_0] = ((+((var_13 ? (arr_6 [i_0] [i_1 - 1] [i_2]) : var_17))));
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                    {
                        var_24 = (max(var_24, (arr_4 [i_1] [i_2])));
                        var_25 = ((((min((arr_8 [1] [i_1 - 1] [1] [i_1]), var_12))) < (((((arr_15 [i_4] [i_2] [i_1] [i_0]) ? 78 : var_18))))));
                        var_26 = var_10;
                        var_27 = var_13;
                    }
                }
            }
        }
    }
    #pragma endscop
}
