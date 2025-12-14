/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147306
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= ((-((var_0 ? ((var_6 ? 51996 : 4294967294)) : ((var_5 ? var_7 : var_7))))));
    var_12 ^= ((var_1 || (((var_9 ? var_10 : (!24350))))));
    var_13 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_14 = var_2;
                var_15 = ((((((((-(arr_6 [15])))) ? (var_9 / var_7) : var_2))) != ((16623777576079316810 << (267862546 - 267862494)))));
                var_16 = (max((arr_6 [i_1]), ((((((arr_4 [i_0] [i_1] [i_0]) ? 8440 : 1))) ? (var_2 ^ 159) : var_8))));
                var_17 &= ((((((223 == (arr_2 [i_1]))) || (((var_10 - (arr_0 [i_1])))))) ? var_3 : (0 || 6501923015776906864)));
                var_18 = ((((!((min((arr_3 [i_1]), var_8))))) ? var_9 : ((((!((min(9223372036854775807, 18446744073709551599)))))))));
            }
        }
    }
    #pragma endscop
}
