/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125408
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_1] = ((!((((arr_1 [i_0 - 3]) / -4171)))));
                arr_6 [0] [i_1] &= (min(((((arr_0 [i_0]) ? 4145 : (arr_3 [12] [12])))), (min((min(var_11, 15130301254650388113)), (arr_3 [16] [16])))));
                var_20 *= ((-(arr_0 [i_0])));
                arr_7 [i_1] = ((((((arr_0 [i_1]) ? (arr_2 [i_1 + 2]) : (arr_4 [i_0 - 3] [i_1])))) ? ((((((arr_2 [i_0]) ? (arr_3 [i_0] [i_1]) : 4170))) ? var_11 : (arr_0 [i_0 + 3]))) : (arr_2 [i_1 + 2])));
            }
        }
    }
    #pragma endscop
}
