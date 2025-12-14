/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1011
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [i_0] = (!2577796948050535203);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_3] = (min(-5998006152671961966, ((((arr_1 [i_0]) & (arr_1 [i_0]))))));
                                var_16 = (min(var_16, (arr_10 [i_1] [i_1] [i_1 + 1] [5] [i_1])));
                                var_17 |= (((arr_0 [i_0] [i_0]) % -6276511577172034214));
                            }
                        }
                    }
                }
                var_18 = ((-((2041360975 | (((45327 | (arr_0 [i_1 + 1] [i_0]))))))));
                var_19 ^= -7414035088455598748;
            }
        }
    }
    var_20 = var_14;
    #pragma endscop
}
