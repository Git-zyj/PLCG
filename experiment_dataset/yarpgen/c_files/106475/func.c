/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106475
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */_Bool) ((unsigned long long int) var_11));
                /* LoopSeq 3 */
                for (short i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    arr_8 [i_2] = ((/* implicit */short) (((-((+(((/* implicit */int) (unsigned short)4888)))))) == (((/* implicit */int) (!((!(((/* implicit */_Bool) -737558457)))))))));
                    arr_9 [i_2] = ((/* implicit */_Bool) min(((+(((/* implicit */int) arr_4 [i_1] [i_1])))), ((-(((/* implicit */int) ((unsigned char) var_3)))))));
                }
                for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 4) 
                {
                    arr_12 [i_0] [i_0] [i_1] [i_3] = ((/* implicit */short) max(((unsigned short)43645), ((unsigned short)44789)));
                    arr_13 [i_0] [i_1] = ((/* implicit */short) (~(((/* implicit */int) arr_7 [i_3] [i_1] [i_0]))));
                    /* LoopNest 2 */
                    for (signed char i_4 = 1; i_4 < 20; i_4 += 4) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                arr_20 [i_0] [i_1] [i_3] [i_4] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_11))))) ? (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) arr_11 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1])) : (((/* implicit */int) arr_11 [i_4] [i_4] [i_4 + 1] [i_4]))))) : (((var_6) + (var_0)))));
                                arr_21 [i_1] [i_1] [i_4] = ((/* implicit */long long int) max((16982364474864943957ULL), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (signed char)-122)), ((unsigned short)48423))))));
                                arr_22 [i_1] [i_4] [i_4] [i_5] = ((/* implicit */short) ((min((((/* implicit */unsigned int) min((((/* implicit */unsigned short) var_2)), ((unsigned short)59125)))), ((~(2807642599U))))) * (((/* implicit */unsigned int) ((/* implicit */int) (short)31230)))));
                            }
                        } 
                    } 
                }
                for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                {
                    arr_25 [i_0] [i_6] [i_6] = ((/* implicit */signed char) arr_18 [i_0] [i_0] [i_1] [i_1] [i_0]);
                    arr_26 [i_6] [i_1] [i_1] [i_1] = ((/* implicit */signed char) max((var_13), (((/* implicit */unsigned short) arr_6 [(short)11] [(short)11] [i_6]))));
                    arr_27 [i_6] [i_6] = ((/* implicit */long long int) arr_10 [i_6] [i_1] [i_0]);
                }
                arr_28 [i_0] = ((/* implicit */unsigned int) max((min((((/* implicit */unsigned long long int) min((arr_19 [i_1] [i_1] [i_0] [i_1] [i_0]), (((/* implicit */unsigned int) -793331656))))), (7551344413561551852ULL))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) min((((/* implicit */unsigned short) var_7)), (var_14)))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_3))));
    var_16 = ((/* implicit */signed char) 9223372036854775797LL);
}
