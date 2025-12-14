/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183008
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
    for (long long int i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) min((arr_1 [i_0 + 1]), (arr_1 [i_0 + 1]))))));
        var_15 = ((/* implicit */short) ((unsigned short) min((var_1), (min((arr_2 [i_0]), (((/* implicit */int) arr_1 [(unsigned char)11])))))));
    }
    for (unsigned int i_1 = 0; i_1 < 13; i_1 += 1) 
    {
        var_16 = ((/* implicit */int) max((((((((/* implicit */_Bool) arr_2 [14])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_3 [2ULL]))) % (((/* implicit */unsigned int) 1378657102)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((1378657102), (arr_2 [i_1])))) ? (((/* implicit */int) ((_Bool) (_Bool)1))) : ((-(((/* implicit */int) (short)32767)))))))));
        var_17 = ((/* implicit */signed char) (+(max(((+(arr_3 [i_1]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [2])) ? (((/* implicit */int) var_7)) : (var_11))))))));
    }
    for (unsigned short i_2 = 1; i_2 < 21; i_2 += 4) 
    {
        var_18 = ((((/* implicit */_Bool) ((unsigned char) var_3))) ? ((~(((/* implicit */int) ((arr_5 [5]) && (arr_5 [i_2 - 1])))))) : ((+(((/* implicit */int) ((((/* implicit */_Bool) -1378657122)) && (arr_5 [i_2])))))));
        var_19 = max((((/* implicit */int) arr_5 [i_2 - 1])), ((+(((/* implicit */int) arr_5 [i_2 - 1])))));
    }
    var_20 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_3)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_13)));
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)25)) ? (min(((~(var_9))), (((/* implicit */int) ((((/* implicit */_Bool) 2307757005U)) && (((/* implicit */_Bool) var_10))))))) : (((/* implicit */int) max((((short) var_4)), (((/* implicit */short) var_7)))))));
    var_22 = ((/* implicit */unsigned char) var_5);
}
