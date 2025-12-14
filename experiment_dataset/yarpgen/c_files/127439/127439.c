/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127439
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_7;
    var_20 = var_4;
    var_21 = (min((!0), (((min(1023, 228))))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (arr_0 [i_0 + 1]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_22 |= var_15;
                    var_23 = ((~(!228)));
                    var_24 = ((~(50 && 1)));
                }
            }
        }
        arr_8 [i_0] = (arr_0 [i_0 + 2]);
        var_25 = (((var_0 / var_17) - ((((1 == (arr_0 [i_0])))))));
    }
    #pragma endscop
}
