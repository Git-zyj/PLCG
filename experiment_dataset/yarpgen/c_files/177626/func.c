/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177626
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
    var_10 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((-4586408738368858671LL) & (((/* implicit */long long int) ((/* implicit */int) (short)-14060)))))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)-14068))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */_Bool) ((max((((unsigned int) arr_0 [i_0])), (((/* implicit */unsigned int) ((var_8) ? (((/* implicit */int) arr_3 [i_0] [i_1])) : (((/* implicit */int) (short)14076))))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)-14068)))));
                var_12 = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((short) (short)14074))) ? ((-(((/* implicit */int) arr_3 [i_1] [i_1])))) : ((-(((/* implicit */int) (_Bool)0))))))), (((((((/* implicit */_Bool) var_9)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1] [i_0]))))) * (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_0 [1U])) : (((/* implicit */int) var_4)))))))));
                var_13 -= ((/* implicit */signed char) (((~(((/* implicit */int) var_0)))) ^ (((/* implicit */int) ((unsigned short) min((arr_1 [i_1] [i_0]), (arr_0 [(unsigned short)13])))))));
            }
        } 
    } 
}
