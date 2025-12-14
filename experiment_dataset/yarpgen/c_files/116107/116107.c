/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116107
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                arr_4 [i_0 - 2] [i_0] [i_1] |= ((58160 < ((~((7377 ? -7746950219088505516 : 18183820378256427443))))));
                arr_5 [i_0] = var_8;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            {
                var_14 = (((((((max(262923695453124172, var_9))) ? (min(var_0, 18183820378256427443)) : (((2147483647 ? 56617 : 6)))))) ? ((516971612 ? (58160 & 516971601) : (7660593541548172961 + 58163))) : ((-(min(12045811871128095729, 38367))))));
                var_15 = (max(var_15, (((-((var_7 ? -109 : 58137)))))));
                var_16 = var_2;
            }
        }
    }
    var_17 = (min((((!5195762704885706354) ? (var_11 && var_13) : (~2110807904))), var_9));
    /* LoopNest 3 */
    for (int i_4 = 1; i_4 < 20;i_4 += 1)
    {
        for (int i_5 = 4; i_5 < 23;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                {
                    var_18 = (max(var_18, 58173));
                    var_19 = (min(var_19, (((-((18446744073709551612 ^ ((0 ? -7746950219088505516 : 1)))))))));
                    var_20 = (((((~(min(7659228147445234542, var_7))))) ? ((((2110807904 ? 0 : var_8)) | -1273931267510713017)) : 45755));
                    arr_22 [i_4] [i_4] [i_4] = (((((4044787444 == 9195379630815847171) & -52))) ? (var_1 + var_3) : 225731240797661326);
                    arr_23 [i_4] [i_4] = ((-4294967295 <= (((~((var_10 ? -1 : 1)))))));
                }
            }
        }
    }
    #pragma endscop
}
