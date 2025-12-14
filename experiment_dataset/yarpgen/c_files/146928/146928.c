/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146928
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, var_3));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        var_14 = ((656149280500822376 ? -979527583 : (1690990899 >> var_1)));

                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            arr_14 [i_0] [i_0] [i_0] [i_0] [i_2] [i_3] [i_0] = ((-((((8 ? -21 : (arr_1 [i_0] [i_0]))) / (arr_8 [i_0] [i_0] [i_0] [i_0])))));
                            arr_15 [i_0] [i_0] [i_0] [3] [i_3] [i_0] = ((((max((max(var_8, 511)), (((6 >= (arr_8 [i_3] [i_3] [i_2] [i_1]))))))) ? var_3 : ((-(arr_13 [i_0] [i_0] [i_2] [i_3] [i_4])))));
                            arr_16 [i_4] [i_3 + 3] [i_0] [i_2] [i_0] [i_0] [i_0] = 18446744073709551613;
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (1690990915 - 9223372036854775807);
                            arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = 18446744073709551612;
                        }
                    }
                    var_15 = (arr_19 [i_0] [i_0] [i_0] [i_0] [i_0]);
                }
            }
        }
    }
    #pragma endscop
}
