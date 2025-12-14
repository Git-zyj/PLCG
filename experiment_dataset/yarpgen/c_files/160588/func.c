/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160588
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
    var_20 &= ((/* implicit */long long int) var_19);
    var_21 += ((/* implicit */long long int) var_16);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 3; i_0 < 24; i_0 += 4) 
    {
        arr_2 [(signed char)14] [(signed char)14] &= ((/* implicit */long long int) ((max((arr_1 [20U]), (arr_1 [(unsigned char)22]))) && (((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_1 [(short)6])), (0U))))));
        var_22 &= ((/* implicit */long long int) (-((-(((((/* implicit */_Bool) 3261250774370241104LL)) ? (((/* implicit */int) (unsigned char)113)) : (((/* implicit */int) var_14))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_23 = ((/* implicit */long long int) ((((/* implicit */unsigned int) (+(arr_4 [i_1])))) + (((((/* implicit */_Bool) arr_4 [i_1])) ? (3773124143U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))));
        var_24 = ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_0 [14LL]) + (((/* implicit */long long int) ((/* implicit */int) (signed char)2))))))));
        arr_5 [i_1] = ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (!((!(((/* implicit */_Bool) var_11))))))));
    }
    for (unsigned int i_2 = 1; i_2 < 13; i_2 += 2) 
    {
        var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) 3773124148U)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1))))))))));
        var_26 &= ((/* implicit */long long int) (~(max((((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (signed char)(-127 - 1))))), (((/* implicit */int) ((unsigned short) -2889342475681487240LL)))))));
    }
}
