/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153700
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
    var_12 = ((/* implicit */unsigned long long int) var_7);
    var_13 = ((/* implicit */int) ((((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_5)) : (1250605812762882906ULL))) - (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))) : (15542306052011682152ULL))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)31670)))));
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        var_14 -= ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-47))) != (arr_1 [i_0 - 1] [14ULL]));
        arr_2 [i_0] = ((/* implicit */signed char) max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_0 [i_0 - 2] [i_0])) : (((/* implicit */int) arr_0 [i_0 - 2] [(unsigned char)6])))), (max(((+(((/* implicit */int) (_Bool)0)))), (((/* implicit */int) (unsigned short)65533))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 19; i_1 += 4) 
    {
        var_15 -= ((/* implicit */unsigned short) arr_4 [i_1]);
        var_16 = ((/* implicit */int) min((var_16), ((~(((/* implicit */int) arr_3 [i_1] [i_1]))))));
    }
}
