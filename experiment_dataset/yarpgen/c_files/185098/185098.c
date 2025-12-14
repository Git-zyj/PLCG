/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185098
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_10 = (max(((max(var_3, (arr_1 [i_1 + 1] [i_1 - 1])))), ((~(arr_0 [i_1 + 1] [i_1 + 1])))));
                var_11 |= (((((((65535 ? (-2147483647 - 1) : 6622))) ? var_7 : (((arr_0 [i_0] [i_0]) & (arr_2 [i_0] [i_1]))))) / (((((!16598973741408637853) >= var_8))))));
                var_12 = ((((min((max(259826253, var_0)), var_8))) ? ((-(arr_1 [i_1 - 1] [i_1 - 1]))) : (max((arr_0 [i_1 - 1] [i_1]), (((arr_1 [i_1] [i_0]) ? (arr_1 [i_0] [i_1 - 1]) : 6626))))));
            }
        }
    }
    var_13 += (((((var_5 <= var_6) / var_7)) == (max(((min(6622, var_8))), (var_7 * 56849)))));
    var_14 = var_6;
    var_15 = var_1;
    var_16 = (!var_0);
    #pragma endscop
}
