/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110396
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 1;
    var_15 = (min(var_15, 94));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_16 = -71;
                    var_17 = (arr_4 [i_1] [i_1]);
                    var_18 += (min(931338809084466004, 1));
                    var_19 = (max(1, 2330557016));
                    var_20 = 249;
                }
            }
        }
    }
    var_21 *= ((3 ? -5681 : 2147483647));
    var_22 = var_3;
    #pragma endscop
}
