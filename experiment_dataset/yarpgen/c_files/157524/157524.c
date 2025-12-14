/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157524
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = -111;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = (min((!1132634743), 12348));
                var_11 = (max(var_11, (((34 ? -4294967295 : (((((((202 ? (arr_5 [i_0] [i_1]) : (arr_3 [i_1] [i_0])))) && (arr_2 [15] [i_0]))))))))));
                var_12 = (min(var_12, 34));
            }
        }
    }
    var_13 *= (min(31, (~8392926773556745447)));
    var_14 = ((+(((!var_8) ? ((1 ? -23771520 : var_0)) : ((min(var_4, var_2)))))));
    #pragma endscop
}
