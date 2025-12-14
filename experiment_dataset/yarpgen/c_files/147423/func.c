/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147423
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
    for (short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_18 *= ((/* implicit */signed char) var_5);
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0] [i_0])) / (((/* implicit */int) var_15))));
        arr_4 [i_0] &= ((/* implicit */_Bool) ((((/* implicit */int) var_6)) / (((/* implicit */int) max((max((((/* implicit */short) var_8)), (arr_2 [9LL]))), (((/* implicit */short) (_Bool)1)))))));
        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (-(arr_1 [11])))))) || (((/* implicit */_Bool) max((((((/* implicit */int) var_3)) - (((/* implicit */int) arr_2 [11U])))), (((/* implicit */int) arr_0 [i_0] [(signed char)9]))))))))));
    }
    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) max((((/* implicit */unsigned char) var_1)), (var_8))))))), ((unsigned short)5991))))));
}
