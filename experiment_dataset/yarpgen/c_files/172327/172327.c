/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172327
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_19 = ((((max(((max(-9, var_15))), (511 - 55157)))) ? var_12 : 250));
                var_20 = (((~10378) ? ((4 ? 1363284383 : -1)) : ((((max(10371, 1512066408)) < var_1)))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_21 = (max(var_21, ((~(max(549755813887, (var_18 / 55156)))))));
                            arr_11 [i_1] [i_3] [i_2] [i_3] = ((~((((arr_6 [i_0]) == 1)))));
                            arr_12 [i_0] [i_0] [0] [14] [i_2] [i_3] = (((((1 ? 2142181191367691577 : var_12))) ? 4294967295 : ((~(max(2533950093, 4397912293376))))));
                        }
                    }
                }
            }
        }
    }
    var_22 = ((2533950093 ? ((((((188 ? var_8 : var_17))) ? (var_13 <= var_14) : ((var_8 ? var_15 : var_11))))) : (((((max(var_0, var_1)))) + ((71 ? var_10 : 18446744073709551615))))));
    #pragma endscop
}
