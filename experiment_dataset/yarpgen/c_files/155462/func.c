/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155462
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
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    var_13 ^= ((/* implicit */unsigned char) min((((/* implicit */long long int) (short)10)), (4285685795368326618LL)));
                    var_14 |= min((arr_0 [i_0] [i_0]), (((/* implicit */short) (_Bool)1)));
                    var_15 = ((/* implicit */short) ((((/* implicit */int) (signed char)104)) * (((/* implicit */int) (short)-30749))));
                    var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) var_10))));
                    var_17 = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) >> (((var_7) - (7782962499274237573ULL)))))) ? (var_6) : (var_6))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */long long int) (-(var_6)));
}
