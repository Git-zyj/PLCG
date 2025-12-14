/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12158
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, 20817));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = (((((((min(var_6, var_5))) ? (((44719 << (231 - 225)))) : (var_7 & 0)))) ? ((max(0, -111))) : var_2));
        var_12 *= (max(-88, var_4));

        /* vectorizable */
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            var_13 |= (var_4 ^ 2);
            arr_7 [i_0] [i_1] [i_1] = 40;
            var_14 = 120;
        }
        var_15 *= ((-1946932433 ? 0 : 2363259904));
        arr_8 [1] = var_2;
    }
    var_16 = 44731;
    var_17 -= (((((1966080 - var_3) ? (117 > 20805) : 2694821257)) | -69));
    #pragma endscop
}
