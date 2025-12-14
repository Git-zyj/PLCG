/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169505
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_0] [i_2] [i_2] |= (((arr_2 [i_0] [i_1 + 1]) == (min(32767, -5304600226291347574))));
                    var_12 &= (max((((!(var_9 || 69)))), ((105 ? 32767 : 69))));
                    var_13 = ((((max((((var_0 ? var_3 : (arr_5 [24])))), (max(127, var_7))))) ? (((min(18, var_8)) / ((((arr_5 [i_2]) ? (arr_0 [i_0]) : var_6))))) : var_4));
                }
            }
        }
    }
    var_14 = (min(((((var_5 && var_5) || (((var_2 ? var_9 : var_3)))))), ((-(min(-1476494155, var_3))))));
    #pragma endscop
}
