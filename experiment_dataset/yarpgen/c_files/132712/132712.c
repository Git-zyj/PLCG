/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132712
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_15 = (max(var_15, (((!((((var_14 ? 0 : (arr_1 [7]))))))))));
        arr_2 [i_0] = 13;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_16 = ((min(7, var_1)));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                {
                    var_17 = (arr_4 [i_3]);
                    var_18 = (((arr_8 [i_1] [i_3]) | (~var_13)));
                    arr_11 [1] [1] [1] = (max(((!(arr_7 [i_1]))), ((var_6 < (arr_7 [i_1])))));
                }
            }
        }
        var_19 = ((~(arr_4 [i_1])));
    }
    var_20 = 26270;
    var_21 |= (((((var_14 << (3875916336 - 3875916329))) ^ 1)));
    #pragma endscop
}
