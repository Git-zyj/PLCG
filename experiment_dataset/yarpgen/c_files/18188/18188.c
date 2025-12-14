/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18188
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((var_0 ? ((3640070689 ? 224 : 0)) : 3))) ? var_6 : (((((var_14 ? var_8 : var_12)) != var_15)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_1] [1] = ((((arr_0 [i_0] [i_0]) ? var_10 : (arr_2 [8]))));
                arr_6 [i_0] = (min(var_15, (max((arr_2 [i_0]), (arr_2 [i_0])))));
                arr_7 [i_0] = (((((((((arr_2 [i_0]) ? var_2 : var_18))) ? ((min(757391133, 11475))) : ((var_0 ? var_19 : (arr_4 [i_0] [i_1])))))) || var_3));
                arr_8 [i_0] [i_0] [i_0] = (max(((var_10 ? ((16893541050865999113 ? 27 : 3537576139)) : var_9)), (3537576161 | 249)));
                arr_9 [i_1] [0] = (min(((((((~(arr_4 [i_0] [i_1])))) ? (arr_1 [6]) : (!10219)))), ((~(arr_0 [i_0] [i_0])))));
            }
        }
    }
    #pragma endscop
}
