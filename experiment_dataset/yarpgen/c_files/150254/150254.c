/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150254
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= (((((~(7866651381429881649 ^ var_3)))) || ((max((min(var_0, var_2)), (((2979 ? 486723704 : 42569))))))));
    var_11 *= (((!5803783552987640312) << (((min((max(2305843008676823040, var_6)), (~var_7))) - 2305843008676823036))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_12 = var_9;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_13 = (!1410425135);
                                var_14 &= (((~2884542165) == (((((arr_8 [i_4] [i_3] [i_2] [i_1] [i_0]) == 1))))));
                                var_15 = (arr_1 [i_3] [i_0]);
                                arr_11 [i_1] [i_1] [i_3] = ((-(~-10)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
