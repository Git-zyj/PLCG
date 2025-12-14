/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145900
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
    var_15 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)26)) || (((/* implicit */_Bool) (unsigned char)48)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_4 [i_0]) - (arr_4 [i_0])))) ? (((/* implicit */int) (unsigned short)30795)) : (max((((/* implicit */int) arr_1 [i_2])), (var_9)))));
                    var_17 = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_6)), ((unsigned char)71)))) ? (((((/* implicit */_Bool) 16435233910709522526ULL)) ? (14387662278481473301ULL) : (((/* implicit */unsigned long long int) 4160028778573619587LL)))) : (((/* implicit */unsigned long long int) (+(2733489698U)))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (signed char i_4 = 3; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_18 ^= min(((((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [i_0] [16ULL] [i_0] [i_4 + 1]))) : (max((16435233910709522520ULL), (((/* implicit */unsigned long long int) var_2)))))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned char)162)) ? (((/* implicit */int) var_3)) : (var_4))) + (((/* implicit */int) min((var_3), (var_6))))))));
                                var_19 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 14387662278481473287ULL)) ? (((/* implicit */unsigned long long int) 715615957)) : (16435233910709522511ULL))), (((/* implicit */unsigned long long int) (signed char)0))))) ? (((((/* implicit */_Bool) min((arr_4 [i_1]), (((/* implicit */unsigned long long int) (unsigned short)16805))))) ? (max((562932773552128ULL), (16435233910709522547ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)-31702)) : (((/* implicit */int) arr_9 [i_4] [(short)17] [i_4] [(_Bool)1]))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2011510163000029081ULL)) ? (((/* implicit */int) arr_11 [i_0] [i_1] [5LL] [i_3] [i_4])) : (((/* implicit */int) (unsigned char)208))))) ? (4160028778573619610LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-11)) ? (((/* implicit */int) (unsigned char)51)) : (((/* implicit */int) (unsigned char)28))))))))));
                                arr_15 [i_0] [i_0] [i_2] [i_4] [i_4 + 1] [i_4] = max((((/* implicit */int) ((_Bool) 4194303ULL))), (((var_8) ? (((/* implicit */int) arr_7 [i_4 - 1] [i_4 + 2] [i_4 - 2])) : (((/* implicit */int) arr_13 [i_0] [i_3] [i_4 - 2] [2ULL] [i_0] [i_3] [i_0])))));
                                arr_16 [i_4] [i_2] [i_3] [i_3] [i_3] = ((/* implicit */_Bool) max((4059081795228078329ULL), (((/* implicit */unsigned long long int) (short)-20269))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
