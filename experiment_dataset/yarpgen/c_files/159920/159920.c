/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159920
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    var_16 = ((((max((((arr_5 [i_0] [i_0 - 1] [i_0]) ? (arr_2 [i_0]) : (arr_1 [i_1] [i_0 - 1]))), (arr_4 [i_0 - 1])))) ? (max((((arr_7 [i_0] [i_1 - 3] [i_0]) ? (arr_4 [i_1]) : (arr_3 [i_0 - 1] [1] [i_0 - 1]))), ((min((arr_8 [i_0 - 1]), (arr_8 [i_0])))))) : ((((((arr_4 [i_0 - 1]) ? (arr_0 [3]) : (arr_2 [1])))) ? (arr_1 [i_1 - 3] [i_0 - 1]) : ((~(arr_1 [1] [i_0])))))));
                    var_17 = (max(var_17, (arr_7 [i_0] [i_0] [6])));
                }
            }
        }
    }
    var_18 = ((var_8 ? ((max(-1, 255))) : ((((((var_5 ? var_14 : var_13))) || (var_2 + var_2))))));
    var_19 = (max(((!((max(var_10, var_10))))), var_7));
    var_20 = var_0;
    #pragma endscop
}
