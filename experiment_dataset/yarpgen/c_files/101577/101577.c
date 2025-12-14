/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101577
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (-((min((!21872), -17860))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_12 = 17853;
                arr_7 [i_0] [i_0] [9] = (min(var_7, ((+(((arr_4 [i_0] [i_0]) % (arr_1 [i_0] [10])))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_13 [i_1] [i_0] = ((((((arr_5 [i_1 + 1] [i_1 + 1]) - (arr_5 [i_1 + 1] [i_1 + 1])))) & (max(var_9, var_3))));
                            arr_14 [i_0] [i_1] [i_2] [i_0] = (((var_0 % 3173962845) == ((8287065892842266680 ? var_8 : var_0))));
                            var_13 -= ((~(min((2147483647 ^ 23525), var_9))));
                            var_14 -= (arr_10 [i_0] [i_1] [i_2] [i_1]);
                        }
                    }
                }
                var_15 = ((+(((arr_10 [i_1 + 2] [i_1 - 1] [5] [i_1]) % 3173962877))));
            }
        }
    }
    var_16 = (!var_10);
    var_17 = (max(var_17, ((((!(((24864 ? 10159678180867284925 : -4160)))))))));
    var_18 = ((18446744073709551601 ? var_9 : ((((max(var_4, var_3))) ? var_3 : (var_3 - var_8)))));
    #pragma endscop
}
