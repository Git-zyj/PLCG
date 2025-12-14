/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175388
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) min((arr_0 [i_0] [i_1]), (arr_0 [i_0] [i_1])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)24061))) : (var_14)))))) ? (arr_1 [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)(-32767 - 1))) || (arr_3 [(signed char)11] [i_0] [(short)6])))))));
                var_17 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((unsigned long long int) var_0)) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)1030)) : (((/* implicit */int) var_4)))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((((/* implicit */_Bool) (short)24061)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_16))))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)0)), (arr_2 [i_0])))))))));
                var_18 ^= max((max((((var_8) << (((arr_1 [i_1] [i_0]) - (6034123980193619138ULL))))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)28601))) : (var_8))))), (((/* implicit */unsigned long long int) (signed char)127)));
                var_19 = ((/* implicit */unsigned short) ((short) var_0));
            }
        } 
    } 
    var_20 = ((/* implicit */short) ((((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) min((var_12), (var_12)))) : (((/* implicit */int) var_12)))) << ((((~(((/* implicit */int) var_16)))) + (8973)))));
}
