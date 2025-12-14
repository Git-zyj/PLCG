/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117884
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_1] [i_1] [i_2] [i_0] = (((((~6871) + 2147483647)) << ((((((-((~(arr_8 [i_0] [i_0] [i_0] [i_0]))))) + 6194191310722623782)) - 24))));
                            arr_11 [i_0] [i_0] [i_1] [i_0] [i_3] = -6872;
                        }
                    }
                }
                var_19 = (max(var_19, (((!((((((~(arr_6 [i_0] [i_1] [i_1])))) ? (((arr_0 [i_0] [i_1]) * -1611469098)) : var_15))))))));
                var_20 = (max((6871 * -6872), (((!(((-6876 ? -1561744523 : (arr_1 [i_0] [i_1])))))))));
                arr_12 [i_0] [i_0] = (arr_7 [i_1] [i_1] [i_1] [i_1]);
                var_21 ^= 6844;
            }
        }
    }
    var_22 = (min(var_22, 333319690));
    var_23 = (max(var_23, ((max((min(891903627, var_3)), -var_10)))));
    #pragma endscop
}
