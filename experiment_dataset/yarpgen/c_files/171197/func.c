/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171197
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
    var_13 = ((/* implicit */unsigned long long int) max(((+(((((/* implicit */int) var_1)) + (((/* implicit */int) var_1)))))), (((/* implicit */int) ((signed char) (unsigned char)218)))));
    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))) ? (1ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_4) < (((/* implicit */int) var_0))))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1428983028591989018LL)) ? (536739840U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)33406)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (max((16008446731326240287ULL), (((/* implicit */unsigned long long int) var_9)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (var_10) : (((/* implicit */int) (unsigned short)33423))))) + ((-9223372036854775807LL - 1LL)))))));
    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) max((((/* implicit */long long int) var_1)), (var_12))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 21; i_1 += 2) 
        {
            for (short i_2 = 4; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_8 [i_2] = ((/* implicit */_Bool) arr_7 [(short)9] [i_1] [i_2 - 3] [i_2 - 1]);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_16 ^= ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) (+(62673723U))))))) % (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)48)), (var_5))))));
                                var_17 = ((/* implicit */long long int) ((arr_12 [i_3] [i_1 - 2] [i_2 - 1]) ? (((((/* implicit */int) var_5)) ^ (((/* implicit */int) var_9)))) : (((/* implicit */int) max((((/* implicit */short) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_6))))), (arr_5 [i_4] [(short)3]))))));
                                arr_15 [8LL] [(_Bool)0] [i_2] [i_1 - 2] [i_0] = ((/* implicit */unsigned char) (~(1ULL)));
                                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((unsigned short) arr_13 [i_0] [i_1 - 1] [(_Bool)1] [i_3] [i_4]))) : ((~(var_10)))));
                                var_19 = ((/* implicit */int) max((((unsigned long long int) arr_6 [i_1] [i_2] [i_1 - 2])), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_14 [i_0] [i_2] [i_3] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_12))) - (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_9))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
