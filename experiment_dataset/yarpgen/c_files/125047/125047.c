/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125047
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((0 ? 2712832892 : var_6))));
    var_20 = var_12;
    var_21 = (((13 >> 11) ? (((((15147245066080145368 == var_9) > ((-42 ? var_15 : var_18)))))) : ((var_2 ? -4111411719383180545 : -656461194917610808))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = 24;
                var_22 = ((((((11 ? 18446744073709551590 : 0)) ? (~32) : (18446744073709551605 != 18446744073709551605)))));
                var_23 &= ((var_18 ? (((max(var_8, -112)))) : (max(var_12, -2481299471652058120))));

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    var_24 = (((((6 ? 1 : 57))) ? ((((((min(185904026, (arr_1 [i_2])))) || ((((arr_1 [i_0]) ? var_8 : (arr_10 [i_0] [i_1] [i_2])))))))) : ((1531395102 ? (max(1248199553, -42)) : 0))));
                    var_25 = (((((((arr_4 [i_2]) * 18446744073709551591)) != (min(18446744073709551605, (arr_3 [i_0] [i_0]))))) ? ((285806462991745602 ? 24530 : -9139171473040871092)) : ((min(8156141128700953999, var_4)))));
                    var_26 = (min(var_26, (((-(max((arr_1 [i_0]), (((~(arr_9 [i_0] [i_0] [i_2])))))))))));
                }
            }
        }
    }
    #pragma endscop
}
