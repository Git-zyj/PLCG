/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174689
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
    var_14 = ((/* implicit */_Bool) 4294967295U);
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 ^= ((/* implicit */int) min((((/* implicit */unsigned long long int) var_13)), (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 3710915900U))))), (min((((/* implicit */unsigned long long int) arr_2 [(_Bool)0])), (13556002855283195497ULL)))))));
        var_16 = ((/* implicit */unsigned int) (+(13556002855283195481ULL)));
        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 13556002855283195479ULL)) ? (arr_0 [i_0] [i_0]) : (4048772614U)))))))));
        var_18 = ((/* implicit */int) (!(min((((((/* implicit */unsigned long long int) arr_1 [3])) > (13556002855283195497ULL))), ((_Bool)1)))));
    }
    for (short i_1 = 2; i_1 < 13; i_1 += 2) 
    {
        arr_5 [i_1 + 1] = min((13556002855283195471ULL), (((((/* implicit */_Bool) (+(var_11)))) ? (((((/* implicit */_Bool) arr_3 [i_1])) ? (4890741218426356093ULL) : (((/* implicit */unsigned long long int) arr_3 [i_1])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (var_11) : (0)))))));
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -4)) ? (((/* implicit */unsigned long long int) max((405765700U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 255)) ? (arr_3 [0ULL]) : (arr_3 [i_1]))))))) : (min((max((((/* implicit */unsigned long long int) -1576224810)), (var_10))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_7)))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 2; i_2 < 15; i_2 += 3) 
    {
        var_20 += ((/* implicit */unsigned long long int) ((15307623004424025920ULL) <= (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_6 [i_2 + 2])))))));
        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_8 [i_2]))))) < (405765687U))))));
    }
    for (short i_3 = 0; i_3 < 24; i_3 += 2) 
    {
        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 4890741218426356090ULL)))))));
        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((4890741218426356126ULL) >= (((/* implicit */unsigned long long int) var_8))))), (((unsigned int) arr_9 [i_3] [i_3])))))));
    }
    var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) var_11))));
}
