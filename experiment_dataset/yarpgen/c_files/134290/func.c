/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134290
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_10 += ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)50228)) | (max((((/* implicit */int) (short)30805)), (((((/* implicit */int) (short)30805)) | (((/* implicit */int) arr_2 [i_0] [i_0]))))))));
        var_11 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) | (min((arr_0 [i_0] [i_0]), (((/* implicit */unsigned int) (short)30798))))));
        var_12 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((var_7) << (((((((/* implicit */int) var_6)) + (19))) - (13))))), (((/* implicit */long long int) arr_2 [(unsigned short)3] [i_0])))))));
        var_13 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) (short)32767)))))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (min((-2056775737161577229LL), (((/* implicit */long long int) 1014611357U)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)41469)))))))));
        arr_3 [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((min((((/* implicit */long long int) var_8)), (arr_1 [(_Bool)1]))) <= (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_2 [i_0] [i_0])), (var_0))))))))));
    }
    var_14 |= ((/* implicit */unsigned short) ((unsigned long long int) var_0));
}
