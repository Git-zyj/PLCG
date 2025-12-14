/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181488
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
    for (short i_0 = 3; i_0 < 8; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            {
                arr_6 [i_1] [i_1] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_0])), (((var_9) ? (((/* implicit */unsigned long long int) (~(var_0)))) : (arr_0 [i_0 + 1] [7LL])))));
                arr_7 [2U] |= ((/* implicit */_Bool) ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -1LL)), (arr_1 [i_1])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 4U)) ? (3280509728949582588ULL) : (((/* implicit */unsigned long long int) arr_3 [0LL] [i_0]))))))) ? (arr_1 [i_1]) : (((/* implicit */unsigned long long int) max(((~(((/* implicit */int) arr_2 [i_0 - 1])))), (((/* implicit */int) var_11)))))));
                arr_8 [i_1] [i_1] = ((/* implicit */_Bool) (+(max((((arr_1 [(short)0]) * (((/* implicit */unsigned long long int) -11LL)))), ((+(arr_1 [i_0])))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) max((min((max((var_5), (((/* implicit */int) var_14)))), (((/* implicit */int) var_10)))), (((/* implicit */int) min((var_11), (((5521212782299739256LL) >= (var_2))))))));
    var_17 = -13LL;
}
