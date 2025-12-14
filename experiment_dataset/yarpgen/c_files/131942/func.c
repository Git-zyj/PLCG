/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131942
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
    var_10 = ((/* implicit */unsigned short) max((var_10), (((/* implicit */unsigned short) ((var_0) + (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (int i_1 = 3; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_2 = 2; i_2 < 10; i_2 += 2) 
                {
                    var_11 = ((/* implicit */unsigned short) ((max(((+(((/* implicit */int) (short)16256)))), (((/* implicit */int) ((((/* implicit */int) (unsigned char)12)) >= (((/* implicit */int) (unsigned short)0))))))) - (((((/* implicit */_Bool) (~(arr_3 [i_0] [i_2])))) ? (arr_1 [i_1 + 1] [i_1 + 1]) : (((((/* implicit */int) arr_8 [i_2])) - (((/* implicit */int) var_9))))))));
                    arr_9 [i_0] [(unsigned short)6] [10] [i_2] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) 701591650805312512ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (4503599627370495LL))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_8 [i_1])), ((unsigned char)106))))))), (((/* implicit */long long int) ((((/* implicit */int) var_7)) + (((((/* implicit */_Bool) arr_6 [(_Bool)0])) ? (arr_1 [i_0] [i_2]) : (((/* implicit */int) var_8)))))))));
                }
                arr_10 [i_0] [(unsigned char)3] [i_0] = ((/* implicit */unsigned char) arr_0 [(short)9]);
                /* LoopSeq 1 */
                for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 3) 
                {
                    var_12 = (((_Bool)1) ? (4503599627370495LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)0))));
                    var_13 = ((/* implicit */int) arr_7 [i_0] [(signed char)3] [(_Bool)1]);
                    var_14 = min(((~(((/* implicit */int) arr_12 [(signed char)7] [i_1] [i_3] [i_3])))), (((/* implicit */int) ((unsigned short) 1885470229874180336LL))));
                }
                arr_13 [i_1 + 1] [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)0)), (var_9)))) ? (((/* implicit */int) (signed char)-110)) : (((/* implicit */int) var_7))))), (((((/* implicit */_Bool) arr_2 [i_1 - 2] [i_1 - 3])) ? (arr_2 [i_1 + 1] [i_1 - 1]) : (arr_2 [i_1 - 3] [i_1 - 2])))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_4 = 0; i_4 < 13; i_4 += 1) 
    {
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned short i_6 = 0; i_6 < 13; i_6 += 2) 
                {
                    var_15 -= ((/* implicit */short) ((max((((/* implicit */long long int) max(((short)-12501), (((/* implicit */short) (signed char)105))))), (arr_17 [i_4]))) != (((/* implicit */long long int) ((/* implicit */int) max((var_3), (((/* implicit */signed char) arr_22 [i_5 - 1] [i_5] [i_4] [i_4]))))))));
                    arr_24 [i_6] [i_5] [i_6] [i_5 - 1] &= ((/* implicit */unsigned short) max(((((!(((/* implicit */_Bool) arr_18 [i_6] [i_5] [i_6])))) ? (arr_23 [i_5 - 1] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) min((var_1), (var_1))))))), (arr_23 [i_5] [(unsigned short)2])));
                    arr_25 [i_4] [i_4] = ((/* implicit */short) (~((+((+(12376910786919012324ULL)))))));
                    var_16 = ((/* implicit */unsigned char) (~(min((((/* implicit */long long int) var_4)), (arr_17 [i_5 - 1])))));
                }
                for (int i_7 = 0; i_7 < 13; i_7 += 4) 
                {
                    var_17 = ((/* implicit */unsigned short) max((arr_19 [i_4]), (((/* implicit */long long int) max(((+(((/* implicit */int) var_3)))), (((/* implicit */int) (signed char)-1)))))));
                    var_18 |= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_26 [i_5 - 1])) && (((/* implicit */_Bool) arr_17 [i_4])))) ? (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_16 [i_7]))))))) : (((((/* implicit */_Bool) arr_27 [i_5 - 1] [i_5 - 1] [i_7])) ? (min((12376910786919012324ULL), (((/* implicit */unsigned long long int) arr_17 [i_5])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
                }
                var_19 = ((/* implicit */unsigned char) max((((/* implicit */int) min((arr_21 [i_5 - 1] [(unsigned char)7] [i_4] [i_5]), (arr_21 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_4])))), (((((/* implicit */_Bool) arr_21 [i_5 - 1] [i_5] [i_5 - 1] [1ULL])) ? (((/* implicit */int) arr_21 [i_5 - 1] [i_5] [i_4] [i_4])) : (((/* implicit */int) arr_21 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_4]))))));
                arr_29 [12] &= (+(((((/* implicit */_Bool) arr_18 [(signed char)8] [4LL] [i_5 - 1])) ? (((/* implicit */int) arr_18 [4ULL] [i_5] [i_5 - 1])) : (((/* implicit */int) arr_18 [(unsigned short)2] [i_5] [i_5 - 1])))));
            }
        } 
    } 
}
