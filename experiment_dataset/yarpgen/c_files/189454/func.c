/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189454
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
    var_15 -= ((/* implicit */unsigned char) var_14);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 16; i_2 += 3) 
                {
                    for (int i_3 = 1; i_3 < 18; i_3 += 4) 
                    {
                        {
                            arr_11 [i_0] [i_1] [i_0] [i_3] [i_3] [i_1] = ((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_0] [i_1]);
                            var_16 *= ((/* implicit */unsigned short) min((((/* implicit */int) ((((/* implicit */_Bool) arr_10 [12] [i_3] [(signed char)12] [(signed char)12] [i_1])) || (((/* implicit */_Bool) 0ULL))))), ((~(((((/* implicit */int) arr_1 [(unsigned char)18])) - (((/* implicit */int) arr_2 [4]))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_4 = 4; i_4 < 18; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_14 [i_5] [i_5] [i_5] [i_0])))) <= (((((/* implicit */_Bool) arr_10 [i_5] [i_5] [i_4 - 3] [i_5] [i_4])) ? (arr_10 [i_5] [i_5] [i_4 - 4] [i_5] [14LL]) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_5] [i_4 + 1] [i_1]))))))))));
                            arr_18 [(unsigned short)5] [i_1] [i_0] [(unsigned short)5] = ((/* implicit */long long int) ((((((((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_0] [i_4] [i_5] [(_Bool)1])) && (((/* implicit */_Bool) arr_8 [i_5])))) ? (((/* implicit */int) arr_9 [i_4] [i_0] [i_4 - 2] [i_4])) : (((((/* implicit */_Bool) 3540983600U)) ? (((/* implicit */int) arr_3 [(_Bool)1] [i_1])) : (((/* implicit */int) var_13)))))) | (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_14 [i_0] [i_0] [i_4] [i_4])) : (((/* implicit */int) var_13))))) ? ((~(((/* implicit */int) arr_9 [i_4] [i_0] [i_4] [13])))) : ((~(((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_0] [i_5] [i_1]))))))));
                            arr_19 [i_4] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)54316)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) : (2763181489U)));
                            arr_20 [i_0] [i_4] [i_4] [i_1] [i_0] = (+(((((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_5] [i_4 - 1] [i_1])) * (((/* implicit */int) arr_13 [i_0] [i_1] [i_4] [i_5]))))) ? (arr_10 [i_0] [i_4 - 4] [i_4 - 1] [i_4 - 4] [i_4 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_4] [i_5]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_6 = 4; i_6 < 10; i_6 += 3) 
    {
        for (unsigned long long int i_7 = 3; i_7 < 8; i_7 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_8 = 0; i_8 < 12; i_8 += 4) 
                {
                    for (unsigned int i_9 = 0; i_9 < 12; i_9 += 4) 
                    {
                        {
                            var_18 *= ((/* implicit */int) ((((((/* implicit */_Bool) 3598125036U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)4690))) : (((((/* implicit */_Bool) (unsigned short)33373)) ? (arr_27 [i_9] [i_8] [i_8] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) (short)4490))))))) != (((/* implicit */long long int) ((/* implicit */int) (unsigned short)56999)))));
                            arr_32 [i_6] = ((/* implicit */int) max((((var_0) ? (((((/* implicit */_Bool) arr_25 [i_6] [(unsigned short)1] [i_9])) ? (arr_25 [i_6] [(unsigned short)9] [i_8]) : (arr_5 [i_6]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (short)32751))))))), (((/* implicit */unsigned int) (-(((/* implicit */int) ((8695943731951164410ULL) <= (((/* implicit */unsigned long long int) arr_5 [i_6]))))))))));
                            var_19 += ((/* implicit */signed char) ((((/* implicit */_Bool) 3426293391U)) ? (((/* implicit */int) (unsigned char)77)) : (((/* implicit */int) (unsigned short)35193))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_10 = 0; i_10 < 12; i_10 += 1) 
                {
                    for (unsigned int i_11 = 0; i_11 < 12; i_11 += 2) 
                    {
                        {
                            var_20 ^= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 4069545203U)) ? (((/* implicit */int) (unsigned short)4682)) : (((/* implicit */int) arr_0 [i_7]))))) ? (((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)224), (((/* implicit */unsigned char) var_13)))))) : ((-(arr_27 [i_6] [i_11] [i_6] [i_11]))))), (((/* implicit */long long int) arr_22 [i_11] [i_6 - 4]))));
                            var_21 += ((/* implicit */_Bool) min(((-(arr_37 [i_6 + 1] [i_11] [i_6 - 4]))), (((/* implicit */int) arr_6 [i_11]))));
                            var_22 = ((/* implicit */short) ((max((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)29)) - (185063927)))), (((arr_26 [i_6] [i_7] [(unsigned short)9]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_6]))))))) != (((2696147444179701176ULL) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3540983584U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_6]))) : (2616276615U))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 16; i_12 += 2) 
    {
        for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
        {
            {
                var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) arr_17 [i_12] [i_13 + 1] [i_12] [i_12] [i_12] [i_13 + 1]))));
                var_24 = ((/* implicit */int) var_3);
                var_25 = ((/* implicit */int) arr_38 [i_12] [i_12]);
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned int) var_2);
}
