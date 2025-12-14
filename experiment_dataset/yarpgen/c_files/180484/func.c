/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180484
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_14 = ((/* implicit */int) var_10);
        arr_4 [i_0] &= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) arr_2 [8LL])), ((((!(((/* implicit */_Bool) var_10)))) ? (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0])) : (((arr_1 [(unsigned char)17] [(unsigned char)17]) - (((/* implicit */unsigned long long int) arr_3 [12LL] [i_0]))))))));
        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((arr_1 [i_0] [i_0]) >> (((arr_1 [i_0] [i_0]) - (12195845962870746139ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)64915))))))));
    }
    for (int i_1 = 0; i_1 < 11; i_1 += 3) 
    {
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)9218)) >= (((/* implicit */int) (unsigned char)229))));
        var_17 ^= ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_5 [i_1])) ? (var_2) : (arr_5 [i_1]))) - (((/* implicit */unsigned int) (~(((/* implicit */int) var_10)))))));
        arr_9 [i_1] = ((/* implicit */short) ((((/* implicit */int) arr_6 [i_1] [i_1])) < (((/* implicit */int) (short)9218))));
    }
    var_18 = ((/* implicit */short) (+(max((min((((/* implicit */long long int) (unsigned short)62562)), (var_7))), (var_1)))));
}
