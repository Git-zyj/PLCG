/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103076
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] = (((((((max(30901, 113))) ? (arr_0 [i_0]) : (arr_0 [i_0])))) ? -65535 : ((((((arr_3 [i_0] [i_0] [i_1]) + (arr_0 [i_0]))) <= (((arr_0 [i_0]) * 0)))))));
                arr_6 [i_0] [i_0] = ((((0 ? (arr_0 [i_0]) : (arr_0 [i_0]))) + (((max((arr_3 [i_0] [11] [i_0]), -7041))))));
                arr_7 [i_0] [i_0] = ((+(((-35 * 65522) ? 0 : 53))));
            }
        }
    }
    var_16 = (((~34649) ? ((((1 ? 3600028295 : var_7)) ^ ((241 ? 4294967286 : 2295048794)))) : var_1));
    #pragma endscop
}
