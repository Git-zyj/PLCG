/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188854
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
    var_11 &= ((/* implicit */_Bool) 1032192U);
    var_12 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_4)) % (var_8)));
    var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((((/* implicit */long long int) 1032192U)) & (var_9))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            {
                var_14 -= ((/* implicit */unsigned int) ((unsigned short) (((((((-2147483647 - 1)) + (2147483647))) + (2147483647))) >> (((var_3) - (3712681577U))))));
                /* LoopSeq 3 */
                for (unsigned short i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) var_6))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 3; i_3 < 13; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) var_5)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) + (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)0)) % (((/* implicit */int) var_2)))))))) : (((arr_9 [1] [i_1] [i_2] [i_4] [i_4] [(signed char)8] [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_2 [8U] [(unsigned char)12] [8U])))) : (arr_11 [i_0] [i_0] [i_2] [i_0] [i_0]))))))));
                                arr_12 [8LL] [i_2] [i_4] [i_4] [i_4] |= ((/* implicit */unsigned char) 8589934591ULL);
                            }
                        } 
                    } 
                    var_17 = min((var_9), (((/* implicit */long long int) 4293935103U)));
                }
                for (unsigned long long int i_5 = 3; i_5 < 10; i_5 += 1) 
                {
                    /* LoopNest 2 */
                    for (long long int i_6 = 1; i_6 < 10; i_6 += 1) 
                    {
                        for (unsigned int i_7 = 2; i_7 < 13; i_7 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */long long int) 1032192U);
                                var_19 += ((/* implicit */unsigned long long int) var_9);
                                arr_19 [i_0] [i_0] [i_5] [i_6 + 1] = ((/* implicit */signed char) (((-(1032192U))) - (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_7)) <= (((/* implicit */int) (signed char)-47))))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (unsigned char)255))));
                }
                for (unsigned long long int i_8 = 0; i_8 < 14; i_8 += 1) 
                {
                    var_21 = ((/* implicit */unsigned int) min((var_21), (((unsigned int) 4294967295U))));
                    var_22 = ((/* implicit */unsigned long long int) var_2);
                    var_23 = ((/* implicit */signed char) var_2);
                    /* LoopNest 2 */
                    for (unsigned long long int i_9 = 1; i_9 < 13; i_9 += 4) 
                    {
                        for (signed char i_10 = 2; i_10 < 13; i_10 += 1) 
                        {
                            {
                                arr_27 [i_1 + 1] [i_0] = ((((/* implicit */_Bool) arr_14 [i_0] [i_8] [i_9])) ? (((((/* implicit */unsigned long long int) 4293935103U)) * (((unsigned long long int) arr_17 [i_0] [i_0] [i_8] [i_0] [i_8] [i_0])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) var_5)) : (1032192U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (4293935103U)))));
                                arr_28 [i_1] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) ((((unsigned int) 4293935103U)) << (((4293935103U) - (4293935087U)))));
                                var_24 -= ((/* implicit */unsigned short) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 0U)))))) == (((((var_9) + (9223372036854775807LL))) << (((var_4) - (3069430708U))))))));
                                var_25 = ((/* implicit */unsigned char) var_6);
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) (~(var_3)))))));
}
