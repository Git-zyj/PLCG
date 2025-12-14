/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102435
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (!2693637679);
    var_20 = (min(var_20, ((((((!((min(var_16, var_10))))))) < 1085302720819125464))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [i_1] = ((((min((arr_2 [i_0 + 2]), 10134))) ? (((((((!(arr_1 [i_1]))))) & (min(var_8, 2164639547152807766))))) : (((arr_4 [i_0] [i_0] [12]) + (arr_5 [i_0 - 1] [i_0 - 1])))));
                var_21 = (arr_4 [7] [i_1] [i_1]);
                var_22 = (((((arr_5 [i_0 - 1] [i_0 + 4]) - (arr_5 [i_0] [i_0 + 4]))) - ((((!(arr_5 [i_0] [i_0 + 4])))))));
            }
        }
    }
    var_23 = ((((((var_0 / 161) * 161))) ? -2164639547152807767 : (((((var_14 ? var_4 : var_7)) << (!158))))));
    var_24 = ((!((((((2164639547152807766 ? var_2 : 1))) % var_5)))));
    #pragma endscop
}
