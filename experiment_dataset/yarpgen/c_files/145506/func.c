/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145506
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_4 [(unsigned short)6])), (var_7)))) ? (min((var_0), (((/* implicit */unsigned long long int) var_6)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [11] [5ULL])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_2 [i_1] [i_1]))))))) ? (((/* implicit */int) arr_3 [i_1] [i_0] [i_0])) : (((arr_0 [i_0] [i_0]) ? (((/* implicit */int) (short)4080)) : (((/* implicit */int) arr_0 [i_1] [i_0]))))));
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */signed char) (-(((((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1))))) & (((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_0] [i_0]))) & (arr_4 [(unsigned char)6])))))));
                var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((arr_0 [i_0] [i_0]) ? (((((/* implicit */_Bool) arr_2 [i_1] [i_0])) ? (((/* implicit */unsigned long long int) arr_4 [i_0])) : (arr_1 [9LL]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) var_6);
}
