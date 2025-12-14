/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117850
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
    var_10 = ((/* implicit */unsigned long long int) max((var_10), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((signed char) var_5))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_7)))), (((/* implicit */int) var_1)))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 3; i_0 < 17; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_3 [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 7653177103249279218ULL)))) : (((unsigned long long int) (signed char)-102))))) ? (((((/* implicit */_Bool) (+(arr_0 [i_0])))) ? (((((/* implicit */_Bool) (signed char)105)) ? (((/* implicit */long long int) 1959096513)) : (arr_2 [8]))) : (((/* implicit */long long int) -2147483630)))) : (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)75)))) << (((((/* implicit */int) min((((/* implicit */short) arr_1 [i_0])), ((short)-12645)))) + (12652))))))));
        var_11 = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) -8938399268372446102LL)) ? (arr_2 [i_0 - 2]) : (arr_2 [i_0 + 1]))));
        var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-114))) : (arr_0 [15LL]))))))), (arr_1 [i_0]))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (((-9223372036854775807LL - 1LL)) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((unsigned char) 1ULL))))) : ((-(1ULL)))));
        /* LoopSeq 1 */
        for (short i_2 = 0; i_2 < 11; i_2 += 4) 
        {
            var_13 = ((/* implicit */short) max((((/* implicit */long long int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_10 [i_1])))))))), (min((((((/* implicit */_Bool) arr_5 [i_2])) ? (arr_2 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-110)) ? ((-2147483647 - 1)) : (((/* implicit */int) arr_10 [i_1])))))))));
            var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [(short)0])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [16U])) ? (arr_9 [i_2] [i_1]) : (((/* implicit */int) arr_3 [i_1]))))) : (((((/* implicit */_Bool) arr_9 [i_1] [i_2])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)119)) ? (arr_8 [i_1] [i_1]) : (((/* implicit */int) (signed char)-121))))) : (((long long int) (signed char)(-127 - 1)))))));
        }
    }
}
