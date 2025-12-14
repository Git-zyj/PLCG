/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113016
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
    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((((((/* implicit */int) (unsigned char)182)) + (-1697748290))) != (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))) : (((/* implicit */int) ((((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)74))) : (var_3))) > (((/* implicit */long long int) ((/* implicit */int) var_10))))))));
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) 3466006312566087556ULL)) && (((/* implicit */_Bool) var_14)))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (max((max((((/* implicit */long long int) (short)27364)), (var_15))), (((/* implicit */long long int) (~(((/* implicit */int) var_2)))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 8; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */signed char) ((unsigned char) arr_1 [i_1]));
                    arr_7 [i_1] [(_Bool)1] = ((/* implicit */unsigned char) min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) max((((((/* implicit */int) arr_2 [3U])) % (((/* implicit */int) arr_6 [i_0] [i_1])))), (((/* implicit */int) ((signed char) 9223372036854775807LL))))))));
                }
            } 
        } 
    } 
}
