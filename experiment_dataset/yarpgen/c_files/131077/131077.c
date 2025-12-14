/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131077
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_7 [i_0] [6] [i_0] = ((-((((147770939585516697 ? (arr_2 [i_2]) : var_7))))));
                    arr_8 [i_0] [i_1] = (((arr_6 [i_2] [i_1] [i_1]) || ((((arr_1 [i_0] [i_2]) + 2147417871)))));
                    var_18 = ((((57749 <= (arr_2 [i_0])))));
                    var_19 = ((!((max((arr_5 [i_2] [i_2] [4] [0]), (arr_5 [i_2] [i_1] [i_0] [i_0]))))));
                }
            }
        }
    }
    var_20 = var_11;
    #pragma endscop
}
