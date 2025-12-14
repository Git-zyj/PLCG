/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131782
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_11 <= (14680064 != 4294967295)));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    arr_8 [i_0 - 1] [4] [4] [i_2] = (min((((arr_2 [i_0]) ? (((-(arr_1 [16])))) : (max(var_12, var_12)))), (((!(((var_10 ? var_3 : 4095))))))));
                    arr_9 [i_0] [i_0] [i_0] = 2047;
                    arr_10 [i_2 - 1] [i_2 - 1] [i_0] [i_0] = (+((((arr_5 [13] [i_1]) < (arr_5 [i_1] [i_2 - 1])))));
                }
                for (int i_3 = 1; i_3 < 19;i_3 += 1)
                {
                    var_14 = var_1;
                    var_15 *= (max(28, ((~((max(var_9, (arr_0 [14]))))))));
                    var_16 = (min((min((var_4 < 57344), (var_10 - 112))), ((((((var_9 ? 7 : 96))) != var_3)))));
                    var_17 = 448;
                }
                var_18 = 1;
            }
        }
    }
    #pragma endscop
}
