/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176674
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (var_5 ? var_9 : ((((var_11 ? 3744744506 : var_8)) * var_0)));
    var_15 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_1] = ((!((max((arr_0 [i_1 - 1]), (arr_0 [i_1 - 1]))))));
                var_16 = ((~4503599627370494) ? (((arr_2 [i_0]) ? ((169 ? (arr_1 [i_0]) : (arr_4 [i_1 + 1] [4]))) : (((arr_3 [i_0] [i_0] [i_0]) ? (arr_1 [i_1 + 1]) : (arr_5 [i_0]))))) : 4294967293);
            }
        }
    }
    #pragma endscop
}
