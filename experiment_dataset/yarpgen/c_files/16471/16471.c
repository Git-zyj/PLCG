/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16471
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += var_16;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_2] [i_2] [i_2] = (max((max(var_0, ((((arr_4 [i_0] [i_1] [i_2]) ? (arr_0 [i_2] [i_2]) : 46465))))), ((((((var_14 ? -25038 : 1))) ? (arr_0 [i_1] [i_1]) : -23)))));
                    arr_7 [i_2] = ((-6 ? (((((var_10 ? (arr_1 [i_0]) : var_8))))) : (((((4294967285 ? 1 : 1))) ? ((var_0 ? var_4 : var_18)) : (((9413530281705364171 ? (arr_4 [i_0] [1] [17]) : (arr_1 [i_2]))))))));
                    var_20 = var_6;
                    var_21 += 1;
                    var_22 = (min(var_18, 103));
                }
            }
        }
    }
    var_23 = (max(var_23, (((((max((1704353955 || 1), ((var_12 ? var_10 : 14036655393056312451))))) ? var_10 : var_3)))));
    #pragma endscop
}
