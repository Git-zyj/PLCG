/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154247
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 ^= ((/* implicit */long long int) ((unsigned char) ((((/* implicit */int) ((1478772921070633876LL) > (((/* implicit */long long int) ((/* implicit */int) (unsigned char)196)))))) > (((/* implicit */int) ((((/* implicit */int) (unsigned char)128)) >= (((/* implicit */int) var_6))))))));
                var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (-(((((/* implicit */_Bool) 1478772921070633888LL)) ? (((/* implicit */int) (short)23533)) : (((((/* implicit */_Bool) 1478772921070633859LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)132)))))))))));
            }
        } 
    } 
    var_19 &= ((((/* implicit */int) var_7)) == (max((((((/* implicit */int) var_10)) << (((/* implicit */int) var_10)))), (((((/* implicit */_Bool) (unsigned char)229)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)1)))))));
    var_20 ^= ((17592161449721226770ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))));
    var_21 *= ((/* implicit */unsigned char) min(((-(((/* implicit */int) var_4)))), (((/* implicit */int) (short)-32616))));
}
