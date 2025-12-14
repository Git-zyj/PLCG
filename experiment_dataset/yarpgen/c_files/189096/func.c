/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189096
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_6 [i_0] [i_2] [i_2] |= ((/* implicit */signed char) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_0 [i_0] [i_2]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_2]))))))) >= (var_9))));
                    var_20 = ((/* implicit */unsigned int) max((var_20), (arr_3 [i_0] [i_1])));
                    arr_7 [i_0] [i_2] [i_2] [i_2] = ((/* implicit */long long int) arr_0 [i_0] [i_0]);
                    var_21 ^= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_2]))) == ((+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1])) : (arr_0 [i_1] [i_1])))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned int) max((((/* implicit */int) ((var_2) && (((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)40102)))))))), (((((/* implicit */_Bool) var_4)) ? (((((/* implicit */int) (unsigned short)63317)) - (((/* implicit */int) var_0)))) : (((/* implicit */int) var_2))))));
    var_23 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_9))))))) >> (((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 2146435072U)), (123145302310912ULL)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_4)))) - (23831)))));
    var_24 = ((/* implicit */long long int) (unsigned char)120);
    /* LoopNest 3 */
    for (signed char i_3 = 1; i_3 < 11; i_3 += 4) 
    {
        for (unsigned char i_4 = 4; i_4 < 11; i_4 += 2) 
        {
            for (unsigned short i_5 = 0; i_5 < 13; i_5 += 2) 
            {
                {
                    var_25 = ((/* implicit */short) var_15);
                    arr_19 [i_3] [i_3] = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (arr_1 [i_4 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-21722)))))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 0; i_6 < 13; i_6 += 4) 
                    {
                        for (signed char i_7 = 0; i_7 < 13; i_7 += 1) 
                        {
                            {
                                var_26 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-84)))))));
                                arr_24 [i_7] [i_7] [i_7] [i_3] [i_7] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_16 [i_3] [i_3] [i_5] [i_3])) : (((/* implicit */int) (unsigned short)65535))))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_2 [i_5] [i_3]))))) : (((((/* implicit */_Bool) arr_0 [i_4 + 1] [i_7])) ? (arr_10 [i_4] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-42))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
