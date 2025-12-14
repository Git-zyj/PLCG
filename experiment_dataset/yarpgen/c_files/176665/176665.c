/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176665
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_7 < (-8355 ^ -8956)));
    var_19 = (-1 <= var_5);
    var_20 = (((((8955 ? 8354 : -8979))) && (~-var_6)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_0] [i_0] = var_11;
                    arr_8 [i_2] [i_1 + 2] [i_0] = var_16;
                    arr_9 [i_0] [i_1] [i_1] = (min((-23 % -7202), -8979));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_15 [i_4] [i_3] [i_3] [i_2] [i_0] [i_0] [i_0] = -7225;
                                arr_16 [i_3] [i_1] [i_0] = (((8972 << ((((32745 ? -32591 : 1592967161) - 4294934688))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = ((-7208 * ((-47 ? ((min(-120, 34))) : 16212))));
    #pragma endscop
}
