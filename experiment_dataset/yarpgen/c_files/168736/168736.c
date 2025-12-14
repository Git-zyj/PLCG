/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168736
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((((var_12 ? var_4 : 1))) ? var_6 : (9223372036854775807 == var_4))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                var_19 *= (~var_10);
                var_20 = (max(var_20, (~1)));

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    var_21 &= var_11;
                    var_22 = (!var_8);
                    arr_8 [14] [i_1 - 1] [10] [6] = 1;
                    arr_9 [i_2] [14] [i_1 - 1] [i_0] = ((((-1 ? -0 : 1))) ? (max((~8625930658185745456), (var_3 | 39824))) : ((((((arr_5 [i_0] [i_1 + 1]) ? 1794036771 : 18446744073709551615))))));
                }
                var_23 = (((~var_1) | (((((8 ? 2496803066 : (arr_2 [i_0]))))))));
            }
        }
    }
    #pragma endscop
}
