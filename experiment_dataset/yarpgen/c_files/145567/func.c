/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145567
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
    for (unsigned short i_0 = 4; i_0 < 7; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */unsigned int) arr_2 [i_1] [i_0] [i_0]);
                arr_5 [3] [i_1] = ((/* implicit */int) ((unsigned int) ((((/* implicit */int) (_Bool)1)) ^ (833456867))));
                var_20 *= ((/* implicit */short) ((unsigned long long int) arr_3 [i_1] [i_1] [i_1]));
                var_21 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 - 2]))) < (min((((/* implicit */long long int) 457317391)), (var_3)))));
                arr_6 [i_0 + 3] [i_1] = ((/* implicit */_Bool) (+(min((((((/* implicit */_Bool) 2041543794307994413ULL)) ? (((/* implicit */int) arr_0 [i_0])) : (457317391))), (((/* implicit */int) arr_0 [i_0]))))));
            }
        } 
    } 
    var_22 = ((/* implicit */int) ((((/* implicit */_Bool) var_18)) ? (max((var_18), (((/* implicit */unsigned long long int) min((1031638782U), (((/* implicit */unsigned int) -457317391))))))) : (((/* implicit */unsigned long long int) (-(((((/* implicit */int) var_5)) | (((/* implicit */int) var_17)))))))));
}
