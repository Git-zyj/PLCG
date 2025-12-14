/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101094
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
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) ? (var_15) : (((/* implicit */long long int) (-((-(((/* implicit */int) var_19)))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        arr_2 [i_0] = ((unsigned int) arr_1 [i_0] [i_0]);
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            arr_5 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((((/* implicit */_Bool) arr_3 [i_1] [i_0])) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_0] [i_0]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_0 [i_1] [i_1]) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_19))))) ? (((unsigned int) arr_3 [i_0] [i_1])) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)56))))))));
            var_21 = ((/* implicit */_Bool) ((max((arr_0 [i_0] [i_1]), (arr_0 [i_0] [i_0]))) ? (max((((int) arr_0 [i_0] [i_1])), (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_1]))))))) : ((-(((/* implicit */int) arr_0 [i_0] [i_1]))))));
            arr_6 [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_15)) ? (arr_3 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_1])))))));
        }
        for (unsigned char i_2 = 3; i_2 < 16; i_2 += 2) 
        {
            var_22 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_2 + 1] [i_0]))));
            var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) min((arr_0 [i_2 - 2] [i_2 + 1]), (arr_0 [i_0] [i_2])))) & (((/* implicit */int) arr_0 [i_0] [i_2]))));
            var_24 ^= ((/* implicit */unsigned short) ((long long int) (+(min((((/* implicit */int) arr_0 [i_0] [i_0])), (1660834225))))));
            arr_10 [i_2] = ((/* implicit */unsigned short) min((((/* implicit */short) ((signed char) (signed char)70))), (max((((/* implicit */short) (_Bool)1)), (arr_8 [i_2 + 2])))));
        }
        var_25 = ((_Bool) ((((/* implicit */_Bool) ((signed char) var_2))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)0))));
    }
    var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-70)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))) ? (((((/* implicit */_Bool) (signed char)70)) ? (var_1) : (var_15))) : (((/* implicit */long long int) var_5))))) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
    var_27 ^= ((/* implicit */short) min((((/* implicit */long long int) (_Bool)0)), (max((((((/* implicit */_Bool) 17)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) 658468346U)))), (((var_4) - (((/* implicit */long long int) ((/* implicit */int) var_7)))))))));
}
