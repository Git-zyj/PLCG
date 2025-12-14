/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180901
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_16 = ((var_0 >= ((-7302641147779348383 | (1448564039 && 144)))));
                                var_17 = ((var_6 && (~var_3)));
                            }
                        }
                    }
                }
                arr_15 [5] [3] [i_0] = ((1448564052 ? (!1098695865) : 248));
                var_18 = var_6;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 4; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 10;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                {
                    var_19 = ((-3595788979964831390 ? 1 : 21566));
                    arr_23 [i_6] [i_5] &= (((((var_2 | ((max(var_3, var_12)))))) ? ((255 >> (var_2 >= var_12))) : ((var_13 >> (-var_4 - 3453236251272724635)))));
                }
            }
        }
    }
    var_20 = var_6;
    #pragma endscop
}
