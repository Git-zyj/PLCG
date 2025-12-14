/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177225
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= ((max((-989624189 + 6090), 2830110361421773790)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_14 = (min(var_14, ((max(((2032 ? (((min(-111, 2032)))) : (249 + 18446744073709551615))), ((((((11973 ? 2040 : 2031))) ? (1 & 33538048) : (-1 + 63493)))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_15 = 3813302613;
                            var_16 = ((((max(131071, -1))) ? ((max(((2025 ? 7759183729991782373 : 632765700)), (max(3813302612, 2034887325832123952))))) : (((3190406044 ? 1 : 576460751229681664)))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
