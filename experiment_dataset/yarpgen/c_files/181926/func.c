/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181926
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
    for (signed char i_0 = 4; i_0 < 12; i_0 += 1) 
    {
        var_17 = ((/* implicit */_Bool) arr_0 [i_0]);
        arr_3 [i_0] = ((/* implicit */short) var_0);
    }
    for (unsigned short i_1 = 3; i_1 < 10; i_1 += 1) 
    {
        var_18 = ((/* implicit */unsigned long long int) var_5);
        arr_7 [i_1] [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [8ULL]))) | (arr_6 [i_1] [i_1]))) != (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)65362))))))))));
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned short) var_3);
        arr_9 [i_1] = ((/* implicit */unsigned short) (_Bool)1);
    }
    for (unsigned int i_2 = 0; i_2 < 14; i_2 += 3) 
    {
        var_19 = ((6777641223870406577ULL) >> (((11669102849839145045ULL) - (11669102849839144986ULL))));
        arr_12 [i_2] = ((/* implicit */unsigned int) min((((/* implicit */int) max((var_7), (((/* implicit */unsigned short) arr_0 [(unsigned char)12]))))), (((((/* implicit */int) arr_1 [(unsigned short)10])) / (((/* implicit */int) var_15))))));
        var_20 = ((/* implicit */signed char) var_1);
    }
    var_21 = ((/* implicit */signed char) min((var_6), (((/* implicit */short) (!(((/* implicit */_Bool) var_14)))))));
    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) <= (((/* implicit */int) var_7))));
}
