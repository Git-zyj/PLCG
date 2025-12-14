/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110825
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((3805227094 | (((min(var_0, var_14))))))) ? 0 : ((var_2 & (var_9 | var_12)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                {
                    arr_10 [i_2] [i_2] [i_2] = (((((var_8 ? var_11 : var_15)) == (arr_1 [i_1] [i_0]))) ? var_1 : (arr_1 [i_0] [i_0]));
                    arr_11 [i_2] [i_2] = (((max(3474910274, ((((arr_5 [i_2] [i_0] [i_0]) >= (arr_1 [17] [17]))))))) ? (((~var_5) ? var_3 : (((((arr_9 [i_2] [i_2]) || (arr_2 [i_0] [i_1]))))))) : (arr_2 [20] [20]));
                    arr_12 [16] [i_2] [i_2] = ((((((arr_5 [i_2 - 2] [i_2 - 1] [i_1]) ^ (arr_5 [i_2 - 3] [i_2 - 1] [i_1])))) & var_11));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 13;i_4 += 1)
        {
            {
                arr_19 [i_4] [i_4] = arr_14 [3];
                arr_20 [i_4] [i_4] [i_3] = (min((arr_3 [i_3] [i_4]), (((((~(arr_18 [i_4])))) ? 4294967295 : ((min(4294967285, 1448344519)))))));
                arr_21 [i_4] [i_4] [i_3] = (min((((((arr_2 [i_3] [i_4 + 3]) >> (var_9 - 3842466664))) != (((((arr_7 [i_4]) || (arr_17 [i_4] [i_4]))))))), (((arr_1 [i_4 - 1] [i_4 + 1]) && (arr_16 [i_4 - 1] [i_4 + 1])))));
            }
        }
    }
    #pragma endscop
}
