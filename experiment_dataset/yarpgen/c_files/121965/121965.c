/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121965
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_0] = (((300170370970680043 ^ 4294967276) <= 34974));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_11 [i_3] [5] [i_3] = (max(((min(3, 65535))), (((-1389476235 - 4468332785166876213) - (2210328205 - 15667)))));
                            var_11 = (!18446744073709551615);
                        }
                    }
                }
                var_12 = (min(var_12, (((((242 ? 0 : (37 < 1))) > (((((4294967274 ? 1475245130 : 51414))))))))));
            }
        }
    }
    var_13 = var_2;
    var_14 = var_4;
    #pragma endscop
}
