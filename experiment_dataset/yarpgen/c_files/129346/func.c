/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129346
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
    for (signed char i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        var_15 &= ((/* implicit */long long int) arr_0 [i_0 + 1]);
        var_16 &= ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_2 [i_0 + 1])) : (((/* implicit */int) arr_2 [i_0 - 1])));
    }
    for (unsigned short i_1 = 2; i_1 < 8; i_1 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_2 = 3; i_2 < 8; i_2 += 3) 
        {
            var_17 = ((/* implicit */unsigned short) (((_Bool)0) ? (arr_5 [i_2 + 3] [i_2 - 2]) : (arr_5 [i_2 - 2] [i_2 - 3])));
            var_18 = ((/* implicit */short) arr_5 [(unsigned short)7] [i_2]);
            var_19 = ((/* implicit */long long int) (+(((/* implicit */int) arr_3 [i_1 - 1]))));
        }
        for (signed char i_3 = 1; i_3 < 8; i_3 += 4) 
        {
            var_20 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (~(((/* implicit */int) arr_4 [i_1]))))), (8850727593096551928LL)));
            var_21 = ((/* implicit */_Bool) var_13);
        }
        var_22 = ((/* implicit */short) max((var_11), (((/* implicit */unsigned int) var_13))));
    }
    var_23 = ((/* implicit */unsigned char) (-(((long long int) var_12))));
    var_24 = ((/* implicit */long long int) min((((((/* implicit */_Bool) 1858368329)) ? (((var_6) - (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) : (((unsigned int) var_6)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(var_5)))) && (((/* implicit */_Bool) var_11)))))));
    var_25 = ((/* implicit */long long int) ((unsigned short) ((((782674066056235883LL) != (-8850727593096551929LL))) ? (min((-7536494088209283097LL), (782674066056235883LL))) : (min((((/* implicit */long long int) var_11)), (var_10))))));
}
