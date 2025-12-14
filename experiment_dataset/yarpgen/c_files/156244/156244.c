/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156244
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [10] |= (min(21397900, 5293139159443269245));
                arr_6 [i_1] = (min(var_11, var_7));
                arr_7 [i_1] [i_0] = (min(((-(~31744))), (((arr_1 [i_0] [i_1]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [2])))));
                arr_8 [i_1] [i_1] [i_0] = (!var_11);
            }
        }
    }
    var_18 = ((!var_15) ? var_14 : (((!(((var_15 ? var_7 : 31744)))))));
    var_19 = (((max(var_6, ((var_16 ? var_2 : var_4)))) >> (var_12 / var_12)));
    var_20 = var_4;
    var_21 = var_7;
    #pragma endscop
}
