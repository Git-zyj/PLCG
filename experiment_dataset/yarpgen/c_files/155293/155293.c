/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155293
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                var_21 = 3331;
                var_22 += var_8;
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2 - 1] [i_1] [i_1] [i_1] = (((arr_6 [i_0] [i_0] [i_0 + 1] [18]) ? (((-1090172922 && -916631287) ? (((min(3331, var_0)))) : (arr_11 [i_1]))) : ((((min((arr_14 [4] [i_1] [i_2] [i_1 - 1] [i_4]), 208)) << ((((-(arr_6 [17] [i_1] [i_2] [i_3]))) + 21)))))));
                                var_23 = var_14;
                                var_24 ^= 14015;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
