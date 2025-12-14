/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137919
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_16 &= 56374;
                var_17 = (((!9164) * ((((arr_1 [i_1 + 2]) || 56388)))));
                arr_6 [i_0] [i_0] = ((-((56377 ? (56369 | var_5) : (var_1 < 9149)))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_12 [0] [8] [i_1] [8] [i_3] [i_3] &= ((~9161) ? (max(9150, (arr_2 [i_2 + 1]))) : (((min(56374, 9154)))));
                            var_18 |= ((56374 ? 56369 : 56382));
                        }
                    }
                }
            }
        }
    }
    var_19 = ((65534 && (((var_5 >> (-var_10 + 3))))));
    #pragma endscop
}
