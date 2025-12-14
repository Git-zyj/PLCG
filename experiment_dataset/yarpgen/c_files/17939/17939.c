/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17939
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += (((max((min(4277370002574458245, var_11)), (max(var_5, var_0)))) | ((var_9 - (min(var_8, var_6))))));
    var_13 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_14 = (4277370002574458244 || 16228685880497160243);

                for (int i_2 = 1; i_2 < 8;i_2 += 1)
                {
                    var_15 = ((var_7 && (arr_1 [i_0] [i_1])));
                    var_16 = (arr_0 [i_0]);
                    var_17 = ((max(2218058193212391354, (arr_0 [i_0]))));
                }
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    var_18 = max(16228685880497160236, 4277370002574458243);
                    var_19 &= ((((((arr_5 [4] [i_0] [i_0] [i_0 + 1]) | var_2))) || var_9));
                    var_20 = var_9;
                }
                /* vectorizable */
                for (int i_4 = 1; i_4 < 8;i_4 += 1)
                {
                    var_21 = (arr_4 [i_0]);
                    var_22 = (arr_7 [i_0 + 1] [i_4 - 1] [i_4] [i_4]);
                    var_23 = 16605206909225115030;
                }
            }
        }
    }
    #pragma endscop
}
