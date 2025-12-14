/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189402
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
    var_17 *= ((/* implicit */short) ((((/* implicit */_Bool) ((var_0) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) ? (((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */_Bool) -2412005327229774914LL)) && (((/* implicit */_Bool) var_15))))), (((((((/* implicit */int) var_11)) + (2147483647))) << (((((-1969971081) + (1969971100))) - (19)))))))) : (((((((/* implicit */long long int) ((/* implicit */int) var_9))) ^ (var_5))) & (((/* implicit */long long int) ((((/* implicit */unsigned int) var_13)) / (var_7))))))));
    var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) ((8589934591LL) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))));
    var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_2), (((/* implicit */long long int) var_11))))) ? (max((((/* implicit */unsigned int) var_8)), (var_14))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_2) >= (((/* implicit */long long int) ((/* implicit */int) var_15))))))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_20 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) 12841930838904965270ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)0))))) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned int) -1)) : (4294967295U))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1))))))));
        var_21 = arr_1 [i_0];
        arr_3 [(signed char)9] [18] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_0 [i_0] [i_0]) >= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))))))) : (max((((/* implicit */long long int) arr_1 [i_0])), (arr_2 [i_0] [i_0])))));
    }
    for (unsigned char i_1 = 0; i_1 < 15; i_1 += 2) 
    {
        arr_8 [(_Bool)1] [i_1] = var_6;
        arr_9 [i_1] [14LL] &= ((/* implicit */int) arr_2 [i_1] [(unsigned char)3]);
        arr_10 [i_1] [i_1] = ((/* implicit */long long int) ((unsigned int) var_16));
    }
    var_22 |= ((/* implicit */unsigned char) (~(min(((((_Bool)1) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)2)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))));
}
