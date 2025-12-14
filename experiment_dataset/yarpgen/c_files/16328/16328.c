/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16328
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((~(((1127948384 | var_12) ? var_6 : (var_12 ^ 1127948384)))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_20 &= (min((((~-1127948385) ? (max(var_2, -6911982291202584243)) : (((((arr_1 [i_0]) && (arr_1 [6]))))))), (arr_0 [i_0] [i_1])));
                var_21 = var_18;
                var_22 ^= 6911982291202584260;
                var_23 = (max(var_23, ((((((-(min(-6911982291202584247, -52473868))))) ? ((((6851027469376122775 ? 65535 : 15918)))) : (max((arr_1 [i_1]), ((max(65518, 127))))))))));
                var_24 = var_7;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            {
                var_25 = (-1403393224 != -2033094736);
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        {
                            var_26 = ((((max(var_3, var_18))) ? ((((min(2251799813652480, var_16)) != 26312))) : ((126 ? 41521 : (arr_5 [i_2])))));
                            arr_15 [i_2] [i_2] [i_2] [i_2] [i_2] = 1;
                            var_27 = (!var_0);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        {
                            arr_23 [i_6] [i_7] [i_6] [i_6] = (max((arr_7 [i_2]), ((min(var_13, -19)))));
                            var_28 = (min(((max(-0, ((~(arr_16 [i_3])))))), (max(var_13, ((6911982291202584242 ? 9295 : var_11))))));
                            var_29 = ((+((var_2 ? (arr_16 [i_3]) : (arr_6 [i_2])))));
                            var_30 = (max((min(((min(1, 408))), (max(var_6, 588103212)))), ((((max(-2033094736, (arr_17 [i_7] [i_6] [i_3] [i_2]))) >> (var_18 != var_16))))));
                        }
                    }
                }
            }
        }
    }
    var_31 = (min(((max(3535084372, 9290))), ((var_8 ? (((max(var_2, (-127 - 1))))) : var_7))));
    var_32 = var_12;
    #pragma endscop
}
