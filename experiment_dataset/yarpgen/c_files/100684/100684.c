/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100684
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        arr_10 [i_0 - 1] [i_2] [2] [i_3] = var_9;
                        arr_11 [i_2] = (((arr_0 [i_2 - 1] [i_0 + 1]) != (arr_0 [i_2 - 1] [i_0 - 1])));
                    }
                    for (int i_4 = 4; i_4 < 11;i_4 += 1)
                    {
                        arr_16 [i_0 - 1] [i_1 + 2] [i_2] [i_2] [i_2] = (max((((3459 + var_9) ? var_3 : ((var_10 ? var_16 : 16798268906690196954)))), ((((var_13 == 8192) / -3460)))));
                        var_17 += ((var_0 >> (((arr_3 [i_0]) + 5568513505099180494))));
                        var_18 = (((var_3 < 16798268906690196954) - (arr_3 [i_4 - 1])));
                    }
                    var_19 = 24891;
                }
            }
        }
    }
    var_20 = (+-3105907902909478427);
    var_21 &= (((!var_3) >> ((((max(var_11, var_14))) ? (var_14 <= var_16) : -24891))));
    var_22 = (min((((min(var_16, 0)))), (((var_8 && (!977482061109301999))))));
    var_23 &= -var_9;
    #pragma endscop
}
