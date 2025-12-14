/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114048
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_13 = 16318802523447967169;
                            var_14 = (max(var_14, 201408386));
                            var_15 |= (max(((-18446744073709551615 >> (-201408386 + 201408437))), (min(((((arr_10 [i_3] [i_2] [i_2] [12]) >> (((arr_8 [i_0] [i_1] [i_0 - 2] [i_3]) - 56))))), (((arr_8 [i_1] [13] [7] [i_0]) ? (arr_6 [i_2]) : (arr_0 [i_2])))))));
                        }
                    }
                }
                var_16 = ((((max(((1 ? (arr_9 [i_0] [0] [i_0] [i_1]) : (arr_1 [8] [i_0]))), (((2127941550261584458 ? 127 : 23290)))))) ? 2127941550261584474 : ((var_8 >> (((2890314027899127105 + 201408385) - 2890314028100535483))))));
                var_17 = (arr_7 [5] [i_0] [i_0] [i_1]);
            }
        }
    }
    var_18 = ((2248054459519588101 ? (!930361087) : var_3));
    #pragma endscop
}
