/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173287
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_2] [i_2] [i_0 - 3] [i_0] [14] = 248;
                                arr_15 [i_2] [i_1 + 2] [i_1] = ((var_4 ? (40 % var_9) : (((min((arr_9 [i_0 + 3] [i_0 + 1] [i_1 + 1] [i_4 + 2]), (var_2 == 248)))))));
                            }
                        }
                    }
                    arr_16 [i_0] [i_1 - 1] [i_2] [i_0] = (((((!(arr_13 [4] [i_1 + 4] [i_1 + 4] [i_1 + 4] [i_1 + 4] [i_1 + 2] [4])))) ^ (~var_2)));
                    var_14 = (((((var_7 ? (!var_10) : var_13))) ? (((32 / (arr_9 [i_0] [i_0 + 2] [i_1] [i_2])))) : (var_8 + var_4)));
                }
            }
        }
    }
    var_15 = (min(var_15, (((((((((var_0 ? var_1 : var_8))) ? ((249 ? var_9 : 8)) : (248 != var_11)))) ? ((255 + ((max(32764, var_4))))) : (var_8 == var_3))))));
    var_16 = (var_0 == var_7);
    #pragma endscop
}
