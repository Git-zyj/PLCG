/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18358
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    var_13 = (max(var_13, ((-((-(7547782872162753358 - -27237)))))));
                    var_14 |= (((((((((arr_0 [i_1] [0]) ? 1 : 10898961201546798273))) ? (arr_5 [i_2 + 1] [6]) : 252))) ? (min(((3 ? var_9 : (arr_2 [i_0] [i_0]))), ((max(247, -22536))))) : (((((((arr_0 [i_0] [i_2 - 1]) ^ 54)) + 2147483647)) << (((max(576460751229681664, -8)) - 18446744073709551608))))));
                    var_15 = 3;
                }
            }
        }
    }
    var_16 -= ((var_2 ? var_2 : ((3 ? (((-127 - 1) ? var_6 : 7)) : (var_5 || 697361682)))));
    var_17 = (max(((((((var_7 ? 27 : var_8))) ? (var_9 || 248) : ((2623 ? var_10 : 2147483647))))), ((var_1 ? 10898961201546798257 : (var_5 - 252)))));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            {
                arr_11 [i_3] [13] [i_3] = (arr_7 [i_4]);
                var_18 = (((((arr_9 [i_4]) ? (arr_9 [i_4]) : (arr_9 [i_3]))) ^ ((var_5 ? (arr_9 [i_4]) : (arr_9 [i_3])))));
                arr_12 [i_4] = (((arr_10 [i_3] [i_3]) || ((max((arr_7 [i_3]), -54)))));
            }
        }
    }
    #pragma endscop
}
