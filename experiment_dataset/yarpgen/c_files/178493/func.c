/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178493
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 3; i_0 < 19; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)42312))) <= (arr_0 [i_0 - 2] [i_0 - 1])));
        arr_3 [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_3))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_20 = ((/* implicit */unsigned short) arr_4 [(unsigned short)14]);
        arr_6 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) 16299317430458951693ULL)) ? (248ULL) : (248ULL)));
    }
    var_21 = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)91)) <= (((/* implicit */int) (unsigned short)91))))), (((((/* implicit */_Bool) var_14)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)97))))))) - (((/* implicit */unsigned int) ((/* implicit */int) var_18)))));
    var_22 = ((/* implicit */signed char) var_3);
    var_23 = ((/* implicit */unsigned short) var_18);
}
