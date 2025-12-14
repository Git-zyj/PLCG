/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177854
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_0]))))), (((((/* implicit */_Bool) 4160749568U)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))))))) ? (min((10837028392291427361ULL), (((/* implicit */unsigned long long int) arr_1 [i_0])))) : (((arr_0 [i_0]) << (0ULL)))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) 7609715681418124237ULL)))))))) ? (min((0ULL), (((/* implicit */unsigned long long int) min((var_13), (((/* implicit */short) var_5))))))) : (arr_0 [i_0])));
        arr_4 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) arr_0 [i_0]))) ? (max((arr_0 [i_0]), (arr_0 [i_0]))) : (arr_0 [i_0])));
    }
    var_19 *= ((/* implicit */_Bool) (-(max((1589591896332754057ULL), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) var_0)), ((unsigned char)66))))))));
    var_20 = ((/* implicit */signed char) 13962895158665819265ULL);
}
