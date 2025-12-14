/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113526
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
    var_15 = ((/* implicit */int) var_8);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 4; i_0 < 12; i_0 += 2) 
    {
        var_16 = ((/* implicit */int) min((arr_1 [i_0 + 2]), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) var_8)) ? (var_9) : (1684066771U))) : (((/* implicit */unsigned int) 1373161243))))));
        var_17 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_7)) ? (-3154190751552450556LL) : (((/* implicit */long long int) ((/* implicit */int) var_1))))), (((/* implicit */long long int) ((((/* implicit */_Bool) 3439734089U)) ? (((/* implicit */unsigned int) arr_0 [i_0])) : (4294967295U))))))), ((+(3259048461415936344ULL)))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)133))))), (var_0)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_10))))) ? (max((((/* implicit */unsigned int) var_1)), (var_11))) : (((/* implicit */unsigned int) max((arr_0 [i_0]), (arr_0 [(unsigned short)8]))))))));
    }
}
