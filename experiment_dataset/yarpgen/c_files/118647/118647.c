/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118647
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_1] = (((arr_3 [i_0]) || (arr_0 [i_0] [i_0])));
                arr_6 [i_0] [i_1] = ((((!(!var_1))) ? ((((!(arr_3 [i_1 - 1]))) ? 2410200977 : (182 <= 2410201001))) : (((-(arr_1 [i_1]))))));
                var_10 = (max(var_10, (((((!(arr_4 [i_0] [i_1 + 2]))))))));
                var_11 = (min(var_11, (((((((arr_2 [i_0]) - (arr_2 [i_0])))) ? ((2410200977 - (arr_2 [i_0]))) : ((((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0])))))))));
            }
        }
    }
    var_12 = (min(var_12, ((((var_6 <= 87) ? ((var_3 & ((var_4 ? var_0 : var_8)))) : ((-var_2 & (!-857697565))))))));
    #pragma endscop
}
