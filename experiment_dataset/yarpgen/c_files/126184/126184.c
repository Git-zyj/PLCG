/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126184
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    var_19 = var_5;
                    arr_6 [5] [14] [5] = ((((arr_1 [4] [i_1]) ? (arr_0 [i_0] [i_1]) : ((((arr_5 [3] [i_1] [i_2 - 1]) >> (var_16 - 10838825268276139312)))))));
                    var_20 = (max(var_20, (((((min(17747, var_4))) > (((((arr_3 [i_2 - 1] [13] [16]) < (((!(arr_5 [i_0] [i_0] [i_0])))))))))))));
                }
            }
        }
    }
    var_21 = (max(var_7, var_6));
    #pragma endscop
}
