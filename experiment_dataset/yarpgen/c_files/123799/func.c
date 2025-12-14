/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123799
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 4; i_0 < 19; i_0 += 2) 
    {
        arr_2 [i_0 - 4] [i_0] = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)18201))) & (-5769166247020424644LL))));
        var_17 |= ((/* implicit */unsigned short) 5769166247020424643LL);
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0 - 3])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0 - 4])) || (((/* implicit */_Bool) arr_1 [i_0 - 1])))))) : ((~(5769166247020424644LL)))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 3; i_1 < 18; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 18; i_2 += 1) 
            {
                for (unsigned short i_3 = 4; i_3 < 19; i_3 += 2) 
                {
                    {
                        var_18 = min((((((/* implicit */unsigned long long int) arr_11 [i_3 + 1] [i_3 - 1] [6U] [i_3 - 1] [i_3] [i_3])) ^ (((((/* implicit */_Bool) arr_1 [0U])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 0U)))))), (8ULL));
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            var_19 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) arr_8 [i_0 - 2] [i_2] [i_1])) : (arr_13 [(unsigned short)10] [i_1] [i_2] [7ULL] [(unsigned short)10])))), (max((0ULL), (0ULL)))))) ? (min(((((_Bool)1) ? (-5769166247020424645LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)35159))))), (arr_10 [i_0] [i_0]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_1] [i_0 - 2])) ? (arr_6 [i_1] [i_0 - 1]) : (arr_6 [i_1] [i_0 - 2]))))));
                            arr_14 [i_1] = ((/* implicit */unsigned char) min((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63988))) % (4294967295U))), (((/* implicit */unsigned int) arr_0 [i_0 - 1]))));
                            arr_15 [i_4] [i_1] = ((/* implicit */unsigned long long int) max(((!(((/* implicit */_Bool) arr_7 [i_1] [i_2 + 1])))), (((((/* implicit */_Bool) (signed char)106)) && (((/* implicit */_Bool) 9223372036854775807LL))))));
                            var_20 = ((/* implicit */unsigned long long int) (unsigned char)252);
                            arr_16 [0U] [14] [i_2] [i_1] [15U] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */int) (short)-12857)) - (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_1] [(unsigned char)17])) && (((/* implicit */_Bool) arr_10 [i_0] [i_0])))))) : (arr_5 [i_0 - 2]))) & (((/* implicit */long long int) arr_13 [i_4] [i_4] [(_Bool)1] [i_4] [i_4]))));
                        }
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (int i_5 = 1; i_5 < 19; i_5 += 2) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 2) 
            {
                var_21 = ((unsigned int) (~(arr_18 [i_0 - 4] [i_6])));
                var_22 *= ((/* implicit */unsigned char) ((unsigned long long int) (unsigned char)0));
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_7 = 3; i_7 < 17; i_7 += 2) 
                {
                    var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((unsigned short) arr_4 [i_6] [i_6])))));
                    arr_25 [i_0] [i_0] [i_0] [i_0 - 1] = ((/* implicit */unsigned int) ((9ULL) ^ (18446744073709551610ULL)));
                    var_24 *= ((/* implicit */unsigned short) ((((/* implicit */long long int) (((_Bool)0) ? (arr_0 [i_5]) : (((/* implicit */int) arr_24 [i_0] [i_0] [i_0] [i_0] [i_0]))))) <= (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_18 [i_0 - 3] [i_0 - 3]) : (((/* implicit */long long int) ((/* implicit */int) (short)20231)))))));
                }
                for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 3) 
                {
                    var_25 += ((/* implicit */int) ((min((18446744073709551615ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 25ULL)) ? (((/* implicit */int) (_Bool)1)) : (1755296641)))))) >= (min((((((/* implicit */_Bool) 1703034211)) ? (2263594538071855373ULL) : (((/* implicit */unsigned long long int) arr_13 [4ULL] [4ULL] [(unsigned char)5] [(unsigned char)5] [i_6])))), (((/* implicit */unsigned long long int) 1004232122440933924LL))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_9 = 0; i_9 < 20; i_9 += 2) 
                    {
                        arr_32 [i_0] [i_5] [i_6] [i_8] [i_9] = ((/* implicit */long long int) ((_Bool) (+(arr_9 [i_0 + 1] [i_6] [i_6]))));
                        arr_33 [i_8] [i_5] [i_6] [i_6] [13LL] [16LL] = ((/* implicit */unsigned int) arr_18 [i_0 - 4] [i_0]);
                    }
                    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                    {
                        var_26 = ((/* implicit */unsigned long long int) min((var_26), (18446744073709551615ULL)));
                        arr_37 [i_6] [i_5] [i_6] [i_8] [i_10] &= ((/* implicit */signed char) min((((arr_12 [i_0] [i_0] [i_5 - 1] [i_10 - 1] [i_0 - 1]) & (arr_12 [(unsigned short)4] [i_6] [i_5 - 1] [i_10 - 1] [i_0 - 3]))), (((/* implicit */unsigned long long int) arr_21 [i_0] [i_0] [i_0 + 1] [i_0]))));
                    }
                    var_27 = ((/* implicit */_Bool) (-(((min((arr_31 [i_0] [i_5 - 1] [i_5 - 1] [(signed char)11] [i_5 - 1] [i_0] [(signed char)11]), (((/* implicit */unsigned long long int) 5769166247020424644LL)))) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))) | (18446744073709551615ULL)))))));
                    arr_38 [i_8] = ((/* implicit */unsigned long long int) arr_0 [i_8]);
                    arr_39 [i_0] [i_5] [i_8] [(signed char)1] [i_8] = ((/* implicit */_Bool) 5769166247020424645LL);
                }
                var_28 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_1 [i_0]), (arr_28 [(unsigned char)8] [i_5] [(unsigned short)16] [i_6] [i_5] [(signed char)6])))) ? (min((2263594538071855386ULL), (17619515440200101270ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_26 [i_0] [i_0 + 1] [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_8 [i_0] [i_5] [i_0])))))))) && (((((/* implicit */_Bool) ((4ULL) - (2263594538071855386ULL)))) && (((/* implicit */_Bool) 0ULL))))));
            }
            /* vectorizable */
            for (unsigned short i_11 = 0; i_11 < 20; i_11 += 2) 
            {
                var_29 = (unsigned short)15;
                var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) (-(((/* implicit */int) arr_22 [(unsigned char)9] [i_0 - 1] [i_5 + 1] [i_5 - 1])))))));
            }
            for (unsigned int i_12 = 0; i_12 < 20; i_12 += 3) 
            {
                var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) (short)-5505))));
                arr_44 [i_0] [i_0] [i_12] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_40 [i_0 - 3])) ? (4ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)61977)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-108)) ^ ((-2147483647 - 1))))) : (((((/* implicit */_Bool) (~(16183149535637696242ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (signed char)20)), ((unsigned char)7))))) : (((2263594538071855351ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4644)))))))));
                arr_45 [i_0 - 3] [i_0 - 3] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned short) 741602897U)))));
            }
            var_32 -= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_42 [i_5 - 1] [i_5 + 1] [i_5 + 1])))) * (((((/* implicit */_Bool) min((arr_29 [i_0] [i_0] [i_0]), (arr_4 [i_0] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((signed char)127), (((/* implicit */signed char) arr_22 [(signed char)4] [(signed char)4] [i_5] [i_5])))))) : (4294967295U)))));
            var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_31 [i_0] [i_0] [7LL] [(short)18] [i_5] [i_5] [i_5 - 1])) && (((/* implicit */_Bool) max((arr_20 [i_0 - 3] [i_0 + 1] [i_0]), (((/* implicit */unsigned int) (unsigned char)32))))))))));
            var_34 = ((/* implicit */unsigned long long int) min((var_34), (max((((/* implicit */unsigned long long int) max((arr_29 [i_0 - 4] [8U] [i_0]), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)237)))))))), ((-(((((/* implicit */_Bool) arr_18 [i_0 - 3] [i_5])) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1))))))))))));
        }
    }
    var_35 = ((/* implicit */_Bool) max((var_35), (((/* implicit */_Bool) var_1))));
}
