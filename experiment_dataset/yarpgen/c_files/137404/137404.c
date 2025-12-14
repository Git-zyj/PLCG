/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137404
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_12 + (((var_5 <= ((max(var_1, var_11))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_17 = (~1);
                arr_4 [i_0] [i_0] [i_1] = var_14;
                arr_5 [i_1] = ((-(((arr_1 [i_1] [i_0]) ? (((((arr_1 [i_0] [i_0]) || var_6)))) : (arr_2 [i_0] [i_1])))));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_18 = (max(var_18, ((((min(471063770, (arr_1 [i_0] [i_0]))) <= ((~(arr_3 [i_0] [i_1]))))))));
                    var_19 = (max(var_14, var_4));
                }
                arr_9 [i_0] [7] = ((((var_7 < ((max(var_1, 19606))))) ? (((69 ? -1639 : 2147483647))) : var_2));
            }
        }
    }
    var_20 = var_9;
    #pragma endscop
}
