/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1095
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        {
                            var_12 = (-1 ^ (max(39, 0)));
                            var_13 = var_6;
                            var_14 = (((max(var_9, -32)) * (arr_8 [i_0] [i_1 + 2] [i_2] [i_3 + 1])));
                            var_15 = (min(((((max(-38, 8388607))) ? ((max(1, -40))) : ((1 ? 1 : -62)))), (((arr_6 [i_0]) ? (arr_6 [i_0]) : (arr_6 [i_0])))));
                        }
                    }
                }
                var_16 = (!445102630);
            }
        }
    }
    var_17 = var_8;
    var_18 |= (((max(-39, 4286578681)) + (max(var_4, var_11))));
    #pragma endscop
}
