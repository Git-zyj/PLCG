/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146929
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
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((arr_1 [i_0]) + (arr_1 [i_0]))) : ((+(arr_1 [i_0])))));
        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned char) var_9)), ((unsigned char)64)))))))));
        arr_2 [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) var_1)))))) + (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1023))) : (arr_1 [i_0]))))), (((/* implicit */unsigned long long int) max((((long long int) var_8)), (((/* implicit */long long int) 4072208004U)))))));
    }
    var_22 = ((/* implicit */signed char) (+(12011290575702639821ULL)));
    var_23 = ((/* implicit */unsigned long long int) ((_Bool) (_Bool)1));
    var_24 = ((/* implicit */long long int) var_18);
}
