/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11157
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
    var_15 = ((/* implicit */signed char) (~(var_0)));
    var_16 = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) + (var_1)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) - (((/* implicit */int) (short)-8642))))) : (var_0))), ((-(var_2)))));
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? ((-2147483647 - 1)) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)11)) / (((/* implicit */int) (short)17818))))) || (((/* implicit */_Bool) var_6)))))));
    var_18 = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) (short)-28083)) / (((/* implicit */int) (short)32763))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_19 *= ((/* implicit */short) (!(((/* implicit */_Bool) 7997050609958422698LL))));
        var_20 = ((/* implicit */unsigned short) (+(((/* implicit */int) (short)-8648))));
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) (~(2147483647)));
    }
    for (short i_1 = 0; i_1 < 18; i_1 += 2) 
    {
        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((((/* implicit */_Bool) var_6)) ? (-1) : (((/* implicit */int) arr_4 [i_1] [i_1])))) * (((((/* implicit */_Bool) (short)511)) ? (((/* implicit */int) (unsigned char)132)) : (((/* implicit */int) (short)-30680)))))))));
        var_22 = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) ((unsigned long long int) (signed char)-35))) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) min((var_8), ((unsigned short)50729)))))));
        var_23 = ((/* implicit */signed char) arr_0 [(unsigned short)23] [i_1]);
        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (((!(((/* implicit */_Bool) (signed char)123)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) (short)29816)) : (arr_5 [(unsigned short)12]))))))))))));
    }
}
