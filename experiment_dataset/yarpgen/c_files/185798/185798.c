/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185798
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_18 = (max(8001345556945746378, (((((max((arr_12 [i_0] [4] [i_2] [i_3] [4]), (arr_4 [i_0] [i_1] [i_2] [i_3])))) && var_1)))));
                                var_19 = 0;
                            }
                        }
                    }
                }
                arr_16 [i_0] [i_1] [i_1] = ((((-6 ? var_11 : (arr_8 [i_1] [i_1] [i_1] [i_1]))) != 5));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        {
                            var_20 = (max(var_20, (((((max(16, 5))) ? var_15 : -20)))));
                            var_21 = (arr_10 [i_1] [i_1] [i_1] [i_6]);
                        }
                    }
                }
                arr_22 [i_1] = ((((((((max((arr_21 [i_0] [i_1] [i_1] [i_1] [i_0]), -2997)))) & (arr_0 [i_0] [i_1])))) ^ ((~(max(var_0, 10516930016214264032))))));
            }
        }
    }
    var_22 = (var_16 | var_13);
    #pragma endscop
}
