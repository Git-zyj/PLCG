/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169333
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
    var_20 = ((/* implicit */unsigned short) ((_Bool) var_9));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            {
                                arr_12 [i_0] [i_0] [3ULL] [i_0] [i_0] [i_4] [5] = ((/* implicit */unsigned char) ((unsigned short) 3657959932U));
                                arr_13 [i_4] [i_1] [7ULL] = ((/* implicit */unsigned char) ((arr_10 [i_4] [10] [i_2] [(unsigned short)7] [i_1] [i_4]) <= (arr_10 [i_4] [i_4] [i_2] [i_2] [i_4] [i_4])));
                                var_21 *= ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_10 [i_0] [i_3] [i_2] [2U] [i_1] [i_0]), (var_5)))) ? (((/* implicit */unsigned long long int) (-((+(1072777332)))))) : (0ULL)));
                                var_22 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7703110713173213406LL)) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_0 [i_0] [i_1]), (var_8))))) : (7703110713173213406LL)))) | (max((((/* implicit */unsigned long long int) 7703110713173213414LL)), (((unsigned long long int) 1023))))));
                            }
                        } 
                    } 
                } 
                var_23 = max((min((((/* implicit */unsigned long long int) arr_5 [i_0])), (var_2))), (min((arr_3 [i_0]), (var_2))));
                var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((short) ((unsigned long long int) (unsigned char)217))))));
                var_25 = min((((/* implicit */unsigned long long int) (~((+(((/* implicit */int) arr_11 [i_0] [i_1] [i_1] [i_0]))))))), (18446744073709551615ULL));
                arr_14 [i_1] [i_1] [i_0] |= ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) var_8))) ? (((unsigned long long int) var_14)) : (((arr_3 [i_0]) | (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])))))));
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_15))))) ? (4956885085546900544ULL) : (((/* implicit */unsigned long long int) var_16))));
}
