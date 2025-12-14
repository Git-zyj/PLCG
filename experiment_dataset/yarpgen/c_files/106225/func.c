/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106225
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned long long int) max((var_17), ((+(((13380069037214355502ULL) << (((/* implicit */int) (unsigned char)0))))))));
                var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((1720276343294907928LL), (((/* implicit */long long int) (unsigned char)166))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) -1720276343294907915LL)))) : (((long long int) -6129984464107414417LL))))) ? (min((arr_2 [i_0]), (arr_2 [(short)7]))) : (((18446744073709551596ULL) >> (((((116700634U) << (((((/* implicit */int) arr_3 [i_1] [i_0])) + (6504))))) - (3019898869U)))))));
                var_19 = var_2;
            }
        } 
    } 
    var_20 = ((/* implicit */short) var_5);
}
