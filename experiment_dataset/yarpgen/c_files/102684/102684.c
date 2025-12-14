/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102684
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (33554431 % -12);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_19 = ((~(((~(arr_3 [i_0] [i_1]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_20 = (+-1);
                                var_21 = 6559;
                                arr_12 [i_0] [i_1] [5] = (((~((127 % (arr_4 [i_0] [i_1] [4] [1]))))));
                                arr_13 [i_1] [i_1] = (~4294967168);
                                var_22 ^= (!(((~32749) || -var_5)));
                            }
                        }
                    }
                    var_23 ^= ((((-(63 ^ -32749)))) % (((-4391461263568452771 < 4391461263568452771) | (~var_11))));
                }
            }
        }
    }
    #pragma endscop
}
