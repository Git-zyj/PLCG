/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136435
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += 2209496616;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 7;i_2 += 1)
            {
                {
                    var_15 = ((~((var_13 ? ((min(2995274244, 2085470693))) : ((38 ? (arr_6 [i_1] [i_2 + 2] [0]) : 2085470683))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_16 = 14;
                                var_17 = ((((((arr_4 [i_1]) ? 2085470680 : (arr_4 [i_1])))) && -1531046940));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 -= ((((((((14 ? var_11 : 1299693065))) ? var_5 : (((-6776308531423572810 ? var_2 : 2085470683)))))) ? 104 : ((var_4 ? (max(var_13, var_1)) : (~var_12)))));
    var_19 = ((var_6 ? (((((-27507 ? var_11 : 11241177332239013268))) ? ((2995274247 ? 2085470664 : 1704049047)) : (((max(var_2, -127)))))) : ((((~var_3) | ((var_6 ? -61 : var_9)))))));
    #pragma endscop
}
