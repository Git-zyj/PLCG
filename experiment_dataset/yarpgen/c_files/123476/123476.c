/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123476
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, (((var_0 + (((min(var_7, var_2)) >> (var_8 - 2758785229))))))));

    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = (15968683355765572125 < 40);
        arr_3 [i_0] [i_0 - 3] = ((((((arr_0 [i_0] [i_0]) / (arr_1 [i_0 - 3])))) || ((((min((arr_1 [i_0]), (arr_0 [i_0] [i_0])))) && (arr_1 [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    arr_11 [i_0] [i_0] [i_0] [i_2] = (arr_5 [i_0] [i_2]);
                    var_12 = (min(var_12, (arr_8 [12] [i_1 + 2])));
                    var_13 = min((max((((arr_6 [i_2]) + (arr_6 [1]))), ((((arr_6 [i_0]) || (arr_6 [i_0 + 1])))))), (max(2147483647, (arr_6 [i_2]))));
                    var_14 = (((((((((-(arr_5 [i_0] [i_1])))) | (arr_0 [i_0 + 1] [i_2]))) + 9223372036854775807)) >> (((arr_6 [i_1]) - 1374724482))));
                    arr_12 [i_0] = (max((max((arr_1 [i_0]), (arr_4 [i_0] [i_0]))), ((+(min((arr_7 [i_0] [i_0]), (arr_4 [i_0] [i_0])))))));
                }
            }
        }
    }
    var_15 = ((1878358447 >> (var_4 - 39847)));
    #pragma endscop
}
