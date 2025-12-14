/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118620
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
    var_13 = ((/* implicit */_Bool) (+(var_10)));
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        arr_3 [i_0 + 2] = ((/* implicit */unsigned int) var_7);
        var_14 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_2 [9U])))) ? (((((/* implicit */int) (signed char)100)) << (((3461108140U) - (3461108133U))))) : (((/* implicit */int) (signed char)92))));
        var_15 = ((/* implicit */unsigned int) ((((/* implicit */int) ((short) ((((/* implicit */int) var_3)) >= (((/* implicit */int) arr_1 [i_0])))))) - (((/* implicit */int) (signed char)(-127 - 1)))));
        arr_4 [i_0 + 1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_2 [i_0 + 1]), (((/* implicit */long long int) arr_1 [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 - 2])))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_3))) - (var_12)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)(-127 - 1)))))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) ((_Bool) (unsigned short)65535))))))));
    }
    /* vectorizable */
    for (long long int i_1 = 1; i_1 < 13; i_1 += 2) 
    {
        arr_8 [11] = ((/* implicit */unsigned int) ((arr_5 [i_1 + 1]) % (arr_5 [i_1 + 1])));
        var_16 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)156)) - (var_2)));
        var_17 = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)227))));
    }
    var_18 = ((/* implicit */unsigned short) var_0);
}
