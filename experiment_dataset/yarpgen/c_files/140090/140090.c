/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140090
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((77 ? ((-14172 ? 0 : 0)) : 1))) ? (((((var_9 ? var_5 : var_7))) ? (((var_13 ? var_4 : var_8))) : ((var_3 ? var_13 : var_12)))) : (((((var_6 ? 3719712943576718770 : var_10))) ? ((var_12 ? 5 : var_2)) : (((var_2 ? var_8 : var_5)))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 23;i_3 += 1)
                    {
                        var_15 = (min(var_15, ((((((arr_6 [i_0] [i_3]) ? (arr_7 [i_0 + 2] [i_1] [1] [i_2]) : (arr_11 [i_3])))) ? (((6476753364373189775 ? -1405034871 : -32739))) : (((arr_1 [i_0]) ? (arr_1 [i_2]) : (arr_8 [i_3] [i_2] [i_2] [i_3 - 1])))))));

                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            var_16 *= (((((var_12 ? var_11 : 0))) ? ((-14939 ? var_12 : (arr_1 [i_2]))) : (((-96 ? var_12 : 0)))));
                            var_17 = (((((40421 ? var_1 : var_10))) ? ((0 ? 35276 : 11080934516118480534)) : (((var_3 ? (arr_5 [i_1]) : (arr_14 [i_1] [i_1] [i_2] [i_3] [i_4] [i_4]))))));
                            var_18 = (max(var_18, ((((((1 ? 0 : 6330241392787838301))) ? (((arr_8 [i_0 + 1] [i_2] [i_2] [i_3 - 2]) ? 0 : 5)) : (((var_7 ? (arr_10 [i_3] [i_1] [i_2] [i_2]) : (arr_13 [i_0] [i_1] [i_2] [i_3] [i_2])))))))));
                        }
                    }
                    var_19 = (((((((((arr_7 [i_0] [21] [i_0] [i_1]) ? -3986925928482143125 : (arr_13 [15] [i_1] [i_1] [i_2] [i_1])))) ? ((((arr_12 [i_0] [i_1] [i_2]) ? (arr_14 [i_1] [i_1] [i_1] [i_1] [i_0] [i_1]) : 573575381))) : ((var_10 ? 11 : 4294967289))))) ? (((((31 ? 208 : 47746))) ? (((arr_1 [i_0 + 1]) ? var_6 : 32767)) : (((65531 ? var_5 : -11825))))) : ((((((arr_12 [i_0] [i_1] [i_0]) ? 32767 : 59))) ? ((var_6 ? 7 : var_12)) : ((((arr_1 [i_0]) ? (arr_7 [i_0] [i_0] [i_1] [i_1]) : (arr_12 [i_0 + 2] [i_1] [i_2]))))))));
                }
            }
        }
    }
    #pragma endscop
}
