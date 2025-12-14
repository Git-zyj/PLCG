/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136522
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
    var_14 ^= ((/* implicit */unsigned short) (((_Bool)1) ? (var_10) : ((+(0LL)))));
    var_15 ^= ((/* implicit */short) max((((/* implicit */int) (!(((/* implicit */_Bool) max((var_13), (((/* implicit */int) var_11)))))))), (max(((+(((/* implicit */int) (_Bool)1)))), (((((/* implicit */int) var_12)) | (((/* implicit */int) var_5))))))));
    var_16 = ((/* implicit */unsigned char) var_12);
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_17 *= (-(var_0));
                var_18 = 100436158U;
            }
        } 
    } 
}
