/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117394
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_17 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((max((arr_0 [24LL] [i_0]), (arr_0 [(unsigned char)22] [(unsigned char)22]))), (((/* implicit */long long int) (+(((/* implicit */int) arr_1 [14LL]))))))))));
        arr_2 [i_0] = ((/* implicit */signed char) arr_1 [i_0]);
        var_18 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))));
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (min((arr_0 [i_0] [i_0]), (((/* implicit */long long int) arr_1 [i_0]))))))) ? (((arr_1 [i_0]) ? (min((((/* implicit */long long int) arr_1 [i_0])), (arr_0 [i_0] [16ULL]))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_1 [i_0]), (arr_1 [i_0]))))))) : (max(((~(arr_0 [i_0] [i_0]))), (max((((/* implicit */long long int) arr_1 [i_0])), (arr_0 [i_0] [i_0])))))));
    }
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_2))), (max((((/* implicit */unsigned long long int) var_4)), (var_10)))))) ? ((+(((/* implicit */int) (unsigned short)255)))) : (((/* implicit */int) max((max((var_7), (((/* implicit */unsigned short) var_13)))), (((/* implicit */unsigned short) min((((/* implicit */short) (_Bool)1)), ((short)-1024)))))))));
}
