/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169218
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
    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-((~(((/* implicit */int) var_0))))))) ? (((/* implicit */int) ((((_Bool) (signed char)-1)) && (((/* implicit */_Bool) ((int) -6594261765551158100LL)))))) : ((+(((((/* implicit */_Bool) -6594261765551158098LL)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_12))))))));
    var_14 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)256))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] &= ((/* implicit */long long int) (signed char)28);
        var_15 *= ((/* implicit */_Bool) 2021478590U);
        var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) var_5))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 15; i_1 += 2) 
    {
        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_4 [i_1])))) ? (((((/* implicit */_Bool) -6594261765551158085LL)) ? (-5783488589956684498LL) : (-8723934218108214722LL))) : (((/* implicit */long long int) 1100550216))));
        arr_5 [i_1] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_1]))) : (arr_4 [i_1])));
        arr_6 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (arr_4 [i_1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (-6594261765551158100LL) : (((/* implicit */long long int) var_3)))))));
        var_18 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) -6594261765551158093LL)) ? (3155544258U) : (1496016379U)))));
    }
    for (long long int i_2 = 0; i_2 < 13; i_2 += 4) 
    {
        var_19 *= ((/* implicit */unsigned short) arr_7 [(signed char)3]);
        var_20 = ((/* implicit */unsigned int) var_10);
    }
}
