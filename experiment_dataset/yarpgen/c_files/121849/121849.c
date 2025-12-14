/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121849
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_15 *= ((((var_0 * (arr_1 [i_0 - 4])))) && (((var_10 / ((var_2 ? var_1 : -2628))))));
                    arr_7 [i_1] = (min((arr_3 [i_1]), ((min(var_3, (arr_2 [i_0 + 1] [i_1 + 1] [i_2]))))));
                    var_16 |= (((!228) ? (!var_8) : (!var_2)));
                    arr_8 [i_2] [i_0] &= (min(((min((var_1 || var_8), (min(-33, -19))))), ((48 ? var_6 : var_12))));
                }
            }
        }
    }
    var_17 = ((-1127605931 ? (max(1, (~var_3))) : (!var_7)));
    #pragma endscop
}
