/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171072
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_6, var_2));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_20 = -630644643385455022;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [10] [i_3] = ((((var_8 - ((2908217284 ? -149266580 : 255)))) << (min(7955110058600755696, (arr_1 [6])))));
                            arr_11 [i_0] [i_1] [i_3] [i_2 + 1] [i_3] [i_3] = ((((((arr_8 [i_2] [i_2 + 1] [i_2 + 1] [2] [i_2] [i_2 + 1]) + var_0))) ? (max((arr_7 [i_2] [i_2 + 1] [i_2 + 1]), 18303)) : ((-(arr_7 [i_2] [i_2] [i_2 + 1])))));
                            arr_12 [i_3] = (1 && -630644643385455022);
                        }
                    }
                }
                arr_13 [i_0] [12] [i_0] = ((((114 ? (((max(1, 1)))) : ((-(arr_8 [i_1] [14] [i_1] [i_0] [i_1] [i_0]))))) + var_9));
                arr_14 [10] = ((((!(!1636148812369191123))) ? ((((!((max((arr_4 [i_0] [i_1] [i_0]), -630644643385455051))))))) : var_4));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            {
                                arr_24 [8] [8] [i_4] [i_4] [i_4] [i_4] [i_4] = (((arr_20 [i_0] [15] [i_4] [15] [i_6]) ? var_9 : (arr_20 [i_0] [14] [i_4] [i_4] [i_4])));
                                var_21 *= (max(-10467, ((((arr_23 [i_0] [i_0] [i_4] [i_5] [i_6]) || ((var_4 <= (arr_23 [i_0] [2] [1] [i_5] [i_6]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
