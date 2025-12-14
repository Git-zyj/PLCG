/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185548
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
    var_18 = ((/* implicit */short) (((!(((/* implicit */_Bool) ((unsigned long long int) var_3))))) && (((/* implicit */_Bool) var_15))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 16; i_2 += 3) 
            {
                {
                    arr_9 [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [(short)8] [i_0] [i_0]))))) & (((/* implicit */int) (short)21628))));
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 16; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 13; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((short) (unsigned char)181)))));
                                var_20 = ((/* implicit */signed char) (-(((/* implicit */int) ((unsigned char) ((var_2) / (((/* implicit */long long int) ((/* implicit */int) (short)32764)))))))));
                                var_21 = ((/* implicit */unsigned char) ((min((((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_3))), (((/* implicit */long long int) var_15)))) ^ (min((((/* implicit */long long int) max((((/* implicit */unsigned int) var_12)), (3102251576U)))), (var_10)))));
                                arr_15 [i_0] [i_1] [i_0] [i_2] [i_3] [i_4] = ((/* implicit */short) ((unsigned int) (unsigned char)255));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 3; i_5 < 16; i_5 += 2) 
                    {
                        for (unsigned int i_6 = 3; i_6 < 16; i_6 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) ? ((~(((/* implicit */int) var_1)))) : (((((/* implicit */_Bool) (signed char)-83)) ? (((/* implicit */int) arr_10 [i_1] [i_0] [i_1])) : (((/* implicit */int) var_4))))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_7))) | (((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_5] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-32764))) : (0LL))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) 492687582U)) | (arr_12 [i_6] [i_0] [i_2] [i_0] [i_0])))) ? (((/* implicit */int) ((unsigned short) 130048U))) : (((/* implicit */int) (short)384)))))));
                                var_23 = ((/* implicit */signed char) ((min((((((/* implicit */_Bool) (signed char)114)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_10))), (var_2))) == (((((/* implicit */_Bool) arr_17 [i_5 - 1] [i_5])) ? (arr_17 [i_5 - 3] [i_5]) : (arr_12 [7ULL] [i_0] [i_6] [i_0] [i_1])))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) max((arr_2 [i_2 + 1] [i_2]), (((/* implicit */unsigned int) arr_8 [i_0] [i_1] [i_0])))))) ? (((/* implicit */int) (unsigned char)128)) : (((((/* implicit */_Bool) (short)11555)) ? (((/* implicit */int) (signed char)-58)) : (((/* implicit */int) (signed char)84))))));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) var_1))));
}
