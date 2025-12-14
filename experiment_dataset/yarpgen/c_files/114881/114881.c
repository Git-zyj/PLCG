/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114881
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_14;
    var_21 |= (((!var_16) ? var_15 : (((max(255, 192802857))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                var_22 = (max((~var_12), (arr_1 [i_0])));
                var_23 = (arr_6 [2] [i_1 + 1]);
                var_24 = (min(var_24, (min(((((arr_1 [i_1 - 2]) >> (arr_1 [i_1 - 2])))), var_12))));

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    var_25 ^= (((arr_7 [i_1 - 3] [i_1 - 3] [i_1 + 1]) ? ((~(arr_7 [i_1 - 2] [i_1 + 1] [i_1 - 1]))) : ((-(arr_7 [i_1 - 2] [i_1 - 1] [i_1 - 3])))));
                    var_26 = ((-(!-1779717944)));
                    var_27 = (((max(((max(4102164439, 0))), (arr_3 [i_1] [i_1 - 3]))) == (((~(arr_6 [i_1 - 3] [8]))))));
                }
            }
        }
    }
    var_28 = var_15;
    #pragma endscop
}
