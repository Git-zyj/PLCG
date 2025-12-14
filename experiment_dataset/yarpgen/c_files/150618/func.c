/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150618
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
    var_14 = ((/* implicit */int) var_12);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) max((((((/* implicit */int) var_11)) + (((262143) - (-262144))))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))));
        var_15 = ((/* implicit */int) min((((unsigned int) min((arr_2 [i_0] [i_0]), (arr_0 [i_0])))), (((/* implicit */unsigned int) min((((/* implicit */int) arr_0 [i_0])), ((-(((/* implicit */int) (short)6825)))))))));
    }
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (max((max((((/* implicit */long long int) var_2)), (var_9))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)90)) | (((/* implicit */int) (_Bool)0))))))) : (((((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) var_2)) : (var_12))) | (((/* implicit */long long int) (~(var_2))))))));
    var_17 = ((/* implicit */short) min((((((((/* implicit */unsigned long long int) var_12)) | (var_13))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-62))))), (((/* implicit */unsigned long long int) -262155))));
}
