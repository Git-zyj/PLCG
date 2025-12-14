/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136919
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= ((!((min(0, 4205653444610805788)))));
    var_16 = ((((min(((var_14 ? 4205653444610805791 : var_4)), ((min(var_7, 1679345294)))))) ? (((!(!var_0)))) : (((((min(6510, -6501))) && (var_1 || var_14))))));
    var_17 = var_7;
    var_18 &= ((((-5313834160984524703 ? 4205653444610805816 : (!-67))) | var_4));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_19 = ((((((arr_5 [i_0] [i_0]) <= (arr_5 [i_1] [i_2])))) * (((!(arr_5 [i_0] [i_1]))))));
                    arr_8 [i_2] [1] [i_1] [i_2] = (arr_5 [i_2] [i_1]);
                }
            }
        }
    }
    #pragma endscop
}
