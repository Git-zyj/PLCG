/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166419
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
    var_16 = ((((unsigned int) var_2)) << (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) arr_0 [i_0] [i_1]))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 10; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (int i_4 = 0; i_4 < 12; i_4 += 4) 
                            {
                                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned int) arr_2 [i_0 + 1] [i_0 + 1]))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_3 [i_4] [i_0] [i_0])), (var_1)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)28001))) / (max((((/* implicit */unsigned long long int) (unsigned char)224)), (8416209106001427434ULL)))))));
                                arr_14 [i_0] [i_2] [10] [i_2] [i_2 + 2] [i_1] [i_4] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_15)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) var_6))))) : (((((/* implicit */_Bool) arr_6 [i_0] [i_3] [i_4])) ? (((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_0] [i_4])) : (((/* implicit */int) arr_3 [i_2 + 1] [i_2 + 1] [i_2 + 1]))))))) || (((/* implicit */_Bool) ((unsigned int) arr_4 [i_0] [i_0] [(signed char)7])))));
                            }
                            for (unsigned int i_5 = 0; i_5 < 12; i_5 += 2) 
                            {
                                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((short) var_10)), (((/* implicit */short) ((((/* implicit */int) (unsigned short)61747)) == (arr_16 [(unsigned char)6] [8ULL] [i_3] [8ULL]))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : (var_13)));
                                var_20 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (signed char)64)))) * (((((/* implicit */_Bool) arr_12 [i_0] [i_0 - 1] [i_0 - 1] [i_1] [11U] [i_2 + 1] [i_2 - 1])) ? (arr_12 [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0] [(signed char)3] [i_2 + 1] [i_2 + 2]) : (arr_12 [i_0] [i_0 - 1] [i_0 - 2] [i_1] [(_Bool)1] [i_2 + 1] [i_2 + 2])))));
                                var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-29)) ? (((/* implicit */int) ((short) ((((/* implicit */int) arr_0 [i_5] [i_3])) * (((/* implicit */int) arr_2 [i_0] [i_2])))))) : (((/* implicit */int) max((((/* implicit */short) arr_4 [i_1] [(signed char)6] [i_0 - 1])), (var_6)))))))));
                                var_22 = (((_Bool)1) ? (((/* implicit */int) min((arr_8 [(unsigned short)1] [i_1] [i_2] [i_1]), (((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)16)))))))) : (((/* implicit */int) ((((/* implicit */_Bool) max((var_15), (((/* implicit */long long int) (signed char)127))))) && (((/* implicit */_Bool) var_5))))));
                                var_23 &= ((((/* implicit */_Bool) (short)-32761)) ? ((+(((/* implicit */int) arr_11 [i_3] [i_2] [i_2] [(_Bool)1] [i_5] [i_0 - 2] [i_0 - 2])))) : (((/* implicit */int) max((arr_11 [(_Bool)1] [i_1] [i_2] [i_3] [i_5] [i_0 - 2] [11U]), (arr_11 [i_0 + 1] [i_1] [i_2] [i_3] [i_5] [i_0 - 2] [i_1])))));
                            }
                            for (signed char i_6 = 0; i_6 < 12; i_6 += 1) 
                            {
                                var_24 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_2 - 1] [(unsigned char)0] [i_0 - 2] [i_3]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_7 [i_2 - 1] [i_2 - 1] [i_2 + 2] [i_2 + 2])))) : (min((arr_12 [i_0 - 2] [(unsigned char)3] [i_2 + 1] [i_0] [i_6] [i_6] [i_2 + 1]), (arr_12 [i_0 - 2] [i_1] [i_2 - 1] [i_3] [(unsigned short)3] [i_0] [i_2])))));
                                var_25 = ((((_Bool) arr_2 [i_1] [i_3])) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_2])) : ((~(((/* implicit */int) arr_8 [i_6] [i_2 + 2] [i_1] [i_0 + 1])))));
                                var_26 ^= ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_4 [i_0 - 1] [i_0 - 2] [i_0 + 1])), (((unsigned long long int) var_14))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((short) var_13))))) : (min((((((/* implicit */_Bool) arr_1 [i_1])) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))), (((/* implicit */unsigned long long int) var_4))))));
                            }
                            var_27 = ((/* implicit */unsigned short) ((var_7) ? (((((((/* implicit */_Bool) (unsigned char)255)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_2 - 1] [i_3]))))) / (((/* implicit */long long int) 2147483647)))) : (((/* implicit */long long int) ((/* implicit */int) var_6)))));
                            var_28 = ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) ((57397748U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0 - 1] [i_1] [1U] [1ULL] [i_2] [i_3]))))))) ? (((((3933308883633882265ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) & (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_10 [i_0] [i_0] [i_1] [i_2] [i_3])), (arr_5 [i_0])))))) : (((/* implicit */unsigned long long int) var_12))));
                        }
                    } 
                } 
                arr_20 [i_0] [i_1] [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) ((unsigned char) (signed char)-108)))));
            }
        } 
    } 
}
