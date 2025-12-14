/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15714
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (!(var_3 % var_1));
    var_21 &= (-2 && 1);
    var_22 = (var_6 ? ((-var_12 ? ((var_17 ? 1542072536 : var_16)) : var_12)) : var_18);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_8 [i_0] [i_1] = max(((((min((arr_4 [i_0]), (arr_1 [i_0])))) ? ((((-1542072537 || (-32767 - 1))))) : (arr_2 [i_0 - 1]))), 9223372036854775807);
                var_23 = (max(var_23, ((max((((~((~(arr_3 [i_0] [i_1])))))), (max((arr_6 [2] [i_0 - 1]), (arr_6 [1] [i_0 - 1]))))))));
                var_24 += 1542072538;
                var_25 += 18446744073709551615;
            }
        }
    }
    #pragma endscop
}
