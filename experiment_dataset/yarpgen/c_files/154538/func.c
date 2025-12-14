/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154538
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 13; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-85)), (arr_4 [i_2 + 2] [i_2 - 1] [i_2 - 1]))))) / (max((min((13102412759848212380ULL), (1075618293948800586ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) var_16)), (arr_4 [i_0] [i_0] [i_2])))))))))));
                    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((long long int) arr_0 [i_0] [i_0]))), (var_14)))) ? (arr_1 [i_2 - 1]) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_0])) ? (arr_1 [i_0]) : (((/* implicit */int) (_Bool)1))))) < (max((var_10), (var_2)))))))))));
                    var_22 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_1]))) >= (arr_6 [i_2])));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */long long int) (signed char)52);
    var_24 = ((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) min((((((/* implicit */_Bool) 7626040272790236464ULL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)-82)))), (((/* implicit */int) (_Bool)1)))))));
}
