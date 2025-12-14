/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13604
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_20 -= ((1 || 1197965404) || (var_12 || var_4));

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_21 = 1;
            arr_6 [i_0] = ((12 ? var_12 : ((18446744073709551604 ? 18446744073709551604 : 1))));
            var_22 = (((((var_1 ? 488531543 : var_4))) ? (((var_7 ? var_10 : var_4))) : 13));
            var_23 = ((var_18 ? var_11 : ((var_18 ? var_16 : 22))));
            var_24 = 4294967284;
        }
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            var_25 = (min(var_25, (((5548780574494339265 ? ((var_9 ? 29 : var_17)) : (1 == var_5))))));
            var_26 -= 156;
            var_27 = 4177440226;
            var_28 |= var_0;
        }
    }
    var_29 &= 12;
    var_30 += (((((47091 / 233) != ((11 ? 3442930627 : 0)))) ? (max(((var_14 ? var_19 : 18446744073709551606)), (((1 ? var_1 : -764648599))))) : 1));
    var_31 = (((((var_0 ? 852036659 : 0))) ? ((var_8 ? 10062491467562577043 : 4294967295)) : var_12));
    #pragma endscop
}
