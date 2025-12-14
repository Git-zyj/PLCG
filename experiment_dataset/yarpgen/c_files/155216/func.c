/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155216
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
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+((+(((/* implicit */int) var_8))))))) ? (((((/* implicit */_Bool) (unsigned char)192)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (unsigned short)50232)))) : (((/* implicit */int) var_11))));
    /* LoopNest 2 */
    for (long long int i_0 = 4; i_0 < 15; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            {
                var_21 *= ((/* implicit */unsigned long long int) ((signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) & (arr_0 [i_0] [i_1]))) & (((arr_5 [(short)8]) >> (((arr_0 [i_0] [12ULL]) - (4347394214323272772ULL))))))));
                var_22 = ((/* implicit */signed char) ((((((/* implicit */long long int) (+(((/* implicit */int) var_0))))) + (var_14))) > (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)63)))))));
                arr_6 [i_0] [i_1] = ((/* implicit */int) (~(((((7123680102431264237LL) == (((/* implicit */long long int) ((/* implicit */int) (unsigned char)89))))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)19152))) / (var_7))) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)215)))))))));
                /* LoopSeq 1 */
                for (signed char i_2 = 1; i_2 < 18; i_2 += 4) 
                {
                    arr_9 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((unsigned short) (-(arr_8 [i_2] [i_0 - 3] [i_2] [i_2 - 1]))));
                    var_23 = ((/* implicit */signed char) min((((/* implicit */long long int) min(((-(((/* implicit */int) var_5)))), (((((/* implicit */int) (unsigned char)63)) & (((/* implicit */int) var_8))))))), (((long long int) max(((signed char)(-127 - 1)), ((signed char)97))))));
                }
            }
        } 
    } 
    var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) (-(((/* implicit */int) (signed char)3)))))));
    var_25 = max(((~(((((/* implicit */int) (unsigned char)63)) >> (((((/* implicit */int) (unsigned short)55311)) - (55282))))))), (((/* implicit */int) var_0)));
    var_26 = ((/* implicit */signed char) min((3045199232859300047ULL), (((/* implicit */unsigned long long int) (signed char)66))));
}
