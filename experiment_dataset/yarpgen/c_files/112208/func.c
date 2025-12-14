/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112208
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
    for (unsigned int i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) min((((/* implicit */long long int) arr_2 [i_1])), (((((/* implicit */_Bool) ((short) arr_4 [i_1] [i_0]))) ? (arr_3 [i_1]) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1]))) : (arr_0 [(_Bool)1]))))))))));
                arr_5 [i_1] [i_1] = ((/* implicit */int) (+(min((arr_0 [8ULL]), (arr_0 [i_0 + 1])))));
            }
        } 
    } 
    var_21 &= ((/* implicit */short) min((((((/* implicit */_Bool) var_13)) ? (var_13) : ((~(var_13))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(var_9)))))))));
    var_22 = ((unsigned int) min((var_9), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_12)))))));
    var_23 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((var_14) | (var_0))))))));
    var_24 *= ((((/* implicit */_Bool) var_16)) ? (((min((((/* implicit */unsigned int) var_10)), (var_13))) & (min((var_13), (((/* implicit */unsigned int) var_11)))))) : (((min((((/* implicit */unsigned int) var_10)), (var_0))) >> (((var_4) - (2022072961))))));
}
