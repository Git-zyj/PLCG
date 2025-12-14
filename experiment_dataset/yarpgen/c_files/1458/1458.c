/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1458
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_18 = (min(var_18, (-2147483647 - 1)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_1] = 7;
                            var_19 = max(18446744073709551604, 5013694991872927154);
                            arr_13 [i_0] [i_1] [0] [i_1] = (((((~(max(3988766595, (arr_5 [i_0] [13] [i_2])))))) ? (~-1) : (max(14561, 16291256151311462193))));
                            var_20 = (7 | 18446744073709551608);
                        }
                    }
                }
                var_21 = (((((max(788754904, -2927311488594368985)) != 94)) && ((min((-2147483647 - 1), (arr_3 [i_0]))))));
            }
        }
    }
    var_22 ^= min(var_5, (((var_16 / 35) ? (18132485414492921560 * 2155487922398089422) : -16130)));
    var_23 = var_17;
    #pragma endscop
}
