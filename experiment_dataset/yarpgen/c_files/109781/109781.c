/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109781
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += ((((var_6 < var_4) >> (1896741606 - 1896741583))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 7;i_2 += 1)
            {
                {
                    var_13 = (((((((((arr_6 [i_2] [i_0] [i_0] [i_0]) ? 2398225665 : 2398225680))) ? 1896741615 : (var_5 * 0)))) ? (min((min((arr_2 [i_0]), 18446744073709551603)), (2 == 0))) : (((4294967286 >> (32749 - 32723))))));
                    arr_8 [i_0] [6] [i_0] = (i_0 % 2 == zero) ? ((min(((((((min(var_7, -32755))) + 2147483647)) << ((((13 ^ (arr_2 [i_0]))) - 304164587)))), (arr_3 [i_1])))) : ((min(((((((min(var_7, -32755))) + 2147483647)) << ((((((13 ^ (arr_2 [i_0]))) - 304164587)) - 3625316096)))), (arr_3 [i_1]))));
                    var_14 = var_7;
                    arr_9 [i_0] [i_0] = (min(18446744073709551603, 0));
                }
            }
        }
    }
    #pragma endscop
}
