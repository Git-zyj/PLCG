/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140289
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(((1 ? (-29404 * var_2) : var_7)), (((((var_13 ? var_8 : var_6)) * (1 | var_11))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                var_20 = (((((arr_3 [i_0 - 1] [i_0 - 2] [i_1 - 2]) ? (arr_3 [i_0 - 1] [i_0 - 2] [i_1 + 1]) : (arr_4 [i_0 + 1]))) != var_9));
                var_21 = ((var_6 != (arr_4 [i_1])));
                var_22 += ((((((arr_4 [i_0 - 2]) ? (arr_4 [i_0 - 3]) : (arr_4 [i_0 + 1])))) ? (arr_4 [i_0 - 3]) : (min((arr_4 [i_0 - 3]), -2014213955))));
            }
        }
    }
    var_23 = ((((var_14 * ((var_6 ? 25 : var_18))))) ? (((var_14 != (max(var_6, 5905665225801965635))))) : var_4);
    var_24 = 1130379633;
    #pragma endscop
}
