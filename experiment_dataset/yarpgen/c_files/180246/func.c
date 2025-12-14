/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180246
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
    var_12 = ((/* implicit */signed char) 954250902);
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */int) var_2)) / (((/* implicit */int) var_9))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */short) ((((_Bool) arr_2 [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_5) : (var_5)))) ? (((/* implicit */int) ((short) 3337383888U))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) != (var_4))))))) : (((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((((/* implicit */_Bool) var_6)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) : (532676608ULL)))));
                var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3532899968U)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_1 + 1])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_4 [(signed char)20] [i_0] [i_1 + 1]))))) : (-6871173513468043055LL)))))));
            }
        } 
    } 
}
