/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118163
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((-((((var_10 ? 1054 : var_1)) / 1))));
    var_19 = max((1054 * 1054), ((((max(var_16, 65520))) ? (1054 / 65535) : (var_8 / var_4))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [i_1] [7] [i_2] [i_2] = ((((max((max(var_17, 122)), (((1 ? 9 : 17757)))))) ? ((((var_6 == ((max(-112, (arr_3 [i_1])))))))) : 15));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_20 ^= max((((1 ? 1 : -115))), ((~(arr_4 [i_4] [i_1] [i_4]))));
                                var_21 -= (((((-var_16 * (arr_5 [i_1] [12] [i_3])))) || ((max((max(var_3, var_16)), (-7009616761331772207 != 53792))))));
                                arr_13 [i_3] [i_1] [i_1] [i_3] [i_1] |= ((~((~(~var_3)))));
                            }
                        }
                    }
                    var_22 ^= ((~(arr_10 [8] [8] [8] [i_1] [8] [8])));
                }
            }
        }
    }
    #pragma endscop
}
