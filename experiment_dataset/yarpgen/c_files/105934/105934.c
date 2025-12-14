/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105934
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_18;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_20 -= (((-(arr_5 [i_0]))));
                            var_21 *= (-1 > 583351517856269820);
                        }
                    }
                }
                var_22 -= ((-6930 > (((arr_8 [i_0] [6] [6] [i_0]) + (arr_4 [i_1] [i_1] [9])))));
                var_23 = (max(var_23, ((min(((((arr_1 [i_0]) / (arr_1 [i_0])))), ((17863392555853281796 * (arr_4 [i_0] [i_0] [i_1]))))))));
                var_24 = ((((arr_10 [i_0]) ^ var_10)));
            }
        }
    }
    var_25 = (max(var_25, var_4));
    #pragma endscop
}
