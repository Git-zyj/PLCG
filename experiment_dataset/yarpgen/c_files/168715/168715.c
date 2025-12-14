/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168715
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 6;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((((((((5869683381816064556 ? (arr_0 [i_0]) : -6823892352629741001)) >= 1)))) <= ((6270967321738830354 ? (((arr_4 [i_0] [i_0] [1]) ? 9223372036854775807 : 2056105791587775360)) : (var_4 || var_8)))));
                arr_6 [i_0] [i_1] [1] = (max((max((arr_4 [i_1 + 4] [i_1] [i_1 - 1]), (!var_6))), (!3591682586720876999)));
                var_10 = 6270967321738830372;
            }
        }
    }
    var_11 = (min(var_11, 2056105791587775360));
    var_12 |= (!-3141862892721349660);
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 9;i_4 += 1)
            {
                {
                    arr_14 [i_2] = (((((!(arr_12 [i_2])))) > ((var_4 ? (arr_13 [i_3] [1] [i_4 + 1]) : (arr_13 [i_2] [1] [i_4 + 1])))));

                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        var_13 = (!(arr_3 [i_2] [i_2] [i_4 - 3]));
                        var_14 = ((-6270967321738830370 || (arr_15 [i_5 - 1] [0] [1] [i_4 - 1])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
