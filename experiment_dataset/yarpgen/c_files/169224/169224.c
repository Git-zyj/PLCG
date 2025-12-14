/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169224
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                var_20 = (arr_2 [i_1 - 1] [i_1 - 1] [i_1 - 2]);
                var_21 = ((-((((min(var_13, var_1))) ? ((-5440158250270697367 ? var_16 : var_6)) : var_17))));
                var_22 = (min(var_22, ((((((((max(2097088, var_12))) ? ((var_10 ? 2097088 : (arr_2 [i_0] [0] [13]))) : var_17))) ? (((var_13 << var_16) ? (var_10 | 1) : -5440158250270697367)) : (((((arr_2 [i_0] [i_1 - 2] [i_1]) <= (arr_3 [i_0] [i_1 - 2] [i_1 + 2]))))))))));
                arr_6 [i_0] [i_0] = var_6;
            }
        }
    }

    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        arr_10 [i_2] = (((((-((((arr_5 [i_2] [i_2]) >= (arr_7 [1]))))))) ? (max(var_6, (arr_0 [i_2 - 1]))) : (((var_19 | ((var_10 ? -438719813 : var_3)))))));
        var_23 = var_14;
    }
    var_24 = ((!((!(((1 ? 1 : 109)))))));
    #pragma endscop
}
