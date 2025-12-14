/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141667
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
    var_17 -= ((/* implicit */long long int) var_14);
    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) max((18446744073709551592ULL), (24ULL))))));
    /* LoopNest 3 */
    for (short i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    arr_10 [i_2] [i_0] = ((/* implicit */int) ((unsigned char) 18446744073709551586ULL));
                    var_19 *= ((/* implicit */short) ((_Bool) (-(((/* implicit */int) arr_1 [i_0 - 1])))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((short) ((((/* implicit */_Bool) 4294967288U)) ? (-3464701315220403371LL) : (((/* implicit */long long int) var_12))))))));
    var_21 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)14))) + (var_6)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) 1685694999)))))) : (4294967288U)))));
}
