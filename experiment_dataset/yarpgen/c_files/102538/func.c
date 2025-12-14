/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102538
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
    var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) var_5))));
    var_14 |= ((/* implicit */unsigned int) 732958103);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) ((_Bool) max((arr_2 [i_0]), (arr_2 [i_0]))));
        var_15 |= ((/* implicit */unsigned short) 4869044434806115108ULL);
    }
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_12)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-64))))), (((/* implicit */unsigned long long int) (short)-1))))) && ((!((!(((/* implicit */_Bool) (unsigned short)0))))))));
}
