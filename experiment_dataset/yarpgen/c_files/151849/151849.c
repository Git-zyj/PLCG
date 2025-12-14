/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151849
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 23;i_2 += 1)
            {
                {
                    var_17 -= (((!(arr_3 [i_0 - 1] [i_1] [i_2 - 3]))));
                    var_18 = (min(var_18, ((((((~((var_10 ? -6994449042653181580 : var_13))))) ? (((-2147483647 - 1) ? (((arr_4 [i_0] [7]) & var_7)) : (arr_2 [i_0] [i_1 - 2]))) : (((11896 == (arr_5 [i_0] [i_0] [11] [i_0])))))))));
                }
            }
        }
    }
    var_19 ^= var_10;
    var_20 = (max((max(((var_2 ? var_8 : 1)), (!4088))), (((var_14 + ((min(var_1, var_4))))))));
    var_21 = (max(var_21, 53639));
    #pragma endscop
}
