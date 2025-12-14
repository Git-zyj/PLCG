/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134174
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_17 = ((/* implicit */_Bool) ((arr_0 [i_0] [i_0]) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))));
        arr_3 [i_0] = ((/* implicit */unsigned int) ((arr_0 [9] [i_0]) ? (((/* implicit */int) arr_0 [8U] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))));
        var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -203365027277753652LL)) ? (203365027277753652LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)103)))))) || (((/* implicit */_Bool) (~(arr_1 [17])))));
    }
    for (int i_1 = 2; i_1 < 13; i_1 += 4) 
    {
        var_19 = ((/* implicit */int) (+(max((-5083007910076048225LL), (-6291313793292138962LL)))));
        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) max((arr_1 [i_1 - 1]), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_1 + 1] [i_1 + 1]))))))))));
    }
    for (int i_2 = 2; i_2 < 9; i_2 += 3) 
    {
        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) (+(((/* implicit */int) var_12)))))));
        arr_9 [6] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) (_Bool)0)) >= (((/* implicit */int) var_2))))) != (min((((/* implicit */int) (signed char)-103)), (1562542776)))));
        arr_10 [(unsigned char)2] &= ((/* implicit */int) ((1581637254U) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((short) arr_6 [(unsigned short)10])))))))));
    }
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_11))) >= (min((((/* implicit */long long int) (_Bool)1)), (max((3949259152228910016LL), (((/* implicit */long long int) (unsigned short)0))))))));
    var_23 = ((/* implicit */unsigned int) min((var_23), (max((((/* implicit */unsigned int) ((((/* implicit */int) min(((signed char)-17), ((signed char)90)))) * (((/* implicit */int) var_3))))), (0U)))));
}
