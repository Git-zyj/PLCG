/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119303
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
    var_16 = ((/* implicit */int) (((_Bool)1) ? (((/* implicit */long long int) (-(((/* implicit */int) ((var_8) <= (var_8))))))) : (var_7)));
    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (var_7) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)26)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_13)))))))) ? (max((((/* implicit */long long int) ((((/* implicit */_Bool) 610252303016927299ULL)) ? (((/* implicit */int) (short)-4851)) : (((/* implicit */int) var_15))))), (((long long int) var_8)))) : (((/* implicit */long long int) max((((((/* implicit */unsigned int) ((/* implicit */int) var_1))) | (var_4))), (((/* implicit */unsigned int) 1048575))))))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_18 = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_13))))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) (_Bool)1)), (arr_0 [i_0] [5ULL])))) : (((long long int) (short)-28880))))));
        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (((((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-1))))))) + ((-(((/* implicit */int) var_13)))))))));
        arr_3 [i_0] |= min((((/* implicit */long long int) max((arr_0 [i_0] [i_0]), (((/* implicit */unsigned int) arr_2 [i_0]))))), (min((var_8), (((/* implicit */long long int) arr_0 [i_0] [i_0])))));
    }
    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) var_2))));
    var_21 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) var_1)))))));
}
