/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110938
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
    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_6))))), (1150239688U)))) & (var_4))))));
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        arr_4 [i_0] = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_1 [i_0])), (arr_0 [i_0 + 1] [i_0 - 1])))) || (((/* implicit */_Bool) ((((/* implicit */unsigned int) var_5)) & ((-(arr_1 [i_0])))))));
        var_17 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) % (max((((/* implicit */unsigned int) arr_3 [i_0])), (((((/* implicit */_Bool) var_7)) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) -2147483647))))))));
        var_18 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1))));
        var_19 = ((/* implicit */unsigned char) max((((/* implicit */long long int) (-(((/* implicit */int) arr_3 [i_0 + 1]))))), (max(((+(-4393094906031728200LL))), (((/* implicit */long long int) ((arr_1 [i_0]) + (arr_1 [i_0]))))))));
    }
}
