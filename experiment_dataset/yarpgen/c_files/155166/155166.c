/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155166
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                var_11 -= ((4514019737519429520 != ((0 ? (-9223372036854775807 - 1) : 2251799813619712))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_13 [16] [0] [0] [i_1] [16] [i_1] [i_1] = arr_9 [i_0] [i_0] [i_0] [i_0] [i_0];
                                var_12 = (((((((~(arr_10 [i_0] [i_0] [i_1 - 2] [i_2] [i_3] [i_3] [i_4]))) == (arr_4 [i_1] [i_4]))))) > ((((arr_2 [i_1] [i_1]) || 214))));
                            }
                        }
                    }
                }
                var_13 = ((((min((((arr_3 [21] [i_1]) ^ var_3)), (arr_10 [i_0] [i_0] [i_0] [i_1] [i_0] [i_1] [i_0])))) ? var_9 : (1441670663 >= -1441670656)));
            }
        }
    }
    var_14 = (max(var_14, 516082399));
    var_15 -= -var_9;
    #pragma endscop
}
