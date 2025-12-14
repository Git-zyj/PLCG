/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106898
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
    var_14 = (((~(((unsigned int) var_5)))) | (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)28853))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_2))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 3; i_0 < 11; i_0 += 3) 
    {
        var_15 = arr_0 [i_0];
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) != ((+(arr_1 [i_0]))))))) != (max((min((arr_1 [i_0 - 3]), (((/* implicit */unsigned int) arr_0 [i_0])))), (((/* implicit */unsigned int) arr_0 [i_0 - 1]))))));
        var_16 *= ((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) var_3)), (arr_0 [i_0 - 2]))))) + ((-(var_8))))) | (((/* implicit */long long int) max((((/* implicit */unsigned int) var_7)), ((~(arr_1 [(unsigned char)6]))))))));
    }
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) / (((((/* implicit */_Bool) (short)23034)) ? (2626010540U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)30)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) min((var_7), (((/* implicit */unsigned short) var_0))))))) : (var_10)));
    var_18 = ((/* implicit */unsigned short) ((short) var_9));
}
