/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160677
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = (max(((((min(var_3, (arr_4 [i_0] [i_1])))) & 61291)), var_11));
                arr_7 [i_0] [i_1] = ((((((!var_4) ? (min(84, var_7)) : (124 > var_10)))) ? ((((132 ? 131 : 124)) >> (((~137) + 165)))) : (((((131 ? (arr_5 [i_1] [i_0 - 1]) : 103))) ? (arr_5 [i_0 - 1] [i_0 + 2]) : 132))));
                arr_8 [i_0] [9] [i_1] = 131;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_17 [i_0] [i_1] [5] [1] [i_4] = var_0;
                                arr_18 [6] [i_0] [1] [i_0] [i_0] = 153;
                            }
                        }
                    }
                }
            }
        }
    }
    var_12 = ((((min(var_3, ((var_10 ? var_3 : 126))))) ? (~103) : ((max((var_2 > var_1), (131 > 147))))));
    var_13 = (~var_4);
    #pragma endscop
}
