/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178754
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, var_1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            {
                var_19 = (min(var_19, (((((((arr_5 [i_1] [i_1 + 3]) | 2884315266))) ? 161 : (arr_0 [i_1 - 1] [i_1]))))));
                arr_6 [i_1 - 1] = (arr_4 [i_1 + 4] [i_1] [i_1 + 1]);

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_20 = (arr_1 [i_0] [i_0]);
                    var_21 = ((((~(~147)))) > ((147 ? var_12 : var_10)));
                }
            }
        }
    }
    var_22 = var_11;
    #pragma endscop
}
