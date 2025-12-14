/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133084
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 15;i_2 += 1)
            {
                {
                    var_18 = max((((var_3 >= var_1) ? (arr_0 [i_0 - 3]) : -18909)), (((~((var_3 ? -83 : var_6))))));
                    var_19 = (i_0 % 2 == zero) ? (((+((var_4 << ((((max((arr_6 [i_0] [i_0]), (arr_4 [i_0] [i_0] [i_0])))) - 81))))))) : (((+((var_4 << ((((((max((arr_6 [i_0] [i_0]), (arr_4 [i_0] [i_0] [i_0])))) - 81)) + 102)))))));
                }
            }
        }
    }
    var_20 = var_15;
    var_21 = ((-((((83 ? 20959 : -4483589273086478361))))));
    var_22 |= min((max((var_8 * var_10), var_7)), -112);
    #pragma endscop
}
