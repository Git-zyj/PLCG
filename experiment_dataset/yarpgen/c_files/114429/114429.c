/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114429
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_15 = ((-((4600 ? 4588 : (4603 - 35184355311616)))));
                            arr_10 [i_0] = var_11;
                            var_16 = ((((2063467923 ? -4604 : 0)) == (((arr_2 [i_1 - 1] [i_1 - 1]) ? -1670172697 : ((min(-4612, -4628)))))));
                        }
                    }
                }
                var_17 = (((((min(4580, -4611))))) | (arr_5 [i_1 + 1]));
                var_18 = (+((((arr_4 [i_0] [i_0] [i_1 + 1]) * 1))));
                var_19 += (arr_8 [i_1 - 1]);
            }
        }
    }
    var_20 = (((var_3 - 4586) + ((((var_10 ? 2048223981 : var_1)) - var_5))));
    var_21 = ((4614 ? ((((var_6 ? 0 : var_8)) << (-17 - 4294967252))) : -1));
    var_22 = (max(var_3, 29010));
    #pragma endscop
}
