/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133347
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) >= (((/* implicit */int) arr_0 [i_0]))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((((var_9) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) < (((/* implicit */int) arr_1 [i_0] [i_0]))))) : ((+(((/* implicit */int) arr_1 [i_0] [i_0]))))));
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) var_13)) / (18007690108090205891ULL))), (((/* implicit */unsigned long long int) ((long long int) (-2147483647 - 1))))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0] [i_0])) | (((/* implicit */int) arr_1 [i_0] [i_0]))))) : (max(((-(4260818830U))), (((/* implicit */unsigned int) ((short) (short)(-32767 - 1))))))));
    }
    for (short i_1 = 0; i_1 < 16; i_1 += 2) /* same iter space */
    {
        arr_8 [i_1] = ((/* implicit */_Bool) min((((((((/* implicit */int) var_8)) > (((/* implicit */int) arr_5 [i_1] [i_1])))) ? (((/* implicit */int) arr_0 [i_1])) : (((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((/* implicit */int) (short)-9306)) : (var_2))))), (((((((/* implicit */_Bool) arr_6 [i_1] [(signed char)11])) ? (((/* implicit */int) arr_7 [i_1])) : (var_11))) >> (((/* implicit */int) ((var_13) <= (((/* implicit */long long int) ((/* implicit */int) (short)9300))))))))));
        var_17 = ((/* implicit */signed char) ((var_8) ? (((((/* implicit */_Bool) (short)-31622)) ? (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_7 [i_1])) : (((/* implicit */int) arr_5 [i_1] [i_1])))) : ((+(((/* implicit */int) var_16)))))) : (((((/* implicit */_Bool) ((var_1) ? (arr_6 [i_1] [i_1]) : (((/* implicit */int) arr_1 [(_Bool)1] [i_1]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_0 [i_1])) >= (arr_6 [i_1] [i_1])))) : (((/* implicit */int) ((var_13) <= (((/* implicit */long long int) ((/* implicit */int) var_5))))))))));
        var_18 &= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_1 [i_1] [i_1])) && (((/* implicit */_Bool) min((18007690108090205873ULL), (((/* implicit */unsigned long long int) var_14))))))), (arr_7 [i_1])));
    }
    var_19 ^= ((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 67104768)) ? (var_10) : (var_10)))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_13)) : (var_12))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))), ((+(((var_14) ? (var_12) : (((/* implicit */unsigned long long int) 4362862139015168LL))))))));
}
