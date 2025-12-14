/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168406
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((53566 >= (((((-28381 ? var_5 : var_13))) ? -10313 : var_0))));
    var_20 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_21 *= -1;
                    var_22 &= ((!((((2147483647 ? -2147483647 : (arr_0 [i_2] [i_1]))) >= ((-(arr_6 [i_2] [i_1] [i_2])))))));
                }
            }
        }
    }
    var_23 = (min(var_23, 2147483647));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            {
                var_24 = ((~(!2147483647)));
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 14;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 15;i_6 += 1)
                    {
                        {
                            arr_20 [i_3] [i_6] [i_5] [i_6] [i_6] = 2147483646;
                            var_25 = ((((~(arr_19 [i_6] [i_6 + 1] [i_6] [i_6]))) + ((((((var_3 ? (arr_11 [i_3]) : 2147483647))) && (((arr_4 [i_6 - 1] [i_5] [i_4]) >= (arr_0 [i_3] [i_5]))))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
