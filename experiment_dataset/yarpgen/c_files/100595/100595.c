/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100595
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((var_7 / 123145302310912) ? (var_10 != var_3) : 40945)));
    var_12 = ((((max(var_6, (var_0 & var_3)))) ? var_1 : ((((min(1740430524835092158, var_3))) ? (var_6 | 9223372036854775807) : (var_7 == var_9)))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    var_13 += var_1;
                    var_14 = (((min(var_8, var_8) ? ((((arr_6 [i_1] [12]) || var_10))) : 452)));
                    arr_8 [i_1] [i_2] = -5418843733099692231;
                    arr_9 [i_1] = var_6;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                {
                    arr_16 [i_0] [14] [i_3] [14] &= (max((max((var_10 ^ 1163126253979196093), 30720)), (((5193 ? 14534 : (((max(19856, var_4)))))))));
                    var_15 = ((((((46988 ? var_4 : (arr_12 [i_4] [i_4])))) - (max(var_0, var_10)))));
                    var_16 = (max(var_16, ((((((!1) != ((var_7 ? var_9 : var_6)))) ? (max(((((arr_14 [i_0] [i_0] [i_0] [20]) <= 32256))), ((var_9 << (21649 - 21633))))) : ((((((var_2 ? var_7 : var_0))) ? (~var_6) : var_4))))))));
                    var_17 += ((((min(var_0, (arr_10 [i_0] [i_0] [18])))) ? (~var_4) : (((1 - ((var_10 ? var_3 : var_7)))))));
                    var_18 = (min(((576460752295034880 ? 99 : 71776119061217280)), (((var_7 <= (((-28 + 2147483647) >> (var_1 + 147))))))));
                }
            }
        }
    }
    var_19 = (max((1822970587 + var_8), var_6));
    #pragma endscop
}
