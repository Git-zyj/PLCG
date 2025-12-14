/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181082
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_16 = ((max(31, (arr_0 [i_2]))));
                    var_17 = (min((0 || 657262627), ((((min((arr_1 [i_2]), var_14))) ? (arr_2 [i_0] [10] [i_1 - 1]) : 57344))));
                    arr_7 [i_0] [i_0] [i_2] = ((2352518847 <= (((var_11 ? (arr_3 [i_0] [i_1] [i_2]) : (arr_3 [i_0] [i_1] [i_0]))))));
                }
            }
        }
    }
    var_18 = var_14;
    var_19 = ((((~var_11) ? var_3 : var_5)));
    var_20 = -var_8;
    #pragma endscop
}
