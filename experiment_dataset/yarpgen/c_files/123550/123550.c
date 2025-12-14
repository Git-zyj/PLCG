/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123550
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_2] = ((((-6575765751226955512 > (arr_3 [7]))) ? ((-3 ? var_12 : 1)) : 2));
                    var_15 = ((((min(((((arr_3 [i_1]) ? var_13 : 14))), (max(11, -293061469316130446))))) ? ((((3 != -631429884) ? ((max(-16384, 1))) : (arr_4 [i_1 - 1])))) : var_2));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_14 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = 10385;
                                var_16 = 2680;
                                arr_15 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [17] = var_12;
                                arr_16 [i_0] [i_1] [i_4] = var_9;
                            }
                        }
                    }
                    arr_17 [i_2] [i_2] = ((((31 ? var_1 : (arr_7 [i_1 + 1] [3] [i_2] [i_2 - 2]))) > ((3046670322 ? ((min((arr_5 [10]), 32759))) : 1))));
                }
            }
        }
    }
    #pragma endscop
}
