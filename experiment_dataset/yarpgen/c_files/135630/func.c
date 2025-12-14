/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135630
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
    for (unsigned int i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_15 -= ((/* implicit */short) ((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0 + 1] [i_0]))) & (arr_0 [(signed char)4]))));
                    var_16 -= ((/* implicit */long long int) ((signed char) ((var_6) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 2]))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */signed char) (+(((((/* implicit */int) (short)29895)) & (((/* implicit */int) (_Bool)1))))));
    /* LoopSeq 2 */
    for (unsigned char i_3 = 3; i_3 < 20; i_3 += 1) 
    {
        arr_12 [i_3] = ((/* implicit */short) max(((+(3359337796U))), (max((935629487U), (((/* implicit */unsigned int) (_Bool)1))))));
        arr_13 [i_3] = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) arr_10 [i_3 - 2])) + (((/* implicit */int) arr_10 [i_3 - 3]))))));
        var_18 ^= max((((/* implicit */int) (_Bool)0)), ((+(((/* implicit */int) max((arr_11 [i_3]), (arr_11 [i_3])))))));
        arr_14 [i_3] [i_3] = ((/* implicit */_Bool) max((((/* implicit */int) arr_10 [i_3 - 3])), (((((/* implicit */int) arr_10 [i_3 - 3])) >> (((/* implicit */int) arr_10 [i_3 - 3]))))));
    }
    for (unsigned int i_4 = 0; i_4 < 15; i_4 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_5 = 0; i_5 < 15; i_5 += 3) /* same iter space */
        {
            var_19 ^= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_13)), (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)66)) & (((/* implicit */int) arr_9 [i_4]))))) ? (((/* implicit */unsigned long long int) arr_0 [i_4])) : (((((/* implicit */_Bool) 13514922428115334677ULL)) ? (11156093572454397707ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)247)))))))));
            var_20 = ((/* implicit */unsigned long long int) (+(935629499U)));
        }
        for (unsigned char i_6 = 0; i_6 < 15; i_6 += 3) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) max((((((var_0) + (9223372036854775807LL))) << ((((+(((/* implicit */int) (_Bool)1)))) - (1))))), (max(((((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)242))) : (6021919152414355856LL))), (((/* implicit */long long int) max(((short)-32765), (((/* implicit */short) (signed char)68))))))))))));
            var_22 = max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) - (2746180333434695901ULL))), (((/* implicit */unsigned long long int) ((short) var_6))));
        }
        for (unsigned char i_7 = 0; i_7 < 15; i_7 += 3) /* same iter space */
        {
            var_23 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) max((arr_11 [i_7]), (arr_11 [i_7]))))));
            var_24 = ((/* implicit */unsigned int) ((arr_21 [i_4] [i_7]) ^ (((/* implicit */long long int) ((/* implicit */int) (short)-1)))));
            arr_25 [i_4] [i_7] [i_7] = ((/* implicit */unsigned int) max((min((((/* implicit */long long int) min((((/* implicit */unsigned short) var_11)), ((unsigned short)65535)))), (((((/* implicit */_Bool) (short)1)) ? (arr_8 [i_4] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))), (((/* implicit */long long int) ((unsigned short) min((((/* implicit */unsigned long long int) 3915276987U)), (arr_23 [i_4] [i_7] [i_7])))))));
            var_25 *= ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)68)) ? (arr_19 [i_4] [(unsigned char)3]) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_4])))))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) (signed char)91)), (arr_17 [i_4] [i_7]))))) : (((9223372036854775807LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_9))))))), (((/* implicit */long long int) var_14))));
        }
        /* LoopSeq 2 */
        for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
        {
            arr_28 [i_4] [i_8] [i_8] = ((/* implicit */short) (+(((/* implicit */int) arr_2 [i_4] [i_4]))));
            arr_29 [i_8] [i_8] = ((/* implicit */unsigned char) (short)7523);
        }
        for (unsigned char i_9 = 1; i_9 < 11; i_9 += 4) 
        {
            /* LoopSeq 4 */
            for (unsigned long long int i_10 = 1; i_10 < 14; i_10 += 3) 
            {
                var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) (+((+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_4] [i_4] [i_4]))) <= (arr_6 [i_4] [1ULL] [i_10 + 1] [i_10 + 1])))))))))));
                arr_37 [i_10] [i_10] [i_10] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_9 [i_10])) : (((/* implicit */int) arr_5 [2LL] [i_9 + 1] [i_10 + 1] [i_10 + 1]))));
            }
            for (unsigned long long int i_11 = 0; i_11 < 15; i_11 += 4) 
            {
                arr_41 [i_4] = ((/* implicit */unsigned char) var_12);
                arr_42 [i_4] [i_9 + 2] [i_4] [10U] = ((/* implicit */signed char) (unsigned char)129);
            }
            for (unsigned char i_12 = 0; i_12 < 15; i_12 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned int i_13 = 4; i_13 < 13; i_13 += 4) 
                {
                    for (long long int i_14 = 0; i_14 < 15; i_14 += 4) 
                    {
                        {
                            arr_52 [i_4] [i_9 + 4] [i_12] [i_13] [i_13] [i_14] [(unsigned char)12] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned char) arr_40 [i_4] [i_4])))));
                            var_27 -= ((/* implicit */unsigned char) max(((+(((/* implicit */int) arr_10 [i_14])))), (((((/* implicit */int) ((_Bool) var_0))) / (((/* implicit */int) min((arr_27 [i_13]), (var_5))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_15 = 3; i_15 < 14; i_15 += 4) 
                {
                    for (unsigned char i_16 = 0; i_16 < 15; i_16 += 2) 
                    {
                        {
                            var_28 *= ((/* implicit */int) (((-(((((/* implicit */int) (unsigned char)228)) / (((/* implicit */int) (short)-7806)))))) <= (((/* implicit */int) (short)127))));
                            arr_59 [i_12] [i_16] = arr_45 [i_9];
                            arr_60 [i_9] [i_12] [i_9] = ((/* implicit */signed char) arr_8 [i_12] [i_12]);
                            arr_61 [i_15 - 1] [i_15 - 2] [i_15] [i_15 + 1] = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-69)) < (((/* implicit */int) (unsigned char)255))));
                        }
                    } 
                } 
            }
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                arr_65 [i_4] [i_9 + 1] [(unsigned short)14] = ((/* implicit */unsigned long long int) ((unsigned char) (+(((/* implicit */int) arr_55 [i_17] [i_17] [i_9 + 2] [i_4])))));
                var_29 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((short) max((3359337789U), (((/* implicit */unsigned int) (_Bool)0)))))), (((8881432270543544060ULL) | (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)0)))))))));
                var_30 = ((/* implicit */unsigned short) (~((+(arr_23 [i_4] [8ULL] [i_4])))));
            }
            arr_66 [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_9 + 4])) ? (arr_22 [i_9 - 1]) : (arr_22 [i_9 + 3])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_4]))) : (max((((/* implicit */unsigned long long int) (signed char)68)), (arr_48 [(signed char)6] [i_9])))));
            var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) (~(((/* implicit */int) (short)-1)))))));
            /* LoopNest 2 */
            for (int i_18 = 0; i_18 < 15; i_18 += 4) 
            {
                for (unsigned short i_19 = 0; i_19 < 15; i_19 += 3) 
                {
                    {
                        arr_74 [i_4] [i_9] [i_19] [i_4] = ((/* implicit */long long int) (short)-154);
                        arr_75 [i_4] [i_9 + 3] [i_19] [i_19] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -9223372036854775793LL)) ? (((/* implicit */unsigned long long int) min((arr_72 [i_9 - 1] [i_9 + 4] [i_9 + 3]), (arr_72 [i_9 + 2] [i_9 + 3] [i_9 - 1])))) : (max((((/* implicit */unsigned long long int) arr_58 [i_4] [i_9 + 1] [i_18] [i_19] [i_19] [i_19] [i_19])), (arr_38 [i_4] [i_9] [i_9] [i_9 - 1])))));
                        var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) arr_44 [i_9] [i_18] [i_19]))));
                    }
                } 
            } 
            arr_76 [i_4] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-151))) | ((~(498586106917677029ULL)))))) && (((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)37053)) ? (((/* implicit */unsigned long long int) 3305730735U)) : (498586106917677037ULL))) - (((/* implicit */unsigned long long int) min((var_4), (arr_56 [i_4] [i_4] [i_4] [i_9] [i_9])))))))));
        }
        /* LoopSeq 1 */
        for (short i_20 = 0; i_20 < 15; i_20 += 3) 
        {
            var_33 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_4])) ? (arr_54 [i_4] [i_4] [i_20] [i_4] [i_20]) : (((/* implicit */long long int) ((/* implicit */int) (short)27314)))))) ? (((/* implicit */int) ((_Bool) arr_15 [2]))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)87))) == (604751725U))))))) ? (max((((/* implicit */unsigned int) (~(((/* implicit */int) arr_47 [i_4] [i_20] [i_4] [i_20] [i_4] [i_20]))))), (arr_67 [i_20] [i_20]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_3 [i_4] [i_20] [i_20])) == ((+(((/* implicit */int) (signed char)89))))))))));
            arr_80 [i_4] [i_4] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) (short)-154)) && (((/* implicit */_Bool) arr_70 [i_4])))))));
            arr_81 [i_4] = ((/* implicit */long long int) ((unsigned short) (unsigned char)255));
            var_34 = ((/* implicit */long long int) 4294967265U);
        }
    }
}
