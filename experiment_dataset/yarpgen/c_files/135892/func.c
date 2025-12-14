/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135892
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
    var_16 = ((/* implicit */signed char) max((((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) - ((~(var_15))))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_12)) - (((/* implicit */int) var_3))))) - (((unsigned int) var_2)))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */int) var_5)) - (((((/* implicit */int) arr_2 [6] [i_0])) - (((/* implicit */int) arr_1 [i_0]))))))) - (var_13))))));
        var_18 = ((/* implicit */unsigned int) max((var_18), (((min((arr_3 [i_0 - 1]), (arr_3 [i_0 + 1]))) - (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) -1851118977)) ? (arr_0 [i_0]) : (((/* implicit */int) arr_1 [i_0])))))))))));
    }
    for (long long int i_1 = 3; i_1 < 11; i_1 += 1) 
    {
        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((long long int) ((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) var_1))))) & (var_9)))))));
        var_20 -= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (var_0)))) ? (((((/* implicit */int) var_1)) - (var_7))) : (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1))))))));
    }
    for (unsigned int i_2 = 0; i_2 < 19; i_2 += 2) 
    {
        arr_8 [i_2] &= ((/* implicit */long long int) ((((((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_3))))) - (((/* implicit */int) var_1)))) - (((arr_6 [i_2]) - (((/* implicit */int) arr_1 [i_2]))))));
        arr_9 [i_2] |= ((/* implicit */unsigned char) ((_Bool) ((((((/* implicit */int) var_3)) - (((/* implicit */int) (_Bool)1)))) - (var_0))));
        arr_10 [i_2] = ((/* implicit */unsigned int) ((((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_2 [i_2] [i_2])))) - (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_2] [i_2]))))) : (((/* implicit */int) var_11))))));
    }
    var_21 = ((/* implicit */int) ((unsigned short) var_2));
}
