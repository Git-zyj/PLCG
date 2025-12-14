/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177804
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
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((int) max((var_18), (var_18))))) ? (var_7) : (var_7)));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_20 = ((/* implicit */_Bool) arr_0 [i_0]);
        var_21 = ((((((var_18) ? (min((var_8), (((/* implicit */long long int) (unsigned char)242)))) : (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0])) - (((/* implicit */int) (_Bool)1))))))) + (9223372036854775807LL))) << (((((((/* implicit */int) arr_1 [i_0])) + (56))) - (37))));
        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((signed char) var_8)))));
        arr_2 [(short)16] &= ((((/* implicit */_Bool) 5971642153427568619ULL)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])));
    }
    for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 1) 
    {
        arr_6 [i_1 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1 - 1])) ? (arr_4 [i_1 + 1]) : (((/* implicit */unsigned long long int) arr_5 [i_1 - 1]))))) ? (11ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) || (((/* implicit */_Bool) arr_3 [i_1 - 1] [i_1]))))))));
        arr_7 [13ULL] [13ULL] = ((/* implicit */signed char) (+(((/* implicit */int) max((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)3))) >= (arr_5 [(unsigned char)4]))), ((_Bool)1))))));
    }
    for (int i_2 = 2; i_2 < 21; i_2 += 2) 
    {
        arr_12 [23LL] [i_2 + 3] &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 13678778394937680585ULL))))) : (((((/* implicit */int) arr_10 [i_2] [(unsigned char)10])) << (((9223372036854775807LL) - (9223372036854775799LL)))))))) ? (((/* implicit */unsigned int) (+(arr_8 [i_2])))) : (max((max((var_17), (((/* implicit */unsigned int) (short)-1)))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_0)))))))));
        arr_13 [i_2] = ((((/* implicit */int) var_9)) >> (((/* implicit */int) ((short) arr_10 [i_2 - 1] [i_2 - 1]))));
    }
    var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-45)) + (((/* implicit */int) (unsigned short)30720))));
}
