/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187260
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
    /* LoopSeq 4 */
    for (unsigned int i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        var_16 = ((/* implicit */short) ((unsigned char) (_Bool)1));
        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) max((9223372036854775808ULL), (((/* implicit */unsigned long long int) (((-(arr_1 [i_0] [i_0]))) ^ (((/* implicit */int) max((var_14), (((/* implicit */signed char) var_15)))))))))))));
        var_18 = ((/* implicit */int) var_12);
    }
    for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 1) 
    {
        var_19 += ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((_Bool) ((var_1) ? (32256U) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))))));
        /* LoopSeq 4 */
        for (unsigned char i_2 = 0; i_2 < 18; i_2 += 4) 
        {
            arr_9 [10] [i_2] [i_2] = ((/* implicit */unsigned char) max((((/* implicit */int) (!(((/* implicit */_Bool) 4294935040U))))), ((-(((/* implicit */int) arr_6 [i_1] [i_2]))))));
            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((180765503328897343ULL) * (((/* implicit */unsigned long long int) var_6))))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) arr_5 [i_2])))) : ((-(((/* implicit */int) (_Bool)1))))));
            var_21 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) min((arr_4 [17] [i_2]), (((/* implicit */unsigned short) (short)25725))))) ? (((((/* implicit */int) arr_6 [i_1] [i_2])) ^ (((/* implicit */int) var_5)))) : (((/* implicit */int) (_Bool)1)))) : (min((var_7), (((/* implicit */int) arr_5 [i_1]))))));
            var_22 += ((/* implicit */unsigned short) arr_5 [i_1]);
        }
        for (unsigned char i_3 = 3; i_3 < 17; i_3 += 2) 
        {
            arr_13 [i_1] [i_3] = ((/* implicit */signed char) min(((~(arr_12 [i_3]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_4)))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_14))))) : (arr_10 [i_3 + 1] [i_3 - 3] [i_3 - 1]))))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (short i_4 = 1; i_4 < 17; i_4 += 3) 
            {
                var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_10 [i_3 - 2] [i_3 - 2] [i_4 + 1])))))));
                var_24 = ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [10ULL] [i_3 - 2] [i_4 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1] [i_3 + 1] [i_4 + 1]))) : (arr_14 [(unsigned short)16] [i_3 - 2])));
                /* LoopSeq 1 */
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 4) 
                    {
                        var_25 = ((((/* implicit */int) var_1)) < (((/* implicit */int) var_1)));
                        var_26 -= ((/* implicit */_Bool) arr_18 [i_5]);
                        var_27 = ((/* implicit */short) arr_4 [i_4] [i_6]);
                    }
                    arr_22 [i_1] [i_3] [i_3] [i_3] [i_5 - 1] = ((/* implicit */unsigned short) ((arr_10 [i_3 - 3] [i_4 + 1] [i_5 - 1]) + (((/* implicit */unsigned int) var_8))));
                }
            }
            for (unsigned short i_7 = 0; i_7 < 18; i_7 += 4) 
            {
                arr_25 [(short)14] [i_3] [i_7] = ((/* implicit */_Bool) arr_23 [i_1] [i_3] [i_7]);
                arr_26 [i_3] = ((/* implicit */signed char) arr_8 [i_1] [i_3] [i_3]);
                var_28 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_9), (((/* implicit */long long int) arr_23 [i_1] [i_1] [i_1]))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) var_5))))))));
            }
            /* vectorizable */
            for (unsigned short i_8 = 1; i_8 < 17; i_8 += 3) 
            {
                /* LoopSeq 2 */
                for (short i_9 = 0; i_9 < 18; i_9 += 1) 
                {
                    var_29 -= ((/* implicit */unsigned long long int) (!(var_15)));
                    arr_32 [i_1] [i_3 - 2] [i_3] [(_Bool)1] = ((/* implicit */long long int) (-(var_6)));
                    /* LoopSeq 1 */
                    for (short i_10 = 0; i_10 < 18; i_10 += 1) 
                    {
                        arr_35 [i_1] [i_3] [i_8 - 1] [i_3] [i_10] = ((/* implicit */int) ((var_12) > (((((/* implicit */_Bool) var_8)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                        arr_36 [i_1] [i_1] [i_3 + 1] [i_8] [i_9] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_8])) || (((/* implicit */_Bool) (signed char)-32))));
                        arr_37 [i_1] [i_3] [(unsigned char)5] [i_3] [(_Bool)1] = ((/* implicit */int) ((arr_14 [i_3 + 1] [i_10]) * (((/* implicit */unsigned long long int) ((unsigned int) arr_10 [i_3] [i_8] [i_9])))));
                        arr_38 [i_1] [i_3] [i_8] [i_8] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_23 [i_3 - 1] [i_3 - 3] [i_8 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_3 - 1] [i_3 - 3] [i_8 - 1]))) : (var_12)));
                    }
                    arr_39 [i_1] [i_3] [i_1] [i_3 + 1] [i_8] [i_1] = ((/* implicit */unsigned int) ((arr_19 [i_1] [i_3] [i_8 + 1] [i_9]) / (var_8)));
                    var_30 ^= ((/* implicit */short) ((((/* implicit */int) var_5)) ^ (((/* implicit */int) arr_4 [i_1] [i_9]))));
                }
                for (unsigned long long int i_11 = 2; i_11 < 16; i_11 += 1) 
                {
                    arr_42 [i_1] [i_3] = ((/* implicit */int) (((!(arr_31 [i_1] [16U] [i_3]))) ? (((unsigned long long int) (_Bool)1)) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
                    var_31 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_41 [(unsigned short)13] [i_3] [i_8] [i_11 - 2]))));
                }
                var_32 += ((/* implicit */_Bool) (~((+(((/* implicit */int) (unsigned char)7))))));
                var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) (-(((/* implicit */int) (signed char)-18)))))));
            }
            arr_43 [i_1] [i_3] = ((/* implicit */unsigned short) (((-(((/* implicit */int) arr_31 [(signed char)14] [i_1] [i_3])))) != (((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)128))))), (((short) (_Bool)1)))))));
            arr_44 [i_3] = ((((/* implicit */_Bool) min((arr_19 [i_1] [i_3 - 1] [i_1] [i_3 - 2]), (((/* implicit */int) arr_4 [i_1] [i_3]))))) && (((/* implicit */_Bool) (-(((/* implicit */int) var_1))))));
            var_34 = ((/* implicit */long long int) min((var_34), (((/* implicit */long long int) ((max((var_4), (((((/* implicit */int) (signed char)62)) * (((/* implicit */int) arr_34 [i_1] [(short)7] [i_1] [i_1] [i_1] [i_1] [(_Bool)1])))))) > (min((min((((/* implicit */int) arr_28 [i_1] [i_1])), (var_7))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (signed char)63)))))))))));
        }
        for (unsigned long long int i_12 = 0; i_12 < 18; i_12 += 2) 
        {
            arr_48 [i_1] [i_1] [i_12] = ((/* implicit */short) min(((_Bool)1), ((_Bool)1)));
            var_35 += ((/* implicit */_Bool) (+((((-(var_2))) | (((/* implicit */long long int) (-(2153617278U))))))));
            arr_49 [(signed char)10] [i_1] [(signed char)10] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_18 [(signed char)1]))));
        }
        /* vectorizable */
        for (long long int i_13 = 1; i_13 < 17; i_13 += 1) 
        {
            var_36 = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
            var_37 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_51 [i_13] [i_13 - 1] [i_13]))));
        }
        var_38 = ((/* implicit */unsigned char) max((var_38), (((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */long long int) arr_29 [i_1] [i_1] [14] [i_1] [i_1])) == (var_9)))))));
        var_39 += ((/* implicit */signed char) arr_11 [(short)0] [i_1]);
    }
    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
    {
        arr_56 [7ULL] [i_14] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_14] [i_14] [i_14] [i_14]))))) * (max((var_7), (((/* implicit */int) (short)-26082))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_15 = 0; i_15 < 13; i_15 += 4) 
        {
            var_40 ^= ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)96))));
            arr_60 [i_14] = ((/* implicit */short) ((unsigned char) max((var_9), (min((var_9), (((/* implicit */long long int) (_Bool)1)))))));
        }
    }
    for (int i_16 = 2; i_16 < 20; i_16 += 1) 
    {
        var_41 = ((/* implicit */unsigned long long int) min((var_41), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_62 [i_16]))) == (2527632824U))))) < (((((/* implicit */_Bool) var_14)) ? (1ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_61 [i_16])))))))))))));
        var_42 = (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)11347))))));
        var_43 = ((/* implicit */_Bool) arr_61 [i_16 + 3]);
    }
    /* LoopNest 2 */
    for (int i_17 = 0; i_17 < 18; i_17 += 4) 
    {
        for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
        {
            {
                var_44 = ((unsigned short) (_Bool)1);
                arr_70 [i_17] [i_17] [i_18] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) min((2239097129U), (1U)))) ? (arr_66 [i_17] [i_18 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_46 [i_17] [i_17])))))));
                var_45 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_4 [i_17] [i_18 - 1])) : (((/* implicit */int) arr_4 [i_17] [i_18 - 1])))), (((/* implicit */int) (!(((/* implicit */_Bool) min((2758555680U), (((/* implicit */unsigned int) (_Bool)0))))))))));
            }
        } 
    } 
    var_46 = ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) var_7)) : (327102730997566057ULL))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))));
}
