/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101789
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
    var_18 = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */int) (short)21246)) >> (((((/* implicit */int) var_14)) - (66)))))) ? (((/* implicit */unsigned long long int) min((var_11), (var_2)))) : (var_0))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -9223372036854775788LL)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_3)))))))));
    var_19 = ((/* implicit */short) ((long long int) ((var_15) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1))))))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */short) var_4);
        var_20 = ((/* implicit */long long int) min((var_20), ((~(((long long int) ((unsigned char) (_Bool)1)))))));
    }
    for (unsigned long long int i_1 = 3; i_1 < 13; i_1 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((min((7920249395571999560LL), (-322964109526629915LL))) == (arr_0 [i_1 - 1]))))));
        var_22 = (+(((min((arr_0 [i_1 - 1]), (((/* implicit */long long int) (unsigned char)3)))) & (((/* implicit */long long int) ((arr_5 [8ULL]) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)157)))))))));
        arr_7 [i_1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_2 [i_1] [i_1]))));
    }
    for (unsigned long long int i_2 = 3; i_2 < 13; i_2 += 4) /* same iter space */
    {
        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (~(((/* implicit */int) (short)21630))))), (((((/* implicit */_Bool) var_2)) ? (arr_0 [i_2 - 1]) : (var_11)))))) ? (((/* implicit */unsigned long long int) ((5LL) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) : (max((((unsigned long long int) (short)63)), (((/* implicit */unsigned long long int) ((var_15) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2 + 2]))))))))));
        arr_10 [i_2] [i_2] |= ((/* implicit */unsigned long long int) var_5);
        arr_11 [i_2 + 2] [i_2 + 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_2 - 2])) || (((/* implicit */_Bool) arr_0 [i_2 - 2]))))) : (((((/* implicit */_Bool) 7239277496540422397ULL)) ? (((/* implicit */int) (_Bool)1)) : ((-(((/* implicit */int) arr_8 [i_2 + 1]))))))));
        arr_12 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_5 [(short)4]), (((/* implicit */unsigned int) (short)-1345))))) ? (((((/* implicit */long long int) ((((/* implicit */_Bool) 4294967294U)) ? (((/* implicit */int) (short)-16222)) : (((/* implicit */int) (_Bool)1))))) ^ (((long long int) -1LL)))) : (min((((((/* implicit */_Bool) 5886837916802935232LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : ((-9223372036854775807LL - 1LL)))), (arr_2 [i_2 - 3] [i_2 - 1])))));
    }
    var_24 += ((/* implicit */long long int) ((var_15) >> (((((8164532554967343779LL) + (((/* implicit */long long int) (-(((/* implicit */int) (short)-16384))))))) - (8164532554967360157LL)))));
    var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((((/* implicit */_Bool) 2U)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_11))))));
}
