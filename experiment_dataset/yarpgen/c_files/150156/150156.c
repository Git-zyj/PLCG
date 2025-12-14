/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150156
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    var_17 = var_12;
                    var_18 = var_14;
                    arr_9 [i_1] [i_1] = (min((((arr_6 [i_1 - 2] [i_2] [i_2 - 1] [i_2 - 1]) >> (var_3 - 61))), ((var_14 + (arr_6 [i_1 - 3] [i_2 - 1] [i_2 + 1] [i_2])))));
                    arr_10 [i_0] [i_1 + 3] [i_1] = ((((7949005832326391058 ? 5129450315199428669 : 7914078891064403167)) / (((((max(var_8, var_1)) > (arr_1 [i_0])))))));
                }
            }
        }
    }
    var_19 = var_10;
    #pragma endscop
}
