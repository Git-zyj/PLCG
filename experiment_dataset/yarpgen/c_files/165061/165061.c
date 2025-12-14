/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165061
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += min(var_10, ((1620604005 ? 2674363291 : 53)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_19 = (((((((arr_0 [i_1] [i_1]) ? -44 : (arr_0 [i_0] [i_1]))) + 2147483647)) << (((((arr_0 [i_1] [i_0]) % 1871530730)) - 42))));
                var_20 = 0;
                arr_4 [i_1] [i_0] [i_0] = (max((((arr_0 [i_0] [i_1]) ? (arr_0 [i_1] [i_0]) : (arr_0 [i_0] [i_1]))), (arr_0 [i_0] [1])));
                var_21 = ((min((arr_3 [i_1] [i_0] [i_0]), (((arr_1 [i_0] [i_0]) ? (arr_3 [i_0] [i_0] [i_0]) : (arr_2 [i_0]))))) ^ (arr_2 [i_1]));
                var_22 = (((min(((((arr_0 [i_0] [i_0]) >> (((arr_0 [i_0] [i_0]) - 42))))), (max(1, (arr_3 [i_0] [i_0] [i_0]))))) - (((-(((arr_1 [i_1] [3]) * (arr_2 [i_1]))))))));
            }
        }
    }
    var_23 = (min(var_23, var_13));
    var_24 &= var_11;
    #pragma endscop
}
