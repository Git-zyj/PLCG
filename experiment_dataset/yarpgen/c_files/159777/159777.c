/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159777
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0 - 1] [i_1] = var_13;
                var_14 = ((((min((arr_4 [i_1 - 1] [i_1] [i_1]), (arr_4 [i_1 - 1] [i_1] [i_0 + 1])))) ? (((min((arr_4 [i_1 - 1] [i_1] [22]), (arr_4 [i_1 - 1] [i_1] [i_1]))))) : (min(var_7, (arr_4 [i_1 - 1] [i_1] [i_1])))));
                var_15 = ((+((((min((arr_4 [15] [i_1] [i_0]), var_13))) ? ((min(255, -32753))) : (arr_3 [i_1])))));
            }
        }
    }
    var_16 = (min(((var_11 ? (var_3 > var_11) : (min(var_5, var_5)))), (~var_11)));
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 22;i_3 += 1)
        {
            {
                var_17 = ((-((min((arr_11 [i_3 + 1] [i_3 + 1] [i_2 + 1]), (arr_11 [13] [i_3 + 1] [i_2 + 2]))))));
                var_18 = (min((~3549), (((((arr_3 [10]) || var_1)) ? 1 : var_8))));
            }
        }
    }
    #pragma endscop
}
