/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172797
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= ((4114388219643132173 ? 753044759 : 16216202554194600449));
    var_17 = -6612;
    var_18 = (!524287);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_19 = arr_4 [8] [i_1] [i_1];
                arr_6 [i_0] = ((((arr_2 [i_1]) ? (arr_2 [i_0]) : (arr_2 [i_0]))));
                var_20 = (((((4114388219643132173 >> (arr_1 [i_1] [i_1]))) ^ var_4)));

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    var_21 = (~1);
                    var_22 = -846018902908518523;
                }
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        {
                            var_23 = (((!(arr_4 [i_0] [i_1] [i_1]))));
                            var_24 = (((arr_5 [i_3] [i_0]) ? (((arr_10 [i_4] [i_0]) ? ((max(-753044759, 32021))) : (arr_14 [i_3] [i_3] [i_1] [i_3]))) : ((min(753044759, 32760)))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
