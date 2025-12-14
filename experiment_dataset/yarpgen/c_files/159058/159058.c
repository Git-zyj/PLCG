/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159058
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((min(var_8, var_9)));
    var_11 = (((-var_6 + 2147483647) >> (var_0 - 36350)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    var_12 = (3312214505961821433 % (arr_5 [i_0] [i_0]));
                    var_13 = (min(var_13, (((!(arr_6 [i_1] [i_1]))))));
                    arr_7 [i_0] [i_0] [i_0] = (max((max((min((arr_4 [i_0] [i_0] [i_0]), 29170)), (((var_5 == (arr_3 [i_0])))))), (((((max(246, (arr_6 [i_0] [i_1])))) ? -var_5 : var_2)))));
                }
                arr_8 [i_0] = var_3;
            }
        }
    }
    #pragma endscop
}
