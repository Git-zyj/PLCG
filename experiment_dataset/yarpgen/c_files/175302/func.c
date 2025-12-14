/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175302
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
    var_16 = ((/* implicit */int) (((((~(((/* implicit */int) (unsigned char)0)))) * (((/* implicit */int) var_14)))) > (((/* implicit */int) var_1))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) ^ (((/* implicit */int) arr_0 [i_0]))))) ? (((((/* implicit */int) var_5)) / (var_3))) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 1]))) != (10863268643287651688ULL))))) : (10863268643287651693ULL))))));
        arr_2 [i_0 - 2] [i_0 - 2] = ((/* implicit */short) (((-(((/* implicit */int) arr_1 [i_0 - 2])))) >= (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0 + 1])) <= (((/* implicit */int) arr_1 [i_0 - 1])))))));
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        var_18 = min((((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)508)) ^ (((/* implicit */int) var_9))))) - (arr_6 [i_1] [i_1]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_1])))))))));
        var_19 -= ((/* implicit */short) ((unsigned char) min((((/* implicit */int) var_12)), (arr_5 [i_1 + 1]))));
    }
}
