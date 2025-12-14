/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161616
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [0] [i_0] = (arr_0 [i_0]);
                    arr_10 [i_0] [i_0] [i_0] [i_0] = (max((((((arr_5 [i_0] [i_1] [i_2]) ? 15591164893028867268 : (arr_3 [8]))))), (((arr_0 [i_0]) ? var_4 : (((arr_2 [i_1]) | var_3))))));
                    var_11 = (max((((arr_1 [i_1]) ? (arr_1 [i_1]) : (arr_1 [i_0]))), ((-(arr_1 [i_2])))));
                    arr_11 [5] [5] [i_0] = ((((((4299 / (arr_6 [13]))) | 34509)) | ((-270830508 ? (((!(arr_4 [i_1] [i_1])))) : ((var_2 ? var_4 : 63623))))));
                }
            }
        }
    }
    var_12 = ((var_0 ? var_1 : (((var_7 ? var_6 : 2748200067)))));
    var_13 = ((var_6 ? (((!-27930) ? ((var_10 ? var_2 : var_3)) : var_5)) : ((min(((var_8 ? -270830514 : var_1)), var_10)))));
    var_14 = var_0;
    #pragma endscop
}
