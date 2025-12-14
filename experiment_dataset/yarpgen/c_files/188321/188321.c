/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188321
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_14 &= (~-3165583736859638894);
                                arr_12 [i_0] [i_3] [i_3] = (-0 <= var_8);
                                var_15 = (min(-1371271844, (min((arr_4 [i_0] [i_0 - 3] [i_2 + 1] [i_2 + 1]), (min(62, 7654902028036060885))))));
                                var_16 ^= (!((max(48633703, 14744833900602993813))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 2; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            {
                                var_17 -= (arr_7 [i_7] [i_5]);
                                var_18 += 17374;
                                arr_21 [i_0] [i_1] [i_1] [i_5 - 1] [i_6] [i_5] [i_7] &= (max(((max((arr_7 [i_0 - 2] [i_0 - 3]), (arr_7 [i_0 + 3] [i_0 - 1])))), 1));
                            }
                        }
                    }
                }
                var_19 &= (arr_5 [i_1] [i_1]);
                var_20 *= (min((arr_3 [i_1]), (arr_3 [i_1])));
            }
        }
    }
    var_21 = var_5;
    #pragma endscop
}
