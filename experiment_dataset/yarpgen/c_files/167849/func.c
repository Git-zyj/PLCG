/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167849
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
    var_13 = ((/* implicit */unsigned int) min((((/* implicit */long long int) (+(((/* implicit */int) var_8))))), (((((/* implicit */_Bool) (unsigned short)39475)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-52)), ((unsigned char)102)))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (short i_1 = 4; i_1 < 9; i_1 += 2) 
        {
            for (short i_2 = 2; i_2 < 12; i_2 += 1) 
            {
                {
                    arr_8 [i_1] [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */int) var_6)) + (arr_0 [i_2 + 1]))) % (((/* implicit */int) ((signed char) 3714341251U)))));
                    arr_9 [i_0] [i_2] = ((/* implicit */short) ((unsigned char) (~(-2147483643))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            {
                                var_14 *= ((/* implicit */_Bool) ((((unsigned int) var_9)) % (((/* implicit */unsigned int) ((((/* implicit */_Bool) 455614510)) ? (((/* implicit */int) (signed char)100)) : (((/* implicit */int) (unsigned short)39478)))))));
                                var_15 ^= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_1 [i_2 - 2])) ? (((/* implicit */int) (unsigned short)39458)) : (arr_1 [i_1 - 2]))) | ((((-(((/* implicit */int) var_5)))) - (((/* implicit */int) ((((/* implicit */int) (unsigned char)203)) >= (((/* implicit */int) (_Bool)1)))))))));
                                arr_16 [i_0] [i_1 - 3] [i_2] [i_3] [i_4] = ((((/* implicit */_Bool) arr_7 [i_4] [i_1 - 1] [i_2] [7U])) ? (var_2) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-15)) % (((/* implicit */int) (unsigned short)15))))) ? (2739244294U) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)39496)) % (((/* implicit */int) var_3)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
