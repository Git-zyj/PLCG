/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13104
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (var_12 >= -95);
    var_19 = var_12;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [8] = (((arr_0 [i_0] [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0] [i_0])));
        var_20 |= 20763;
        var_21 = var_7;
    }
    /* LoopNest 2 */
    for (int i_1 = 3; i_1 < 14;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            {
                var_22 = var_11;
                var_23 &= (max((min(var_0, (!var_2))), ((max(148, (arr_7 [2]))))));
                arr_9 [i_2] [i_2] = (i_2 % 2 == 0) ? (((((((((var_9 + (arr_5 [i_2])))) ? (!94) : (var_13 != var_11)))) ? ((((((arr_4 [2]) >= (arr_8 [i_1] [i_2] [i_2])))) % var_6)) : ((((110 << (((arr_7 [i_2]) - 2564005127))))))))) : (((((((((var_9 + (arr_5 [i_2])))) ? (!94) : (var_13 != var_11)))) ? ((((((arr_4 [2]) >= (arr_8 [i_1] [i_2] [i_2])))) % var_6)) : ((((110 << (((((arr_7 [i_2]) - 2564005127)) - 3856646358)))))))));
                var_24 = ((((((0 * 1125899906842623) | (max(var_15, var_3))))) ? ((min((arr_4 [i_1 - 1]), 15))) : (min((min(var_8, var_7)), 2035661207))));
            }
        }
    }
    #pragma endscop
}
