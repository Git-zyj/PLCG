/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12958
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((-72 * (~1)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_18 = (max((arr_0 [i_0]), (((arr_5 [16] [i_1] [16]) % var_16))));
                var_19 = (((((((arr_2 [i_0]) >= (arr_3 [i_0]))))) <= (max(72, 9532918983886215601))));

                for (int i_2 = 1; i_2 < 21;i_2 += 1)
                {
                    var_20 = (max((arr_4 [i_2 + 1] [i_2 - 1] [i_2 + 2]), (arr_1 [i_1])));
                    var_21 = (max(((max((max(2782043093, 1)), 1512924202))), (arr_5 [i_2 + 2] [i_2 + 2] [i_2 - 1])));
                }
                var_22 |= (((((123 ? (arr_4 [i_0] [i_0] [12]) : (arr_7 [i_0] [i_1] [i_0])))) ? (arr_0 [i_0]) : (arr_6 [i_1])));
            }
        }
    }
    #pragma endscop
}
