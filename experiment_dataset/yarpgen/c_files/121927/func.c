/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121927
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
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_17 &= ((/* implicit */short) ((((((/* implicit */_Bool) arr_3 [i_0 - 1])) && (((/* implicit */_Bool) arr_0 [i_0 + 2] [i_0 + 2])))) ? (((((/* implicit */int) var_12)) * (((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1])))) : ((-(((/* implicit */int) arr_3 [i_0 + 1]))))));
                arr_5 [i_1] = ((((/* implicit */_Bool) ((((_Bool) var_0)) ? (((((/* implicit */_Bool) var_14)) ? (arr_2 [i_0] [i_1]) : (arr_2 [i_0] [18ULL]))) : (((/* implicit */int) max((((/* implicit */unsigned short) var_0)), (arr_0 [i_0] [i_1]))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((4803225276930171370LL) > (-4803225276930171370LL))))) : ((~(var_15)))))) : (max((var_6), (((/* implicit */long long int) var_15)))));
                arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0] [i_1])) << (((((arr_2 [i_0 + 2] [i_0]) + (1961323419))) - (20))))))))) >> (((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)56)) ? (-4803225276930171371LL) : (-4803225276930171390LL)))) % ((-(var_1))))) - (13643518796779380217ULL)))));
                var_18 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) 4803225276930171374LL)) : (6109985264661552437ULL)))) ? (((unsigned int) var_16)) : (((/* implicit */unsigned int) ((/* implicit */int) var_16)))));
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) * (((((/* implicit */_Bool) ((((/* implicit */long long int) var_11)) / (var_6)))) ? (var_1) : (((/* implicit */unsigned long long int) ((var_4) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_13))))))))))));
}
