/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116325
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_11 = (max(var_11, ((((((65535 + (arr_0 [4] [16])))) ? (16 != 0) : (arr_2 [12]))))));
                var_12 = ((-111 + ((min(((((arr_1 [i_0]) || 693878730254491206))), 65535)))));
                var_13 = (((var_9 || (((27209 ? (arr_2 [i_1]) : (arr_0 [i_0] [i_0])))))) ? (((min(10753, (arr_1 [i_0]))))) : (arr_0 [i_0] [i_0]));
                var_14 = ((!(arr_0 [i_0] [i_0 - 2])));
            }
        }
    }
    var_15 = var_1;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            {
                var_16 = min(((((arr_2 [13]) & var_1))), (((arr_3 [i_3] [i_2]) >> ((((min(var_2, (arr_2 [i_2])))) + 35)))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 0;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        {
                            var_17 = (min(var_17, (((!(((((arr_11 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]) && 105)))))))));
                            var_18 = (((((((max((arr_12 [i_2] [i_2] [i_2] [i_2]), 7))) ? (arr_12 [i_5] [1] [i_3] [1]) : (min(var_10, var_7))))) - ((31 ? (((var_5 ? -1 : 7092))) : (~502673202931457043)))));
                        }
                    }
                }
                var_19 = (min(var_19, (arr_8 [i_2])));
            }
        }
    }
    var_20 = var_9;
    var_21 ^= var_6;
    #pragma endscop
}
