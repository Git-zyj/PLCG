/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157573
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
    var_12 = ((/* implicit */unsigned long long int) var_5);
    var_13 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((7766048529137241568LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_7)))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_4))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            {
                arr_4 [14LL] [14LL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_1))) ? (((/* implicit */long long int) arr_2 [i_1 - 1] [i_1 - 1] [i_1 + 1])) : (((var_10) ? (-7766048529137241568LL) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))))) ? (((arr_0 [i_1 + 1]) ^ (arr_0 [i_1 - 1]))) : (((/* implicit */int) max((arr_3 [i_1] [i_1] [i_1 + 2]), ((unsigned char)121))))));
                arr_5 [0] [14LL] = ((/* implicit */unsigned long long int) -1548359811);
                arr_6 [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned char)135)) ? (((/* implicit */int) (_Bool)1)) : (arr_2 [i_0] [i_0] [i_1 + 1]))) & (((((/* implicit */_Bool) arr_0 [i_1 + 1])) ? (((/* implicit */int) (unsigned char)111)) : (arr_0 [i_1 + 1])))));
            }
        } 
    } 
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8))))) : (7968915086971811840ULL)));
}
