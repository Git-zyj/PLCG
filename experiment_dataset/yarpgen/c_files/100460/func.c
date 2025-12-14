/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100460
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
    var_16 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1728015177U)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_8)) < (10386530248141105855ULL)))))));
    var_17 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)16384))) != (((((/* implicit */_Bool) 2090044084846432907ULL)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) 3547721811U))))));
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) ((var_14) - (((/* implicit */long long int) var_10)))))) ? ((+(((var_14) + (((/* implicit */long long int) ((/* implicit */int) var_5))))))) : (((/* implicit */long long int) var_11))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                arr_5 [9ULL] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 7590870325853168437LL)) ? (4987442494399623820LL) : (-1023644525589412527LL))))) >> (((((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_1 [i_1] [i_0]) : (((/* implicit */long long int) var_13)))) + (1580482262379169059LL)))));
                var_19 = ((/* implicit */int) arr_1 [i_0] [i_0]);
            }
        } 
    } 
}
