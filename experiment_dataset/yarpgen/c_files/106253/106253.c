/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106253
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= (var_8 <= var_2);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                var_15 = (min(var_15, ((((((arr_0 [i_0] [i_0]) + 2147483647)) >> ((((((-(arr_0 [i_1] [i_1]))) & (30 | var_12))) - 2650)))))));
                var_16 = (((max(((max(30, (arr_2 [i_1])))), (max((arr_0 [i_0] [i_1]), var_7)))) <= (((var_8 <= (min((arr_1 [i_0]), (arr_5 [i_1] [i_1] [i_1]))))))));

                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    var_17 = (((max(30, (arr_3 [i_0] [i_1 + 1]))) & ((((30 ^ var_3) ? (~var_8) : (~9223370937343148032))))));
                    arr_8 [i_1] [i_2] = (arr_2 [i_0]);
                    var_18 = (var_1 - ((((min(var_10, (arr_5 [i_0] [i_0] [i_0])))) & ((max(225, (arr_7 [13] [i_0 + 2] [i_2] [16])))))));
                    var_19 = (max(((~(~var_4))), (arr_4 [i_0 + 1] [i_0])));
                    var_20 = (max(var_20, var_8));
                }
            }
        }
    }
    #pragma endscop
}
