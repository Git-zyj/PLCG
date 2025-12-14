/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169185
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
    var_16 = ((/* implicit */long long int) var_1);
    var_17 = (!(((/* implicit */_Bool) var_2)));
    var_18 = ((((/* implicit */_Bool) min((((unsigned short) var_0)), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) 576460752303357952ULL)))))))) || (((/* implicit */_Bool) (unsigned short)54556)));
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned char) ((int) (-(((/* implicit */int) var_15)))));
        var_19 = (+(((int) ((4294967278U) >= (((/* implicit */unsigned int) -1569360895))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 3) 
    {
        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) var_8))));
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned short) max(((-(((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_5 [i_1]))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */long long int) var_9)) : (var_6)))))))));
    }
    var_21 &= ((/* implicit */long long int) (~(((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) var_9))))))));
}
