/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184308
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    arr_8 [i_1] [i_0 + 1] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((14537630326984346916ULL), (3909113746725204700ULL)))) || ((!(((/* implicit */_Bool) var_11)))))))) | (max((((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) < (var_0)))), (((((/* implicit */_Bool) (signed char)-40)) ? ((-9223372036854775807LL - 1LL)) : (var_10)))))));
                    arr_9 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */unsigned long long int) var_5);
                    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)32024)) ? (((/* implicit */int) var_5)) : ((+(((/* implicit */int) arr_6 [i_1] [i_1] [i_1]))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned char) (!(((((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_10)))) || (((/* implicit */_Bool) max((((/* implicit */int) var_3)), (var_11))))))));
    var_15 = ((/* implicit */unsigned char) var_9);
}
