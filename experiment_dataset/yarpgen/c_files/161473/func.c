/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161473
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
    for (unsigned int i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 = ((((/* implicit */_Bool) 16)) ? (7695095732081447540ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0 + 1]))))) == (((/* implicit */int) (signed char)127)))))));
                var_13 *= ((/* implicit */short) ((min((arr_1 [i_0 + 2] [i_1 - 1]), ((-(arr_3 [i_0] [8LL]))))) <= ((-(((((/* implicit */long long int) var_5)) / (arr_3 [i_0] [(_Bool)1])))))));
                var_14 ^= ((((((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_0 [5]))))) - (arr_2 [i_0]))) != (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((arr_0 [i_0 + 1]) || ((_Bool)0))))))));
            }
        } 
    } 
    var_15 = var_5;
    var_16 = ((/* implicit */_Bool) var_5);
    var_17 = ((/* implicit */int) ((unsigned long long int) (_Bool)1));
}
