/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104411
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((var_8 ? var_1 : ((var_9 ? var_7 : var_2))))) ? (((((var_0 ? 0 : 4294967287))) ? (((23458 ? var_5 : var_3))) : ((-23490 ? var_4 : var_7)))) : ((((((var_4 ? 46264 : 23437))) ? var_1 : ((var_8 ? var_7 : 23437))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_12 [i_0] [i_0] [i_2] = ((((((arr_4 [i_0] [i_0]) ? (arr_4 [i_2] [i_0]) : 23490))) ? (((arr_1 [i_1] [i_2]) ? (arr_1 [i_2] [i_2]) : var_8)) : (((((var_2 ? (arr_9 [i_0] [i_2] [i_0]) : (arr_1 [i_0] [i_0])))) ? (arr_2 [i_1]) : (((arr_5 [i_0] [i_0] [i_0]) ? var_7 : (arr_9 [i_0] [i_2] [i_0])))))));
                    var_11 ^= (((((-23489 ? ((-23467 ? var_6 : (arr_6 [i_1] [i_1]))) : (((var_0 ? var_9 : 0)))))) ? ((var_4 ? -23441 : var_9)) : ((var_4 ? 23488 : (arr_10 [i_0] [i_1] [i_1] [i_1])))));

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        var_12 = (((((var_0 ? (arr_8 [i_2]) : var_1))) ? ((((arr_9 [i_3] [i_2] [i_3]) ? var_6 : var_8))) : (((((135 ? (arr_7 [i_0]) : 4294967295))) ? ((4 ? 4563884579403795201 : 2097136)) : (((var_5 ? (arr_1 [i_2] [i_2]) : var_9)))))));
                        var_13 = (((((1 ? (arr_2 [i_1]) : (arr_3 [i_0] [i_0])))) ? ((var_5 ? (arr_3 [i_0] [i_2]) : (arr_3 [i_0] [i_0]))) : ((4294967287 ? (arr_2 [i_1]) : var_6))));
                    }
                }
            }
        }
    }
    var_14 = ((var_5 ? ((var_7 ? ((var_8 ? var_4 : 18)) : (((23457 ? var_9 : var_7))))) : ((((((1242867782 ? var_6 : 19272))) ? ((2780467105750900285 ? var_9 : var_3)) : var_5)))));
    #pragma endscop
}
