/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174429
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
    for (int i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        for (unsigned char i_1 = 4; i_1 < 14; i_1 += 4) 
        {
            {
                arr_6 [i_0] = ((/* implicit */signed char) (~((~(((((/* implicit */int) var_6)) >> (((/* implicit */int) arr_3 [i_0]))))))));
                var_11 += ((/* implicit */long long int) max((((/* implicit */int) ((min((9223372036854775807LL), (((/* implicit */long long int) (unsigned char)0)))) == (7755876653917337926LL)))), (((((/* implicit */int) var_3)) << (((arr_0 [i_0 + 1]) - (4992405702441605131ULL)))))));
            }
        } 
    } 
    var_12 ^= ((/* implicit */unsigned long long int) var_5);
    var_13 = ((/* implicit */int) var_8);
    var_14 = ((/* implicit */short) ((min((((var_6) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_6))))), (((/* implicit */long long int) ((((/* implicit */int) var_4)) | (((/* implicit */int) (unsigned char)247))))))) != (((/* implicit */long long int) ((var_10) + (((/* implicit */int) var_0)))))));
}
