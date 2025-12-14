/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181693
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((32747 ? (min(1, -2057428168)) : var_6))) ? (~4141670204) : ((var_0 ? var_5 : (4141670204 - var_8)))));
    var_19 = ((16380 ? ((var_8 ? ((520093696 ? var_5 : var_4)) : -17378)) : (((var_2 ? var_17 : var_4)))));
    var_20 = (~var_7);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_21 = (((arr_1 [8] [5]) ? 0 : ((1 ? ((max(7, 520093696))) : ((36410464623245420 ? 1 : 10821448420736392213))))));
                arr_4 [2] [i_1] [i_0] = (max((((max(4, var_4)))), 165));

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    arr_9 [i_1] [i_1] [8] = 10821448420736392213;
                    var_22 = (min((((4493986740428643171 ? 29238 : 29035))), (max((((arr_1 [i_2] [i_0 + 1]) ? var_5 : var_12)), ((1 ? var_17 : (arr_3 [i_0] [i_2])))))));
                    var_23 = 268431360;
                    var_24 = (min(var_24, ((min((min((arr_7 [i_0] [9] [i_0 + 1] [i_0]), (arr_7 [i_0] [i_0] [i_0 + 3] [i_0]))), ((var_15 ? ((var_3 ? var_16 : var_3)) : (~-10))))))));
                    arr_10 [i_1] [i_1] = var_3;
                }
                arr_11 [i_0] [i_1] [i_1] = 112;
            }
        }
    }
    #pragma endscop
}
