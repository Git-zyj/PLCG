/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13643
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, (((+((((~var_3) <= 62911))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_4 [i_0] = var_2;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_11 *= (((-2147483647 - 1) != (arr_0 [i_3])));
                            var_12 = (min(var_12, (((-(14097869749118629308 >> 1))))));
                            var_13 = 7507849737552294029;
                        }
                    }
                }
            }
        }
    }
    var_14 = ((max(3349142020808678252, var_7)));
    var_15 = (((((~((1 ? var_5 : 1286928856109332159))))) ? (((~(~1)))) : ((((var_5 ? 1 : 716392971)) ^ (((var_7 ? var_0 : 65519)))))));
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 15;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        {
                            arr_22 [i_4] [i_4] |= var_9;
                            var_16 -= ((((min((~2486962081839365944), 173))) ? 1 : 1));
                        }
                    }
                }
                arr_23 [i_4] [i_5] = ((255 / (((arr_1 [i_5]) & (max((arr_10 [0] [i_5]), var_5))))));
                arr_24 [i_4] = ((((((((-(arr_18 [i_4 - 1] [i_5] [i_4 + 1] [i_4])))) ? (arr_17 [i_4 + 1] [i_5]) : (((min(var_0, 5))))))) ? (arr_13 [i_4 + 3]) : (arr_6 [i_5] [i_5])));
                var_17 &= ((var_6 < (arr_5 [i_5])));
            }
        }
    }
    #pragma endscop
}
