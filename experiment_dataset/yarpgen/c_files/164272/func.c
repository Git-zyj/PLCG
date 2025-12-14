/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164272
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
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_0 [(unsigned char)15])) ? ((~(var_8))) : (((((/* implicit */_Bool) 12462867124564500577ULL)) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) arr_1 [i_0]);
        var_14 += ((((/* implicit */_Bool) (+(arr_0 [i_0 + 1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (var_4));
        var_15 = (-(17903976795663816867ULL));
        var_16 = ((/* implicit */unsigned long long int) min((var_16), ((~(((((/* implicit */unsigned long long int) var_4)) & (5983876949145051038ULL)))))));
    }
    for (unsigned int i_1 = 2; i_1 < 19; i_1 += 3) 
    {
        var_17 = arr_1 [i_1];
        arr_8 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((unsigned char)7), ((unsigned char)255)))) ? ((~(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)248))) % (arr_7 [(unsigned char)8]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)245)))));
    }
    var_18 = ((/* implicit */unsigned char) 17903976795663816867ULL);
}
