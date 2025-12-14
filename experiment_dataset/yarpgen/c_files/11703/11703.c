/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11703
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_20 = (min(var_20, ((((((arr_4 [i_0]) ? ((0 ? (arr_5 [2] [i_0]) : (arr_3 [i_0] [i_1 - 1]))) : (arr_3 [i_1] [i_0]))) == (((3210195182 ? 12582912 : ((1 << (-18576 + 18597)))))))))));
                var_21 = ((((((min((arr_3 [i_1] [i_0]), (arr_4 [i_1])))) || -3905721855103526874)) ? (((arr_2 [i_1 + 2] [i_1 + 1]) + 3905721855103526874)) : (((min(111, 1))))));
            }
        }
    }
    var_22 = (min(var_22, (((var_18 ? (~64) : (max(-3905721855103526874, ((min(1501113029, 112))))))))));
    var_23 &= (((!(var_3 > 13930013998390611555))) ? -1 : ((~((9223372036854775808 ? 1 : 1801300131)))));
    #pragma endscop
}
