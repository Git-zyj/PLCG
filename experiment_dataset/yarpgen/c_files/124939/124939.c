/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124939
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += 1;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_20 = (min(var_20, ((((((-114 == ((1 ? 749749826 : 613364518))))) * -264877142)))));
                                var_21 |= 19113;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                var_22 -= 244982955946614711;
                                var_23 |= ((-19 ? (((arr_2 [i_0 - 2]) ? (((((arr_12 [10] [i_1 + 2] [8] [i_5] [8]) == -3621445831830293667)))) : 644973562446485883)) : (((arr_13 [i_0]) ? (arr_12 [i_0] [i_1 - 1] [i_1 - 1] [12] [i_0 + 1]) : (arr_6 [i_0] [i_1 - 1] [i_0] [i_5])))));
                            }
                        }
                    }
                    var_24 = 86;
                }
            }
        }
    }
    #pragma endscop
}
