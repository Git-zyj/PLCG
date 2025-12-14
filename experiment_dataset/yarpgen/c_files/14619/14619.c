/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14619
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (-9618 ? 4611686018427387904 : 1908817699);
    var_12 ^= (((((16384 ? (~8191) : 7134))) ? var_3 : (max((((var_1 ? 58401 : 15))), (min(12709, var_5))))));
    var_13 = ((28672 ? 12709 : 43874));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] = ((var_2 ? ((((arr_2 [i_0] [i_0]) - (arr_2 [i_0] [i_0])))) : (max(var_1, 17441776977791791893))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_14 ^= (max(3696417818, 1));
                    var_15 = (arr_4 [10] [i_1] [i_1]);
                }
            }
        }
        var_16 = (((!var_8) << (((7134 / 221) - 31))));

        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        {
                            var_17 ^= (((max((arr_12 [i_0] [i_0]), var_0)) != 2386149597));
                            var_18 = (1125899906842616 < 2199023255551);
                        }
                    }
                }
                arr_18 [i_0] [i_0] [i_3] [i_0] = (max(((268304384 ? 35 : 2199023255548)), ((((arr_5 [i_3]) < var_10)))));
                var_19 ^= ((~((((((~(arr_4 [1] [i_0] [i_0])))) > 2386149567)))));
            }
            var_20 = 34556;
        }
    }
    #pragma endscop
}
