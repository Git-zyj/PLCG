/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133596
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
    var_18 = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) var_11)) ? (11302045546287880770ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)172))))))));
    var_19 = ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) ^ (1074451717008243258ULL)))) ? (((/* implicit */unsigned long long int) ((var_9) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)42)))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) -1)) : (13200033151561896342ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_0 [i_0])) * (arr_1 [i_0])))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (var_3) : (((/* implicit */long long int) arr_0 [11U])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 17837159784218556522ULL)) ? (arr_0 [(short)17]) : (((/* implicit */int) var_0)))))));
        arr_2 [(unsigned char)8] [(unsigned short)10] = ((/* implicit */signed char) ((short) -811289925));
    }
}
