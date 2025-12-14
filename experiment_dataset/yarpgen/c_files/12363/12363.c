/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12363
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min((!1), (min(38, var_11))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_16 = (min(((((arr_5 [i_2]) ^ (arr_5 [i_2])))), ((~((2892477121 & (arr_4 [i_2])))))));

                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        var_17 = ((!((!((min((arr_7 [i_0] [i_1]), (arr_10 [i_0] [i_1] [i_2] [3]))))))));
                        var_18 = ((((9223372036854775807 - (arr_2 [i_3 - 1] [i_3] [i_3]))) == ((min(var_8, 12582912)))));
                    }
                    var_19 = var_13;
                }
            }
        }
    }
    var_20 = (min((((4294967295 ? 4 : 134))), var_10));
    #pragma endscop
}
