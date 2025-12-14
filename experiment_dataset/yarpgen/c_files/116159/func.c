/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116159
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
    for (short i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-22)), ((unsigned char)120))))) & (((long long int) arr_0 [i_0 - 1]))));
                var_10 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)110))) ? (((/* implicit */unsigned long long int) -3596976128765002567LL)) : (11092729941552368747ULL)));
                arr_6 [i_0 + 1] [i_1] [i_1] = ((/* implicit */short) min((0ULL), (max((arr_4 [i_0 + 1]), (((/* implicit */unsigned long long int) 3596976128765002566LL))))));
                var_11 = ((/* implicit */signed char) ((max((((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_1])) ? (((/* implicit */long long int) 471656724U)) : (3331603949428978891LL))), (((/* implicit */long long int) min((((/* implicit */unsigned short) arr_1 [(short)7])), ((unsigned short)48342)))))) == (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_0 [i_1]))))));
                arr_7 [i_0] [i_1] = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_0 [i_0 + 1])))) && (((/* implicit */_Bool) min((arr_2 [i_0 + 1] [i_0 + 1]), (arr_2 [i_0 - 1] [i_0 + 1]))))));
            }
        } 
    } 
    var_12 -= ((/* implicit */long long int) max((min((((/* implicit */unsigned long long int) 1595538922U)), (max((((/* implicit */unsigned long long int) var_1)), (0ULL))))), (((/* implicit */unsigned long long int) max((((-4030819142756449740LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_0))))), (((/* implicit */long long int) (unsigned short)10709)))))));
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) ((short) 4030819142756449758LL)))) || (((/* implicit */_Bool) max((((int) 1120130173U)), (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)37)))))))));
}
