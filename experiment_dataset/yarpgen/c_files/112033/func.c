/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112033
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
    var_10 = ((/* implicit */_Bool) ((max((max((((/* implicit */long long int) var_4)), (1047928159272494615LL))), (((/* implicit */long long int) var_1)))) >> ((((+(((/* implicit */int) max((((/* implicit */unsigned char) var_5)), (var_0)))))) - (98)))));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_11 = ((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? ((-(arr_0 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)-27229), ((short)-27641))))));
        var_12 = (!((!(((/* implicit */_Bool) (signed char)0)))));
    }
    for (signed char i_1 = 0; i_1 < 23; i_1 += 2) 
    {
        arr_4 [i_1] [i_1] = ((/* implicit */signed char) max((((((/* implicit */long long int) ((/* implicit */int) max((var_4), (arr_2 [i_1]))))) | (((((/* implicit */_Bool) var_6)) ? (-8071717064386853423LL) : (((/* implicit */long long int) var_7)))))), (((/* implicit */long long int) min((((/* implicit */short) max(((_Bool)1), ((_Bool)0)))), ((short)27554))))));
        var_13 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_3 [i_1])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1]))))), (((((/* implicit */_Bool) arr_3 [i_1])) ? (1301730843U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1])))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_7 [i_2] = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)51))));
        var_14 = ((/* implicit */_Bool) (unsigned short)24745);
    }
    for (signed char i_3 = 0; i_3 < 12; i_3 += 1) 
    {
        arr_12 [i_3] = ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)1))));
        var_15 = ((/* implicit */signed char) var_7);
    }
}
