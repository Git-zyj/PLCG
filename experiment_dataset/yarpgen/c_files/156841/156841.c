/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156841
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, (((((min((-9223372036854775802 / var_8), (21929 > 2372652269)))) || (((((9404353655084982840 ? 1 : 9404353655084982840))) || var_11)))))));
    var_20 = -var_6;
    var_21 = (max(var_8, ((var_13 ? (9042390418624568776 | 4367959484913392025) : (min(9042390418624568788, var_16))))));

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((((((arr_1 [i_0]) / var_10)))) ? (((var_4 % 9042390418624568776) ? (((var_10 / (arr_1 [i_0])))) : (min(28286, 9042390418624568776)))) : ((max((((var_2 ? var_9 : var_7))), (arr_0 [i_0]))))));
        var_22 &= ((max((var_3 / -109190298), ((min(32411, var_14))))));

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_23 = ((((((var_12 >= (arr_1 [i_0 + 1]))))) % (max(var_4, (((1 % (arr_3 [i_0] [i_1]))))))));
            var_24 = (max(var_24, ((max(var_11, (max((0 / var_14), -17644)))))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        var_25 = -86;
                        var_26 = 3669969334514854460;
                        var_27 ^= ((~(158 > var_13)));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    {
                        var_28 ^= (((18446744073709551615 % var_4) >= (max((arr_14 [i_5] [i_5] [i_4 - 1] [i_4 - 1]), var_11))));
                        var_29 = -361084567;
                    }
                }
            }
        }
    }
    #pragma endscop
}
