/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175116
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
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 20; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned short i_4 = 0; i_4 < 22; i_4 += 4) 
                            {
                                var_18 = ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)103))));
                                var_19 = ((/* implicit */signed char) ((((/* implicit */long long int) arr_9 [i_2 + 1] [i_1] [i_0 - 1] [(unsigned char)6])) != (((((/* implicit */_Bool) 518775613U)) ? (((/* implicit */long long int) var_1)) : (arr_5 [(signed char)20])))));
                            }
                            var_20 = min((((/* implicit */unsigned long long int) arr_5 [(_Bool)1])), (min((7101010487138646635ULL), (((/* implicit */unsigned long long int) (unsigned short)31126)))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((long long int) arr_6 [i_0] [i_0 - 1] [11U] [i_0] [i_1]))) ? (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))) : (min((((/* implicit */long long int) var_9)), (arr_10 [14ULL] [i_1] [i_0] [14ULL] [14ULL]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-120)) ? (((/* implicit */int) (signed char)-120)) : (((/* implicit */int) (_Bool)1)))))));
                var_22 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_6 [i_0 - 1] [i_0 - 1] [3LL] [i_0] [i_0 - 1])) | (((/* implicit */int) arr_6 [i_0 - 1] [16LL] [16LL] [i_0] [i_0 - 1])))) - (((/* implicit */int) (!(arr_6 [i_0 - 1] [i_0 - 1] [(unsigned short)1] [i_0] [i_0 - 1]))))));
                /* LoopNest 2 */
                for (signed char i_5 = 2; i_5 < 20; i_5 += 3) 
                {
                    for (long long int i_6 = 0; i_6 < 22; i_6 += 4) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                            {
                                var_23 += ((/* implicit */unsigned short) (-(max((max((var_8), (((/* implicit */unsigned int) arr_16 [i_5 - 1] [i_0] [11] [i_5 - 1] [i_1] [i_0])))), (((unsigned int) (signed char)120))))));
                                var_24 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)65532))));
                            }
                            for (signed char i_8 = 0; i_8 < 22; i_8 += 4) 
                            {
                                var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((var_7) >= (var_10))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_11), ((_Bool)1))))) : (((arr_2 [i_5 - 2] [i_5 - 2] [i_8]) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_9)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((2095476394) != (((/* implicit */int) (unsigned short)37304)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)254)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_3 [i_8] [i_1] [i_1]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_8)))))) : (((((/* implicit */_Bool) (signed char)-48)) ? (4197053923012479195LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-66)))))))));
                                var_26 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) 9234122126115464611ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (9212621947594087009ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0 - 1] [i_5 + 1] [i_5 + 1]))) <= (arr_7 [i_0 - 1]))))));
                                var_27 = ((/* implicit */short) arr_9 [i_0 - 1] [1U] [i_5 - 2] [i_5 - 2]);
                                var_28 = ((/* implicit */unsigned short) min((((min((((/* implicit */long long int) (_Bool)1)), (-3686292768162626453LL))) & (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (signed char)89)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_16))) + (2097150U)))) ? (min((((/* implicit */unsigned int) -2073421900)), (arr_7 [i_6]))) : (3501048848U))))));
                            }
                            var_29 *= ((/* implicit */_Bool) min((((/* implicit */long long int) (~(((((arr_8 [i_0 - 1] [i_0 - 1] [i_1] [(signed char)10] [(signed char)2] [i_1]) + (2147483647))) << (((/* implicit */int) arr_11 [i_1] [6ULL]))))))), (((long long int) (!(((/* implicit */_Bool) (unsigned short)4653)))))));
                            var_30 += ((/* implicit */signed char) (unsigned char)28);
                            var_31 *= ((/* implicit */unsigned short) max((((/* implicit */long long int) ((signed char) (short)17522))), (var_10)));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (int i_9 = 0; i_9 < 22; i_9 += 1) /* same iter space */
                {
                    var_32 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)124))))) ? (((/* implicit */int) (unsigned short)34406)) : ((-(((/* implicit */int) (unsigned short)23009)))))) & ((-(arr_23 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1])))));
                    var_33 = (!(((/* implicit */_Bool) -519487821)));
                    /* LoopNest 2 */
                    for (unsigned int i_10 = 3; i_10 < 21; i_10 += 3) 
                    {
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            {
                                var_34 = ((/* implicit */_Bool) var_15);
                                var_35 = (~(((/* implicit */int) ((max((var_15), (((/* implicit */unsigned long long int) var_9)))) >= (((/* implicit */unsigned long long int) (-(var_1))))))));
                                var_36 = ((/* implicit */short) min((var_36), (((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_9])) ? (((/* implicit */int) arr_30 [i_0])) : (((/* implicit */int) (signed char)(-127 - 1)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_15 [i_1] [i_1] [i_1]))))) : (max((var_2), (((/* implicit */long long int) (_Bool)0)))))) >> (min((((/* implicit */int) ((-2147483635) == (((/* implicit */int) var_3))))), ((+(((/* implicit */int) var_0)))))))))));
                                var_37 = ((/* implicit */signed char) max((var_37), (((/* implicit */signed char) max((((/* implicit */long long int) ((((((/* implicit */_Bool) 18446744073709551610ULL)) ? (((/* implicit */int) (unsigned short)49152)) : (((/* implicit */int) (unsigned short)42966)))) == (1341375210)))), (((((/* implicit */_Bool) -2147483643)) ? (4603128677832676527LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))))))))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (int i_12 = 0; i_12 < 22; i_12 += 1) /* same iter space */
                {
                    var_38 = ((/* implicit */unsigned int) ((_Bool) arr_7 [i_0 - 1]));
                    /* LoopNest 2 */
                    for (unsigned short i_13 = 0; i_13 < 22; i_13 += 3) 
                    {
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            {
                                var_39 = ((arr_9 [i_0] [(unsigned short)17] [i_0 - 1] [(unsigned short)17]) > (arr_9 [i_0] [i_0] [i_0 - 1] [i_13]));
                                var_40 = ((/* implicit */unsigned int) ((arr_27 [i_14] [0ULL] [i_14] [(unsigned char)15]) ? (((/* implicit */long long int) var_17)) : (((long long int) var_15))));
                                var_41 = ((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_14] [i_13] [i_0])) > (((/* implicit */int) arr_2 [i_13] [i_1] [i_0 - 1]))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_15 = 0; i_15 < 22; i_15 += 3) 
    {
        for (signed char i_16 = 0; i_16 < 22; i_16 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_17 = 0; i_17 < 22; i_17 += 1) 
                {
                    for (long long int i_18 = 0; i_18 < 22; i_18 += 1) 
                    {
                        {
                            var_42 = ((/* implicit */signed char) ((((((/* implicit */int) max(((unsigned char)0), (((/* implicit */unsigned char) arr_15 [i_15] [i_16] [i_17]))))) >> (((arr_21 [i_18] [(_Bool)1] [(_Bool)1] [i_15]) - (3794056176563971526ULL))))) >> (((((((/* implicit */_Bool) max((arr_21 [i_15] [(short)8] [i_17] [i_18]), (18446744073709551604ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9212621947594087009ULL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_14))))) : (max((((/* implicit */unsigned long long int) (unsigned short)31154)), (9234122126115464610ULL))))) - (11790ULL)))));
                            var_43 *= ((/* implicit */int) ((((/* implicit */_Bool) ((((long long int) arr_1 [i_15] [(unsigned short)15])) * (((/* implicit */long long int) ((int) arr_8 [(unsigned short)3] [1] [i_17] [i_17] [(_Bool)1] [(_Bool)1])))))) && (((/* implicit */_Bool) arr_9 [15U] [15U] [(unsigned char)4] [i_18]))));
                        }
                    } 
                } 
                var_44 = ((/* implicit */_Bool) var_1);
                var_45 = ((/* implicit */unsigned int) max((((((((/* implicit */_Bool) (signed char)-112)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) + (max((((/* implicit */int) (short)-26771)), (-2147483633))))), (((/* implicit */int) max(((!(((/* implicit */_Bool) arr_47 [i_15] [i_15] [(_Bool)1])))), (arr_11 [i_16] [i_15]))))));
                var_46 = ((/* implicit */_Bool) arr_42 [i_15]);
                var_47 = ((/* implicit */unsigned short) var_3);
            }
        } 
    } 
    var_48 = ((/* implicit */unsigned char) ((max((20ULL), (((/* implicit */unsigned long long int) var_13)))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((1075723126) - (((/* implicit */int) (signed char)-125)))) : (((/* implicit */int) max(((signed char)-120), ((signed char)3)))))))));
}
