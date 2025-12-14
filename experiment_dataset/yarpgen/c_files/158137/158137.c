/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158137
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 7;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_19 += (((-((min(var_13, 254))))) & var_6);
                                var_20 &= min((min((arr_12 [i_0] [i_1] [i_1 + 2] [6]), (max(1, var_18)))), var_0);
                                var_21 = (((((168 / 87) ? ((min(var_7, 174))) : 164)) * (((min(138, var_0))))));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        var_22 = arr_3 [i_0] [i_1] [i_5];
                        var_23 = (arr_8 [i_0] [i_0] [i_5]);
                    }
                    arr_16 [i_0] = (i_0 % 2 == 0) ? ((((((arr_11 [i_0]) | (arr_8 [i_0] [i_1 - 1] [i_1 - 1]))) << ((((min(var_7, (arr_11 [i_0])))) - 13970))))) : ((((((arr_11 [i_0]) | (arr_8 [i_0] [i_1 - 1] [i_1 - 1]))) << ((((((min(var_7, (arr_11 [i_0])))) - 13970)) + 535)))));
                }
            }
        }
    }
    var_24 = (min(((((min(var_18, var_7))) ? ((max(var_13, var_18))) : (var_0 >= var_0))), var_12));
    var_25 = (max(var_14, (175 ^ 18446744073709551615)));
    #pragma endscop
}
