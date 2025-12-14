/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102194
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_14 = (max((-9223372036854775794 || 768), ((2749379176242228295 ? 11198309511226832531 : 2136768690149341974))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 7;i_3 += 1)
                    {
                        {
                            arr_8 [i_0] [i_0] [1] [4] |= (((17773727143960637476 ^ 0) > 18446744073709551593));
                            var_15 = (min(var_15, (~9223372036854775793)));
                        }
                    }
                }
                arr_9 [i_0] = arr_0 [i_0] [i_0];
            }
        }
    }
    var_16 = 1;
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            {
                arr_16 [i_4] [i_5] = (arr_11 [i_4] [i_5]);
                arr_17 [i_4] = ((!(((~(arr_13 [i_4]))))));
                var_17 = (((-9223372036854775807 - 1) ? (max((arr_15 [i_5]), -1)) : (max((((arr_15 [i_5]) - 2856225490)), (arr_13 [i_4])))));
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 10;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        {
                            arr_24 [9] [i_4] [4] = (arr_22 [i_7] [i_5] [i_5] [i_4]);
                            var_18 = (arr_14 [i_4] [i_4]);
                        }
                    }
                }
                var_19 = (100 / ((((238 ? 234881024 : 3584)) ^ (((32766 > (arr_20 [1] [3] [1])))))));
            }
        }
    }
    var_20 = 1570014689;
    #pragma endscop
}
