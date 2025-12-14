/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188632
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
    for (signed char i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 4; i_2 < 16; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */unsigned long long int) arr_3 [(unsigned char)13] [(unsigned char)13] [i_0]);
                    /* LoopNest 2 */
                    for (short i_3 = 3; i_3 < 16; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                arr_11 [i_0] [i_0] = ((/* implicit */unsigned char) arr_1 [i_0] [i_1]);
                                var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (var_5) : (((/* implicit */long long int) arr_6 [(_Bool)0] [7U] [6LL] [i_3 - 2]))))) - (var_6)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [2ULL] [i_0] [i_4])) ? (var_12) : (((/* implicit */int) arr_5 [i_0] [(short)17] [(short)14] [i_0]))))))))) : (min((((((/* implicit */_Bool) arr_5 [i_0] [i_2] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_4 [i_0]))), (var_13)))));
                                arr_12 [i_0] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_17) & (((/* implicit */unsigned int) var_12))))) || (((((/* implicit */_Bool) var_0)) || (((((/* implicit */_Bool) var_5)) && (var_3)))))));
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_0] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_18)) | (((/* implicit */int) var_9)))))))) << (((((var_5) & (((((/* implicit */_Bool) var_8)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))) - (1524116913679200322LL)))));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */_Bool) arr_8 [i_2] [i_0]);
                                var_23 = ((/* implicit */int) (+(var_17)));
                                var_24 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))) + (((((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (var_17) : (((/* implicit */unsigned int) ((/* implicit */int) var_18)))))) | (((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_2)))))));
                                arr_20 [i_0] [i_1] [(signed char)17] [(short)13] [i_0] = ((/* implicit */int) arr_16 [i_0 - 1] [i_0 + 3] [i_5] [i_0 + 3] [i_5]);
                                var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_1] [(short)6] [i_6])) ? (((/* implicit */int) arr_14 [i_0] [i_2 - 3] [(short)7] [i_6])) : (((/* implicit */int) var_16)))) / ((-(((/* implicit */int) var_18))))))) * (((((/* implicit */long long int) arr_10 [i_6] [i_0 + 2] [i_0] [i_0 + 2] [i_0 + 2])) - (((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0 + 2] [i_1] [i_2] [i_6] [i_6]))) / (arr_1 [i_6] [i_1]))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_16))))) * (var_13)))) ? (max((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_18))) >= (var_5)))), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_9)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_6)))) ? (((/* implicit */int) var_15)) : ((+(var_8)))))));
    var_27 = ((/* implicit */long long int) (((-((~(var_10))))) != (((/* implicit */unsigned int) (-(((/* implicit */int) ((var_5) > (((/* implicit */long long int) var_12))))))))));
    var_28 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) % (((((var_13) & (var_14))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))));
}
