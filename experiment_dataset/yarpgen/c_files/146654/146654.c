/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146654
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                {
                    var_16 = ((((var_14 ? 560686742 : var_15))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_12 [i_1] [i_1] [i_2] [i_1] [i_1] [i_1] = ((~((1124827284 ? 4294967295 : 255))));
                                arr_13 [i_1] = (((((1 - (arr_4 [i_1])))) << ((((arr_3 [i_2 + 1]) < 9)))));
                                var_17 = 12328993159625275017;
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = (~((~(~var_10))));
    #pragma endscop
}
