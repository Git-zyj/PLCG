/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162458
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (!var_3);
    var_19 = var_8;

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        var_20 = ((-7755 ? 65535 : 114));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        var_21 = (max(var_21, (arr_3 [i_3])));
                        var_22 -= ((!(~0)));
                        arr_9 [i_0] [i_1 + 1] [i_0] = ((-(min((arr_3 [0]), var_9))));
                    }
                }
            }
        }
        var_23 = (min(var_23, (((~(min((arr_7 [9] [i_0 + 1] [i_0 + 1] [i_0] [i_0 - 1] [i_0 + 2]), (((arr_2 [i_0] [8]) ? 17737 : (arr_6 [4] [i_0 + 1] [4]))))))))));
        var_24 = (max(var_24, ((((((arr_6 [4] [i_0 + 2] [i_0 + 2]) ? ((((!(arr_1 [i_0 - 1] [0]))))) : (max(var_1, (arr_2 [i_0] [2]))))) << (17740 - 17715))))));
        var_25 = ((!(arr_3 [i_0 - 1])));
    }
    var_26 = (min(var_26, 7129382008432205193));
    #pragma endscop
}
