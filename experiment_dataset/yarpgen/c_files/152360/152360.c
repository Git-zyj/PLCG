/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152360
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        var_10 = (((min((((var_3 + 9223372036854775807) >> var_6)), var_4)) / ((max((~var_1), var_9)))));
                        arr_11 [i_0 - 1] [i_0 - 1] [i_0] [i_0] [i_0] [i_0] &= ((((((~(~var_3))) + 9223372036854775807)) >> ((((-(~4194304))) - 4194267))));
                        arr_12 [i_0 - 1] [i_1] [i_2] [i_2] [i_3] [i_3] = (((((!1900010334) - (((var_5 + 2147483647) >> (var_8 - 87))))) <= ((~((max(199, 53)))))));
                        var_11 = var_2;
                        var_12 = ((var_0 - (((var_2 == var_7) | var_8))));
                    }
                }
            }
        }
        arr_13 [i_0] [i_0] = (max(((-(var_3 || var_1))), ((((!var_8) || (9111885503638741791 - 4194295))))));
    }
    var_13 = var_5;
    #pragma endscop
}
