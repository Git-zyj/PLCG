/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128456
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 7; i_0 += 3) 
    {
        var_11 = (~(((/* implicit */int) arr_1 [i_0])));
        /* LoopNest 2 */
        for (long long int i_1 = 2; i_1 < 10; i_1 += 2) 
        {
            for (signed char i_2 = 4; i_2 < 8; i_2 += 1) 
            {
                {
                    arr_6 [i_2] [i_0] [i_0] = arr_3 [i_0 + 1] [i_0] [i_0 + 1];
                    var_12 = ((/* implicit */long long int) arr_5 [i_0 - 1] [i_0]);
                    arr_7 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0]))));
                }
            } 
        } 
        var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) arr_1 [(unsigned short)2]))));
    }
    for (short i_3 = 0; i_3 < 25; i_3 += 2) 
    {
        var_14 = ((/* implicit */short) ((max((arr_10 [i_3]), (arr_10 [i_3]))) ? (((/* implicit */int) arr_10 [i_3])) : (((/* implicit */int) arr_9 [i_3]))));
        arr_11 [i_3] = ((/* implicit */long long int) var_5);
        arr_12 [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) arr_10 [i_3]))) ? (((((/* implicit */_Bool) var_10)) ? ((~(arr_8 [i_3] [(_Bool)1]))) : (arr_8 [i_3] [i_3]))) : (((/* implicit */int) (_Bool)1))));
    }
    /* LoopNest 2 */
    for (signed char i_4 = 0; i_4 < 14; i_4 += 1) 
    {
        for (short i_5 = 0; i_5 < 14; i_5 += 1) 
        {
            {
                var_15 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (arr_15 [2] [i_5] [i_4]) : (((/* implicit */unsigned int) var_8))))) ? (((((/* implicit */_Bool) arr_15 [10U] [10U] [10U])) ? (arr_14 [i_4] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_14 [i_5] [i_5]))))));
                arr_17 [i_4] [i_5] [i_5] = ((/* implicit */signed char) min((((/* implicit */int) var_4)), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) var_4);
}
