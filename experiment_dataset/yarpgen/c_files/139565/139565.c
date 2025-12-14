/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139565
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 10;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_2] [i_0] = 1;
                            arr_11 [i_0] [6] = (((-2147483647 - 1) + 239));
                            arr_12 [i_2] [i_2] [i_0] = ((-(-101 - 513972003)));
                            arr_13 [i_3] [i_2] [i_2] = (min((((~-2147483647) ^ 90)), ((((min(0, 32))) - 0))));
                        }
                    }
                }
                arr_14 [i_0] [i_0] = ((!(arr_0 [i_0] [0])));
            }
        }
    }
    var_17 = ((!(((var_4 >> ((((((var_6 ? (-9223372036854775807 - 1) : var_6)) - -9223372036854775792)) + 23)))))));
    #pragma endscop
}
