/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133853
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_18 += (((arr_1 [6]) && (((13 ? 32401 : 5888)))));
                var_19 = (max((36028797018963968 / 4096), (((!(arr_4 [i_0] [i_0] [i_0 + 2]))))));
                arr_5 [i_1] [i_0] [i_0 + 3] = ((((((arr_3 [i_0]) ? (arr_3 [i_0]) : var_4))) ? ((-32764 ? var_0 : (arr_4 [i_1] [i_0] [i_0]))) : ((var_10 ? (arr_3 [i_0]) : (arr_1 [i_0])))));
            }
        }
    }
    var_20 = var_6;
    #pragma endscop
}
