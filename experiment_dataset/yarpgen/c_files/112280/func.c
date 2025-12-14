/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112280
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
    var_19 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_11)) ? (var_11) : (((/* implicit */int) var_13))))))) == (var_1)));
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 + 3]))) | ((~(5U))))));
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0] [i_0])) ^ (((/* implicit */int) arr_0 [i_0] [i_0]))))) : (var_14)));
        arr_5 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)18874)) : (((/* implicit */int) arr_0 [i_0] [i_0 + 2]))))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)226))) : (((long long int) var_12)))) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
        var_20 = ((/* implicit */short) ((((/* implicit */long long int) (((!(((/* implicit */_Bool) 13156323096448258286ULL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 31LL))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) 1821499367)))))))) <= (((((/* implicit */_Bool) arr_1 [i_0 + 4] [i_0])) ? (-1742839323623744022LL) : (var_14)))));
    }
    /* vectorizable */
    for (signed char i_1 = 2; i_1 < 19; i_1 += 4) 
    {
        arr_8 [i_1] = ((((/* implicit */unsigned long long int) ((unsigned int) var_7))) >= (5290420977261293330ULL));
        arr_9 [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_7 [i_1 - 1] [i_1 + 1]))));
        var_21 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_7 [i_1] [i_1])) & (5290420977261293330ULL)))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_17))));
        arr_10 [i_1] = ((/* implicit */int) 3988602633U);
    }
}
