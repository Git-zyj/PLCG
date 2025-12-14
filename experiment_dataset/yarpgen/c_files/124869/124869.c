/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124869
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((~(((((var_8 ? 983101175 : 0))) | (max(-5032552168611752963, 127))))));
    var_19 = var_17;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_20 = ((+(((!124) ? var_5 : var_13))));
                            var_21 = (min(var_21, (((max((arr_1 [i_3]), (((-1421698443487250768 ? 3727800966 : (arr_5 [i_1] [i_2] [i_3]))))))))));
                            var_22 = (max(var_22, ((!(arr_2 [i_0] [i_1] [i_3 + 1])))));
                            var_23 = -5032552168611752941;
                            var_24 = ((~var_5) ^ ((-73 ? 1263143123 : (min((arr_1 [6]), var_16)))));
                        }
                    }
                }
                var_25 = ((~((~(max(var_16, var_13))))));
                var_26 = (((((((max(-1283082041, var_16))) ? (arr_3 [i_0 - 2] [i_1 - 2]) : var_5))) - ((-1263143123 & ((-5032552168611752963 ? 1 : (arr_1 [i_0])))))));
                arr_8 [i_0 + 1] [8] = var_8;
                var_27 = (((((arr_4 [i_1 - 2] [i_0 - 2] [i_0] [i_0]) ? (arr_4 [i_1 - 2] [i_0 - 2] [i_0 - 2] [i_0]) : (arr_4 [i_1 - 2] [i_0 - 2] [i_0] [i_0]))) << ((min((max(var_9, (arr_5 [i_0] [i_1] [i_1]))), (!4354160364065786576))))));
            }
        }
    }
    #pragma endscop
}
