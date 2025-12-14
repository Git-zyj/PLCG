/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125258
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+((-9223372036854775807LL - 1LL))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)254))) : (max((((/* implicit */long long int) (unsigned char)251)), (((((/* implicit */_Bool) (unsigned char)1)) ? (2842460384097683708LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
                var_17 ^= ((/* implicit */int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (arr_2 [(unsigned char)0]) : (1457344374092644464LL)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)1))) : (((((/* implicit */_Bool) (unsigned char)246)) ? (var_9) : (-1300170794554083336LL)))))));
                var_18 |= ((/* implicit */unsigned char) max(((-(((/* implicit */int) min((arr_1 [5LL]), (((/* implicit */short) (unsigned char)1))))))), (((/* implicit */int) arr_3 [i_0]))));
            }
        } 
    } 
    var_19 = (+(((((((/* implicit */_Bool) var_16)) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)254))))) - ((+(var_6))))));
}
