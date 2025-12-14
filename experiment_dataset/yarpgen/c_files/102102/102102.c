/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102102
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += 0;
    var_14 = (((((min(var_4, var_10)))) ? ((var_3 ? (var_9 / 3312956543) : (((max(var_1, var_8)))))) : ((((!(var_10 - var_8)))))));
    var_15 -= (var_3 != var_12);

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_16 = (max((((arr_0 [i_0]) / var_0)), (max((((arr_0 [19]) ? (arr_1 [i_0]) : (arr_0 [i_0]))), (((arr_1 [i_0]) + 65535))))));
        var_17 *= var_5;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_18 = (max(var_18, (((+(max((((arr_6 [i_0] [i_0] [i_2]) ? var_9 : (arr_0 [i_0]))), ((min(0, (arr_3 [18] [18] [i_0])))))))))));
                    var_19 = (max(var_19, (((((max(var_12, (arr_0 [i_2]))) / (arr_4 [i_0] [i_0] [i_0])))))));
                }
            }
        }
        arr_7 [i_0] = (((max(var_0, (arr_0 [8]))) >= var_1));
    }
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        var_20 = (((((-(arr_3 [i_3] [i_3] [i_3])))) ? 0 : ((+(max((arr_9 [i_3]), (arr_3 [i_3] [16] [i_3])))))));
        var_21 = (max(var_2, (((var_3 ? (var_10 ^ var_0) : ((var_2 ? var_3 : (arr_8 [i_3]))))))));
    }
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        arr_14 [18] = (max((!-8763725), ((!(arr_3 [i_4] [i_4] [i_4])))));
        var_22 = ((((max(65535, var_4))) == ((((arr_13 [i_4]) != (arr_4 [i_4] [i_4] [i_4]))))));
        var_23 = (max(var_23, (((arr_4 [i_4] [i_4] [i_4]) ? ((var_5 ? (arr_4 [i_4] [i_4] [i_4]) : (arr_4 [i_4] [i_4] [i_4]))) : ((max((arr_4 [i_4] [i_4] [i_4]), (arr_4 [i_4] [i_4] [i_4]))))))));
    }
    #pragma endscop
}
