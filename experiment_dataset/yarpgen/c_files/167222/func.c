/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167222
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
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) (short)32767))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) (signed char)121)) ? (1116457848316943151LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)189)))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [i_1] = var_14;
                var_21 = ((/* implicit */signed char) ((short) ((signed char) arr_3 [7ULL] [i_1] [i_0 + 1])));
                var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((+(((/* implicit */int) (unsigned char)199)))) + ((+(((/* implicit */int) (signed char)-4))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0 + 1])) ? (((/* implicit */long long int) ((((/* implicit */int) var_3)) >> (((2147483647) - (2147483619)))))) : (((((/* implicit */_Bool) -1361852182)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (arr_5 [i_0] [i_1]))))))));
                var_23 = ((/* implicit */int) arr_3 [i_0 + 1] [i_0] [i_1]);
                var_24 = (signed char)-64;
            }
        } 
    } 
    var_25 = ((/* implicit */short) (+(((((/* implicit */_Bool) 1959615512U)) ? (((/* implicit */int) var_18)) : ((-(((/* implicit */int) var_15))))))));
}
