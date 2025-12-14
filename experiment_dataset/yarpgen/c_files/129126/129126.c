/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129126
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_1] = (((max((arr_0 [5]), 410929114))) * ((((!(7858432929762314347 ^ var_12))))));
                arr_7 [i_1] [i_0 - 1] [5] = 410929111;

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    var_13 = (-9223372036854775807 - 1);
                    var_14 = -7858432929762314348;
                }
                var_15 = ((410929121 ? ((((((arr_0 [i_0 - 1]) + 410929111))) ? 1321888987 : var_1)) : 3848254459));
            }
        }
    }
    var_16 = 7858432929762314347;
    var_17 ^= 410929114;
    #pragma endscop
}
