/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12540
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
    for (unsigned int i_0 = 3; i_0 < 24; i_0 += 3) 
    {
        var_11 = ((/* implicit */signed char) ((unsigned int) var_9));
        var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) max((((long long int) (_Bool)1)), (((/* implicit */long long int) (_Bool)1)))))));
        arr_3 [i_0] [(signed char)21] = max((((unsigned int) var_8)), (((/* implicit */unsigned int) ((short) arr_1 [i_0 - 1] [i_0]))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 23; i_1 += 3) 
    {
        arr_6 [i_1] = ((/* implicit */_Bool) min((((long long int) min((var_7), (((/* implicit */long long int) 1761994472))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (var_8) : (max((var_8), (((/* implicit */unsigned int) arr_1 [(_Bool)1] [(unsigned short)16])))))))));
        var_13 = ((/* implicit */_Bool) max((max((arr_2 [i_1 + 2]), ((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) ((unsigned char) 10405410638030172766ULL)))));
        var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) 1761994472))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 3; i_2 < 10; i_2 += 3) 
    {
        for (int i_3 = 0; i_3 < 13; i_3 += 2) 
        {
            {
                var_15 *= ((/* implicit */short) ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -1761994473)), (var_4)))) || (((/* implicit */_Bool) var_0)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_2 - 1] [i_2 - 1] [i_2 + 1])) ? (((/* implicit */long long int) min(((-2147483647 - 1)), (((/* implicit */int) var_2))))) : (((long long int) (_Bool)1))))) : (var_4)));
                arr_12 [12LL] [i_2 + 3] [i_2 + 3] |= ((/* implicit */signed char) ((((/* implicit */_Bool) 1059292953)) ? (((/* implicit */int) (_Bool)1)) : (1059292953)));
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) var_0);
    var_17 = ((/* implicit */long long int) var_4);
}
