/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178964
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
    var_17 -= var_13;
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 3; i_0 < 17; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0 - 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 - 3]))) : (var_2)));
        var_18 -= ((/* implicit */unsigned char) ((-405781741) - (((/* implicit */int) (signed char)70))));
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        var_19 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_3 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2780))))));
        var_20 = ((/* implicit */_Bool) ((long long int) ((unsigned long long int) ((unsigned long long int) 13808812840089259974ULL))));
        arr_5 [i_1] = (~((~(((/* implicit */int) var_10)))));
    }
    var_21 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (((((/* implicit */int) (unsigned short)65535)) | (((/* implicit */int) (unsigned short)7)))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_9)))))) > (((/* implicit */int) var_15))));
    var_22 = ((/* implicit */unsigned int) var_10);
}
