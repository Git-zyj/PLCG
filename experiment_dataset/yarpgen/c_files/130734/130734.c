/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130734
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_18 = (((((~0) * (8889 * 1))) <= (((!var_14) >> (((arr_3 [1] [17] [1]) - 47953))))));
                var_19 = ((((max((max(1354493384, var_9)), (arr_2 [i_0])))) ? ((((var_3 - (arr_0 [12] [0]))) ^ (44932 == -27))) : ((((arr_2 [i_0]) > (arr_0 [i_0] [i_1]))))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    var_20 = (max(var_20, 0));
                    var_21 = -8167;
                    var_22 ^= (((8351236274059393868 << (((var_14 + 9602) - 62)))) << (((arr_2 [i_1]) - 52)));
                    var_23 = (arr_3 [14] [i_1] [i_2]);
                }
            }
        }
    }
    var_24 *= var_3;
    var_25 |= (max(((min(36820, -25))), (((((-32760 ? var_14 : 22))) % ((var_5 ? var_1 : 1841636080))))));
    var_26 = (16 - 4294967283);
    #pragma endscop
}
