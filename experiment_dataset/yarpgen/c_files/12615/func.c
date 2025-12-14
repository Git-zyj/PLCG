/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12615
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 = min((min((((long long int) var_10)), (min((((/* implicit */long long int) arr_3 [i_0])), (2980715617920937184LL))))), (((/* implicit */long long int) (_Bool)1)));
                var_15 ^= ((/* implicit */_Bool) -1360243825846192318LL);
                arr_7 [i_0] = min(((((_Bool)0) ? (((var_7) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (var_10))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (_Bool)1)))))))), (((((/* implicit */_Bool) (-(1360243825846192314LL)))) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_4))))));
                var_16 ^= ((/* implicit */_Bool) arr_6 [i_1] [i_0]);
                var_17 ^= ((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) / (((long long int) -9151349374334292632LL)))) % (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1)))))));
            }
        } 
    } 
    var_18 *= ((/* implicit */_Bool) -1360243825846192341LL);
}
