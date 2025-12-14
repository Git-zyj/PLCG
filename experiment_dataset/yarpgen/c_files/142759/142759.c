/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142759
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_17 = (max(var_17, ((((((11254368073737236514 / (arr_1 [i_0] [i_0])))) || (((37617 ? (arr_0 [i_0] [i_0]) : -5))))))));
        var_18 = ((-378428194 >> (((((7452839415704484786 ? var_14 : (arr_1 [i_0] [i_0]))) > (arr_1 [i_0] [i_0]))))));
        arr_2 [i_0] |= ((((((min(932119943, 1009178094))) ? (1974465888588190199 & 35659) : var_4)) << ((((8307234286425563448 ? 67108352 : 3285789202)) - 67108312))));
    }
    var_19 = var_4;
    var_20 = -6914580182037688300;
    var_21 ^= ((((((3362847353 - -1200973292540601598) + 1095307286))) ? 1 : ((18446744073709551612 ? -2135655702 : -9300))));
    #pragma endscop
}
