/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139145
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [17] [i_1] = ((~(((((-(arr_3 [1])))) ? (arr_0 [16]) : (arr_3 [i_0])))));
                var_15 *= -1;
                arr_7 [i_0] [i_0] = ((((max((arr_5 [i_0] [i_1] [i_0]), var_10))) ? (arr_4 [i_0] [3] [i_1]) : ((var_2 ? 649951098 : ((var_3 ? 629619532 : var_5))))));
            }
        }
    }
    var_16 = (max(var_16, ((((!var_14) ? 107 : 9)))));
    var_17 = var_12;
    var_18 = -5981;
    var_19 = (min(var_1, var_7));
    #pragma endscop
}
