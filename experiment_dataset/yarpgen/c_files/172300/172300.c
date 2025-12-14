/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172300
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(3247942654230619354, ((~((var_17 ? 9223370937343148032 : var_9))))));
    var_20 -= ((var_10 ? (((((!var_15) && ((max(var_16, 10750720395227011934))))))) : var_10));
    var_21 &= var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_22 = (min(var_22, (((-(((3247942654230619358 <= (arr_1 [i_0])))))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_4] = ((((max(((((arr_12 [i_4 + 3]) == var_0))), (arr_9 [i_4 + 3])))) == ((~(arr_0 [i_4 + 4])))));
                                var_23 = (((((((max(13605871387601805888, var_6))) ? (arr_9 [i_0]) : -32))) && ((var_7 || (!-8786264169326869006)))));
                            }
                        }
                    }
                }

                /* vectorizable */
                for (int i_5 = 4; i_5 < 13;i_5 += 1)
                {
                    var_24 ^= -9223370937343148055;
                    var_25 = (min(var_25, (arr_5 [i_5 - 2] [i_1] [i_5])));
                    var_26 = ((!(arr_8 [i_5 - 3] [i_5 - 2] [i_5 + 1])));
                }
            }
        }
    }
    #pragma endscop
}
