/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122655
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
    var_16 = ((/* implicit */signed char) ((long long int) (~(((716625079) << (((((/* implicit */int) (short)3916)) - (3915))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (((~(var_14))) >= (((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */int) (short)-3917)) : (((/* implicit */int) var_15))))))) >= (((/* implicit */int) ((((((/* implicit */_Bool) var_7)) ? (var_2) : (var_6))) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                /* LoopNest 3 */
                for (signed char i_2 = 1; i_2 < 18; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 18; i_4 += 4) 
                        {
                            {
                                arr_15 [(_Bool)1] [i_2] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) (unsigned char)230)) : (var_3)))) ? ((+(((/* implicit */int) var_10)))) : (((/* implicit */int) var_8))))), ((~(arr_14 [i_4] [i_3] [i_2] [i_1] [i_0])))));
                                var_17 = ((/* implicit */int) ((((((((((/* implicit */int) arr_13 [i_2])) - (((/* implicit */int) (short)20749)))) + (2147483647))) << (((((arr_8 [i_2] [i_2] [i_2] [i_2 + 1]) + (5861873769964833289LL))) - (9LL))))) >= (max((((/* implicit */int) (!(((/* implicit */_Bool) var_12))))), (var_14)))));
                                arr_16 [i_0] [i_2] [i_0] [i_0] [i_0] [i_0] [(unsigned short)7] = ((/* implicit */short) ((max((((((/* implicit */unsigned long long int) arr_1 [i_0])) ^ (arr_3 [i_0] [i_1 - 2]))), (((/* implicit */unsigned long long int) ((long long int) (unsigned char)26))))) * (((/* implicit */unsigned long long int) ((int) arr_9 [i_1 + 1])))));
                                arr_17 [i_0] [i_1] [i_1] [i_3] [i_2] = ((min(((+(1301718089U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (arr_10 [i_0] [i_2]) : (((/* implicit */int) var_15))))))) ^ (((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned char)229)) & (((/* implicit */int) var_10)))) ^ (((/* implicit */int) (_Bool)1))))));
                            }
                        } 
                    } 
                } 
                arr_18 [(unsigned short)14] [i_1 - 2] [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)43223))))))))));
            }
        } 
    } 
}
