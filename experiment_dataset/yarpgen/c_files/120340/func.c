/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120340
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
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((_Bool) (_Bool)1)) ? (max((((/* implicit */int) (unsigned short)255)), (var_13))) : (((int) var_1))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_7)) & (-1)))) : (((((/* implicit */_Bool) -2105590912)) ? (((((/* implicit */unsigned int) var_13)) + (4294967295U))) : (min((var_14), (var_11)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned short) (~(((((/* implicit */int) arr_3 [i_0] [i_2] [i_1])) ^ (((/* implicit */int) arr_3 [i_0] [i_1] [i_1]))))));
                    arr_7 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((arr_4 [i_0] [i_1]) + (((/* implicit */int) arr_0 [i_1] [i_1])))) + ((-(arr_4 [(signed char)11] [i_0])))));
                    var_17 = ((/* implicit */unsigned short) ((min((((7312146404884288857LL) % (((/* implicit */long long int) var_13)))), (((/* implicit */long long int) ((arr_2 [i_0] [i_1] [i_1]) ? (((/* implicit */int) arr_3 [i_0] [i_1] [i_1])) : (((/* implicit */int) (signed char)-43))))))) == (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)511)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 15; i_4 += 1) 
                        {
                            {
                                arr_15 [i_1] [i_0] [i_2] [i_3] [i_4] [i_1] [i_1] = max((((/* implicit */int) ((signed char) (short)-1))), (min((arr_8 [i_4 - 1] [i_4 - 1] [i_4] [i_4 + 1] [i_4 + 1]), (((/* implicit */int) (short)-12660)))));
                                var_18 = ((/* implicit */_Bool) (unsigned short)6544);
                                var_19 = ((/* implicit */signed char) (-(max((((/* implicit */int) (unsigned short)31326)), (arr_8 [i_2] [i_4 + 1] [i_4] [i_4 + 1] [i_4 - 1])))));
                                var_20 = ((/* implicit */signed char) (-(((/* implicit */int) ((signed char) (-(((/* implicit */int) (_Bool)1))))))));
                                var_21 = ((/* implicit */unsigned int) min(((unsigned char)188), (((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_2] [i_1] [i_3] [i_1])) ? (65535U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0])))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 4) 
                    {
                        for (short i_6 = 0; i_6 < 16; i_6 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) ? ((-(355950296))) : (((/* implicit */int) ((var_8) >= (((/* implicit */int) (unsigned char)113)))))))) ? (((unsigned long long int) (+(4095)))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)3)))))));
                                arr_21 [i_1] [9ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((max((arr_13 [i_0] [i_1] [i_5] [i_5]), (((/* implicit */unsigned int) (unsigned short)65535)))) - (((/* implicit */unsigned int) (-(251887892))))))) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) arr_19 [3] [i_5] [i_2] [i_2] [i_1] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (-1))))) : (((/* implicit */int) arr_19 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]))));
                                arr_22 [i_0] [i_1] [i_1] [i_5] [i_6] = ((/* implicit */signed char) (-((-((+(var_0)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
