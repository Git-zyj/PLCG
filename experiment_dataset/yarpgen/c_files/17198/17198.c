/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17198
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_4 [i_0] = (((((arr_1 [i_0] [i_1]) ? (arr_1 [i_1] [1]) : (arr_1 [i_1] [i_0]))) >> (((arr_1 [i_0] [i_0]) << (arr_1 [4] [i_0])))));
                var_21 = (min(var_21, (((((-5461555839759676820 ? 9599752413602294850 : -27884)) + (arr_2 [i_0] [i_1] [i_1]))))));
                arr_5 [i_0] [i_1] [i_0] = ((205 ? ((144115188075855871 >> (52545 - 52493))) : 2353517264441790224));
                var_22 += (arr_0 [i_0] [i_0]);
                arr_6 [i_0] [i_1] [i_1] = ((134 != (max((arr_0 [i_0] [i_1]), (((arr_1 [i_0] [11]) << (((arr_0 [i_0] [i_0]) + 18549))))))));
            }
        }
    }
    #pragma endscop
}
