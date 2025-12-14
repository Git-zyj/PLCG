/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143741
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
    for (unsigned int i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            for (long long int i_2 = 4; i_2 < 11; i_2 += 1) 
            {
                {
                    arr_8 [i_1] [i_0 + 2] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_1))) ? (((/* implicit */int) ((_Bool) var_14))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1] [i_1])))))))) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_1 [i_2 - 2] [i_1 + 1])), (4294967295U)))) ? ((~(((/* implicit */int) (signed char)-1)))) : (((/* implicit */int) arr_2 [i_1] [i_0 - 1] [i_1])))));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        var_16 ^= ((/* implicit */signed char) arr_1 [(_Bool)0] [i_1]);
                        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) (+((((!(((/* implicit */_Bool) (signed char)0)))) ? (var_3) : (((((/* implicit */int) (signed char)0)) | (((/* implicit */int) (signed char)5)))))))))));
                    }
                }
            } 
        } 
    } 
    var_18 *= ((/* implicit */signed char) (~((((!(((/* implicit */_Bool) (signed char)102)))) ? (-4524368280331583912LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14344))) >= (var_14)))))))));
}
