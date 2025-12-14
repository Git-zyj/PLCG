/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16956
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
    var_13 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 2147483136)))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_14 = ((/* implicit */long long int) (((((_Bool)0) ? (((/* implicit */int) (signed char)39)) : (((/* implicit */int) (signed char)36)))) + (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0]))))));
        var_15 = ((/* implicit */_Bool) max((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (var_10) : (((/* implicit */int) (signed char)42)))))), ((((~(((/* implicit */int) arr_2 [i_0])))) ^ (((/* implicit */int) (unsigned char)253))))));
        var_16 = ((/* implicit */unsigned char) ((min((((/* implicit */int) (signed char)50)), (min((((/* implicit */int) (_Bool)1)), (var_10))))) * (((/* implicit */int) var_2))));
    }
}
