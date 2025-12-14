/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13088
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
    var_16 = (((+((-(((/* implicit */int) var_12)))))) / (((/* implicit */int) max(((signed char)79), ((signed char)102)))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 4; i_0 < 9; i_0 += 1) 
    {
        arr_2 [(_Bool)1] = ((/* implicit */int) ((min((((/* implicit */unsigned long long int) ((_Bool) (_Bool)0))), (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0]))))) % (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned char)162)), (((((/* implicit */_Bool) 1778668217)) ? (1532042509U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)14846))))))))));
        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) || ((_Bool)1))) ? (arr_0 [i_0 + 1]) : (min((arr_0 [i_0]), (((/* implicit */unsigned long long int) var_0))))))) ? (((int) (!(((/* implicit */_Bool) var_9))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) arr_0 [i_0])))))))));
        var_18 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) max((arr_1 [0] [i_0]), (arr_1 [i_0] [i_0])))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 1; i_1 < 8; i_1 += 1) 
    {
        var_19 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned char) (unsigned char)93)))));
        var_20 = ((/* implicit */long long int) (~(((var_12) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) (short)28123))))));
        arr_7 [i_1] = ((/* implicit */int) 7535468987067251695ULL);
    }
}
