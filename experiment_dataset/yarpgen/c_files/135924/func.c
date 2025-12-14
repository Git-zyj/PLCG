/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135924
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
    var_16 = ((/* implicit */unsigned long long int) var_5);
    var_17 = ((/* implicit */long long int) var_4);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) (-(arr_1 [i_0])));
        arr_3 [i_0] = ((/* implicit */signed char) 1414480924U);
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) var_12)) : (var_5))), (((/* implicit */int) var_9))))) == (var_13)));
        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) (+((-(((((/* implicit */int) arr_0 [i_0])) - (((/* implicit */int) arr_0 [i_0])))))))))));
    }
    for (unsigned char i_1 = 1; i_1 < 9; i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned char) var_0);
        arr_8 [i_1] = ((/* implicit */long long int) max((min((max((var_5), (((/* implicit */int) var_9)))), ((((_Bool)0) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_7)))))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1])))))));
        arr_9 [i_1] [i_1] = ((/* implicit */unsigned int) max((((/* implicit */long long int) arr_0 [i_1 + 3])), (arr_6 [i_1 - 1])));
        var_19 = ((/* implicit */short) min(((~(arr_6 [i_1 + 1]))), (((((/* implicit */long long int) ((/* implicit */int) var_0))) ^ (arr_6 [i_1 + 3])))));
        arr_10 [i_1] = ((/* implicit */unsigned char) var_12);
    }
    for (unsigned char i_2 = 1; i_2 < 9; i_2 += 1) /* same iter space */
    {
        var_20 += ((/* implicit */short) ((((((((/* implicit */_Bool) ((var_5) / (((/* implicit */int) arr_0 [i_2]))))) ? (((/* implicit */int) (signed char)-126)) : (((/* implicit */int) (short)-888)))) + (2147483647))) >> (((((((_Bool) arr_12 [i_2] [i_2])) ? (min((arr_6 [i_2]), (((/* implicit */long long int) var_12)))) : (((/* implicit */long long int) ((/* implicit */int) (short)874))))) + (1273LL)))));
        var_21 = ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_10))) / (1414480941U))))) + (((/* implicit */unsigned int) (-(((/* implicit */int) min(((short)-875), (((/* implicit */short) var_9)))))))));
        arr_13 [i_2 - 1] [i_2] |= ((/* implicit */unsigned short) 2741238743792945092LL);
        var_22 = ((/* implicit */unsigned char) ((max((arr_1 [i_2 + 2]), (arr_1 [i_2 + 2]))) >= (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_2])) << (((arr_1 [i_2 + 1]) - (3759397945342439124LL))))))));
    }
    var_23 = ((/* implicit */signed char) var_0);
    /* LoopNest 2 */
    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 1) 
    {
        for (long long int i_4 = 3; i_4 < 15; i_4 += 4) 
        {
            {
                var_24 = ((/* implicit */int) (+(((((/* implicit */_Bool) arr_16 [i_3])) ? (((/* implicit */long long int) (~(2880486355U)))) : (-4323973485918519872LL)))));
                var_25 = ((/* implicit */unsigned short) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_4 + 1]))))), ((-(((/* implicit */int) (short)-888))))));
            }
        } 
    } 
}
