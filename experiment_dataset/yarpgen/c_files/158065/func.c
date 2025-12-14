/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158065
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
    var_19 += ((/* implicit */unsigned long long int) var_1);
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (signed char)2)) : (((/* implicit */int) (unsigned short)34577))))))) : (((((/* implicit */_Bool) min((((/* implicit */signed char) arr_1 [i_0])), ((signed char)112)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) != (var_11))))) : (var_11)))));
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) min((-677354953), (677354932)))) == (((arr_1 [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (503419364U)))));
    }
    for (unsigned short i_1 = 2; i_1 < 17; i_1 += 4) 
    {
        arr_7 [i_1] = ((/* implicit */_Bool) min((((/* implicit */unsigned char) (_Bool)1)), (((unsigned char) arr_6 [i_1 - 2]))));
        arr_8 [i_1 - 1] = ((/* implicit */int) (short)13834);
        arr_9 [i_1] = ((/* implicit */unsigned long long int) ((((unsigned long long int) 3791547931U)) <= (((/* implicit */unsigned long long int) ((/* implicit */int) min(((signed char)119), ((signed char)-1)))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_13 [i_2] = ((/* implicit */signed char) ((unsigned short) arr_11 [i_2]));
        var_22 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)40130)) ? (((/* implicit */int) (signed char)-75)) : (((/* implicit */int) (unsigned char)0)))) ^ ((+(((/* implicit */int) (_Bool)0))))))) | (((((arr_10 [10ULL]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [(short)2]))) : (var_4))) | (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) arr_11 [i_2])) : (((/* implicit */int) arr_10 [18LL])))))))));
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((~(((/* implicit */int) (signed char)-50)))), (((/* implicit */int) ((arr_10 [i_2]) && (((/* implicit */_Bool) var_6)))))))) ? ((+(((unsigned int) (_Bool)1)))) : (((((/* implicit */unsigned int) ((/* implicit */int) max((arr_12 [i_2]), ((signed char)32))))) * ((+(503419364U)))))));
    }
}
