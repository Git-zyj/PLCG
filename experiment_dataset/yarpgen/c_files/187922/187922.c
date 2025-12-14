/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187922
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= var_8;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_16 += (((min(var_14, var_11))));
        arr_3 [i_0] = (max(((822148266 ? 36515 : 9496545771515557400)), 29020));
        var_17 = (min(var_17, (((((min(var_10, var_13))) ? (((var_4 ? -21 : 56230))) : (min(var_14, 1928579212)))))));
        var_18 -= ((((((max(1928579217, var_14)) > ((1 ? 2366388104 : var_0))))) <= 29041));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            var_19 ^= ((31744 ? var_9 : var_8));
            var_20 = (min(var_20, -6567870961715804512));
            var_21 = var_11;
        }
        for (int i_3 = 2; i_3 < 13;i_3 += 1)
        {
            arr_13 [i_3] [i_3] [i_3] = (36516 == 128);
            var_22 = ((189 ? var_5 : -41));
            var_23 = ((var_5 >> (-933503839599552144 + 933503839599552164)));
            arr_14 [i_3] = var_14;
        }
        var_24 = (max(var_24, 2845952058));
        var_25 = var_1;
    }
    var_26 = (var_2 <= var_1);
    #pragma endscop
}
