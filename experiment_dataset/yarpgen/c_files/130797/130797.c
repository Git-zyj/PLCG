/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130797
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 9;
    var_20 = (max(var_20, (59 & 39)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_21 = var_1;

                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {
                        var_22 = ((-(((((214 ? 1 : var_4))) ? 4099185593 : ((-1919515397 ? 53746 : 4099185593))))));
                        arr_11 [2] [i_1] = -2;
                    }
                    for (int i_4 = 4; i_4 < 24;i_4 += 1)
                    {
                        arr_14 [i_0] [i_1] [i_1] [i_2] [i_1] = ((~(max((max(1153538212763267828, -3537767857896174827)), (40 & 0)))));
                        var_23 -= (65535 | 8830632548327113758);
                        var_24 = -83;
                    }
                }
            }
        }
    }
    #pragma endscop
}
