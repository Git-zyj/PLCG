/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159616
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
    var_13 = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((((/* implicit */int) var_4)) != (((/* implicit */int) (signed char)-48)))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) var_10))))))));
        arr_4 [i_0] = ((/* implicit */short) max((((long long int) ((arr_1 [i_0] [i_0]) ? (arr_2 [i_0]) : (-7691769862486114545LL)))), (((((/* implicit */_Bool) min((-443134101600313659LL), (((/* implicit */long long int) var_8))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (-621240406528749720LL))) : (((/* implicit */long long int) (+(((/* implicit */int) var_4)))))))));
        var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(443134101600313645LL)))) && (((/* implicit */_Bool) (short)26689))));
        arr_5 [i_0] = ((/* implicit */long long int) (((-(max((arr_2 [i_0]), (arr_2 [i_0]))))) == (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0] [i_0])) % (((/* implicit */int) arr_0 [i_0] [i_0])))))));
    }
}
