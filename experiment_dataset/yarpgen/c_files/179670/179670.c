/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179670
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_14;
    var_19 = 2394371830018925650;
    var_20 = ((-(((2394371830018925650 / 157) * var_5))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            var_21 -= (59399 || 7819029231731093738);
            arr_4 [i_0] [i_0] = (21450 * -29556);
            var_22 *= ((!(~106)));
        }
        arr_5 [i_0] [i_0] = ((-(!18073)));
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        arr_9 [i_2] = -2975;
        arr_10 [i_2] = (!(108 || 6086));
        var_23 += ((-((173 ? -8903 : 20837))));

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_24 = ((!(((1048644139 ? 1 : 33658)))));
            arr_13 [i_2] = ((((6142 ? 2394371830018925650 : 9932152527835832963))) ? (~7551) : (!33787));
        }
        for (int i_4 = 1; i_4 < 15;i_4 += 1)
        {
            var_25 ^= (((~9) == ((6141 | (103500545710874495 / 54311)))));
            arr_16 [2] |= ((((0 * (-9223372036854775807 - 1)) ^ 9223372036854775790)));
            arr_17 [i_4] [i_4] [i_4 + 3] = (((~-7602000565839856588) ? 13329 : ((~(-7552 & 24552)))));
            var_26 = (!3988767437779103452);
            var_27 = ((~(((!(!4028366913))))));
        }
    }
    #pragma endscop
}
