/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166351
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
    var_16 = ((/* implicit */short) (~((((~(var_14))) % (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)20428)) - (((/* implicit */int) var_12)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) 7674016452561123639LL)) ? (451348192841002425ULL) : (((/* implicit */unsigned long long int) var_8)))))), (((max((((/* implicit */unsigned long long int) arr_3 [i_0])), (17995395880868549190ULL))) % (((/* implicit */unsigned long long int) arr_1 [i_0]))))));
                var_17 *= ((/* implicit */unsigned char) ((unsigned long long int) -7674016452561123639LL));
                var_18 -= ((/* implicit */short) (+(((((/* implicit */int) (_Bool)1)) - (2147483647)))));
            }
        } 
    } 
    var_19 = (~(-15));
}
