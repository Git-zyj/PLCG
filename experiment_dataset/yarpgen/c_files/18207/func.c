/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18207
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
    var_19 = max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) == (((/* implicit */int) var_17))))), (max((((/* implicit */unsigned long long int) (_Bool)1)), (max((((/* implicit */unsigned long long int) var_12)), (var_15))))));
    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) var_2))));
    var_21 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 15244596819501574405ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_0)))) ? (max((var_18), (((/* implicit */long long int) var_16)))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)2671))))))), (((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_14))))))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        var_22 = ((/* implicit */short) max(((((((_Bool)1) ? (((/* implicit */int) arr_1 [i_0])) : (arr_0 [i_0]))) % (((/* implicit */int) arr_1 [i_0 + 1])))), (max((arr_0 [i_0 + 2]), (arr_0 [i_0 - 2])))));
        var_23 = ((/* implicit */int) max((((signed char) arr_0 [i_0 + 2])), (((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_0 + 2])) >= (((/* implicit */int) arr_1 [i_0 + 2])))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        var_24 *= ((/* implicit */unsigned long long int) (~(((((/* implicit */int) (short)6)) / (((/* implicit */int) (signed char)-114))))));
        arr_5 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) -86329647117250637LL)) ? (((/* implicit */unsigned long long int) 761699075)) : (arr_2 [i_1])));
        var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((arr_4 [(short)18]) ? (((arr_2 [i_1]) >> (((arr_3 [(unsigned char)18]) - (11400404292543708377ULL))))) : (((((/* implicit */_Bool) arr_3 [12ULL])) ? (arr_2 [i_1]) : (arr_2 [i_1]))))))));
        var_26 = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)176)))))));
    }
    for (short i_2 = 3; i_2 < 8; i_2 += 3) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_3 = 0; i_3 < 10; i_3 += 3) /* same iter space */
        {
            var_27 += ((/* implicit */unsigned char) 0ULL);
            /* LoopSeq 1 */
            for (long long int i_4 = 3; i_4 < 7; i_4 += 3) 
            {
                var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_0 [i_4])) > (((((/* implicit */_Bool) arr_10 [i_3] [i_3])) ? (((/* implicit */long long int) 26)) : (arr_13 [i_4] [i_3] [i_4])))));
                var_29 = ((/* implicit */short) (~(((/* implicit */int) arr_8 [i_4 - 1] [i_2 - 3]))));
                var_30 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(-818785938))))));
                arr_17 [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_2 - 2] [i_4 + 3])) ? (arr_9 [i_2 - 2] [i_4 + 3]) : (arr_9 [i_2 - 1] [i_4 + 2])));
            }
            /* LoopSeq 2 */
            for (unsigned int i_5 = 0; i_5 < 10; i_5 += 4) 
            {
                var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_2 + 1] [i_2 - 1] [i_2 - 3])) ? (arr_19 [i_2 - 2] [i_2 + 2] [i_2]) : (arr_19 [i_2 + 1] [i_2 + 2] [0ULL])));
                var_32 = ((((/* implicit */_Bool) arr_10 [i_2 - 3] [i_2 - 3])) ? (arr_0 [i_2]) : (((((/* implicit */_Bool) arr_16 [i_2] [i_2] [i_5] [i_5])) ? (1504573846) : (((/* implicit */int) (_Bool)1)))));
                var_33 = ((/* implicit */unsigned long long int) arr_10 [i_2] [i_5]);
            }
            for (unsigned int i_6 = 0; i_6 < 10; i_6 += 3) 
            {
                var_34 = ((/* implicit */long long int) arr_1 [i_6]);
                var_35 = ((/* implicit */unsigned long long int) (unsigned char)247);
            }
        }
        /* vectorizable */
        for (short i_7 = 0; i_7 < 10; i_7 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (signed char i_8 = 0; i_8 < 10; i_8 += 4) 
            {
                for (int i_9 = 1; i_9 < 9; i_9 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_10 = 0; i_10 < 10; i_10 += 4) 
                        {
                            var_36 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_4 [i_7]))));
                            var_37 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_2 - 3] [i_2 - 1] [i_8] [i_8] [i_9 + 1]))) & ((~(1550282269U)))));
                        }
                        for (signed char i_11 = 0; i_11 < 10; i_11 += 4) 
                        {
                            arr_37 [i_2] [i_7] [i_8] [i_7] [i_11] = ((/* implicit */_Bool) (+((~(((/* implicit */int) arr_25 [i_7] [i_7]))))));
                            var_38 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_11] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) : (arr_12 [i_2 + 2] [i_8])))) ? (((((/* implicit */_Bool) arr_2 [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))) : (arr_3 [i_7]))) : (arr_3 [i_7])));
                            var_39 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_2] [i_2 + 2] [i_7] [i_9 + 1])) ? (arr_22 [i_2] [i_2 + 2] [i_7] [i_9 + 1]) : (arr_22 [i_2] [i_2 + 2] [i_7] [i_9 + 1])));
                            var_40 = ((((/* implicit */_Bool) arr_34 [i_8] [i_8] [i_9 + 1] [i_8])) ? (arr_34 [i_2] [i_9] [i_9 - 1] [i_9]) : (arr_34 [i_9] [i_9] [i_9 + 1] [i_9]));
                        }
                        var_41 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)3)) ? (arr_13 [i_7] [i_2 + 1] [i_2 + 1]) : (arr_13 [i_7] [i_2 - 2] [i_2 - 2])));
                    }
                } 
            } 
            var_42 *= ((/* implicit */unsigned long long int) ((arr_15 [i_7] [i_2] [i_2]) ? (((/* implicit */int) arr_8 [i_2] [i_2 + 1])) : (((/* implicit */int) ((signed char) 4243346718U)))));
            arr_38 [i_7] = ((/* implicit */unsigned long long int) (~(arr_21 [i_2 + 2] [i_7] [i_7])));
        }
        /* vectorizable */
        for (unsigned long long int i_12 = 0; i_12 < 10; i_12 += 4) 
        {
            var_43 += ((/* implicit */_Bool) ((signed char) arr_16 [i_2] [i_2 - 3] [i_2 - 3] [i_2 + 2]));
            var_44 += ((/* implicit */long long int) ((unsigned long long int) arr_29 [i_12]));
        }
        var_45 = ((/* implicit */_Bool) min(((~(arr_34 [i_2] [i_2] [i_2] [i_2]))), (max((arr_34 [i_2] [i_2 - 2] [i_2 + 1] [i_2 - 1]), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2]))) >= (arr_20 [i_2] [i_2 - 3] [i_2]))))))));
        var_46 = ((/* implicit */int) ((short) max((2158606361U), (((/* implicit */unsigned int) arr_28 [i_2 + 1] [i_2 + 1] [i_2 - 3] [2ULL])))));
        var_47 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_2] [i_2])) ? (((/* implicit */int) arr_25 [(signed char)8] [(signed char)8])) : (((/* implicit */int) (unsigned char)23))))) ? (max((((/* implicit */unsigned long long int) arr_25 [i_2] [(unsigned char)0])), (arr_20 [i_2] [i_2] [i_2]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 51620600U)) ? (((/* implicit */int) arr_30 [i_2] [i_2 - 3] [i_2])) : (arr_19 [i_2 + 1] [i_2] [i_2])))))))));
    }
}
