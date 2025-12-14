/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156082
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    var_18 = (((((var_16 ? var_5 : (((arr_1 [i_0]) ? var_9 : 0))))) ? ((22 ? 21518 : 8988575343883111059)) : (((~((7 ? 29 : 171)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_19 ^= ((((max(var_2, var_14))) ? ((min((arr_6 [i_2 - 1] [i_0] [i_2]), (arr_6 [i_2 + 1] [i_0] [4])))) : (~-3199573026783696898)));
                                var_20 ^= var_1;
                                arr_14 [i_0] [i_0] [i_0] [i_3] [i_2] = ((-(((arr_7 [i_4] [23] [i_2 - 1]) ? -2056054843212658330 : var_12))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                var_21 |= (((((var_10 ? -0 : (arr_10 [i_2 - 1] [i_2 - 1] [i_2 - 1] [11])))) ? ((((~var_10) - (((arr_12 [i_1] [10] [10]) - (arr_16 [22] [i_0] [22] [i_0] [i_0])))))) : (min(1, 0))));
                                arr_21 [6] [i_1] [i_2] [i_5] [4] = (arr_11 [12] [i_1]);
                                arr_22 [i_2] [i_1] = (min(-12242, (((!var_8) + -var_12))));
                                var_22 += ((~(arr_18 [i_0] [i_5] [i_0])));
                            }
                        }
                    }
                    arr_23 [i_0] [i_1] [i_2] = 21518;
                }
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    var_23 = (arr_2 [i_1]);
                    var_24 = 109;
                }
                var_25 += 1;
            }
        }
    }
    #pragma endscop
}
