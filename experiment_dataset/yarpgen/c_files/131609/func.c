/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131609
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
    var_16 -= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)36)), ((-(((((/* implicit */_Bool) var_15)) ? (6316833010873305078ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [(short)8] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4))))), (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (arr_4 [i_0 + 1]) : (((/* implicit */unsigned long long int) var_3)))))))));
                var_17 ^= ((/* implicit */unsigned char) (+(var_10)));
                var_18 *= ((/* implicit */unsigned short) ((((((/* implicit */int) min(((short)-24001), (((/* implicit */short) var_6))))) + (((/* implicit */int) min(((_Bool)0), (var_7)))))) * (((/* implicit */int) (_Bool)0))));
                arr_7 [i_0 + 1] [i_1] = ((((/* implicit */int) arr_0 [i_0 - 1])) | ((((_Bool)1) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned char)142)))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (((((+(262143))) > (((/* implicit */int) (short)0)))) ? (((/* implicit */long long int) var_13)) : (((long long int) ((13664005969949817140ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))))));
}
