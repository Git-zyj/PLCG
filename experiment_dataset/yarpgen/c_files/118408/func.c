/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118408
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
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_11 = ((/* implicit */short) ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)41))) : (var_2)))), (max((5896359872305718466ULL), (((/* implicit */unsigned long long int) 7U)))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [4U])))));
        var_12 = ((/* implicit */unsigned int) ((((int) arr_1 [i_0] [i_0])) ^ (((/* implicit */int) var_6))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) var_8);
        var_13 = ((/* implicit */unsigned short) max((18446744073709551593ULL), (((/* implicit */unsigned long long int) arr_0 [i_0]))));
        arr_4 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) var_9)), ((-(((/* implicit */int) arr_1 [i_0] [i_0])))))))));
    }
    var_14 = ((/* implicit */short) (!(((/* implicit */_Bool) max((max((993323035297360798ULL), (((/* implicit */unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) max((((/* implicit */signed char) var_6)), (var_10)))))))));
}
