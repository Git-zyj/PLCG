/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112324
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    arr_8 [i_2] [i_1] [i_2] = (((max((arr_2 [i_0]), (arr_0 [i_0 + 1])))) ? (((max(var_5, (arr_7 [i_0 + 4] [i_0] [i_0]))))) : -65529);
                    var_10 = ((-(max((var_5 > 0), var_0))));
                    var_11 = ((((6040822007311925065 & (var_1 ^ var_9))) <= (arr_1 [i_0])));
                    var_12 = ((((arr_4 [i_0 + 2]) << ((((-760542384024940715 ? -1771903311 : 16777215)) + 1771903319)))));
                }
                for (int i_3 = 1; i_3 < 21;i_3 += 1)
                {
                    arr_11 [9] [i_3 - 1] [i_1] [i_0] = ((((((((arr_10 [i_1] [i_1] [21]) || var_4))) & ((-(arr_10 [i_0] [1] [i_3]))))) & (((var_4 && ((((arr_4 [i_3 - 1]) % -4905560087821814200))))))));
                    var_13 = (max(var_13, ((((max(var_5, (arr_7 [i_0 + 3] [i_0] [i_0 - 1])))) && (1 + 127)))));
                }
                for (int i_4 = 4; i_4 < 21;i_4 += 1)
                {

                    for (int i_5 = 1; i_5 < 19;i_5 += 1)
                    {
                        var_14 = var_6;
                        var_15 = (((-9223372036854775807 - 1) - (-16777202 ^ var_8)));
                        arr_17 [i_4] = (max(32744, ((-5307327938781362463 / (((min(var_8, var_8))))))));
                    }
                    var_16 = var_4;
                    arr_18 [i_4] [i_4] = ((704320054 >= (((((var_4 ? var_0 : var_9))) ? (var_8 != var_2) : var_3))));
                }
                arr_19 [i_1] [15] [i_1] = -16777225;
            }
        }
    }
    var_17 = ((((var_4 < (var_3 / var_3))) ? ((max((var_3 > var_7), var_2))) : ((((max(1, 104))) ? -var_7 : 8391601802201414239))));
    #pragma endscop
}
