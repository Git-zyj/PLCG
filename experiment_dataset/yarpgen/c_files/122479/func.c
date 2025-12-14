/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122479
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (long long int i_1 = 3; i_1 < 20; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_5), (arr_0 [i_1] [i_1 - 1])))) ? (((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_8)))))) : (((((/* implicit */_Bool) arr_4 [0LL] [i_1 - 1] [i_1 - 1])) ? (36028796482093056LL) : (((long long int) arr_1 [i_1]))))));
                arr_7 [i_1] = ((/* implicit */unsigned short) arr_2 [i_1] [4LL] [i_0]);
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_3))))))))));
    var_13 = ((/* implicit */_Bool) ((((-9223372036854775804LL) / (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))))) ^ (((/* implicit */long long int) max((((((/* implicit */_Bool) var_10)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))), (max((((/* implicit */unsigned int) var_6)), (var_10))))))));
}
