/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172225
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            {
                arr_7 [i_1] = ((((~(min(0, (arr_6 [i_0] [i_1 - 3])))))) ? (arr_6 [i_0] [i_0]) : 17941);
                var_18 = ((~(arr_4 [i_0] [i_1])));
                var_19 = (max(var_19, (min((2165035416 / 834544382), (var_5 || 41427)))));
                var_20 = (((((~(((arr_3 [i_1]) ^ (arr_1 [i_1]))))) + 2147483647)) << (((((((min((arr_1 [i_1]), -3640947712267823965))) && ((max(var_4, var_6)))))) - 1)));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_15 [i_0] [i_0] [i_0] [i_2] = min(var_12, ((((~451262629) <= ((var_17 ? var_6 : (arr_13 [i_0] [i_0] [i_2] [i_3])))))));
                            var_21 = (((((((var_2 - (arr_3 [i_1])))) & 2047)) == (((~(~3023280834))))));
                            var_22 = 96001203;
                            var_23 = (max(var_23, 43));
                        }
                    }
                }
            }
        }
    }
    var_24 |= 22404;
    var_25 = var_16;
    #pragma endscop
}
