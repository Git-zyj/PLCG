/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144812
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_13 *= 5763923047942796720;
                arr_6 [i_0] [i_0] [i_0] = min((min((arr_2 [0]), (arr_5 [i_0]))), ((max(((max(-1, 1))), ((~(arr_0 [3])))))));
                arr_7 [i_0] [i_0] = (arr_2 [i_0]);
            }
        }
    }
    var_14 = (min(var_14, ((((((((var_3 ? 70 : var_5)) >> (var_3 + 46)))) || ((((var_3 + 2147483647) >> (((min(var_8, 9223372036854775806)) - 1057776701))))))))));
    var_15 += var_5;
    #pragma endscop
}
