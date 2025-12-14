/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152382
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
    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((/* implicit */int) var_10)) - ((+(((/* implicit */int) var_3)))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_4 [i_1 - 2] [i_1 - 2] [i_1 + 2])) : (((/* implicit */int) arr_4 [i_1 - 2] [i_1 - 2] [i_1 + 2])))), (((/* implicit */int) ((unsigned short) (unsigned char)126)))));
                                var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) arr_12 [i_0] [i_1] [i_1]))) && (((/* implicit */_Bool) ((unsigned short) arr_8 [(unsigned short)7] [i_1 - 2] [i_1 - 1])))));
                            }
                        } 
                    } 
                    arr_14 [8ULL] [8ULL] [i_1] = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3))))), (max((var_5), (var_5)))))) ? (((/* implicit */int) min((min((((/* implicit */short) arr_9 [i_0] [i_0] [i_0] [i_0])), (arr_4 [i_0] [i_0] [i_0]))), (((/* implicit */short) (signed char)-11))))) : (((/* implicit */int) ((short) (+(((/* implicit */int) (_Bool)0)))))));
                }
            } 
        } 
    } 
    var_18 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_8) ^ (948328628U)))) ? (((((/* implicit */_Bool) var_12)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (max((var_13), (((/* implicit */unsigned long long int) (unsigned short)65535))))))) ? (var_13) : (max((((((/* implicit */_Bool) var_12)) ? (6967557522770878366ULL) : (((/* implicit */unsigned long long int) var_0)))), (max((var_7), (var_13)))))));
}
