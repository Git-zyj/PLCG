/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159905
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min((((((var_6 ? var_1 : var_17))) ? ((min(var_9, var_11))) : (9795366769808031856 * 9795366769808031856))), 9223372036854775787));
    var_19 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_20 = ((((min((((9795366769808031856 ? (arr_4 [i_0] [i_1]) : 255))), (arr_1 [i_1])))) ? (max((((arr_1 [i_0]) / (arr_2 [17]))), 238737355535565246)) : ((max(var_9, (arr_3 [i_0] [i_0] [i_1]))))));
                var_21 = (max(var_7, -18446744073709551615));
            }
        }
    }
    var_22 = ((-(max(14235236680149919684, ((max(65536, 6754587544411326516)))))));
    #pragma endscop
}
