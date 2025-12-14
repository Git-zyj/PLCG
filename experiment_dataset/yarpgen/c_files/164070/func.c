/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164070
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
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 10; i_1 += 2) 
        {
            for (unsigned int i_2 = 2; i_2 < 9; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] [i_1] [i_1] &= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) var_8))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_0] [i_2]))));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 3; i_3 < 10; i_3 += 2) 
                    {
                        arr_11 [i_0] [i_2] = ((/* implicit */unsigned short) min((((/* implicit */int) arr_2 [i_2 + 2])), ((-((-(((/* implicit */int) (short)30412))))))));
                        var_11 = ((/* implicit */signed char) (+(((/* implicit */int) var_2))));
                        var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) ((unsigned short) ((((((/* implicit */int) (short)8600)) > (((/* implicit */int) (short)8600)))) ? (((/* implicit */long long int) ((/* implicit */int) min(((short)8600), (((/* implicit */short) arr_10 [i_0] [i_1])))))) : (6961639653550622163LL)))))));
                    }
                    var_13 *= ((/* implicit */short) arr_2 [i_0]);
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 13; i_4 += 1) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 13; i_5 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) var_5))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [i_1 - 1] [i_5] [i_2]))) : (min((((/* implicit */unsigned long long int) arr_13 [i_0] [i_1] [i_2] [i_1 - 2] [i_5] [i_5])), (var_4)))));
                                var_15 = ((/* implicit */unsigned char) min((((((/* implicit */long long int) ((/* implicit */int) var_6))) + (var_8))), (((((/* implicit */_Bool) var_7)) ? (var_0) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_6)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_2))));
    var_17 += ((((long long int) (-(((/* implicit */int) (short)-30412))))) << (((((((((/* implicit */_Bool) var_7)) ? (var_1) : (((/* implicit */long long int) (-(((/* implicit */int) (short)8600))))))) + (3507542840061552025LL))) - (54LL))));
    /* LoopNest 2 */
    for (long long int i_6 = 0; i_6 < 22; i_6 += 1) 
    {
        for (unsigned short i_7 = 0; i_7 < 22; i_7 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (signed char i_8 = 0; i_8 < 22; i_8 += 3) 
                {
                    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (+(var_1)))), (var_4)))) ? (min((3310287595U), (((/* implicit */unsigned int) ((((/* implicit */int) (short)8625)) | (((/* implicit */int) var_3))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-28317)))));
                    var_19 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (short)-2035)), (var_4)));
                    arr_25 [i_7] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_19 [i_6] [i_8]), (arr_19 [i_6] [i_7])))) ? (((/* implicit */int) min((arr_23 [i_6] [i_6]), (arr_23 [i_7] [i_8])))) : (((/* implicit */int) ((3314073778U) != (((/* implicit */unsigned int) ((/* implicit */int) (short)2043))))))));
                }
                for (unsigned long long int i_9 = 1; i_9 < 18; i_9 += 1) 
                {
                    arr_29 [i_7] = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_28 [i_9 - 1] [i_7] [i_7] [i_7])) ? (arr_28 [i_9 + 1] [i_7] [i_9 + 1] [i_9 + 1]) : (arr_28 [i_9 + 3] [i_7] [20LL] [i_7])))), (var_9));
                    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) var_5))));
                }
                var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_4)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) : (min((((/* implicit */long long int) 1323791120)), (var_0)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_6] [i_6]))) : (((long long int) max(((short)-8632), (var_7)))));
                arr_30 [i_7] = ((unsigned short) var_10);
            }
        } 
    } 
}
