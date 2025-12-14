/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100812
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_14 = (max(1, 42152));
                arr_5 [i_0] [i_1] &= (arr_1 [i_0] [i_0]);
                var_15 = ((((min(((var_8 ? 0 : 157)), ((((arr_1 [i_1] [i_0]) == (arr_1 [i_0] [i_1]))))))) ? ((((25573 ? 13082 : (arr_2 [i_0] [i_0] [i_0]))) << (((arr_0 [i_0] [i_0]) ? (arr_1 [i_0] [i_1]) : (arr_1 [i_0] [i_0]))))) : (((arr_2 [i_1] [i_1] [i_0]) ? (arr_0 [i_0] [i_1]) : var_13))));
                arr_6 [i_0] [i_0] = ((((((arr_0 [i_0 + 1] [i_1]) ? (arr_0 [i_0 + 1] [i_0 + 1]) : (arr_0 [i_0 + 1] [i_1])))) ? (((min(var_12, (arr_4 [i_1] [i_1] [i_0]))))) : (1 / -14896)));
            }
        }
    }
    var_16 = (min(var_16, 8192));
    #pragma endscop
}
