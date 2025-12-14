/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104183
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_13 = ((-1 % ((((arr_1 [i_0]) >= 8)))));
                arr_5 [i_0] [16] = var_9;
                arr_6 [i_0] [12] = ((((min((arr_0 [i_1]), (1 < var_10)))) && ((((2175569953 == -1150224194) ? var_9 : 116)))));
                arr_7 [1] = (((-(~var_8))));
            }
        }
    }
    var_14 = ((((!(((64 ? var_11 : var_12))))) ? ((((!var_1) || (!var_1)))) : var_11));
    var_15 = ((((((var_8 >= var_5) % (191 >= var_2)))) ? var_12 : (((((max(0, var_6))) || var_4)))));
    #pragma endscop
}
