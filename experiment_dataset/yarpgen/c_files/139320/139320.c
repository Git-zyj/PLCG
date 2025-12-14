/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139320
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_13;
    var_21 = ((((((((var_6 / var_10) + 2147483647)) << (((var_14 ^ var_11) - 243))))) ? ((var_11 ? var_12 : var_18)) : (((0 ? 1 : (!4860416631754878241))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_22 -= ((((-(!var_14))) | ((-(var_1 != 29659)))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_23 = ((((max(-415463627, var_12)))));
                            arr_9 [i_3] [i_3] [i_3] [i_3] [i_3] = (((((min((arr_3 [0] [i_3]), (arr_6 [i_0] [i_1] [i_1])))) && (415463610 && 1))) ? ((((var_13 ? 415463630 : (arr_2 [i_2]))))) : 1);
                        }
                    }
                }
                var_24 *= (((((var_6 ? -var_3 : ((var_0 ? var_18 : var_11))))) ? (((15482835082967208398 > ((~(arr_0 [i_0])))))) : (((((var_15 != (arr_1 [i_1]))) && ((var_2 > (arr_2 [i_1]))))))));
            }
        }
    }
    #pragma endscop
}
