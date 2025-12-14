/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184426
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            {
                var_10 = ((/* implicit */short) min((var_10), (((/* implicit */short) (~(((/* implicit */int) max((arr_3 [i_1 + 1] [i_1 - 1] [i_1 - 1]), (arr_3 [i_1 - 1] [i_1] [i_1 - 1])))))))));
                arr_4 [i_0] [(short)13] [i_1] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_3 [i_1 + 1] [i_1 + 1] [i_1 - 1])), (max((((/* implicit */long long int) var_6)), (var_7)))))), (((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)4))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) % (var_9))) : (((11134895063448420450ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))));
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned short) (((-(max((((/* implicit */unsigned long long int) var_6)), (7311849010261131175ULL))))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((short)32767), (((/* implicit */short) var_1))))) ? (max((((/* implicit */long long int) (_Bool)1)), (var_5))) : (((((/* implicit */_Bool) var_6)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
    var_12 = ((/* implicit */_Bool) max((var_0), (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 2097151U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))), (var_4)))));
    var_13 = ((/* implicit */unsigned short) var_5);
}
