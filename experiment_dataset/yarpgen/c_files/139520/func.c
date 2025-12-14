/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139520
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
    var_13 = ((/* implicit */unsigned short) (-(var_12)));
    var_14 = var_8;
    var_15 = ((/* implicit */int) ((unsigned long long int) var_12));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_16 = ((/* implicit */short) ((((max((((/* implicit */unsigned long long int) arr_2 [(_Bool)1])), (arr_1 [(_Bool)1]))) / (((/* implicit */unsigned long long int) (~(var_9)))))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_1 [9LL]) - (((/* implicit */unsigned long long int) var_9))))) ? (((((/* implicit */_Bool) arr_0 [(_Bool)1] [i_0])) ? (arr_2 [i_0]) : (arr_2 [16]))) : (((/* implicit */unsigned int) (~(arr_3 [i_0])))))))));
        arr_4 [15LL] [(unsigned char)21] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)1)) * (((/* implicit */int) var_7))))) > (((((/* implicit */unsigned int) ((/* implicit */int) var_7))) - (var_8))))))));
    }
}
