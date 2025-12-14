/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102667
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
    var_10 = ((/* implicit */_Bool) ((((/* implicit */int) (short)27327)) / (((/* implicit */int) (_Bool)1))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((((/* implicit */_Bool) ((((/* implicit */int) (short)-27327)) & (((/* implicit */int) (short)27327))))) ? (min((((/* implicit */unsigned long long int) var_8)), (var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned long long int) ((arr_2 [i_0] [i_0] [(short)11]) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)246))))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_9 [i_0] [(short)10] [i_2] [i_3] [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (short)18643))));
                            /* LoopSeq 2 */
                            for (unsigned char i_4 = 0; i_4 < 14; i_4 += 2) 
                            {
                                var_12 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)32)) ? (var_9) : (((12463281568932540695ULL) << (((/* implicit */int) (unsigned char)11))))));
                                arr_13 [i_0] [i_1] [i_0] [i_3] [i_4] = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) 2147483645)) ? (var_4) : (2147483634)))) + (((((((/* implicit */_Bool) var_3)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) | (((/* implicit */long long int) (-(var_4))))))));
                                var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) ((unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (short)-22825)) && (((/* implicit */_Bool) (unsigned char)158))))) ^ (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0] [i_4] [i_0])) || (((/* implicit */_Bool) 3093100357U)))))))))));
                            }
                            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                            {
                                var_14 += ((/* implicit */long long int) var_5);
                                arr_16 [i_3] [i_3] [i_2] [i_1] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1] [i_2] [i_5])))))) <= (((((/* implicit */_Bool) (short)18745)) ? (var_5) : (var_5)))));
                                var_15 = ((/* implicit */unsigned long long int) ((arr_5 [i_1] [i_5]) ? (((/* implicit */int) ((unsigned short) var_9))) : (((((/* implicit */int) arr_5 [i_5] [i_3])) + (((/* implicit */int) arr_5 [i_5] [i_3]))))));
                            }
                            var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) max((((signed char) (!(((/* implicit */_Bool) var_3))))), (((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) (short)-22100)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_4 [i_3] [(unsigned short)3] [i_1]))))) <= (arr_7 [i_3] [i_2] [i_0])))))))));
                        }
                    } 
                } 
                arr_17 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) (short)1890);
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) (unsigned char)158);
}
