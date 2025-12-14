/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157060
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_1, (((~5) ? ((18446744073709551611 ? 4294967279 : 65535)) : (((12131783322068796068 ? var_5 : 1142004577)))))));
    var_11 = (min((((((var_9 ? 11 : 1173241578))) ? (~19) : ((min(27998, -16))))), ((((65159 == 562949953421248) != 97)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    var_12 = (~49);
                    arr_6 [i_0] = (max((((arr_1 [i_0] [i_2]) ? 3 : 4234316186)), -11));
                    var_13 = (((((~(((arr_0 [i_0 - 1] [i_1 + 1]) & 9223372036854775784))))) ? 49 : var_5));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [14] [i_4] = (arr_2 [i_0] [i_3 + 1]);
                                var_14 = (max(-13805, ((var_8 ? (((42504 ? (arr_11 [i_0] [i_0 - 1] [8] [i_0 + 1] [i_0] [i_0]) : var_8))) : (((arr_1 [11] [1]) ? 5592494327705830183 : -14))))));
                                var_15 = ((~((max(1, -89711947)))));
                                var_16 = ((((((8184 - 32767) + ((255 ? (arr_9 [i_0] [i_0] [i_3] [6]) : 11))))) ? (((((max(1, -17362))) % var_7))) : 18446744073709551615));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
