/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130043
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                var_16 = (min(var_16, (arr_3 [i_0])));
                arr_4 [i_0] |= ((((max((((arr_3 [i_0]) ? (arr_3 [5]) : (arr_3 [i_0]))), (arr_0 [i_0])))) ? ((((arr_3 [i_0]) ? -85 : ((-(arr_0 [i_0])))))) : ((~(min((arr_2 [20] [i_1] [i_0]), (arr_0 [i_1])))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_12 [i_3] = 6603177354341196003;
                            var_17 = ((((arr_3 [i_0 - 1]) ? (arr_3 [i_0 + 1]) : (arr_3 [i_0 - 1]))));
                        }
                    }
                }
            }
        }
    }
    var_18 = ((var_13 ? -var_4 : ((min((((var_10 ? var_5 : -85))), var_6)))));
    #pragma endscop
}
