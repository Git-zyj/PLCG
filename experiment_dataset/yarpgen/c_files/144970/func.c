/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144970
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
    var_15 = ((/* implicit */signed char) (+(((/* implicit */int) var_7))));
    /* LoopSeq 4 */
    for (long long int i_0 = 2; i_0 < 15; i_0 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 15; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        arr_12 [i_0 + 1] [(unsigned char)3] [i_2] [i_2] [i_3] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8355840)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)1))))) ? ((+(var_2))) : (((/* implicit */long long int) ((/* implicit */int) ((var_6) <= (((/* implicit */unsigned long long int) -8355840))))))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)216)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_3]))))), (((((/* implicit */unsigned long long int) 8355840)) - (arr_11 [i_0 - 2] [i_0] [i_1] [i_1] [i_3]))))) : (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) - (arr_1 [i_3]))) | (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2]))) : (arr_11 [i_0] [i_1] [i_2] [i_3] [i_3])))))));
                        arr_13 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)34))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_0 [i_2 - 4]), (arr_0 [i_2 + 1]))))) : (((2496642049U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)65)))))));
                    }
                    for (long long int i_4 = 2; i_4 < 15; i_4 += 3) 
                    {
                        var_16 += ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_4))))) != (((2767605935U) * (0U))))) ? (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (unsigned char)59))))))) : (((((unsigned long long int) arr_11 [i_0] [i_1] [i_2] [i_2 - 3] [(unsigned char)0])) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_1])) ? (((/* implicit */int) (signed char)2)) : (((/* implicit */int) (signed char)2)))))))));
                        arr_17 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_2 [i_2 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2 - 3] [i_4 + 1]))) : (arr_2 [i_2 - 3]))), (((/* implicit */long long int) arr_8 [i_2 - 3] [i_4 - 2] [i_2 - 3] [i_0 + 1]))));
                        var_17 = ((/* implicit */unsigned long long int) ((signed char) ((unsigned long long int) max((arr_2 [i_0]), (((/* implicit */long long int) var_8))))));
                        var_18 = ((/* implicit */long long int) (((((!(((/* implicit */_Bool) var_12)))) ? (((3251264016U) * (((/* implicit */unsigned int) 8355843)))) : (((/* implicit */unsigned int) 0)))) & (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_1] [i_2] [i_4 - 1] [i_1] [i_1])))));
                    }
                    var_19 = ((/* implicit */signed char) var_4);
                    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) arr_0 [i_2]))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (unsigned long long int i_6 = 2; i_6 < 14; i_6 += 3) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [3])) ? (arr_11 [i_5] [i_5] [i_6] [i_7] [i_5]) : (arr_11 [i_5] [i_0] [i_6 + 2] [i_7] [i_7])))) ? (min((min((arr_11 [i_0] [i_0] [i_6] [i_0] [i_7]), (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -8355844)) ? (((/* implicit */int) arr_14 [i_0] [i_5] [i_6 - 2] [i_7] [i_6] [i_5])) : (((/* implicit */int) (short)3782))))))) : (5851145692830548962ULL))))));
                        arr_25 [i_0] [i_7] [i_0] [8U] = ((/* implicit */signed char) (unsigned char)0);
                        arr_26 [i_0] [i_5] [i_6] [i_0] [i_7] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) max(((unsigned short)28479), (((/* implicit */unsigned short) arr_14 [i_5] [13U] [i_6] [i_5] [13U] [13U])))))) ? ((+(((/* implicit */int) arr_23 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_6 - 1])))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)100))) >= (((((/* implicit */_Bool) arr_6 [i_0])) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-2))))))))));
                        arr_27 [i_0] [i_5] [i_0] [i_7] = arr_21 [i_0] [i_5] [i_6] [i_7];
                        arr_28 [i_0 - 2] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0 - 2])) ? (arr_15 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) (+(arr_24 [i_7] [i_6] [i_5] [i_0]))))));
                    }
                } 
            } 
        } 
        var_22 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])) ? (((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_11)))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [(unsigned short)0] [(unsigned short)0] [i_0]))))))) : ((+(((/* implicit */int) (signed char)-107))))));
    }
    for (long long int i_8 = 2; i_8 < 15; i_8 += 3) /* same iter space */
    {
        arr_32 [i_8] = ((/* implicit */short) ((((/* implicit */int) arr_31 [i_8 - 2])) | (((((/* implicit */int) (unsigned char)73)) | (((/* implicit */int) arr_31 [i_8 - 2]))))));
        arr_33 [i_8] = ((/* implicit */unsigned long long int) max(((unsigned char)0), (max((arr_5 [i_8 - 2] [i_8 - 1]), (arr_5 [i_8 - 1] [i_8 + 1])))));
    }
    for (long long int i_9 = 2; i_9 < 15; i_9 += 3) /* same iter space */
    {
        var_23 = ((/* implicit */long long int) 8355843);
        var_24 = arr_7 [i_9 + 1] [i_9 - 1] [i_9 - 1];
        arr_36 [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)37057)) ? (((/* implicit */int) (short)511)) : (((/* implicit */int) (unsigned short)4423))));
        arr_37 [15] [i_9] = ((/* implicit */unsigned char) (~(5779731761012988917LL)));
    }
    /* vectorizable */
    for (signed char i_10 = 2; i_10 < 13; i_10 += 3) 
    {
        var_25 &= arr_30 [i_10 - 2];
        arr_40 [i_10] = ((/* implicit */short) (~(arr_39 [i_10 - 2])));
    }
    var_26 += ((/* implicit */short) 0);
}
