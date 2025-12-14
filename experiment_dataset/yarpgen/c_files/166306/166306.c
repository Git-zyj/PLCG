/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166306
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [i_0] [11] |= var_3;
                arr_7 [i_0] = 2032;

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_10 [i_0] [i_1] [i_2] = min(var_4, (((arr_1 [i_2]) << (((((arr_0 [i_0]) + 6383319264707208263)) - 20)))));
                    var_12 = (max(var_12, (arr_8 [i_0] [i_0] [0])));
                    var_13 += ((13 << (0 & -2033)));
                    var_14 = (max(var_14, ((min(1, (((((arr_0 [i_0]) + 9223372036854775807)) << 0)))))));
                }
                for (int i_3 = 1; i_3 < 19;i_3 += 1)
                {
                    arr_13 [i_3] = (-2033 >= 0);
                    arr_14 [i_0] [i_1] [1] [i_1] = -5762;
                    var_15 = max(((min((!-32764), 2040))), (max((min(32640, 28330)), var_4)));
                    arr_15 [i_0] [i_1] [i_3] |= 6;
                }
                var_16 = -1544529013;
            }
        }
    }
    var_17 |= (((min(var_5, 13)) - ((((((var_10 ? var_8 : var_6)) != (var_0 & var_0)))))));
    var_18 = var_11;
    #pragma endscop
}
