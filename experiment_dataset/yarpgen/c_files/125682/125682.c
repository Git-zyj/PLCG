/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125682
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                var_10 = (max(1, ((-((81 ? (arr_3 [i_1]) : var_0))))));
                arr_6 [i_0] = (min((((arr_1 [i_0]) ? -737522218350101690 : (arr_2 [i_0]))), ((((arr_0 [i_1 - 1]) ? (arr_2 [7]) : (max((arr_3 [i_0]), var_8)))))));
                var_11 -= (!8363);
            }
        }
    }
    var_12 = ((((min((0 || 3), (var_9 * var_8)))) == (max(((var_2 ? var_1 : var_9)), ((max(81, 16)))))));
    var_13 = (min(((!((min(var_0, var_6))))), 0));
    var_14 = var_4;
    var_15 = var_4;
    #pragma endscop
}
