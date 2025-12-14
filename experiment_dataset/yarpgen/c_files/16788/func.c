/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16788
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
    var_20 = ((/* implicit */unsigned char) ((((var_7) + (2147483647))) << (((var_17) - (3642567257136399422LL)))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_21 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)42398))))) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (_Bool)1))));
        arr_3 [19U] [i_0] = ((/* implicit */unsigned char) min(((_Bool)0), ((((~(arr_2 [i_0]))) >= (((/* implicit */long long int) ((((/* implicit */int) var_0)) % (((/* implicit */int) (signed char)-13)))))))));
    }
    for (int i_1 = 1; i_1 < 17; i_1 += 4) 
    {
        var_22 = ((/* implicit */unsigned char) min((((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [(signed char)13])) | (((/* implicit */int) (signed char)-45))))) + (var_16))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_2 [i_1]), (((/* implicit */long long int) (unsigned short)25351))))) ? (max((((/* implicit */long long int) var_8)), (var_17))) : (arr_2 [i_1 + 1]))))));
        var_23 = ((/* implicit */int) ((((/* implicit */_Bool) (~(arr_2 [i_1])))) ? (max((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)32))) / (var_16))), (arr_6 [i_1]))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_1 + 1])))))));
        var_24 = ((/* implicit */int) max((((/* implicit */long long int) ((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) && (((/* implicit */_Bool) arr_6 [i_1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : (((/* implicit */int) var_10))))), (((arr_2 [i_1 - 1]) & (min((var_4), (((/* implicit */long long int) 1305497840U))))))));
    }
}
