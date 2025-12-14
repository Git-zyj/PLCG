/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120326
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
    for (int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */short) var_6);
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 16764729695215301122ULL)) ? (var_14) : (((/* implicit */int) (short)-11992))))) ? (((((/* implicit */long long int) ((/* implicit */int) (short)30204))) - ((+(-8112286919940243685LL))))) : (((/* implicit */long long int) (+((+(var_13))))))));
                var_16 &= ((/* implicit */_Bool) max((((((/* implicit */int) (_Bool)1)) >> (((2147483647) - (2147483618))))), (((((((/* implicit */_Bool) (unsigned char)253)) ? (2147483640) : (-2147483647))) ^ ((+(((/* implicit */int) var_12))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) ^ (max((((/* implicit */unsigned long long int) -544418534134822222LL)), (var_10)))))) ? (((/* implicit */long long int) (+(((((/* implicit */int) (unsigned short)15)) / (((/* implicit */int) var_0))))))) : ((-((-(-7935839090167688000LL)))))));
    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */int) var_7)) >> (((((/* implicit */int) var_9)) - (11360))))))));
    var_19 = ((/* implicit */unsigned char) -2147483641);
}
