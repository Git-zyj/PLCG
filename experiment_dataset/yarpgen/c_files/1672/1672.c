/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1672
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    var_16 = ((arr_5 [i_0] [i_0] [i_0] [i_0]) ? (min(((var_14 ? (arr_5 [i_0] [i_0] [i_0] [2]) : var_4)), var_2)) : ((var_0 | (min((arr_1 [i_0]), 0)))));
                    var_17 = (((((var_6 > (((-32767 - 1) ? var_0 : (arr_2 [2] [14] [14])))))) * var_4));
                    var_18 = (min(var_18, ((((((4294967295 != (((max(var_1, -108))))))) >= ((3056513673 ? (arr_0 [i_0 + 1]) : ((var_6 ? (arr_0 [i_0]) : (arr_0 [8]))))))))));
                    arr_7 [i_0] [1] = (min(((var_14 ? (arr_1 [i_2 + 1]) : (arr_1 [i_2 - 1]))), (arr_2 [3] [i_0 + 1] [6])));
                    arr_8 [i_0] [i_0] [i_0] [i_0] = var_1;
                }
            }
        }
    }
    var_19 = ((var_15 % (((4294967295 ^ ((((var_10 + 2147483647) << (((var_3 + 3688) - 22))))))))));
    var_20 = var_11;
    #pragma endscop
}
