/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133046
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
    var_15 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_13))));
    var_16 = ((/* implicit */signed char) min((((/* implicit */int) var_6)), ((-(((((((/* implicit */int) var_0)) + (2147483647))) >> (((/* implicit */int) (_Bool)1))))))));
    /* LoopSeq 2 */
    for (int i_0 = 3; i_0 < 13; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) arr_1 [i_0]);
        var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [i_0]))));
    }
    for (unsigned int i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_4 [i_1] [i_1]), (arr_1 [(_Bool)1]))))) : (min((((/* implicit */long long int) arr_1 [i_1])), (arr_0 [i_1]))))), (((/* implicit */long long int) max((arr_1 [i_1]), (arr_1 [i_1]))))));
        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) arr_1 [i_1]))));
        arr_6 [(unsigned short)3] = ((/* implicit */unsigned char) ((((/* implicit */int) max((var_13), (((/* implicit */signed char) max((var_9), (arr_3 [i_1]))))))) >> (((/* implicit */int) ((signed char) arr_3 [i_1])))));
    }
    var_19 = ((/* implicit */unsigned char) var_10);
}
