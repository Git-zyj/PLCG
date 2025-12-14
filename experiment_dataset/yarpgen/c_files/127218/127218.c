/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127218
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (!var_6);
    var_12 ^= var_1;
    var_13 = (((((~((8494999639777209916 ? -28901 : 7680))))) ? (((~-15610) ? ((-28901 ? -7680 : -28901)) : (~-7680))) : 5120));

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        arr_3 [i_0] = (arr_1 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_0] [8] [1] [i_1] [i_4] = (((((((arr_6 [i_1] [i_1] [6]) ? (arr_11 [7] [i_1]) : var_6)))) ? (arr_1 [i_0 + 1]) : var_5));
                                var_14 = (max((~-7687), ((((((arr_9 [5] [i_1] [i_2] [i_3]) ? (arr_9 [i_0] [i_0] [i_2] [i_3]) : (arr_0 [i_0 + 1] [5])))) ? (min((arr_6 [i_1] [4] [3]), var_10)) : (((-28901 ? 7707 : 508)))))));
                            }
                        }
                    }
                    arr_13 [i_0] [i_0] [i_0] [i_1] = ((!(((-1 ? 99900863 : -30)))));
                }
            }
        }
        arr_14 [i_0] = (((((-508 ? ((34 ? var_8 : -1)) : 9135))) ? (!-28901) : 7694771178881553007));
    }
    var_15 += (!var_7);
    #pragma endscop
}
