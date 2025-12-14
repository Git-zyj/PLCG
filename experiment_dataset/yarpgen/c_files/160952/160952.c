/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160952
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_0] [i_1] [i_1] [i_1] [i_3] |= (max((((arr_0 [i_2]) ? (arr_0 [i_1]) : 1529108080747812588)), (((var_0 ? var_13 : (arr_0 [i_3]))))));
                            var_15 = (min(var_15, (((max((min((arr_6 [i_0] [i_1] [i_3]), 4014703562)), 280263747))))));
                        }
                    }
                }
                var_16 = (max(var_16, (arr_0 [i_0])));
                arr_11 [i_0] [i_1] = (((var_0 ? (arr_4 [i_0] [i_1] [i_0 + 1]) : 2147483647)));
                arr_12 [i_0] [10] [10] |= (min(4014703556, 4096));
            }
        }
    }
    var_17 = (~2103380885);
    var_18 = (max(var_18, 3));
    var_19 = 280263712;
    #pragma endscop
}
