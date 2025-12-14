/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119974
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 12;i_2 += 1)
            {
                {
                    var_11 = (-127 - 1);
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_12 = ((((((-1663489187 + 2147483647) >> (var_6 - 17871435182538325399)))) ? ((~(arr_5 [12] [i_3] [12]))) : ((((arr_5 [i_3 - 2] [i_2 - 2] [12]) ? (min(1520084371, -1520084371)) : (arr_16 [i_4] [i_4] [i_4] [i_4] [i_4]))))));
                                arr_17 [i_4] [i_1] [i_2] [i_1] [i_0] = (var_3 + 77);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            {
                                arr_24 [i_0] [i_1] [3] [i_1] [i_0] [i_1] [i_6] = (arr_0 [i_6]);
                                arr_25 [13] [13] [10] [i_0] [10] [i_0] = (!217);
                                var_13 -= ((((var_1 && (arr_10 [8] [i_1] [i_2 - 2] [i_2 - 2]))) ? (!var_4) : (((((((-1520084371 + 2147483647) >> (32755 - 32747)))) && -8188)))));
                            }
                        }
                    }
                    var_14 = (min(var_14, (arr_13 [i_1] [i_2] [i_2] [i_2 - 4] [1])));
                }
            }
        }
    }
    var_15 = ((5508017664305256288 >> (-651965305 + 651965340)));
    var_16 = (max(var_16, var_10));
    #pragma endscop
}
