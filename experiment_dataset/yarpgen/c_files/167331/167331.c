/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167331
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max((((var_4 & 9089723110396270465) ? var_5 : 82)), ((((var_13 + 2147483647) << (var_11 - 21622))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_17 = ((((((arr_7 [i_0] [i_0 + 1] [i_1]) ? (arr_7 [i_0] [i_0 - 2] [i_2]) : (arr_7 [i_0] [i_0 - 2] [i_1])))) ? ((9089723110396270465 * (arr_7 [i_0] [i_0 - 2] [i_0]))) : (((241 ? 65526 : 0)))));
                    var_18 = (((((max(-82, 1023))) ? (arr_5 [i_2] [i_1] [i_2]) : ((((-9223372036854775807 - 1) ? var_10 : var_4))))) | var_13);
                    arr_8 [i_2] [i_0] &= (max((((-((-124 ? var_11 : var_11))))), ((max(1414482064348610220, 1)))));
                }
            }
        }
    }
    var_19 = ((!(-7 != 1)));
    #pragma endscop
}
