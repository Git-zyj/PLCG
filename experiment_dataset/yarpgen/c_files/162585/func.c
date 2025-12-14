/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162585
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 18; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */unsigned char) min((((575334852396580864LL) == (((((/* implicit */_Bool) -575334852396580864LL)) ? (7086001471099381582LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)31744)), (var_7)))) || (((/* implicit */_Bool) ((575334852396580882LL) / (((/* implicit */long long int) ((/* implicit */int) var_1))))))))));
                    var_12 = min(((+(var_3))), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) 575334852396580851LL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)31730)))) << (((((var_3) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) - (2130450101U)))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2 - 1] [i_4] [i_0] [i_3] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) min((min((((/* implicit */short) var_4)), ((short)-31745))), (var_10)))), (min((min((var_7), (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (-575334852396580864LL) : (((/* implicit */long long int) 400302866)))))))));
                                arr_16 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) -1)) != (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((((/* implicit */int) (short)31742)) % (((/* implicit */int) (signed char)-38))))) : (4058687406U)))));
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) / (575334852396580864LL)));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_14 &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned int) (_Bool)1))))) ? (((/* implicit */long long int) 25)) : (var_0))))));
        var_15 = ((/* implicit */unsigned int) var_8);
        arr_19 [i_5] [i_5] = max((((/* implicit */long long int) var_4)), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (((((/* implicit */_Bool) var_8)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_10))))))));
        var_16 ^= ((/* implicit */unsigned short) var_9);
    }
    var_17 = ((((((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned char) var_4))))) ? (((/* implicit */unsigned int) max((((/* implicit */int) (signed char)3)), (400302866)))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4096))) ^ (2542594783U))))) | (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 575334852396580863LL)))))));
}
