/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187515
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max((min(((26003 ? 6658276084796258410 : 363775440)), (98 ^ 15))), var_2));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    var_13 = ((((241 ^ ((-(arr_0 [i_1]))))) >= var_0));
                    arr_8 [i_1] [i_0] = ((((((1 ? 255 : var_6)))) >= ((((var_7 ? var_8 : (arr_0 [4]))) << (((((arr_3 [i_2]) ? var_6 : (arr_0 [i_2]))) - 12968))))));
                    var_14 += (((((arr_6 [i_0] [i_0] [i_2 - 2]) >> var_8)) - (arr_6 [i_2] [9] [i_2 + 1])));
                    var_15 = (min(var_15, ((((min(26003, (arr_6 [i_2 + 1] [6] [6]))) > (((max((arr_2 [i_2 + 1] [i_2]), (arr_2 [i_2 - 2] [i_2]))))))))));
                }
            }
        }
    }
    #pragma endscop
}
