/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159670
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((!(3833682810376808932 || var_4)));
    var_14 = ((4270994222 ? ((-(max(3833682810376808932, var_5)))) : (min(var_11, ((4919802352976137153 ? var_7 : var_0))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_15 ^= (arr_4 [i_1]);
                    var_16 = ((!((!(!5083525771135231245)))));
                    arr_9 [i_0] [i_1] = ((!((((arr_3 [i_1 + 1] [i_1 - 2]) ? (!3833682810376808924) : (!var_7))))));
                    var_17 = ((2016950722 ? ((~(~196))) : 204));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_14 [i_3] = 2278016574;
                                arr_15 [i_0] [i_1] [i_3] [i_3] [i_4] = ((3833682810376808932 ? (min(var_8, ((3265289375 ? 26388 : (arr_12 [i_0] [i_1] [i_3] [i_3] [i_4]))))) : (arr_13 [i_0] [i_1] [i_2] [i_3] [i_4])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
