/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101500
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
    for (signed char i_0 = 2; i_0 < 8; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_6 [6U] [i_1] [i_0 + 1]), (((/* implicit */short) (signed char)55))))) && ((!(((/* implicit */_Bool) arr_4 [i_0 - 2] [7ULL] [i_0 + 1])))))))));
                    var_19 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [(unsigned short)6])) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [4U]))) : (max((7305188990971939428LL), (((/* implicit */long long int) arr_2 [i_0 + 1]))))));
                    arr_9 [i_2] = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_6 [i_0 - 2] [i_0 - 1] [i_0 + 1])))) && (((((/* implicit */int) arr_6 [i_0 - 2] [i_0 - 1] [i_0 + 1])) >= (((/* implicit */int) arr_6 [i_0 - 2] [i_0 - 1] [i_0 + 1]))))));
                    var_20 *= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 2] [(signed char)5])) ? (arr_0 [i_0 + 3] [i_0 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [6ULL])))))) && (((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_0 + 2])))))));
                    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_0 [i_0] [i_0 - 2])) ? (arr_0 [i_2] [i_0 + 3]) : (arr_0 [i_0] [i_0 + 2]))))))));
                }
            } 
        } 
    } 
    var_22 ^= ((/* implicit */short) ((((((/* implicit */_Bool) var_5)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_8) >= (((/* implicit */unsigned long long int) var_2)))))))) >= (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)255)))))));
    var_23 = ((/* implicit */unsigned long long int) ((unsigned char) min((((/* implicit */unsigned long long int) (-(var_2)))), (((((/* implicit */_Bool) (signed char)72)) ? (10653862039364931385ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)30355))))))));
    /* LoopNest 2 */
    for (signed char i_3 = 3; i_3 < 13; i_3 += 3) 
    {
        for (unsigned int i_4 = 1; i_4 < 16; i_4 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 3; i_5 < 16; i_5 += 4) 
                {
                    for (unsigned short i_6 = 0; i_6 < 17; i_6 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned int i_7 = 1; i_7 < 13; i_7 += 1) 
                            {
                                var_24 *= ((((/* implicit */_Bool) arr_13 [i_4 - 1] [i_5 - 3] [i_7 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_21 [i_7] [i_7 + 4] [i_6] [i_5 + 1] [i_5 - 3] [i_4 + 1] [i_3])) >= (((/* implicit */int) arr_18 [i_3 + 1] [i_4 - 1] [i_5] [(unsigned char)9] [i_7 + 4])))))) : (((((/* implicit */_Bool) arr_23 [i_3] [i_7 + 1] [i_5] [(signed char)14] [i_7 + 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_3 - 3] [i_7 + 2] [i_7] [(signed char)16] [14U]))) : (714302343U))));
                                arr_24 [i_3] [i_3] [i_6] [i_3] [i_3] = ((/* implicit */int) (signed char)78);
                                var_25 = 15248996556593768190ULL;
                                arr_25 [0ULL] |= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_22 [i_7 - 1] [i_5 - 2] [i_4 + 1])) ^ (((/* implicit */int) arr_20 [16ULL] [i_6]))))) >= (((unsigned int) arr_11 [i_3 - 2] [i_4 - 1]))));
                                var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) arr_12 [i_5] [i_5]))));
                            }
                            var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) arr_13 [i_3] [i_4] [i_5]))));
                            arr_26 [i_6] [i_4] [i_5 - 2] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_6] [i_6])) && (((/* implicit */_Bool) (unsigned char)109)))))))) ? (((arr_12 [i_3 + 3] [i_6]) << (((arr_12 [i_3 + 2] [i_6]) - (3344705402U))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_19 [i_3] [i_4] [i_5] [(_Bool)1])))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_8 = 3; i_8 < 14; i_8 += 1) 
                {
                    for (unsigned long long int i_9 = 0; i_9 < 17; i_9 += 3) 
                    {
                        {
                            var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) max((((signed char) arr_28 [i_3 + 3] [i_4] [i_8] [(short)8])), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_14 [i_3 - 1]))))))))));
                            var_29 = ((/* implicit */unsigned int) 536870911);
                            /* LoopSeq 1 */
                            for (int i_10 = 0; i_10 < 17; i_10 += 1) 
                            {
                                var_30 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_32 [i_3 - 2] [i_3 - 2] [i_3 + 4] [i_3 - 2])) ? (max((arr_13 [i_4] [i_9] [i_10]), (arr_13 [i_9] [(unsigned char)10] [i_8 + 3]))) : (((((/* implicit */_Bool) arr_33 [i_3] [i_3] [i_3 + 2])) ? (arr_33 [i_3] [i_3] [i_3 + 2]) : (arr_33 [i_3] [i_3] [i_3 - 3])))));
                                var_31 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_16 [i_4] [i_8 - 1] [i_9] [i_10])) ? (11831847507336990322ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_3 - 2] [i_3] [i_3 + 4] [i_3]))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_3] [i_3 + 4] [(signed char)7] [i_3 - 3])))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
}
