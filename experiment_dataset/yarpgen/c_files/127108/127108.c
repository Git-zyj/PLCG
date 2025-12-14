/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127108
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                {
                    arr_10 [1] [i_2] = (var_1 ^ 1);
                    var_17 = (max(var_17, var_8));
                    var_18 = var_13;
                }
            }
        }
    }
    var_19 = ((((((-3986679822473619808 ? -3376 : 35671)))) ? ((~(9296 - 39))) : 127));

    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        var_20 = (max((max(217, 2556733921)), 0));
        var_21 = (((1 & 3620) % ((max(241, (!var_12))))));
        arr_14 [i_3] = ((((((max(10462, 39))) ? 235 : var_10)) & 138));
    }
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        var_22 = (max(var_22, ((max((((var_16 ? 204 : 233))), (((var_10 >> (var_7 + 7357099687409231406)))))))));
        arr_19 [i_4] [i_4] = (((min(-750756384, (max(750756383, 4294967288)))) == (((arr_6 [i_4] [i_4] [i_4] [i_4]) / var_10))));
    }
    #pragma endscop
}
