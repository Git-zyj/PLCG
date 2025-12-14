/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143178
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((-((-(max(469762048, 5547353066937913203))))));
    var_13 = (((max(var_7, var_5)) != var_2));
    var_14 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        {
                            var_15 += ((((var_8 & var_6) ? 3 : var_11)));
                            var_16 = -5547353066937913193;
                            var_17 |= (arr_3 [i_1 - 1]);
                        }
                    }
                }
                var_18 ^= ((!(((~(4078968754 == 3804030662))))));
            }
        }
    }
    var_19 = ((-((67108863 ? 490936628 : -15))));
    #pragma endscop
}
