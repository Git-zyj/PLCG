/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14185
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(-31797, 3));
    var_18 = ((!((max(var_8, (~4294967290))))));
    var_19 *= var_13;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [20] &= ((1 ? (-32767 - 1) : (arr_1 [i_1])));
                var_20 = (((arr_3 [i_0]) % ((~(min(var_0, 4294967288))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            {
                var_21 = 0;
                arr_11 [i_2] [i_3] &= ((((min((arr_8 [i_3] [i_3]), (arr_8 [i_3] [i_2])))) * (arr_8 [i_3] [i_3])));
                var_22 += ((~(min(((min(var_13, (arr_1 [i_2])))), (arr_9 [i_2] [i_3] [i_2])))));
                var_23 ^= min(1, 1);
                var_24 = (min(993, ((min((arr_8 [i_3] [i_2]), ((((arr_4 [i_3] [i_3]) == (arr_2 [i_2])))))))));
            }
        }
    }
    #pragma endscop
}
