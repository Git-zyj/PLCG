/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126772
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, 123));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_13 = (var_11 | 1);
                var_14 = (14885 ? 4294967292 : 192);
                arr_4 [i_0] = (((((14883 ? (arr_1 [i_1]) : -46))) ? (((164 ? var_6 : (arr_1 [i_0])))) : var_9));
                arr_5 [i_0] [i_1] = (min((((arr_2 [i_1]) + 13)), (((var_8 <= (arr_2 [i_0]))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] |= ((+(((-2147483647 - 1) * 0))));
                            arr_12 [i_0] [i_1] = (((((arr_6 [i_0] [i_0] [2]) ^ var_9)) << (!var_8)));
                            arr_13 [i_0] [i_0] [1] [i_2] = (arr_0 [i_0]);
                            arr_14 [i_0] [i_0] [i_3 - 2] = (((1 ? 2137465373 : -60)));
                            var_15 = (max(var_15, (arr_10 [17] [i_2])));
                        }
                    }
                }
            }
        }
    }
    var_16 = ((((var_8 ? -123 : var_7))));
    #pragma endscop
}
