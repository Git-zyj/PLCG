/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177875
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_9;
    var_21 = var_7;
    var_22 -= ((!((0 >= ((0 ? 3009754031364308248 : 3009754031364308254))))));
    var_23 = var_0;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_24 = 17683256617651702184;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        var_25 = (min(var_25, ((max(25, 61534)))));
                        arr_9 [2] [2] [i_1] [4] = (arr_4 [i_2]);
                        var_26 = ((~(arr_1 [i_0])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
