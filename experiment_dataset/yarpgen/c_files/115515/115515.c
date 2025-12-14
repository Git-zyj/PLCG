/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115515
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [2] [i_1] [i_0] = min(((-292268368 ? 65535 : -51)), var_2);
                var_13 = ((((((var_9 != 4239674554) ? ((6692932295624090412 ? 11753811778085461204 : 6692932295624090412)) : 49208))) ? (((var_3 < (arr_1 [i_0])))) : var_2));

                /* vectorizable */
                for (int i_2 = 2; i_2 < 16;i_2 += 1)
                {
                    arr_9 [1] [i_1] [1] [1] = (((-30974 - var_7) - -1022558882));
                    arr_10 [i_0] [i_0] [i_0] [i_0] = (((arr_6 [i_0] [i_1 + 1] [i_2 + 2]) ? (((65509 ? -1022558882 : (arr_8 [i_0] [i_0] [i_0] [i_2])))) : 2486003499));
                    var_14 = (((((arr_6 [i_0] [i_0] [i_2]) >> (30983 - 30958)))) ? 10603 : var_4);
                    var_15 = (1022558863 > 167);
                }
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    arr_14 [i_0] [i_0] [i_1] [i_3] = ((((((((643718070 ? 1807866324 : 0))) ? (arr_12 [i_1]) : 2781533761))) ? 16384 : (arr_11 [i_0] [i_0])));
                    arr_15 [i_0] [9] [9] = ((-643718070 % ((-(arr_0 [i_1 + 1])))));
                }
                arr_16 [i_0] [i_1] = ((~((55292750 ? (arr_6 [i_1] [i_1 - 1] [i_1]) : (arr_6 [i_0] [i_1 + 3] [i_1])))));
                var_16 -= (((!3490) ? ((224 ? var_1 : (arr_4 [i_1 + 2] [i_1 + 2] [i_1 + 2]))) : -var_3));
            }
        }
    }
    var_17 = (((((!(~var_0))))) & 13878202321298949545);
    var_18 = max((min(3489678551, 20)), var_7);
    #pragma endscop
}
