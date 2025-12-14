/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141767
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
    for (unsigned short i_0 = 3; i_0 < 18; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                arr_6 [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))), (4305532442960668302LL)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_5 [i_0] [i_0] [i_1]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (2028261626U)))) ? (((((/* implicit */_Bool) var_15)) ? (4305532442960668291LL) : (((/* implicit */long long int) arr_3 [i_0] [(unsigned short)20])))) : (((/* implicit */long long int) ((/* implicit */int) ((short) var_4)))))))));
                var_19 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) >= (var_9))) ? (((((/* implicit */_Bool) 127U)) ? (arr_3 [i_0] [(unsigned char)5]) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((((/* implicit */long long int) ((/* implicit */int) var_0))) / (var_18))))))));
                arr_7 [i_0] [12U] &= ((/* implicit */unsigned int) var_15);
                var_20 ^= min((((/* implicit */long long int) min((arr_5 [i_0 + 1] [i_0 - 2] [i_0]), (arr_5 [i_0 + 1] [i_0 + 3] [(unsigned char)3])))), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_7)), (arr_2 [i_0] [i_0])))) ? (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))) : (((long long int) (unsigned short)10983)))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4))));
    var_22 = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((unsigned short) var_17))), (((2266705680U) | (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_6))))))));
}
