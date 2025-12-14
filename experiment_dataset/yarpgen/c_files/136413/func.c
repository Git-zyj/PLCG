/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136413
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            {
                                var_12 ^= (~(((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) arr_6 [i_3] [i_3 + 1] [i_3] [i_3 + 1])) : (((/* implicit */int) arr_6 [i_3] [i_3 + 1] [15LL] [i_3 + 1])))));
                                var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) var_2))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (14U))) != (min((var_10), (((/* implicit */unsigned int) (_Bool)0)))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-58))))) : (11ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) 3ULL)) ? (arr_9 [i_0] [i_0] [i_1] [i_0]) : (((/* implicit */unsigned long long int) arr_4 [i_0] [i_2] [i_2])))))))))));
                    var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) var_1)) ? (3988069056487067378LL) : (((/* implicit */long long int) ((/* implicit */int) (short)32740)))))))) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_4)) ? (22ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)223)))))))));
                    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_3))) ? (((((/* implicit */_Bool) 18446744073709551579ULL)) ? (((/* implicit */int) (signed char)96)) : (((/* implicit */int) (unsigned char)31)))) : ((~(((/* implicit */int) arr_8 [i_0] [i_0]))))))) ? (((arr_11 [i_0] [(unsigned char)10] [i_1] [i_2] [i_2] [3LL]) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_2] [i_2] [i_1] [i_0] [i_0] [i_0]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_1] [i_2]))) & (((((/* implicit */_Bool) var_1)) ? (arr_9 [i_0] [12LL] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */signed char) (short)-22643);
    var_18 = ((((/* implicit */_Bool) var_5)) ? (((unsigned long long int) ((unsigned char) var_7))) : ((+(((((/* implicit */_Bool) 8U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_2))))));
}
