/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121617
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += (min((min(63, var_12)), ((((((max(var_16, 191)))) > ((var_4 ? var_14 : var_5)))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_2] = (max(443419074590242602, ((+((var_14 ? (arr_1 [11]) : (arr_2 [i_0 - 1] [i_1] [i_2])))))));
                    arr_10 [i_0] [i_0] [i_2] = (min((arr_5 [i_0] [i_1] [i_2]), (min((arr_5 [i_0] [i_0] [i_2]), (arr_1 [i_0 - 1])))));
                    var_19 = (min(var_19, (((~((-(min((arr_7 [i_1 - 1] [i_2]), (arr_5 [i_2] [i_2] [i_2]))))))))));
                    var_20 = (min(var_20, ((max((((23000 ? var_3 : (arr_8 [i_0] [i_2])))), (((!((min(4611686018427387904, (arr_6 [5] [5] [i_1] [i_2]))))))))))));
                }
            }
        }
    }
    #pragma endscop
}
