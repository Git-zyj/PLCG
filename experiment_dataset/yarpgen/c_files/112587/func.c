/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112587
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
    var_13 = ((/* implicit */short) var_8);
    /* LoopNest 2 */
    for (signed char i_0 = 4; i_0 < 15; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) (unsigned short)7044))));
                arr_6 [i_0 + 3] = max((((/* implicit */unsigned long long int) (signed char)-125)), (1735733244858368633ULL));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2915274691458811688ULL)) ? ((+(2915274691458811688ULL))) : (((((/* implicit */_Bool) var_7)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (+(var_4)))))) : (var_5))))));
    var_16 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(var_5)))) ? (15531469382250739926ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)19740)))));
    var_17 = ((((/* implicit */_Bool) 15531469382250739933ULL)) ? (((((/* implicit */_Bool) var_8)) ? (var_3) : (3115887659297690414ULL))) : ((+(var_7))));
}
