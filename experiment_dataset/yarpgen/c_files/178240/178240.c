/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178240
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_11 = (((((5429 ? 0 : ((var_8 ? var_4 : var_0))))) ? (max(((max(var_8, (arr_2 [i_0])))), var_9)) : -57024));
        var_12 = ((((arr_0 [i_0 - 1] [i_0 - 2]) ? (arr_0 [i_0 - 1] [i_0 + 1]) : (arr_0 [i_0 + 1] [i_0 + 1]))));
        arr_3 [i_0] = -10;

        /* vectorizable */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_13 = 51608;
            var_14 ^= (((arr_5 [i_0] [8]) ? (arr_5 [i_0] [10]) : 1));
        }
        arr_6 [i_0 + 1] = ((((max((max(9899, 4294967290)), 510))) ? ((((arr_0 [i_0 + 1] [i_0]) ? 8191 : 2))) : ((((min(var_5, (arr_5 [i_0] [10])))) ? ((var_0 ? -20 : 1337964893815054709)) : (arr_0 [i_0] [i_0])))));
    }
    var_15 = (8589934591 ? ((max((((var_7 ? var_10 : var_2))), (max(65531, 9))))) : (min(((var_4 ? 47334669 : var_4)), var_5)));
    #pragma endscop
}
