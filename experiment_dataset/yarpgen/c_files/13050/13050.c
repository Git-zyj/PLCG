/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13050
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_16;
    var_20 = (min(var_20, var_1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    var_21 ^= ((((((arr_7 [i_0] [i_1 - 1] [i_2]) % 2147483647)) + 2147483647)) >> (((arr_7 [i_1] [i_1 - 2] [i_2]) + 15683)));
                    var_22 = (min(var_22, (((((arr_7 [i_1 + 1] [i_1 - 2] [i_1]) / (arr_7 [i_1 + 1] [i_1 - 1] [i_1]))) / ((max((arr_7 [i_1 + 2] [i_1 - 2] [1]), (arr_7 [i_1 + 2] [i_1 + 1] [10]))))))));
                    arr_9 [i_0] [i_0] [i_1 + 2] [i_2] = ((((max((arr_7 [i_1 + 2] [i_1 - 2] [i_1 + 1]), 238))) ? var_16 : (~16544)));
                    arr_10 [2] = ((~(((!(arr_1 [i_0] [i_1 - 2]))))));
                }
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        {
                            var_23 = (max(var_23, (((((((!(((11401616457149402869 ? (arr_8 [i_4] [i_3] [i_0]) : (arr_4 [i_0] [i_0] [i_0])))))))) ^ ((((max(var_17, (arr_11 [i_4] [i_3])))) ? (48992 ^ 16544) : (~1351749314))))))));
                            var_24 ^= (arr_2 [i_1 - 1] [i_1]);
                        }
                    }
                }
            }
        }
    }
    var_25 = ((var_10 ? (((((-1562750159 ? var_6 : var_14))) & (min(var_12, var_3)))) : ((((~var_0) ? (~var_16) : ((max(112, var_6))))))));
    #pragma endscop
}
