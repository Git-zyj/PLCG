/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130240
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
    var_18 *= ((/* implicit */unsigned short) var_15);
    var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_13) : (((/* implicit */int) min((var_2), (var_8))))))) ? (((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) var_12)) ? (var_11) : (((/* implicit */int) var_7)))) : (((/* implicit */int) var_7)))) : (((/* implicit */int) var_2)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((63488), (((/* implicit */int) (unsigned short)62683))))) ? (((/* implicit */long long int) (+(-1180865448)))) : (((((/* implicit */_Bool) 1180865448)) ? (-7622989231330935641LL) : (((/* implicit */long long int) ((/* implicit */int) (short)20736)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1180865437)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-14736))) : (9223372036854775807LL)))) ? (arr_2 [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))) : ((~((~(var_12)))))));
                arr_7 [i_0] [i_1] = (~((((!(((/* implicit */_Bool) -370772789)))) ? (((((/* implicit */_Bool) var_7)) ? (arr_6 [i_0] [i_1]) : (((/* implicit */long long int) var_11)))) : (((/* implicit */long long int) (-(var_5)))))));
            }
        } 
    } 
    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) var_11)) ? (var_0) : (((/* implicit */unsigned long long int) var_4))));
    var_22 ^= ((/* implicit */int) ((unsigned long long int) var_9));
}
