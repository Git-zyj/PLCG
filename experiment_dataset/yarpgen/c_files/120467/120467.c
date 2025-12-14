/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120467
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += (1365783875 ^ 62357);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_15 = ((((((((-1684559939 ? var_13 : (arr_1 [i_0])))) ? (arr_2 [i_0]) : 1365783875))) ? (min(((var_13 ? (arr_3 [i_0] [i_1]) : var_2)), 0)) : ((((~(arr_2 [i_1]))) * (((arr_0 [12]) * (arr_0 [i_1])))))));
                var_16 = (((min(2929183414, 135))));
                var_17 = (min(var_17, (((((((min(8331168980509201655, 3786)) ^ (~-2389285210025020251)))) ? (((((var_11 ? (arr_3 [i_0] [i_0]) : (arr_3 [i_0] [i_0])))) ? (arr_4 [i_0]) : var_8)) : -108)))));
                var_18 = (((((arr_0 [i_0]) && ((min(5402, 2929183418))))) && ((max((arr_4 [i_1]), (arr_4 [i_1]))))));
            }
        }
    }
    #pragma endscop
}
