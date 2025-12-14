/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115507
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_13 += ((((var_10 + (((((-127 - 1) < (arr_2 [1] [i_0 + 2]))))))) >> (111 - 92)));
                var_14 = ((((((arr_1 [i_0 + 2]) ? 127 : (((arr_0 [i_0]) ? 115 : var_11))))) ? ((1669879912 + (var_3 == var_8))) : (((~(arr_3 [i_0 + 1] [i_1] [i_1]))))));
            }
        }
    }
    var_15 = -885046585;
    var_16 = -var_8;
    #pragma endscop
}
