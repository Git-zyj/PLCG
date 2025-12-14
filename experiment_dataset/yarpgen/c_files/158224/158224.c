/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158224
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_9 [10] [i_0] [i_1] [i_2] = ((3294728882 ? (arr_2 [i_0] [i_2]) : ((((arr_2 [i_1] [i_2]) == ((~(arr_1 [4] [8]))))))));
                    arr_10 [12] [12] [i_2] = ((((((((var_2 ? (arr_3 [1] [i_2]) : (arr_6 [i_0] [i_0] [3] [i_2])))) ? (((58165 || (arr_8 [i_0])))) : 2))) ? ((((arr_5 [i_0] [4] [i_0]) > ((var_9 ? (arr_7 [i_0] [i_1] [i_2]) : (arr_2 [4] [12])))))) : (((((arr_4 [i_0] [i_0] [3]) ? (arr_7 [i_0] [i_1] [1]) : 42854)) >> (!var_1)))));
                    arr_11 [i_0] [i_0] [3] [i_2] = (min(((1 ? 9223372036854775807 : ((32 ? 110 : (arr_3 [i_0] [i_2]))))), (((arr_3 [i_1] [i_0]) ? (arr_0 [i_0]) : (arr_3 [i_1] [i_2])))));
                }
            }
        }
        arr_12 [i_0] = (((~var_8) ? ((-((5128144494462590904 ? var_10 : (arr_2 [0] [i_0]))))) : ((((arr_7 [i_0] [i_0] [i_0]) ? 0 : 1)))));
        arr_13 [i_0] [i_0] = (((arr_1 [i_0] [i_0]) ? (((6871101040741790035 || (arr_1 [i_0] [i_0])))) : ((((arr_1 [i_0] [i_0]) || (arr_1 [i_0] [6]))))));
    }
    var_14 |= ((((32767 ? var_1 : var_1)) - var_13));
    #pragma endscop
}
