/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142290
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((~((~((max(-30414, 6144)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                {
                    arr_6 [i_2] [i_2] [i_2] = (((((((~(arr_1 [i_0]))) | (arr_4 [i_2] [i_2 + 1] [i_2 + 2] [i_2 - 1])))) ? (max((~-10), (arr_2 [i_2] [i_0]))) : ((((((arr_5 [i_0] [i_0]) & var_8))) ^ var_1))));
                    arr_7 [i_0] [i_2] [i_0] [i_0] = (min(((((var_9 / (arr_2 [i_1] [i_1]))))), (((((~(arr_4 [i_2] [i_1] [i_1] [i_1])))) ? (((0 ? var_7 : (arr_1 [i_0])))) : 7397982603914849595))));
                    arr_8 [i_0] [14] [i_2] [i_2] = (~var_7);
                    var_13 = (arr_0 [i_0]);
                }
            }
        }
    }
    var_14 = (min(var_14, ((((var_5 < var_0) ? (((var_7 ? (-7397982603914849597 || -7397982603914849596) : (!var_11)))) : -7397982603914849596)))));
    #pragma endscop
}
