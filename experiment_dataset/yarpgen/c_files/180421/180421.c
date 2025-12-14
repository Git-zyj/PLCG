/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180421
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= (max(65535, ((var_16 ? 4158985677485386625 : var_0))));
    var_20 = (min(var_20, var_18));
    var_21 = ((var_11 ? var_6 : (((((-5600367854760518428 ? var_12 : -5600367854760518435))) ? ((var_7 ? var_11 : 65535)) : var_7))));
    var_22 += ((((min(var_18, ((var_14 ? var_2 : var_10))))) ^ var_12));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    var_23 += 9223372036854775807;

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        var_24 = (((((25590 ? var_1 : 4371))) ? (((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0 + 1]) ? var_14 : 8204263436412435933)) : var_11));
                        var_25 = (arr_6 [0] [i_1] [i_2] [1]);
                    }
                }
                /* vectorizable */
                for (int i_4 = 1; i_4 < 8;i_4 += 1) /* same iter space */
                {
                    var_26 = var_17;
                    var_27 = ((5600367854760518412 ? (arr_2 [i_0 - 1]) : (arr_2 [i_0 - 2])));
                }
                for (int i_5 = 1; i_5 < 8;i_5 += 1) /* same iter space */
                {
                    var_28 *= 3874020711062176796;
                    var_29 = var_17;
                }
                var_30 = (((!var_16) ? (arr_16 [i_0] [2] [2]) : -4));
                arr_20 [i_1] = 2074818015691839374;
                arr_21 [i_0] [i_0] [i_1] = (arr_19 [i_0] [i_0] [i_0]);
            }
        }
    }
    #pragma endscop
}
