/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152481
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((max(((8580 ? 1 : var_12)), ((8580 ? 10657 : -662950374)))) < ((var_1 ? 65535 : ((1569890410 ? 8561 : 56956))))));
    var_17 = 3972715201;
    var_18 = (max(var_18, ((max(0, -6078472035170573766)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    arr_7 [i_0 + 3] [i_0 + 3] [i_2 + 1] [i_1] = (((!-56975) * ((var_6 ? (var_2 ^ -758247912) : (((26044 ? 206 : 200)))))));
                    var_19 = (min(var_19, (!-6033811917685327476)));
                }
            }
        }
    }
    #pragma endscop
}
