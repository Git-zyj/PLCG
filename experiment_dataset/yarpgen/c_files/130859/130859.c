/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130859
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_15 = ((((min(var_6, 1476062470862479196))) ? ((((arr_0 [i_0 + 1] [i_0 - 1]) ? (arr_0 [i_0 - 1] [i_0 - 1]) : -122))) : (min(var_3, var_9))));
                arr_6 [i_0] [i_1] = (((arr_0 [i_0 - 1] [i_0 + 1]) ? (((var_9 ? (((arr_4 [i_0]) ? 32760 : (arr_5 [i_0] [i_1]))) : (((arr_4 [i_0]) ? 59409 : (arr_5 [i_0] [i_1])))))) : ((((max((arr_5 [i_0] [i_0]), 73))) ? (((arr_2 [i_1]) ? var_7 : (arr_3 [i_0 - 1]))) : var_7))));
            }
        }
    }
    var_16 = (max((min((min(var_5, var_7)), ((max(var_12, var_8))))), ((((var_1 ? var_13 : -57))))));
    var_17 = ((((min((min(18446744073709551615, -1925032551)), ((max(7773, -100)))))) ? var_7 : (max((((var_9 ? 1 : 101))), 11007000293582009088))));
    var_18 = var_6;
    #pragma endscop
}
