/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115499
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
    for (long long int i_0 = 2; i_0 < 7; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_10 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) > (arr_2 [i_1]))))) * (((arr_2 [i_0]) >> (((/* implicit */int) (unsigned char)2))))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)54))))) | (((/* implicit */int) (((-9223372036854775807LL - 1LL)) != (((/* implicit */long long int) 32767U)))))))) : (min((((4294967295U) & (65535U))), (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) << (((((/* implicit */int) arr_0 [(unsigned short)3] [i_1])) + (47))))))))));
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */long long int) ((((((/* implicit */int) min((((/* implicit */unsigned short) (signed char)49)), ((unsigned short)26823)))) >> (((((((/* implicit */_Bool) arr_5 [i_1] [i_0])) ? (((/* implicit */int) arr_0 [5U] [i_1])) : (((/* implicit */int) arr_3 [i_1] [i_1])))) + (46))))) < (((((/* implicit */int) min((var_6), (((/* implicit */unsigned char) arr_0 [i_0 + 2] [i_1]))))) + (((((/* implicit */int) arr_0 [(_Bool)1] [i_1])) * (((/* implicit */int) (_Bool)0))))))));
                var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) ((min((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) arr_1 [9LL]))))), ((+(((/* implicit */int) var_1)))))) | (((/* implicit */int) min((((/* implicit */unsigned short) min(((short)-12546), (((/* implicit */short) var_3))))), (min((((/* implicit */unsigned short) var_6)), (var_9)))))))))));
            }
        } 
    } 
    var_12 = ((/* implicit */signed char) ((((/* implicit */long long int) min((((((/* implicit */int) var_4)) | (-1057975772))), (((/* implicit */int) min((var_1), ((unsigned short)65528))))))) >= (((((((((/* implicit */_Bool) 228743411U)) ? (-7407596143532045684LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) + (9223372036854775807LL))) << ((((((+(((/* implicit */int) (short)-10315)))) + (10340))) - (24)))))));
}
