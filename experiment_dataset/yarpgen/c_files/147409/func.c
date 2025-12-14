/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147409
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
    var_15 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((((/* implicit */int) var_2)) << (((14829578025278211755ULL) - (14829578025278211740ULL)))))) : (var_11)));
    var_16 = ((/* implicit */unsigned int) var_0);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                arr_7 [(signed char)7] [i_1] = ((/* implicit */unsigned short) arr_5 [i_0] [i_1]);
                var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) 17592186044416ULL)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)236))));
            }
        } 
    } 
}
