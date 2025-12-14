/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173099
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
    var_17 ^= ((/* implicit */signed char) max((min((((((/* implicit */_Bool) var_9)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))))), (((/* implicit */unsigned int) -65994212)))), (max((max((var_2), (((/* implicit */unsigned int) var_11)))), (((/* implicit */unsigned int) ((((/* implicit */int) var_10)) * (((/* implicit */int) (unsigned char)0)))))))));
    var_18 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (783296815033276588LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)245)))), (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) max((var_4), (((/* implicit */signed char) (_Bool)1))))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */long long int) ((unsigned int) arr_3 [i_0 + 1]))) % ((((~(var_8))) % (((/* implicit */long long int) max((var_2), (((/* implicit */unsigned int) (unsigned char)255))))))))))));
        arr_4 [i_0 + 1] [i_0] |= (~(((((/* implicit */int) ((((/* implicit */int) (short)24352)) < (((/* implicit */int) (unsigned char)255))))) | (((/* implicit */int) (unsigned char)245)))));
        var_20 = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_11))))), (var_8)));
    }
    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 6996582984828766842LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-18893))) : (4294967295U)));
}
