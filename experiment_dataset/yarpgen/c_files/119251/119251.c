/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119251
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = -5749058907136612259;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_15 = var_2;

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    arr_7 [i_2] [i_2] [i_1] [i_0] = (max(((!(arr_3 [i_0] [i_1 - 1] [i_2]))), (!-118)));
                    var_16 = (((min(var_11, (max((arr_6 [i_2] [i_0]), 1814170391)))) < ((min((arr_4 [i_1] [i_1 + 1]), (arr_4 [4] [i_1 - 1]))))));
                    var_17 = 32767;
                    arr_8 [i_0] [i_0] = ((32767 ? 35020 : 32750));
                }
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    arr_13 [i_0] [i_1] [i_3] [i_3] = (((((-1814170392 ^ 35020) ? (var_2 - -8308) : (!-32767)))) - (max((((arr_6 [i_0] [i_0]) % 9223372036854775802)), (-32767 == -32767))));
                    var_18 = 984342207;
                    arr_14 [i_3] = (((((-2147483647 - 1) ? (arr_0 [i_3]) : var_12))));
                }
                arr_15 [i_0] [12] = (min(((((((arr_5 [i_0] [i_0] [i_1 - 1]) ^ var_1))) ? var_11 : (30402 == 11974))), ((((min(-1814170387, (arr_5 [i_0] [i_1] [i_1])))) ? (((arr_5 [i_0] [i_0] [i_0]) << (((var_7 + 63) - 8)))) : ((((arr_3 [i_0] [i_0] [i_1 + 1]) - (arr_6 [i_0] [i_0]))))))));
            }
        }
    }
    #pragma endscop
}
