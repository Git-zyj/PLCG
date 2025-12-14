/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128712
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((var_10 + 9223372036854775807) >> ((((var_4 ? var_2 : var_7)) - 419627846357976651))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_16 = min((!14722), (((arr_1 [i_0]) ? (!24) : (arr_1 [i_0]))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_8 [12] [i_0] [i_2] [11] = ((((((var_2 ^ (-2592647182885036610 ^ 4838))) + 9223372036854775807)) >> ((((~((var_1 ^ (arr_5 [i_0] [i_0] [i_0] [i_0]))))) + 6085338619481245503))));
                    var_17 = (arr_4 [i_0] [i_1] [16] [7]);
                    var_18 = ((((6693 ? 4312 : 4838)) << (var_8 - 2832)));
                }
            }
        }
        var_19 &= (((((arr_5 [i_0] [i_0] [17] [i_0]) ? ((((arr_7 [8] [i_0] [4]) ? (arr_0 [i_0]) : (arr_4 [i_0] [i_0] [4] [i_0])))) : (max((arr_5 [i_0] [i_0] [i_0] [5]), (arr_3 [i_0] [i_0])))))) ? -4953288746783048987 : (max((arr_7 [i_0] [i_0] [i_0]), (8082307267511656283 ^ 2592647182885036609))));
        var_20 = min((((arr_0 [i_0]) ? (arr_0 [i_0]) : var_11)), ((min((((arr_5 [17] [i_0] [10] [i_0]) ? 32614 : 32614)), (~10434)))));
    }
    var_21 = (((var_5 ? (~var_8) : var_14)) ^ (max((61224 | 63130), (min(-9129818914662364659, 2251799813685184)))));
    var_22 = var_12;
    #pragma endscop
}
