/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104834
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_17;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0] [i_1] [i_2] = (~1);

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        var_21 = ((1 ? 1 : 3281940890));
                        var_22 = 472849996;
                        arr_9 [i_3] = ((-23952 ? (((4045001270 ? 1 : 1))) : 472849978));
                        var_23 |= -3;
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 23;i_5 += 1)
                        {
                            {
                                arr_15 [i_0] [21] [13] [21] [21] [12] = (((((-2104895775 ? 1 : 173))) ? (((773878407 ? -2042724343 : 1))) : ((21 ? -29234 : 9263340225720692367))));
                                var_24 = 1597250870870984111;
                                var_25 = 28;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
