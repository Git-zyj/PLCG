/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115132
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
    var_19 = ((/* implicit */int) ((unsigned long long int) (_Bool)1));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [i_0] [i_0]))))) + (var_15)))) ? (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0] [i_0])) - (((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((((/* implicit */_Bool) (short)31611)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4294967295U))) : (max((((/* implicit */unsigned int) (_Bool)1)), (var_0)))))));
        var_20 = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) var_18)) ? ((-(((/* implicit */int) arr_2 [i_0])))) : (((/* implicit */int) (_Bool)1)))));
    }
    for (int i_1 = 1; i_1 < 7; i_1 += 2) 
    {
        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) min((((long long int) (-(((/* implicit */int) arr_5 [i_1]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-1))) : (var_15)))))))));
        var_22 = (~(((/* implicit */int) min((arr_2 [i_1 - 1]), (arr_2 [i_1 + 1])))));
        var_23 ^= ((/* implicit */short) min((((/* implicit */int) arr_4 [i_1 + 3] [i_1])), (max((((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_2 [i_1])))), (((((/* implicit */int) var_1)) + (((/* implicit */int) (_Bool)1))))))));
        var_24 += ((/* implicit */unsigned short) (+((~((((_Bool)1) ? (4427291101572543363ULL) : (((/* implicit */unsigned long long int) var_3))))))));
    }
}
