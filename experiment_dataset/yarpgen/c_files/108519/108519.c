/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108519
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (!1456897108);
    var_17 = -530766615;

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_18 = (-530766613 - 3022855252);
        var_19 ^= 4119;
        var_20 = (((9007199120523264 + -32758) - var_3));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_21 *= (~45005);
        var_22 *= (min((((!((((arr_4 [4]) / 2147483647)))))), (max(((min(-530766618, 1320752456))), (min(1, 9223372036854775807))))));
        arr_5 [i_1] [i_1] = var_14;
        arr_6 [i_1] = (((2596978066 ? 92 : 43479)));
        var_23 = (max(((-8458606787796566650 ? (arr_2 [i_1] [i_1]) : 4294967275)), var_4));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] = (~0);
        arr_11 [i_2] = (7392637901270084873 > -3112534362425099414);
    }
    var_24 = var_1;

    /* vectorizable */
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        var_25 = (max(var_25, (((5838807469186247467 ? 43479 : 88)))));
        arr_14 [i_3] = 3735;
        var_26 = ((16128 ? (arr_13 [i_3]) : (arr_13 [i_3])));
    }
    #pragma endscop
}
