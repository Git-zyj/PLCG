/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144168
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
    for (signed char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned short i_2 = 3; i_2 < 12; i_2 += 3) 
            {
                {
                    var_15 = (((+(((/* implicit */int) var_3)))) > (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) min((var_6), (((/* implicit */short) var_11))))) : (((/* implicit */int) var_10)))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            {
                                arr_12 [i_2] = ((/* implicit */unsigned int) (~((~(((/* implicit */int) arr_7 [i_0] [i_0]))))));
                                var_16 = ((/* implicit */long long int) max((((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-101))))), (((unsigned int) (short)585))));
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_2] = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_6 [i_2 - 1] [i_2 - 1] [i_2] [i_2 + 2])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_11))))));
                                arr_14 [(unsigned char)11] [(unsigned char)11] [i_2] [(unsigned char)11] [(unsigned char)11] = ((/* implicit */unsigned char) (+((-(((((/* implicit */_Bool) (signed char)100)) ? (((/* implicit */int) (unsigned char)240)) : (((/* implicit */int) var_12))))))));
                                var_17 |= ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */int) min((((/* implicit */short) var_14)), (var_13)))) == (((/* implicit */int) var_6)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_5 = 0; i_5 < 10; i_5 += 2) 
    {
        for (unsigned char i_6 = 2; i_6 < 7; i_6 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_7 = 0; i_7 < 10; i_7 += 3) 
                {
                    for (unsigned char i_8 = 0; i_8 < 10; i_8 += 3) 
                    {
                        {
                            arr_26 [i_6] [i_8] = ((/* implicit */unsigned char) min((min((arr_22 [i_6 + 2] [i_6] [i_6 + 3] [i_6]), (((/* implicit */unsigned short) var_1)))), (((/* implicit */unsigned short) (signed char)117))));
                            var_18 += ((/* implicit */unsigned short) (((+(((/* implicit */int) ((short) var_11))))) << (((((/* implicit */int) var_5)) - (23462)))));
                            /* LoopSeq 2 */
                            for (unsigned short i_9 = 0; i_9 < 10; i_9 += 1) 
                            {
                                var_19 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_21 [(short)7] [i_5] [i_6 - 1] [(short)7])) ? (arr_27 [(short)0] [i_5] [i_6 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                                var_20 = ((unsigned short) ((_Bool) ((((/* implicit */_Bool) (short)-12878)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_14)))));
                                var_21 += ((/* implicit */unsigned int) var_14);
                                var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) (+(((/* implicit */int) arr_22 [i_5] [i_6] [(signed char)7] [i_9]))))) ? (((((/* implicit */int) arr_9 [i_5] [i_6])) - (((/* implicit */int) var_0)))) : (((/* implicit */int) var_12)))) : (((/* implicit */int) ((((/* implicit */_Bool) max((arr_24 [i_5] [i_6] [i_7] [(unsigned char)8]), (((/* implicit */long long int) var_4))))) && (((/* implicit */_Bool) max((var_0), (var_1)))))))));
                                var_23 += ((/* implicit */signed char) ((var_9) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) var_6))) ? (((/* implicit */int) var_3)) : (((((/* implicit */int) arr_5 [i_7] [(short)7] [i_5])) / (((/* implicit */int) var_6)))))))));
                            }
                            /* vectorizable */
                            for (signed char i_10 = 0; i_10 < 10; i_10 += 1) 
                            {
                                arr_34 [i_10] [i_6] [(unsigned char)7] [i_7] [i_6] [i_5] = ((/* implicit */unsigned char) var_6);
                                var_24 = ((/* implicit */long long int) ((((((/* implicit */int) var_1)) | (((/* implicit */int) var_3)))) * (((((/* implicit */_Bool) (short)-587)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11))))));
                                arr_35 [i_5] [i_6] [i_6] [i_5] [i_5] |= ((unsigned char) var_1);
                            }
                        }
                    } 
                } 
                var_25 += ((/* implicit */long long int) ((((((((/* implicit */int) (unsigned char)15)) - (((/* implicit */int) arr_28 [i_5] [i_5] [i_5] [i_5] [i_5])))) - (((/* implicit */int) ((short) (unsigned char)243))))) != (((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)135))) / (arr_16 [i_5] [i_5]))) != (((/* implicit */long long int) ((/* implicit */int) var_11))))))));
            }
        } 
    } 
}
