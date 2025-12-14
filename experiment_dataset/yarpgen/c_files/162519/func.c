/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162519
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
    var_20 = ((/* implicit */short) var_9);
    var_21 = ((/* implicit */unsigned char) ((1555233546U) << (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_22 = ((/* implicit */unsigned char) var_4);
                var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) arr_0 [i_0])))))))) && (((/* implicit */_Bool) ((((/* implicit */int) var_11)) - (((/* implicit */int) var_12))))))))));
                var_24 = ((/* implicit */short) (+(((/* implicit */int) max((min((arr_3 [i_1] [i_1]), (((/* implicit */short) var_8)))), (arr_3 [i_1] [i_0]))))));
                var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) ((long long int) ((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) (short)-32751))))))));
                var_26 = ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)6))))), ((unsigned char)149))))) - (min((((/* implicit */long long int) max((4294967290U), (((/* implicit */unsigned int) (_Bool)0))))), ((+(70093866270720LL))))));
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned char) ((((((var_7) - (((/* implicit */long long int) ((/* implicit */int) var_0))))) - (((((/* implicit */long long int) ((/* implicit */int) var_14))) / ((-9223372036854775807LL - 1LL)))))) != (((/* implicit */long long int) var_5))));
}
