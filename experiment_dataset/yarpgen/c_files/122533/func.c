/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122533
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
    var_12 = ((/* implicit */_Bool) min((((((-657112281159611619LL) >= (((/* implicit */long long int) var_3)))) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))), (((((/* implicit */_Bool) (unsigned short)65535)) ? (max((var_3), (((/* implicit */unsigned int) (unsigned short)13446)))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        arr_3 [(_Bool)1] [i_0] = ((/* implicit */short) var_6);
        arr_4 [(signed char)20] [(signed char)20] &= ((/* implicit */unsigned short) -6437576070178357305LL);
    }
}
