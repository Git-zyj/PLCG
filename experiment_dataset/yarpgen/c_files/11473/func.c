/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11473
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
    var_16 = ((/* implicit */signed char) (-(((/* implicit */int) (((-(((/* implicit */int) (_Bool)1)))) != (((/* implicit */int) var_10)))))));
    var_17 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (unsigned char)224)) : (((/* implicit */int) var_1))))), (max((((/* implicit */unsigned long long int) var_4)), (var_2)))))) && (((/* implicit */_Bool) ((unsigned short) min((((/* implicit */unsigned int) (_Bool)1)), (4294967289U)))))));
    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) var_7))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 23; i_0 += 4) 
    {
        for (long long int i_1 = 3; i_1 < 21; i_1 += 3) 
        {
            {
                var_19 = min((max((((/* implicit */long long int) (-(((/* implicit */int) arr_2 [i_0]))))), (max((((/* implicit */long long int) (_Bool)1)), (var_3))))), (((/* implicit */long long int) ((((arr_1 [i_0]) ? (688230302) : (((/* implicit */int) var_15)))) & (((/* implicit */int) arr_2 [i_1]))))));
                var_20 = ((/* implicit */long long int) ((((/* implicit */int) ((short) arr_0 [i_0]))) > (min((((((/* implicit */int) var_14)) | (((/* implicit */int) arr_2 [i_0])))), (((/* implicit */int) (_Bool)1))))));
            }
        } 
    } 
}
