/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124832
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_6 ? ((((min(var_6, 227))) >> (var_3 - 22202))) : (min((max(var_9, 29)), ((min(223, var_14)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            {
                var_19 -= ((((max((~240), var_14))) ? ((min((arr_0 [i_1 - 4] [i_1 + 1]), (arr_0 [i_1 - 3] [i_1 - 3])))) : (min((((arr_2 [i_1]) ? var_9 : (arr_4 [i_0] [i_1]))), ((max(var_13, (arr_4 [i_1] [i_0]))))))));
                var_20 = arr_4 [i_0] [i_1 - 1];
                arr_5 [i_0] [i_1] = ((-((((((arr_4 [i_1] [i_0]) + var_15))) ? (var_4 >= 164) : (((arr_0 [i_1] [i_1]) ? -2992 : 2992))))));
                var_21 *= ((((((arr_4 [i_0] [i_1 + 1]) >= (arr_4 [i_0] [i_1 - 4])))) | (arr_4 [i_0] [i_1 - 3])));
                var_22 = arr_0 [i_0] [i_1];
            }
        }
    }
    #pragma endscop
}
