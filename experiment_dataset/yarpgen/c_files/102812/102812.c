/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102812
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_11 = (min(var_11, (+-2147483647)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        {
                            arr_14 [2] [2] = (((arr_7 [11]) != var_6));
                            arr_15 [i_0] [1] [i_2] [i_3 + 1] [i_3] = ((((((arr_12 [i_0] [i_1] [i_2] [i_3 + 1] [i_1] [1]) - (arr_12 [i_0] [i_1] [4] [i_3 + 1] [i_2] [8])))) ? ((var_0 + (arr_12 [0] [10] [i_2] [i_3 + 1] [9] [0]))) : -var_9));
                            var_12 = (max(((max(4294967288, -69))), (min(42556, (arr_12 [i_0] [1] [1] [i_3 + 2] [i_3 + 1] [1])))));
                        }
                    }
                }
                var_13 = 3851476614;
            }
        }
    }
    var_14 = (min(var_14, (~var_4)));
    var_15 = ((((((((var_8 >> (var_8 - 1842950538)))) ? (!var_5) : var_7))) ? (var_1 != 443490681) : (max((var_1 || var_10), 3851476614))));
    var_16 *= var_6;
    var_17 = (min(((min(((var_2 ? var_10 : var_7)), -var_6))), (443490681 - var_2)));
    #pragma endscop
}
