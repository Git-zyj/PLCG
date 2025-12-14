/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146856
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
    var_11 &= ((/* implicit */_Bool) var_8);
    var_12 = ((/* implicit */unsigned long long int) ((signed char) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_10))) / ((-9223372036854775807LL - 1LL))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */_Bool) var_8);
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    for (unsigned short i_3 = 3; i_3 < 15; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            {
                                var_13 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [(unsigned short)4] [i_2] [i_3 - 2] [i_3 + 1] [i_2] [i_3 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_1] [i_3 - 1] [i_3 - 3]))) : (3651222984U)))) ? (((/* implicit */int) arr_12 [i_4] [i_4] [i_4] [i_3 + 2])) : ((-(((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551615ULL)))))))));
                                arr_14 [6LL] [i_1] [i_1] [i_1] [7U] [i_1] = ((/* implicit */short) (-((-(((((/* implicit */_Bool) (signed char)-127)) ? (274873712640LL) : (((/* implicit */long long int) 1434902113U))))))));
                            }
                        } 
                    } 
                } 
                var_14 = ((_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_10 [i_0] [i_1] [i_0]))));
                /* LoopSeq 4 */
                for (signed char i_5 = 1; i_5 < 16; i_5 += 3) 
                {
                    arr_19 [i_0] [i_0] [i_0] = arr_7 [i_5] [i_5 + 1];
                    arr_20 [7U] [i_1] [i_1] = ((/* implicit */unsigned short) var_6);
                    var_15 *= ((/* implicit */long long int) ((((((/* implicit */_Bool) (-(1017650519U)))) ? (((/* implicit */long long int) max((arr_5 [i_5 - 1] [i_5 - 1]), (((/* implicit */unsigned int) var_5))))) : ((~(var_3))))) != (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [(short)15])))));
                }
                for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 0; i_7 < 17; i_7 += 1) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 17; i_8 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_26 [i_6 + 1] [i_6] [i_6] [i_6]), (((/* implicit */long long int) arr_27 [i_0] [i_6 + 1] [i_6 + 1] [i_0] [i_0] [i_0]))))) ? (min((((/* implicit */long long int) var_5)), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_3))))) : ((-((~(-1258882640892571592LL)))))));
                                var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) (-(((var_7) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned int) var_0);
                }
                for (long long int i_9 = 0; i_9 < 17; i_9 += 4) 
                {
                    var_19 &= ((/* implicit */_Bool) ((unsigned int) (-(arr_22 [i_9] [(_Bool)1] [i_1] [6]))));
                    var_20 += ((((/* implicit */int) var_7)) >= ((-(((((/* implicit */_Bool) arr_5 [i_1] [i_9])) ? (((/* implicit */int) arr_27 [i_0] [i_0] [i_1] [i_9] [i_9] [i_0])) : (((/* implicit */int) arr_21 [i_0] [i_0] [3U] [i_9])))))));
                }
                for (long long int i_10 = 0; i_10 < 17; i_10 += 1) 
                {
                    /* LoopNest 2 */
                    for (signed char i_11 = 0; i_11 < 17; i_11 += 3) 
                    {
                        for (signed char i_12 = 2; i_12 < 13; i_12 += 1) 
                        {
                            {
                                arr_39 [6ULL] [i_1] [i_1] [(signed char)0] [6ULL] = ((/* implicit */int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) arr_23 [i_10] [i_12 + 4] [i_12] [i_12 + 3])) : (18446744073709551615ULL))) & (((/* implicit */unsigned long long int) (-(1258882640892571591LL))))));
                                var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_31 [i_0] [i_1] [i_10])) ? (((/* implicit */long long int) arr_5 [i_0] [1LL])) : (arr_36 [(_Bool)1] [(signed char)7] [i_10] [i_1] [i_0])))))) ? (((((/* implicit */_Bool) 1258882640892571591LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)46439))) : (-1258882640892571590LL))) : (max((min((((/* implicit */long long int) var_8)), (var_3))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)39797))) * (var_6)))))))))));
                                var_22 ^= (+(((((/* implicit */_Bool) ((signed char) var_1))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_30 [i_12 + 1] [i_12 + 2] [i_12 - 1] [i_12 + 3]))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_1] [i_1] [i_1] [i_1])) << (((/* implicit */int) arr_15 [i_0] [(_Bool)1] [i_10] [i_1]))))) ? (var_6) : (((/* implicit */unsigned int) ((arr_15 [i_0] [i_1] [i_10] [i_10]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_0])))))));
                    var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((long long int) ((((/* implicit */long long int) (-(1017650519U)))) != (((1258882640892571583LL) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))))));
                }
                var_25 -= ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_4), (((/* implicit */unsigned short) var_0)))))) : (var_6))), (((/* implicit */unsigned int) ((var_1) & (((/* implicit */int) arr_31 [i_1] [i_0] [i_0])))))));
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((long long int) var_2)))));
    var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) (~(((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_5)))))))))));
}
