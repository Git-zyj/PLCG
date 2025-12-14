/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184971
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_19 = (((((var_6 ? (arr_0 [i_0] [i_0]) : (arr_0 [4] [i_1])))) ? ((max(((var_15 ? (arr_5 [i_1]) : (arr_2 [i_0] [1]))), (arr_0 [i_0] [i_1])))) : var_7));
                var_20 = (max(var_20, (((+((var_6 ? (arr_6 [i_0]) : (((-127 - 1) ? (arr_4 [i_1]) : (arr_1 [i_0]))))))))));
            }
        }
    }
    var_21 = (min(var_21, (min((min(((var_16 ? var_7 : var_8)), var_17)), (((!(~48152))))))));
    var_22 |= (!var_6);
    #pragma endscop
}
