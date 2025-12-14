/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162269
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((min(511, (~var_14))) >> var_5));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_0] [3] = (((min((arr_1 [i_0]), var_0))) ? (((((arr_0 [i_1]) >> (((arr_0 [i_0]) - 111)))))) : (max(((var_4 << (((arr_5 [17]) - 838757084)))), (arr_4 [i_0] [i_0] [i_1]))));
                arr_7 [i_0] = var_5;
                var_16 = ((arr_1 [i_1]) ^ (arr_1 [i_0]));
                arr_8 [i_0] [i_1] = (min((-2147483647 - 1), 7));
            }
        }
    }
    #pragma endscop
}
