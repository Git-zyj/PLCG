/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128206
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
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) var_1)), (arr_3 [i_0] [i_1]))), (min((var_10), (((/* implicit */unsigned long long int) var_8))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((signed char)31), (((/* implicit */signed char) ((((/* implicit */_Bool) 31525197391593472ULL)) && (((/* implicit */_Bool) -1513952226))))))))) : (((((/* implicit */_Bool) ((unsigned short) var_7))) ? (min((((/* implicit */unsigned long long int) var_0)), (var_2))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (_Bool)1)), (var_7))))))));
                arr_7 [i_1] [i_1] [i_1] = ((/* implicit */int) var_5);
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned long long int) var_0))));
}
