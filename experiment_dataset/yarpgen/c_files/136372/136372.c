/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136372
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((var_12 - var_10) + (12178814915017841250 - var_11))) - var_0));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_14 = (((~6) & (((-1542437820 & 1) | (arr_6 [i_0 + 2])))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_15 += (((min((~var_12), 12178814915017841260)) << ((((((max((arr_5 [i_4] [i_4]), 1542437819))) ? -var_6 : (min(8725724278030336, (arr_0 [i_4]))))) - 18446744073709535022))));
                                var_16 = (((-1542437820 || 85) ? -6936 : var_12));
                            }
                        }
                    }
                    var_17 = (((min((arr_4 [i_0]), 1))) == (((((arr_4 [i_0]) + (arr_8 [i_0] [i_1 - 3] [i_0]))) + ((8389119752908297219 >> (8389119752908297219 - 8389119752908297157))))));
                    var_18 = (max((~160), (((max(6267929158691710371, var_9)) ^ ((~(arr_6 [i_2])))))));
                }
            }
        }
    }
    var_19 = (max((var_1 + var_6), ((((95 == 3173796060) % ((var_8 ? var_12 : var_2)))))));
    var_20 = (min(var_6, ((var_7 ? var_8 : ((min(0, var_12)))))));
    var_21 = ((!(((~((max(var_12, var_4))))))));
    #pragma endscop
}
