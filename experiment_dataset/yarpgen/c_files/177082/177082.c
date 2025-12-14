/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177082
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((((!var_6) < ((7613608710190448505 ? 3792506733 : var_6))))) + ((~(~var_1)))));
    var_12 = ((~(min((~-23750), (~14272)))));
    var_13 = (min(0, var_0));
    var_14 = ((2938337175 >= (((((var_6 ? var_8 : var_3)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                var_15 *= ((2938337175 ? 0 : 0));
                arr_6 [i_0] [i_0] [i_1] = var_8;
                var_16 = (((((((((arr_5 [i_0] [i_1]) >> (var_9 - 230)))) ? ((var_2 ? (arr_0 [i_1]) : (arr_2 [i_0]))) : (arr_1 [i_0])))) ? ((3 & (min(var_2, 14)))) : 2596326387));
                arr_7 [i_0] [i_1] = (~var_2);
            }
        }
    }
    #pragma endscop
}
