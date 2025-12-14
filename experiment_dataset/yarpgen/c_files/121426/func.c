/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121426
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
    var_18 = ((/* implicit */unsigned int) var_7);
    var_19 = ((/* implicit */unsigned int) max((((17811360886923225530ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)5602))))), (((/* implicit */unsigned long long int) ((max((var_0), (var_7))) + (((/* implicit */long long int) var_17)))))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 11; i_1 += 1) 
        {
            {
                var_20 ^= ((/* implicit */unsigned int) (~(((((((/* implicit */int) var_8)) ^ (((/* implicit */int) var_11)))) >> (((((((/* implicit */int) var_2)) | (((/* implicit */int) var_1)))) + (271)))))));
                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((((/* implicit */_Bool) ((unsigned long long int) 5746409715823891760LL))) ? ((-(((/* implicit */int) var_11)))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8)))))) * (((/* implicit */int) ((unsigned char) ((((/* implicit */int) (short)26923)) * (((/* implicit */int) arr_1 [i_1])))))))))));
                var_22 *= ((/* implicit */unsigned long long int) ((short) ((long long int) ((((/* implicit */_Bool) (short)-16998)) ? (((/* implicit */int) (short)-22996)) : (((/* implicit */int) var_6))))));
            }
        } 
    } 
}
