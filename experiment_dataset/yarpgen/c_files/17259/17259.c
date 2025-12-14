/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17259
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, ((min(((-38902 + (1 * 10))), ((var_18 * (max(62170, var_15)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            {
                                arr_13 [i_1] [i_1] = (min(-32764, 32750));
                                arr_14 [i_1] [11] [i_2] [1] [i_2] = 22265;
                            }
                        }
                    }
                }
                arr_15 [i_1] [i_1 - 1] = (((1 ^ (arr_2 [i_1 - 1]))));
                var_20 = ((-2 ^ (((arr_11 [i_1 - 1] [i_1 - 1] [i_1]) ^ (arr_6 [i_0] [i_0] [i_0])))));
                arr_16 [i_1] = (1 != var_3);
                arr_17 [i_1] = ((~((27851 ? 32737 : var_11))));
            }
        }
    }
    #pragma endscop
}
