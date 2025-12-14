/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187473
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
    var_17 &= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)52015)) ^ (((/* implicit */int) max(((_Bool)1), ((_Bool)1))))))), (((((/* implicit */_Bool) ((unsigned int) var_16))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1))))) : (var_1)))));
    var_18 = ((/* implicit */unsigned short) var_13);
    var_19 = ((long long int) min((((/* implicit */unsigned short) ((var_2) > (((/* implicit */long long int) ((/* implicit */int) var_14)))))), (var_8)));
    var_20 = ((-576460752303423488LL) / (562949953421311LL));
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [(signed char)8] [i_0 - 1])))))) : (var_6)))) ? (((((/* implicit */_Bool) max((arr_1 [i_0] [i_0]), (((/* implicit */unsigned long long int) var_1))))) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (max((var_15), (((/* implicit */long long int) (_Bool)1)))))) : (((/* implicit */long long int) ((/* implicit */int) max((max(((unsigned char)13), (((/* implicit */unsigned char) (_Bool)1)))), (((unsigned char) var_4))))))));
        arr_4 [i_0 + 1] = ((/* implicit */long long int) min(((((-(var_6))) | (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_2 [i_0 + 1])), ((unsigned short)28836))))))), (((/* implicit */unsigned int) var_0))));
    }
    for (unsigned short i_1 = 0; i_1 < 10; i_1 += 1) 
    {
        var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((unsigned short) (-(var_1)))))));
        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) min((var_15), (var_3)))) : (min((((/* implicit */unsigned long long int) arr_0 [i_1])), (arr_1 [i_1] [i_1])))));
        var_24 &= ((/* implicit */_Bool) -8822185143168181232LL);
    }
}
