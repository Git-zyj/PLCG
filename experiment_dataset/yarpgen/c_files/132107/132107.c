/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132107
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_4;
    var_11 += 18000;
    var_12 += (((((max(var_6, var_6)))) ? 1057271485294624782 : -var_4));
    var_13 = (min(var_13, ((max(((~(79 % var_8))), var_1)))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_14 += max((((max(var_5, var_7)))), (max(77, (((arr_1 [i_1] [i_1]) / 2687897591732632321)))));
                arr_5 [i_1] [i_1] = ((-86 ? (((!(!176)))) : (max(((((arr_4 [i_1]) && var_0))), (arr_2 [i_1])))));

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    var_15 = (max(var_15, (((168 + (arr_4 [10]))))));
                    arr_8 [i_0] [i_1] [i_2] [4] = (arr_4 [i_1]);
                }
                var_16 |= ((max(((var_1 ? -5002307519888381984 : (arr_0 [i_0 - 4] [i_1]))), var_1)) * ((((var_0 > (arr_0 [15] [i_1]))))));
            }
        }
    }
    #pragma endscop
}
