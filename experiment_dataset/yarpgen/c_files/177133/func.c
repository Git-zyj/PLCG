/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177133
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)127))));
        var_12 = ((/* implicit */long long int) (signed char)-123);
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_1 = 3; i_1 < 14; i_1 += 1) 
    {
        var_13 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) / (max((((/* implicit */long long int) (signed char)-111)), (arr_1 [i_1] [i_1])))))), (min((((/* implicit */unsigned long long int) var_8)), (arr_4 [i_1 + 2])))));
        var_14 = (((_Bool)0) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))));
    }
    var_15 = ((/* implicit */unsigned int) (unsigned short)53577);
    var_16 += ((((/* implicit */long long int) ((/* implicit */int) var_10))) / (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)55766)) % (((/* implicit */int) (signed char)125))))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : ((+(-6794252638658181788LL))))));
}
