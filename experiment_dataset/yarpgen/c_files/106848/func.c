/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106848
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
    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((-8LL) & (((((/* implicit */_Bool) var_8)) ? (var_0) : ((-9223372036854775807LL - 1LL))))))) ? (1141505023) : (((/* implicit */int) var_7))));
    var_15 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 1395798176)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) 1395798176)))), (((/* implicit */long long int) max(((unsigned short)14865), ((unsigned short)5194))))))) : (var_1)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */short) min((9223372036854775807LL), (((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)32767)), (3489974511196951818LL)))) ? (((/* implicit */long long int) ((-1003024774) & (((/* implicit */int) (unsigned char)255))))) : (((-22LL) | (-9223372036854775807LL)))))));
                var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((-6999498609741788200LL) / (21LL)))) ? (((var_12) ? (((/* implicit */long long int) 16383)) : (arr_3 [i_1] [(unsigned short)11] [(unsigned short)11]))) : (((((/* implicit */_Bool) (unsigned short)62049)) ? (72057593903710208LL) : (((/* implicit */long long int) -1684919285))))))) ? (((/* implicit */long long int) 16391)) : (max((((((-21LL) + (9223372036854775807LL))) >> (((-2377661345276389468LL) + (2377661345276389501LL))))), (((/* implicit */long long int) ((((/* implicit */_Bool) 11796375657561381451ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (2639315738U))))))));
            }
        } 
    } 
}
