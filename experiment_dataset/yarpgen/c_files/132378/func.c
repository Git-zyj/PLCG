/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132378
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
    var_15 |= var_4;
    var_16 = ((/* implicit */signed char) max((((unsigned long long int) (~(((/* implicit */int) var_5))))), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_10)) : (var_13))), (((/* implicit */int) min((var_5), (((/* implicit */unsigned char) var_12))))))))));
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) 799158832)) ? (7013815257094798768LL) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)-2)) : (505405046))))))));
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        arr_2 [(unsigned char)0] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (signed char)-26)) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) (signed char)-70)))), (((/* implicit */int) min((((/* implicit */unsigned char) arr_0 [i_0])), (((unsigned char) var_5)))))));
        arr_3 [(unsigned char)14] = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_12)), (var_6)))) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) min((var_1), (((/* implicit */unsigned char) arr_0 [i_0]))))))));
    }
}
