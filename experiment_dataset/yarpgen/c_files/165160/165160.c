/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165160
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= (-((2205721207 ? 1751044828 : 2790505468)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                arr_4 [i_0] = (min((!33423360), (((arr_2 [i_0 - 1]) ^ (arr_3 [i_0] [i_0 - 1])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_9 [i_3 - 3] [18] [i_0] [i_0] [i_0] &= ((!(arr_8 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_1 + 1])));
                            var_14 = (min(var_14, var_5));
                            var_15 = (max(var_15, ((max((((arr_3 [i_0 + 1] [i_1 - 2]) ? var_10 : (arr_2 [i_1 - 1]))), (((1 & (arr_2 [i_2])))))))));
                            arr_10 [i_0] [i_0] [4] = (min((((arr_5 [i_0 + 1] [i_0 - 1] [1]) | (arr_5 [i_3] [i_0 - 1] [i_0]))), var_1));
                        }
                    }
                }
                var_16 = (max(var_16, 2147483638));
                arr_11 [i_0 - 1] = (((arr_0 [i_0 + 1]) ? var_1 : (~-15)));
                arr_12 [8] [i_0 + 1] [i_0] = (min((arr_3 [i_1] [i_1]), ((((min(var_6, 0))) ? 4261543908 : (arr_0 [i_1 - 1])))));
            }
        }
    }
    var_17 ^= var_0;
    var_18 = var_6;
    #pragma endscop
}
