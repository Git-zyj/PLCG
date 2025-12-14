/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18122
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
    /* vectorizable */
    for (short i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */short) (~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-85))) : (arr_0 [i_0] [i_0])))));
        var_14 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) || (((/* implicit */_Bool) arr_1 [i_0] [i_0])))) || (((/* implicit */_Bool) (short)-764))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 2; i_1 < 14; i_1 += 4) 
    {
        var_15 &= ((/* implicit */unsigned long long int) var_1);
        var_16 = ((/* implicit */unsigned long long int) var_10);
    }
    var_17 -= ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - ((-(var_2)))))) && (((/* implicit */_Bool) var_10)));
    var_18 = ((/* implicit */unsigned char) ((((var_5) - (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (signed char)-57)))))))) != (((((/* implicit */long long int) (-(((/* implicit */int) var_0))))) * (((var_1) / (var_5)))))));
    var_19 = ((/* implicit */_Bool) 9223372036854775807LL);
}
