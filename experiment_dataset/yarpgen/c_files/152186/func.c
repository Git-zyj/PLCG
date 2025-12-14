/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152186
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
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            for (unsigned short i_2 = 3; i_2 < 10; i_2 += 4) 
            {
                {
                    var_19 = min((((long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_2 [6LL] [(unsigned short)4]))))), (((((/* implicit */_Bool) (+(var_6)))) ? (((var_2) - (arr_4 [i_0]))) : (var_9))));
                    var_20 = ((/* implicit */int) max((((((/* implicit */_Bool) var_13)) ? (arr_4 [i_0]) : (((/* implicit */long long int) (-(((/* implicit */int) arr_2 [(unsigned short)3] [i_1 + 1]))))))), (((/* implicit */long long int) max((((((/* implicit */_Bool) (short)-26297)) || (((/* implicit */_Bool) -1108586088)))), ((!(((/* implicit */_Bool) var_6)))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                arr_13 [i_2] [i_2] [i_3] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) ? (((/* implicit */int) min((arr_12 [i_2 + 4] [i_2] [i_2 - 2] [i_1 - 1] [i_1 - 1]), (arr_12 [i_2 + 4] [i_2 - 1] [i_2 - 2] [i_1 - 1] [i_1 - 1])))) : (((/* implicit */int) min((((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_3)))), (((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (_Bool)1)))))))));
                                arr_14 [i_2] [i_3] [i_1 - 1] [i_1 - 1] [i_2] = var_11;
                                arr_15 [i_4] [i_4] [i_2] [i_2] [i_1 + 1] [i_0] = ((((/* implicit */_Bool) (-(((/* implicit */int) ((var_3) != (var_6))))))) ? (((/* implicit */int) var_1)) : (max((((/* implicit */int) var_0)), (min((((/* implicit */int) var_16)), (var_8))))));
                                var_21 *= ((/* implicit */unsigned long long int) (+(((var_7) >> (((((/* implicit */int) min((var_15), (arr_12 [i_0] [i_1 + 1] [i_2] [0LL] [i_4])))) - (10468)))))));
                                var_22 = ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (264040823477329384LL));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 3; i_5 < 13; i_5 += 3) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 14; i_6 += 1) 
                        {
                            {
                                var_23 += (-(((var_14) ? (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2589188482U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_18)) && (((/* implicit */_Bool) var_2)))))))));
                                var_24 = ((/* implicit */unsigned short) max((min((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned short)52038))))), (max((var_12), (((/* implicit */unsigned long long int) var_3)))))), (((/* implicit */unsigned long long int) ((unsigned short) arr_7 [i_1 + 1] [i_2 + 4] [i_2 + 2])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */short) ((var_2) | (min((((/* implicit */long long int) (-(((/* implicit */int) (short)-15017))))), (((((/* implicit */_Bool) var_3)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_17)))))))));
    var_26 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((1530285701U), (((/* implicit */unsigned int) (unsigned short)65535)))))));
    var_27 |= ((((/* implicit */long long int) ((((/* implicit */int) var_16)) << (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_11))))))) & ((-(((((/* implicit */_Bool) var_18)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_13))))))));
}
