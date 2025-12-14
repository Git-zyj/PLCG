/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108947
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_0] = (((!6842650617626918070) / (max((arr_4 [i_0] [i_0] [i_1]), (var_11 / var_6)))));
                var_17 = (max(var_17, (((~((905656784 ? (((arr_0 [10]) ? 1135240301 : 13256188532108040080)) : -1)))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_13 [10] [i_2] [i_0] [10] &= ((52 ? (((!(!var_0)))) : (!18446744073709551608)));
                            var_18 *= ((max(6842650617626918089, (arr_3 [i_0] [i_0]))));
                            var_19 -= (((max(-127, var_0))) / 13056);
                            arr_14 [i_0] [i_0] [1] [i_0] = (arr_6 [i_0] [4] [i_3]);
                            var_20 = (max(var_20, 11604093456082633526));
                        }
                    }
                }
            }
        }
    }
    var_21 = (min(var_9, 18446744073709551615));
    var_22 = (((((((((4858109802089750421 ? var_10 : var_1)) + 2147483647)) << (((~var_11) - 16566415230358160662))))) ? -var_13 : -var_12));
    #pragma endscop
}
