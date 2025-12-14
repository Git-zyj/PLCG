/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139146
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
    var_12 = ((/* implicit */_Bool) (-(((((var_7) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) >> ((((+(((/* implicit */int) var_3)))) - (55873)))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) min((((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_1 [i_0]))))) | (min((arr_0 [(_Bool)1]), (((arr_0 [i_0]) | (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))))));
        var_13 *= (+(((/* implicit */int) (!((!(((/* implicit */_Bool) arr_0 [i_0]))))))));
    }
    for (unsigned int i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        var_14 *= ((/* implicit */unsigned long long int) ((arr_3 [8U]) << (min((((/* implicit */unsigned long long int) (_Bool)1)), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [8ULL]))) * (arr_4 [i_1])))))));
        var_15 -= ((/* implicit */unsigned int) (((-(arr_4 [i_1]))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
        var_16 = (i_1 % 2 == 0) ? ((!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)7)) >> (((arr_3 [i_1]) - (2230684321U)))))) | ((-(arr_3 [i_1])))))))) : ((!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)7)) >> (((((arr_3 [i_1]) - (2230684321U))) - (1166053259U)))))) | ((-(arr_3 [i_1]))))))));
    }
}
