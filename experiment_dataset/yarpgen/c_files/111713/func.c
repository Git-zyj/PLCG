/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111713
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
    var_13 = ((((((/* implicit */int) var_11)) - ((+(((/* implicit */int) var_4)))))) <= (((((var_7) == (((/* implicit */int) (unsigned char)14)))) ? (((((/* implicit */_Bool) 4158639560U)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_11)))) : (((/* implicit */int) ((unsigned char) var_5))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) (+(((var_3) ? (((long long int) 10ULL)) : (var_1))))))));
        var_15 &= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_7)), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) + (arr_0 [i_0])))) ? (((((/* implicit */unsigned long long int) var_7)) | (6903516805528924771ULL))) : (max((arr_0 [(_Bool)1]), (((/* implicit */unsigned long long int) (unsigned char)224))))))));
        arr_2 [i_0] |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((arr_1 [i_0 + 2]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-25599))))))));
    }
    var_16 = ((/* implicit */unsigned short) var_8);
}
