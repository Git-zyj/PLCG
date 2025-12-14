/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147295
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
    var_18 = ((/* implicit */unsigned int) min((((((/* implicit */unsigned long long int) -1LL)) + (7759271575549920328ULL))), (min((((/* implicit */unsigned long long int) var_9)), ((~(7759271575549920328ULL)))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        arr_2 [i_0] [10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) min((var_6), (((/* implicit */long long int) var_12))))) || (((/* implicit */_Bool) 342216123U)))))) : (min((((/* implicit */unsigned int) var_16)), (max((3594831458U), (((/* implicit */unsigned int) (unsigned short)52768))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) var_11);
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned int) min((((/* implicit */unsigned long long int) (+(var_6)))), (7759271575549920310ULL))));
        arr_5 [(unsigned char)12] = ((/* implicit */signed char) ((unsigned int) min((var_2), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_4))) < (var_6)))))));
    }
}
