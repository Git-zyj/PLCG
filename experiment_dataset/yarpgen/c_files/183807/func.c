/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183807
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 21; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)135)) & (((/* implicit */int) (unsigned short)65535))))))) ? (((/* implicit */int) (!(var_5)))) : (((((/* implicit */_Bool) (unsigned short)33119)) ? (((/* implicit */int) (unsigned char)165)) : (((/* implicit */int) (unsigned char)165))))));
                    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) (((_Bool)1) ? ((+(((((/* implicit */_Bool) var_13)) ? (6LL) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0]))))))) : (max((((/* implicit */long long int) (unsigned char)234)), (arr_7 [i_2 - 1] [i_2 - 1] [i_2] [i_0]))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 4) 
    {
        var_17 = ((/* implicit */unsigned long long int) max((9223372036854775807LL), (((/* implicit */long long int) (-2147483647 - 1)))));
        var_18 = (+(18446744073709551615ULL));
    }
    var_19 = ((/* implicit */unsigned long long int) max((min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8)))), (((/* implicit */int) (short)16384)))), (((/* implicit */int) var_14))));
}
