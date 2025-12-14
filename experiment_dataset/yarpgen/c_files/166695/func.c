/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166695
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
    var_15 = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (unsigned char)9)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 17471294412983298241ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)12233))) : (274670121U)))) : ((~(15609086362330568138ULL))))));
    var_16 = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */_Bool) (signed char)-2)) || (((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned long long int) 2709253980U))))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 10; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 9; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned short) min((12950187425219617311ULL), (12950187425219617311ULL)));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned char i_3 = 1; i_3 < 10; i_3 += 2) 
                    {
                        arr_9 [(unsigned char)9] [i_1] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((arr_5 [i_1 + 2] [i_2 + 3] [i_2 + 3] [i_1 + 2]) && (((/* implicit */_Bool) var_12))));
                        /* LoopSeq 2 */
                        for (unsigned short i_4 = 3; i_4 < 10; i_4 += 3) 
                        {
                            var_18 = ((/* implicit */short) arr_4 [i_1 + 3]);
                            arr_13 [i_3] [5U] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_3 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_12)));
                            var_19 += ((/* implicit */unsigned char) var_6);
                            arr_14 [i_0] [i_0] [i_2] [1ULL] [i_3] = ((/* implicit */short) ((var_5) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_3 + 1])))));
                            arr_15 [i_3] [i_3] [i_0 - 1] [i_3] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) arr_7 [i_0 + 3] [i_0 + 3] [i_0] [i_3] [i_4 + 3]))))) << (((130048) - (130019)))));
                        }
                        for (signed char i_5 = 2; i_5 < 9; i_5 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) arr_1 [i_1] [i_2])) % (((((/* implicit */unsigned long long int) arr_17 [i_1] [6U] [i_1] [i_1] [i_3] [i_1])) ^ (var_13)))));
                            var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) (~(((/* implicit */int) ((5496556648489934304ULL) <= (12950187425219617311ULL)))))))));
                            var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) var_9))));
                        }
                        var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_8)) : (arr_0 [i_1] [i_1]))))));
                    }
                    for (unsigned int i_6 = 2; i_6 < 11; i_6 += 2) 
                    {
                        var_24 = ((/* implicit */short) arr_11 [i_0] [i_1] [(unsigned char)12] [(unsigned char)6] [i_1 + 3] [i_1 + 3]);
                        var_25 += ((/* implicit */short) var_12);
                        var_26 = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) 1585713315U)) || (((/* implicit */_Bool) 258896434)))));
                        var_27 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_2] [i_2] [i_2 + 4] [i_6]))))) ? (((unsigned long long int) arr_19 [i_0 + 1] [i_2 + 4] [i_2 + 3] [i_1 - 2] [i_6] [i_2])) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                    }
                    for (unsigned short i_7 = 1; i_7 < 10; i_7 += 2) 
                    {
                        var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(18446744073709551615ULL)))) ? (((((/* implicit */_Bool) (~(5496556648489934304ULL)))) ? (var_1) : (((/* implicit */int) (!(((/* implicit */_Bool) 3751754047378739424ULL))))))) : (((/* implicit */int) ((((/* implicit */_Bool) min((var_1), (var_7)))) && (((/* implicit */_Bool) var_8))))))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_8 = 4; i_8 < 10; i_8 += 2) 
                        {
                            arr_28 [i_8] [i_7] [i_7] [i_7] [i_2] [i_7] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) var_0))))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) arr_10 [i_7] [i_8 - 4] [3U] [i_8] [i_8 - 4] [i_8] [i_8 - 3])) : (5496556648489934305ULL))) : (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)59900)) % (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((unsigned int) var_1))) : (arr_23 [i_0 - 1] [(unsigned short)0] [i_1 + 2] [i_8 + 2])))));
                            var_29 = ((/* implicit */short) ((unsigned int) (_Bool)1));
                        }
                        arr_29 [i_2] [i_7] [i_2 + 4] [i_2 + 1] = ((/* implicit */unsigned int) ((((/* implicit */int) var_3)) + (((/* implicit */int) ((var_12) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0 + 1] [i_1 + 1] [i_2 + 2] [i_2 - 1]))))))));
                        var_30 += ((/* implicit */unsigned char) ((min((((/* implicit */long long int) var_3)), (max((arr_11 [i_0 + 1] [i_0 + 1] [i_1 + 1] [i_1 + 1] [i_0 + 1] [i_7]), (((/* implicit */long long int) 719477950U)))))) != (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_24 [i_2 + 4] [i_2 + 3] [i_2 + 1] [i_2 + 2])) : (((/* implicit */int) arr_24 [i_2 - 1] [1ULL] [i_2 + 4] [i_2 + 4])))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_9 = 1; i_9 < 12; i_9 += 2) 
                        {
                            var_31 = ((unsigned short) (-(((/* implicit */int) ((((/* implicit */int) var_4)) != (var_7))))));
                            var_32 &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (((var_6) | (((/* implicit */unsigned long long int) arr_20 [i_9] [i_9])))) : (((/* implicit */unsigned long long int) ((1073676288U) << (((var_10) - (851214475U))))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned short) arr_8 [i_0] [i_1] [i_2] [i_7]))))) ? (((/* implicit */int) (unsigned short)35941)) : (((/* implicit */int) arr_30 [i_0 + 3] [(short)5] [i_2] [i_0 + 3] [i_9]))))) : ((+(((var_12) - (((/* implicit */unsigned long long int) var_7)))))));
                            arr_32 [i_1] [i_1] [i_1] [i_7] [(unsigned char)0] = ((/* implicit */unsigned int) ((unsigned char) max((((/* implicit */unsigned long long int) (~(var_1)))), (((var_13) & (var_12))))));
                        }
                    }
                    var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) ((unsigned int) min((802774701), (((/* implicit */int) (unsigned short)10054))))))));
                }
            } 
        } 
    } 
}
