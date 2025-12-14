/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150699
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= (max((max(((max(var_10, var_6))), (max(-9223372036854775789, 18446744073709551612)))), (((((4267966041363204005 ? 18446744073709551595 : var_10))) ? (((max(var_7, var_6)))) : (min(var_6, var_1))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                {
                    var_13 = (min(var_13, ((max(var_11, (((max((arr_2 [i_1]), var_5)))))))));
                    arr_10 [i_0] = (i_0 % 2 == 0) ? ((max(((((((arr_9 [i_0] [i_1] [i_0]) ? (arr_5 [i_0] [i_1] [i_0]) : var_5))) ? (18446744073709551612 || 43376) : (arr_5 [i_0] [i_1] [i_0]))), (((((arr_7 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_2 - 3]) >> (((arr_1 [i_0] [i_0]) - 1081815179)))) | 1))))) : ((max(((((((arr_9 [i_0] [i_1] [i_0]) ? (arr_5 [i_0] [i_1] [i_0]) : var_5))) ? (18446744073709551612 || 43376) : (arr_5 [i_0] [i_1] [i_0]))), (((((arr_7 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_2 - 3]) >> (((((arr_1 [i_0] [i_0]) - 1081815179)) + 319839661)))) | 1)))));
                    var_14 = (((min(var_1, 10)) ^ ((min((arr_3 [i_0]), (arr_1 [i_0 - 1] [i_0]))))));
                }
            }
        }
    }
    var_15 |= var_0;
    #pragma endscop
}
