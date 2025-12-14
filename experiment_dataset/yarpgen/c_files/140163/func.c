/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140163
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
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (((/* implicit */long long int) var_10)) : (var_9)));
    var_14 = ((/* implicit */unsigned char) var_5);
    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) max((var_0), (((/* implicit */unsigned long long int) var_4)))))));
    var_16 = ((/* implicit */short) 2104899147365709005LL);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_17 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) arr_2 [11] [i_0])), (arr_1 [i_0]))))) - ((+(70368744177663ULL)))));
        var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) arr_2 [i_0] [10ULL]))));
        var_19 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? ((~(((/* implicit */int) (short)692)))) : (((/* implicit */int) arr_2 [i_0] [i_0]))))), (max((((((/* implicit */_Bool) arr_0 [(signed char)11] [i_0])) ? (arr_0 [i_0] [(signed char)5]) : (((/* implicit */unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0])))))))));
    }
}
