/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170753
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
    for (unsigned short i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        var_14 *= ((/* implicit */signed char) ((unsigned long long int) ((int) var_6)));
        var_15 = ((/* implicit */signed char) ((min((((((/* implicit */_Bool) -877000925819420742LL)) ? (0LL) : (0LL))), (((/* implicit */long long int) ((int) var_8))))) <= (((/* implicit */long long int) max(((-(((/* implicit */int) arr_1 [i_0])))), (((((/* implicit */int) var_1)) - (((/* implicit */int) arr_1 [i_0])))))))));
        var_16 &= ((/* implicit */unsigned int) min(((-((-(((/* implicit */int) var_6)))))), (((/* implicit */int) ((((((/* implicit */int) var_0)) & (((/* implicit */int) var_9)))) >= (((arr_2 [i_0]) & (((/* implicit */int) var_8)))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_6 [(_Bool)1] |= ((/* implicit */long long int) (+(((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned short) var_13))))) ? (((/* implicit */int) ((((/* implicit */int) var_12)) <= (((/* implicit */int) var_8))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) var_5)))))))));
        var_17 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (arr_5 [i_1])))) || (((/* implicit */_Bool) max((var_6), (arr_0 [i_1] [i_1])))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) ((short) var_8))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_9))))))) : ((~(arr_5 [i_1])))));
        var_18 = ((/* implicit */long long int) ((max((((arr_5 [i_1]) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (var_3) : (((/* implicit */int) var_0))))))) < (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_4) >= (var_3))))) : (min((arr_5 [i_1]), (var_5)))))));
    }
    var_19 = ((/* implicit */signed char) var_13);
}
