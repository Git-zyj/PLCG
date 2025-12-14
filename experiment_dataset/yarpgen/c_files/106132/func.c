/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106132
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 11; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 10; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_13 = (unsigned char)17;
                                var_14 += ((/* implicit */int) (short)16287);
                                var_15 -= ((/* implicit */_Bool) 268435455);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 12; i_5 += 2) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 12; i_6 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) << (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
                                var_17 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) 2146097904)) ? (((/* implicit */int) (unsigned char)238)) : (((/* implicit */int) arr_20 [i_0] [i_1] [i_2 - 1] [i_5] [i_6])))), (((/* implicit */int) var_2))));
                                arr_23 [i_0] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)29165)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_1 + 1] [i_2 - 1] [i_2 + 1] [i_6] [i_6]))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)32767)), (4045979150497748562ULL)))) ? ((-(18446744073709551609ULL))) : (((/* implicit */unsigned long long int) var_5))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_7 = 1; i_7 < 13; i_7 += 2) 
    {
        for (long long int i_8 = 0; i_8 < 15; i_8 += 2) 
        {
            for (int i_9 = 0; i_9 < 15; i_9 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_10 = 0; i_10 < 15; i_10 += 3) 
                    {
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) ((unsigned char) (~(arr_29 [i_7 + 1] [i_8]))));
                                var_19 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (+(arr_32 [i_11] [8] [i_8] [i_7 + 1])))), (((((/* implicit */_Bool) arr_34 [i_7] [(unsigned short)4] [(signed char)5] [i_10])) ? (((/* implicit */long long int) ((/* implicit */int) (short)16269))) : (arr_26 [(signed char)4] [(signed char)4])))))), (10ULL)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_12 = 0; i_12 < 15; i_12 += 1) 
                    {
                        for (unsigned char i_13 = 0; i_13 < 15; i_13 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((unsigned long long int) arr_40 [i_13] [i_9] [i_9] [i_7 - 1] [i_7 - 1])))));
                                arr_42 [i_7] [i_13] [i_9] [i_13] [(unsigned char)0] = ((/* implicit */unsigned int) (unsigned char)3);
                                arr_43 [i_13] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_28 [i_13])) ? (((/* implicit */unsigned long long int) arr_29 [i_7 - 1] [2LL])) : (((((/* implicit */_Bool) (signed char)113)) ? (max((14400764923211803054ULL), (((/* implicit */unsigned long long int) 19U)))) : (((/* implicit */unsigned long long int) min((arr_33 [i_7 - 1] [(short)1]), (((/* implicit */int) var_9)))))))));
                                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_31 [i_7 + 1])) ? (((/* implicit */unsigned int) (~(var_5)))) : (((var_12) | (((/* implicit */unsigned int) ((/* implicit */int) (short)-22469)))))));
                                arr_44 [i_7 + 2] [i_7 + 2] [i_8] [i_7 + 2] [i_12] [i_13] = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) != (min((arr_28 [i_13]), (((/* implicit */int) (unsigned char)25)))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_14 = 0; i_14 < 15; i_14 += 4) 
                    {
                        for (short i_15 = 0; i_15 < 15; i_15 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */int) max((((((((/* implicit */_Bool) (short)-16256)) && (((/* implicit */_Bool) (unsigned short)65526)))) && (((/* implicit */_Bool) arr_50 [i_7 - 1] [i_8] [i_15] [i_14] [i_15] [i_15] [i_7 + 1])))), (((((/* implicit */int) ((((/* implicit */_Bool) 4929356216421230835ULL)) && (((/* implicit */_Bool) var_4))))) > (((/* implicit */int) arr_38 [(unsigned char)4] [i_7 + 1] [i_9] [i_14] [(unsigned short)9]))))));
                                arr_51 [i_15] [i_14] [i_9] [i_8] [i_15] = ((/* implicit */unsigned char) min((max((max(((signed char)71), (((/* implicit */signed char) var_2)))), (((/* implicit */signed char) ((((/* implicit */int) var_1)) <= (((/* implicit */int) (unsigned char)19))))))), (((/* implicit */signed char) var_2))));
                                var_23 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)14)) ^ (((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) arr_30 [i_7] [i_7] [i_7 + 2])) : (4045979150497748582ULL))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_16 = 0; i_16 < 15; i_16 += 3) 
                    {
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                        {
                            {
                                arr_58 [i_17] [13] [(short)8] [i_8] [i_17] = ((/* implicit */unsigned long long int) (unsigned short)20706);
                                var_24 |= ((/* implicit */long long int) 477791243);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
