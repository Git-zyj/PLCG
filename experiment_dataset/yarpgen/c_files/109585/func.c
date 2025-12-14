/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109585
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
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) var_7)) | (((/* implicit */int) (!(((/* implicit */_Bool) var_17)))))));
    var_19 = ((/* implicit */unsigned char) ((var_5) >= (var_10)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */int) min((var_20), ((((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1]))))))) << (((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1])))))) | (10LL)))))));
                var_21 = ((/* implicit */unsigned short) ((((0) ^ (((((/* implicit */int) arr_1 [i_0])) >> (((((/* implicit */int) arr_4 [i_1] [i_1])) - (115))))))) / (min((arr_5 [i_0] [i_0] [i_1]), (arr_5 [i_0] [i_0] [i_1])))));
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) min((var_22), (var_6)));
}
