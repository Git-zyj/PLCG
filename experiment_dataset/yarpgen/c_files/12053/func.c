/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12053
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
    var_18 = (+(((((((/* implicit */int) (unsigned short)59085)) == (((/* implicit */int) (short)15872)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) : (((((/* implicit */_Bool) (unsigned short)31153)) ? (3677681538U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)6451))))))));
    var_19 = ((/* implicit */short) ((((/* implicit */int) ((0ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)6450)))))) ^ (((/* implicit */int) (_Bool)0))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 7; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                arr_8 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((short) min((min((var_10), (((/* implicit */int) arr_4 [i_0])))), ((-(((/* implicit */int) arr_0 [i_1])))))));
                arr_9 [i_0 + 3] [i_1] = ((/* implicit */unsigned short) (((~(((unsigned int) 9187343239835811840ULL)))) == (((/* implicit */unsigned int) max((((((/* implicit */int) arr_6 [i_0])) >> (((((/* implicit */int) var_5)) - (14415))))), (((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_6 [i_1])))))))));
                arr_10 [i_0] [(unsigned char)8] = ((/* implicit */unsigned int) min(((+((+((-9223372036854775807LL - 1LL)))))), (((/* implicit */long long int) 988338203U))));
                arr_11 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [(unsigned short)6])) ? (((/* implicit */int) ((unsigned short) var_8))) : (((/* implicit */int) ((short) var_10)))))) ? (max((((/* implicit */int) ((short) var_2))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_4 [i_1])))))) : ((+(((/* implicit */int) (_Bool)1))))));
            }
        } 
    } 
}
