/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157103
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
    var_10 = ((/* implicit */unsigned long long int) ((min((min((var_6), (((/* implicit */int) var_9)))), ((~(var_6))))) > (max((((((/* implicit */int) var_9)) / (var_6))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_3))))))));
    var_11 = ((/* implicit */_Bool) min((var_11), (((/* implicit */_Bool) var_7))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 22; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_1 + 1]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_1 - 2] [17LL])) % (var_2)))) ? (min((((/* implicit */long long int) arr_2 [i_0])), (var_1))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) <= (var_8))))))))));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) arr_1 [i_1]))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_3 [i_0]))))) : (((0U) >> (((-9132431627322590631LL) + (9132431627322590662LL)))))))) ? (((/* implicit */int) ((((/* implicit */int) arr_5 [i_1 + 1])) != (((/* implicit */int) arr_5 [i_1 - 2]))))) : (((/* implicit */int) ((unsigned short) min((arr_1 [i_0]), (arr_1 [i_0])))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned int) var_0);
}
