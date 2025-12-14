/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137023
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_12 = ((((/* implicit */_Bool) min((((((/* implicit */int) arr_3 [i_0] [i_1])) * (((/* implicit */int) (_Bool)1)))), ((+(((/* implicit */int) arr_0 [i_1]))))))) ? (0) : (((/* implicit */int) arr_3 [i_0] [i_1])));
                var_13 = ((/* implicit */signed char) (-(max((((/* implicit */unsigned long long int) ((4294967289U) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)82)))))), ((-(6739057716424466540ULL)))))));
            }
        } 
    } 
    var_14 = (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (var_3)))) ? ((((-2147483647 - 1)) ^ (((/* implicit */int) var_11)))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_8)))))));
}
