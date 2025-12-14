/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105627
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
    var_14 = ((/* implicit */long long int) ((5848683858774531049LL) != (((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-37))) != (574946558345569258LL)))), (((((/* implicit */_Bool) var_10)) ? (var_10) : (((/* implicit */int) (signed char)-71)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            {
                var_15 ^= ((/* implicit */signed char) ((arr_3 [i_0] [i_0]) != (((/* implicit */int) ((((/* implicit */int) arr_5 [i_0] [i_1 + 1])) != (((/* implicit */int) var_5)))))));
                var_16 = ((/* implicit */int) min((max((4611686018410610688ULL), (((/* implicit */unsigned long long int) (~(-1720077554)))))), (((/* implicit */unsigned long long int) arr_4 [i_0]))));
                var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((/* implicit */int) var_11)) << (((-1424947292925467820LL) + (1424947292925467842LL))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) min((1424947292925467819LL), (((/* implicit */long long int) (signed char)-59))));
}
