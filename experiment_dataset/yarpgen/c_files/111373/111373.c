/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111373
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_18 = (max(var_18, (((((((var_9 * 18340617633217351976) >> ((8 >> (var_9 - 8232680320173208615)))))) ? var_5 : (((48 == (~var_14)))))))));
        arr_2 [i_0] = ((var_7 ? (min(230248695, ((min(28, 92))))) : -9));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 11;i_2 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        {
                            arr_13 [i_1] [i_2] = var_16;
                            var_19 += (min(((((min(-9, 3762660653)) == (~var_15)))), ((((min(12, var_0))) ? (min(var_16, var_15)) : var_15))));
                            var_20 *= (max(2147483647, (--2147483639)));
                        }
                    }
                }
                arr_14 [i_2] [i_2] [i_2] = (min(((max((max(var_11, 15)), (min(12958271, 226664468))))), (min((var_7 >= -103), 198))));
            }
        }
    }
    var_21 *= ((min(((max(2147483647, 29))), (min(-8, var_15)))));
    var_22 = ((((max((var_11 + var_5), 11020))) < (min(var_1, var_9))));
    var_23 = (((((((-127 - 1) ? var_13 : 34)))) && ((min((var_15 || var_16), (min(var_15, var_9)))))));
    #pragma endscop
}
