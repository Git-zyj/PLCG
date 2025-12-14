/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112913
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_8;
    var_14 = var_10;
    var_15 = ((((min((min(var_8, -836986192)), var_9))) ? (((((((1814797931138768721 ? 1293441607 : var_5))) && ((min(1293441607, var_3))))))) : (((((var_7 ? var_8 : var_6))) ? -23271 : var_11))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 14;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_1] = (min((((var_2 / 3867874644947044649) ? (var_6 / var_1) : (arr_6 [i_2 - 3] [i_1] [i_2]))), ((((arr_6 [i_2 - 2] [i_1] [i_2]) ? 267911168 : var_9)))));
                    arr_10 [i_1] [i_2] [i_1] [i_1] = 2815738615632014058;
                    arr_11 [8] |= ((((960931041 && (arr_6 [i_2 - 3] [i_2 - 4] [i_2 - 4]))) ? ((((arr_7 [i_2 - 1] [i_2 - 3] [i_2 - 4] [i_2 - 3]) || (arr_6 [i_2 - 1] [i_2 - 1] [i_2 - 1])))) : (((var_7 || (arr_6 [i_2 + 1] [i_2 - 4] [i_2 + 1]))))));
                }
            }
        }
    }
    var_16 = var_7;
    #pragma endscop
}
