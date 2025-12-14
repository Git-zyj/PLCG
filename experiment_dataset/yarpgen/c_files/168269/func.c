/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168269
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
    var_18 = ((/* implicit */int) var_5);
    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(min((12381314413081905770ULL), (((/* implicit */unsigned long long int) (signed char)-1))))))) ? ((-(((((/* implicit */int) var_5)) % (((/* implicit */int) var_5)))))) : (var_12))))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 11; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 12; i_1 += 4) 
        {
            {
                var_20 ^= ((/* implicit */int) arr_3 [i_1]);
                var_21 = ((/* implicit */int) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) (signed char)0)) ? (6599982241570937880ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)115))))) : (arr_4 [i_0] [i_0])));
                var_22 = ((/* implicit */int) ((16046976480081732939ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)1)))));
                var_23 ^= ((/* implicit */int) max((((/* implicit */unsigned long long int) -705194335)), (2399767593627818704ULL)));
                var_24 = ((/* implicit */int) max((6406148823878278173ULL), (((/* implicit */unsigned long long int) (signed char)9))));
            }
        } 
    } 
    var_25 = ((/* implicit */signed char) var_1);
}
