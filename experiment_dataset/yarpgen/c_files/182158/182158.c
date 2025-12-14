/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182158
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_11 |= (max((arr_1 [i_0] [i_1]), (min(1, (arr_3 [i_0])))));
                var_12 = (arr_4 [14] [15] [5]);
                var_13 -= ((+((+((((arr_5 [i_0]) > (arr_2 [1]))))))));
                arr_7 [i_1] [i_1] [i_0] = (((arr_5 [i_0]) ? ((((min((arr_2 [1]), (arr_3 [i_0])))) ? (arr_6 [i_0] [2] [i_1]) : ((var_4 << (((arr_1 [i_1] [i_0]) - 1359)))))) : (((var_8 << (((((~var_8) + 12599)) - 21)))))));
            }
        }
    }
    var_14 = var_4;
    var_15 = var_2;
    #pragma endscop
}
