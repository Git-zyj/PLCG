/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172193
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
    var_11 = ((/* implicit */_Bool) min((var_11), (((/* implicit */_Bool) (-(((/* implicit */int) ((((((/* implicit */_Bool) var_10)) ? (5996513995209968576ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) >= (((/* implicit */unsigned long long int) ((long long int) 119142217U)))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        arr_2 [i_0] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-3621967533887541179LL)))));
        var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) arr_1 [9LL] [9LL]))) ? ((~(((/* implicit */int) (signed char)-60)))) : (((((/* implicit */int) arr_1 [(_Bool)1] [i_0])) ^ (((/* implicit */int) arr_1 [i_0] [i_0]))))));
        var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) (short)-22960)) ? (3621967533887541204LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-9))))) : (((((/* implicit */_Bool) var_4)) ? (-4787878576384118693LL) : (arr_0 [i_0] [i_0])))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_3)))))));
        var_15 ^= ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_3 [i_1])))) || (((/* implicit */_Bool) arr_4 [(unsigned char)9] [i_1]))));
    }
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned short)15)))) * (((/* implicit */int) (_Bool)1))))) >= (((((/* implicit */_Bool) ((((/* implicit */int) var_5)) / (((/* implicit */int) var_8))))) ? (min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (_Bool)1)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_0)))))))));
}
