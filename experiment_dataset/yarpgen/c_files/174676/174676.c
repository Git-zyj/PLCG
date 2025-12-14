/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174676
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                var_16 = (!(((((3042 ? var_7 : 3042)) << ((((arr_2 [7]) <= (arr_3 [1]))))))));
                var_17 = ((((~((~(arr_3 [i_0]))))) << (var_4 == var_7)));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_18 = (max(var_18, ((((~2647998332) ? ((~(~var_10))) : (~208))))));
                            var_19 = (max(var_19, (((!(((-(((arr_7 [i_3] [4] [i_1] [4] [i_0]) ? -25346 : 7680))))))))));
                        }
                    }
                }
                var_20 = (max(var_20, (((((((((~3042) + 2147483647)) << ((((1 ? 1 : -3043)) - 1))))) ? ((((-3184171774070133703 ? var_15 : var_9)) >> (((var_11 > (arr_7 [i_0] [0] [i_0] [i_0] [12])))))) : (((((var_13 >> (var_15 - 2842384813)))) ? ((2183753546 ? 809508203 : 2764864208)) : (((~(arr_2 [i_1])))))))))));
                var_21 = ((+((((((arr_2 [1]) + var_15))) ? (((var_11 ? var_9 : (arr_4 [i_0] [11] [i_0])))) : -2944125240759477566))));
            }
        }
    }
    var_22 = ((0 ? -8434 : 8058));
    var_23 += ((((((var_12 ? var_9 : 3800761690)) / ((var_14 ? var_10 : var_8))))) ? (((var_10 < var_6) ? ((2111213749 ? 1530103088 : 1531)) : ((32752 ? var_7 : var_13)))) : ((((var_11 ^ -1401447140) >> (-2092016854 & var_1)))));
    var_24 = (((((!2764864207) ? 2764864207 : 2764864216))) ? (!411072968) : ((((((266338304 << (var_9 - 230)))) || -var_13))));
    #pragma endscop
}
