/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171122
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= ((((((((17 ? 18275 : 2147483647))) ? 85 : 3775809736576158817))) ? (~1668219920) : ((((-1668219920 ? var_3 : var_5)) | (max(var_8, var_5))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_17 -= (max((arr_1 [i_0]), (max((((-1668219935 >= (arr_4 [i_0] [i_0] [i_1])))), ((var_4 ? var_4 : (arr_0 [10] [i_1])))))));
                var_18 = ((((((arr_6 [i_0 - 2]) ? (arr_6 [i_0 + 4]) : 26))) ? (((arr_2 [i_0 - 2]) ? (min((arr_2 [i_0]), -1668219955)) : ((-2089484309417984714 ^ (arr_4 [i_1] [i_1] [i_0 - 3]))))) : (((arr_6 [i_0 - 4]) ? (arr_2 [i_0 + 4]) : (arr_6 [i_0 + 2])))));
                arr_7 [i_1] [i_0] = ((!(((((((!(arr_2 [1]))))) ^ (((arr_6 [i_0]) & (arr_5 [i_0 + 2] [i_1]))))))));
                var_19 = ((((max(-14, (arr_5 [16] [i_0])))) && 14));
                arr_8 [i_0] [i_1] = min((max((arr_3 [i_0] [i_0 - 4] [i_0 - 1]), (arr_3 [i_0] [i_0 - 3] [i_0 + 4]))), (arr_3 [i_0] [i_0 - 4] [i_0 - 1]));
            }
        }
    }
    var_20 = -1668219920;
    #pragma endscop
}
