/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172809
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
    var_13 = ((/* implicit */short) var_5);
    var_14 = ((/* implicit */short) ((((/* implicit */int) var_5)) >= (((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? (((/* implicit */int) ((((/* implicit */int) var_6)) < (((/* implicit */int) var_11))))) : (((/* implicit */int) ((_Bool) (unsigned char)255)))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 *= ((/* implicit */unsigned char) 35184372088831ULL);
        var_16 = ((/* implicit */unsigned int) arr_0 [i_0]);
        arr_4 [i_0] [i_0] = ((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)220)) || (((/* implicit */_Bool) var_2)))))) * (((((/* implicit */_Bool) var_10)) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_11))))))) / (((/* implicit */long long int) 1639506793))));
        var_17 += ((/* implicit */short) ((((/* implicit */int) var_12)) + (((/* implicit */int) var_10))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 23; i_1 += 2) 
    {
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (arr_6 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))) ? (((/* implicit */int) ((arr_5 [i_1]) <= (arr_5 [i_1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1])))))));
        var_19 = ((/* implicit */_Bool) arr_6 [i_1] [i_1]);
    }
    var_20 = ((/* implicit */signed char) var_6);
    var_21 = ((/* implicit */int) min((((((((/* implicit */_Bool) (short)17407)) ? (2106630541118104376LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) * (min((((/* implicit */long long int) var_6)), (var_1))))), (((/* implicit */long long int) var_4))));
}
