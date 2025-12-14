/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122998
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((var_14 ? (!var_15) : (var_11 * var_17)))) ? var_3 : var_19));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_21 += (~(arr_4 [i_0]));
                var_22 = (((((!(arr_4 [i_1])))) == ((~((0 ? (arr_4 [i_1]) : var_17))))));
                var_23 &= (max(((~((max((arr_4 [i_0]), (arr_1 [i_1] [i_0])))))), ((3249614611 ? -25 : (arr_2 [i_0] [2] [i_0])))));
                var_24 *= ((((!(arr_0 [12] [i_0])))) * (arr_1 [8] [i_0]));
            }
        }
    }
    var_25 = var_10;
    #pragma endscop
}
