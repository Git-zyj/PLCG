/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158285
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_18 += (min((arr_0 [1]), (((30111 || (((17937 ? 42 : 192))))))));
                arr_6 [10] [4] = ((~(arr_4 [i_1] [i_1 - 1] [1])));
                var_19 = (min((((+(((((arr_2 [13]) + 9223372036854775807)) >> (((arr_4 [i_0] [i_0] [13]) - 9611122010186689730))))))), ((var_14 + (arr_4 [i_0] [i_1] [i_1])))));
            }
        }
    }
    var_20 = var_4;
    var_21 = ((((min(var_4, ((var_1 ? 12288 : var_12))))) ? (((0 ? 183 : 255))) : (min(((var_4 ? var_14 : var_17)), ((min(19509, 53248)))))));
    #pragma endscop
}
