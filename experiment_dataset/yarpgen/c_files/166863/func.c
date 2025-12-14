/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166863
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
    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((var_6) >= (((var_6) - (var_9))))))));
    var_18 = (unsigned short)62881;
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        arr_3 [i_0 + 3] = ((var_13) / (var_10));
        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)234))) != (var_9)))) & (268431360))))));
        var_20 = ((/* implicit */int) ((short) -268431360));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 10589923459165419411ULL)) || (((/* implicit */_Bool) var_5)))))));
        arr_8 [i_1] = ((/* implicit */unsigned char) ((7856820614544132205ULL) ^ (10589923459165419411ULL)));
        var_22 += ((/* implicit */unsigned char) ((int) -268431378));
        arr_9 [i_1] = ((/* implicit */int) ((short) ((((-268431361) + (2147483647))) << (((((var_16) + (397650393))) - (18))))));
        var_23 = ((/* implicit */unsigned int) ((unsigned short) var_1));
    }
    var_24 = ((/* implicit */int) var_15);
}
