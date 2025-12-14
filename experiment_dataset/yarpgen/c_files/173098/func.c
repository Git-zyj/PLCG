/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173098
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
    /* vectorizable */
    for (short i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        var_12 = ((/* implicit */short) (~(((/* implicit */int) var_4))));
        var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) (~(arr_1 [i_0 + 1]))))));
        var_14 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */unsigned long long int) var_9)) : (arr_0 [i_0])));
    }
    for (unsigned short i_1 = 0; i_1 < 17; i_1 += 2) 
    {
        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((unsigned short)14411), ((unsigned short)51118)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)51117)) - (((/* implicit */int) (!(((/* implicit */_Bool) 11516692499030887608ULL)))))))) : ((((_Bool)1) ? (((((/* implicit */_Bool) 6930051574678664002ULL)) ? (((/* implicit */unsigned long long int) var_3)) : (11516692499030887590ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)51125)))))));
        arr_6 [i_1] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_10)), (222544735639896513ULL)))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) 4294967274U)) < (11516692499030887613ULL)))) : (((((/* implicit */int) (unsigned short)49741)) + (arr_3 [i_1] [i_1])))))));
    }
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) var_2)) + (max((((/* implicit */unsigned long long int) (+((-2147483647 - 1))))), (((unsigned long long int) var_5))))));
}
