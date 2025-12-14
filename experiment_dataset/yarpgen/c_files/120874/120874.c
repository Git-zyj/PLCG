/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120874
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_7 [i_0] = ((!(0 - 0)));
                arr_8 [i_0] [14] [10] &= var_2;
                arr_9 [i_0] [7] = (max((((((max(var_8, var_11)))) | (max(var_5, var_11)))), ((255 ? ((0 ? 249 : 16726468512448595801)) : 122))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            {
                arr_14 [i_3] = (max((max((var_4 % var_15), (~0))), ((max((var_14 <= var_3), ((var_11 >> (var_6 - 2007497740))))))));
                arr_15 [i_3] = ((((var_10 ? (var_13 % var_12) : (((var_9 ? var_2 : var_13)))))) ? (max(0, 0)) : ((~(var_9 & var_5))));
                var_16 *= (max(((((!var_5) ? ((min(var_8, var_1))) : ((var_0 ? var_14 : var_0))))), ((((max(var_10, var_2))) ? (((var_11 ? var_6 : var_12))) : ((var_4 ? var_12 : var_5))))));
            }
        }
    }
    #pragma endscop
}
