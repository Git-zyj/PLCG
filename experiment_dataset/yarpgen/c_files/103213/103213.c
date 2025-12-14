/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103213
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_1;
    var_14 += ((((((var_2 != var_2) ? (0 && var_1) : ((-1904949411371130594 ? var_10 : -1904949411371130594))))) ? ((var_4 << (((max(var_6, var_1)) - 3555311187)))) : (!11)));
    var_15 = -var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] = (((max((arr_3 [i_1] [i_1]), var_1))) && ((min(var_8, 10343))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 9;i_3 += 1)
                    {
                        {
                            var_16 *= (max((619 < 1), (min(((((-2147483647 - 1) - -246176677))), 134217696))));
                            var_17 = (min(var_17, (((((min((arr_1 [i_2 - 1]), (arr_10 [i_0] [i_3 - 2])))) + (arr_7 [i_3] [i_3] [i_3 - 2] [2]))))));
                        }
                    }
                }
                arr_11 [6] [i_1] = ((~((var_12 ? ((max((arr_2 [0]), (-2147483647 - 1)))) : var_11))));
            }
        }
    }
    #pragma endscop
}
