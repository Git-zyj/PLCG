/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116999
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= ((!(((min(var_12, var_1))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_19 = -63;
                arr_6 [i_0] = (min((((((max(var_12, var_15))) || ((((arr_4 [i_0]) ? (arr_2 [i_0] [i_1]) : var_1)))))), (var_15 | 9223372036854775800)));
                arr_7 [i_0] [i_0] [i_1] = (max((((1692300398725191515 ? var_3 : (arr_2 [i_0] [i_0])))), 9223372036854775791));
                arr_8 [i_0] [i_0] [i_0] = (((((arr_2 [2] [12]) >= (arr_5 [i_1] [i_1] [i_0]))) ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [i_1])));
            }
        }
    }
    var_20 = 46283;
    var_21 = (~61236);
    #pragma endscop
}
