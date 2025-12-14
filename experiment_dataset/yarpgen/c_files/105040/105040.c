/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105040
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
                    arr_7 [i_0] [i_0 - 1] [i_0] = (((((var_2 % ((var_16 ^ (arr_1 [i_0] [i_0])))))) ? ((((((var_0 ? -119 : -5175))) ? -19715 : ((~(arr_4 [i_0])))))) : ((((max((arr_4 [i_0]), (arr_6 [i_2] [i_1 + 2] [i_0])))) ? ((32624 ? -1 : (arr_1 [i_1] [12]))) : ((((!(arr_3 [i_0 + 1] [i_1])))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_19 = ((811557006 % (((((var_18 * (arr_10 [0] [i_0] [i_0]))))))));
                                arr_14 [i_3] [i_3] = 32638;
                            }
                        }
                    }
                    arr_15 [i_0] [i_0 - 1] [i_0 - 1] = arr_8 [i_0] [i_0] [i_0] [i_0] [i_0];
                    arr_16 [i_2] [i_0] [i_0] [i_0] = min((arr_3 [1] [1]), (!var_16));
                }
            }
        }
    }
    var_20 = ((~((min((!var_9), var_0)))));
    var_21 = (~75);
    var_22 ^= var_4;
    #pragma endscop
}
