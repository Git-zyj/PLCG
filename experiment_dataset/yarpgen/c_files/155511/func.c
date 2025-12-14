/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155511
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
    var_15 &= var_10;
    var_16 = ((/* implicit */_Bool) min((((long long int) ((((/* implicit */_Bool) 1102927166U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (4689728862764046703ULL)))), (((/* implicit */long long int) var_5))));
    var_17 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((var_11) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)34115))))))))) <= (((/* implicit */int) var_7))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_18 = (!(((_Bool) arr_5 [i_0] [i_0])));
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_1])) & ((((!((_Bool)1))) ? (((/* implicit */int) min((var_13), (arr_3 [i_1])))) : (((/* implicit */int) ((signed char) arr_0 [i_1])))))));
                var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) arr_5 [i_0] [i_0]))));
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) (-(((min((4435073952054609456ULL), (var_6))) << (((min((((/* implicit */long long int) 2117582945U)), (9223372036854775807LL))) - (2117582927LL))))))))));
}
