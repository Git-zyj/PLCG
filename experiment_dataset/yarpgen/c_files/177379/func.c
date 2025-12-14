/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177379
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_18 = ((/* implicit */signed char) min((4924517854987825388LL), (min((4924517854987825388LL), (((/* implicit */long long int) arr_2 [i_0] [i_0]))))));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_4) : (((/* implicit */unsigned long long int) var_14))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (min((var_16), (((/* implicit */unsigned long long int) arr_1 [i_0])))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0])))));
        var_19 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_11)) : ((~(((/* implicit */int) (unsigned char)255)))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((0) >= (((/* implicit */int) ((signed char) var_2)))))), (((((/* implicit */_Bool) ((-1056215387) % (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) (unsigned short)16893)) : (((((/* implicit */_Bool) arr_1 [2ULL])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_1 [i_0]))))))));
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((unsigned int) arr_1 [i_0])), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)48643)) > (((/* implicit */int) arr_2 [i_0] [(unsigned short)20])))))))) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) (!(((-5) == (((/* implicit */int) arr_1 [i_0])))))))));
    }
    for (int i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) min((((1763813345) - (((/* implicit */int) (unsigned short)48643)))), (1058414946))))));
        var_22 = ((/* implicit */unsigned char) 5872949165770641180ULL);
    }
    var_23 = ((/* implicit */signed char) var_7);
}
