/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113452
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
    var_14 = ((/* implicit */short) ((var_12) % ((-(((var_9) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16384)))))))));
    var_15 -= ((/* implicit */short) var_6);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        arr_3 [(short)7] [(short)7] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) ((((/* implicit */int) var_1)) != (((/* implicit */int) var_0))))) : (((/* implicit */int) arr_1 [i_0]))))));
        var_16 ^= ((/* implicit */signed char) var_1);
        arr_4 [i_0] = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_0] [i_0]))))))))));
        var_17 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)94)) ? (((((((/* implicit */_Bool) (short)511)) ? (((/* implicit */int) (short)5343)) : (((/* implicit */int) arr_0 [i_0])))) & (((((/* implicit */_Bool) (signed char)-109)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_2 [9ULL] [i_0])))))) : (((/* implicit */int) ((((/* implicit */int) ((short) arr_0 [i_0]))) >= (((/* implicit */int) min((arr_1 [i_0]), (((/* implicit */short) arr_2 [i_0] [i_0]))))))))));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            arr_9 [i_1] = ((/* implicit */unsigned long long int) ((signed char) ((((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_12)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-31020)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (7386576016620642966ULL)))))));
            arr_10 [i_1] [i_1] [i_1] = (!(((/* implicit */_Bool) (~(arr_6 [i_1] [i_0])))));
        }
    }
    var_18 = ((/* implicit */short) min((((((/* implicit */int) (short)-5343)) % (((/* implicit */int) (short)-2156)))), (((((((/* implicit */int) (short)-16562)) + (2147483647))) << (((/* implicit */int) ((((/* implicit */int) (short)5328)) < (((/* implicit */int) var_8)))))))));
}
