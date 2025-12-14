/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104853
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
    for (int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */int) (((!(((/* implicit */_Bool) (-(var_1)))))) ? (1913185222987622805ULL) : (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_1] [i_0]))));
                    var_16 = ((((/* implicit */_Bool) 433573954865205020ULL)) ? (((/* implicit */unsigned long long int) ((arr_5 [i_1 - 1] [i_1 - 1]) & (((/* implicit */int) var_0))))) : (((((/* implicit */_Bool) arr_7 [i_1 - 2] [i_1])) ? (((((/* implicit */_Bool) var_12)) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-14194))))) : (((/* implicit */unsigned long long int) arr_6 [i_0] [i_1 - 2] [i_0] [i_1])))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 4) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_4 = 0; i_4 < 16; i_4 += 2) /* same iter space */
        {
            var_17 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1085175569)) ? (((/* implicit */unsigned long long int) -1085175569)) : (var_3)))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_9 [i_3] [i_3])) : (((/* implicit */int) (signed char)34)))) : (arr_5 [i_3] [i_4])));
            arr_15 [i_3] = (+(((/* implicit */int) ((var_14) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))));
        }
        /* vectorizable */
        for (short i_5 = 0; i_5 < 16; i_5 += 2) /* same iter space */
        {
            arr_19 [i_3] [i_3] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_2 [i_3])))) ? (((((/* implicit */_Bool) arr_8 [i_5])) ? (14903479907111590952ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned long long int) (-(var_13))))));
            var_18 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_14 [i_3])) ? (var_11) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_8 [i_3])) : (-1085175568)))));
        }
        for (short i_6 = 0; i_6 < 16; i_6 += 2) /* same iter space */
        {
            arr_23 [i_3] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) arr_22 [i_6])) ? (((/* implicit */int) arr_22 [i_3])) : (((int) arr_22 [i_6]))));
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 16; i_7 += 2) 
            {
                for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 3) 
                {
                    for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (~(((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) 17723765578893187781ULL)) ? (1276190351U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)5))))))))));
                            var_20 = ((/* implicit */int) (-(((((/* implicit */_Bool) arr_6 [i_6] [i_7] [i_3] [i_3])) ? (var_5) : (((/* implicit */unsigned int) 1085175568))))));
                            var_21 = max((((/* implicit */unsigned long long int) (signed char)-62)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_3] [i_6] [i_7] [i_8] [i_9] [i_9])) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)61)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)24392))) : (var_5)))) : (var_14))));
                            var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_9])) ? (722978494816363834ULL) : (14513916612348862914ULL)))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_12)) + (2147483647))) >> (((((/* implicit */int) (signed char)-69)) + (78)))))) : (((((/* implicit */_Bool) (signed char)-87)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (5784845308525651796ULL)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (var_3) : (((/* implicit */unsigned long long int) arr_5 [i_3] [i_3]))))) ? (arr_26 [i_3] [i_3] [i_3] [i_3]) : (((/* implicit */int) var_2)))) : (((((/* implicit */int) var_9)) << (((arr_25 [i_3] [i_6] [i_6] [i_8]) + (917535001)))))));
                            arr_31 [i_7] [i_3] [i_3] [i_3] [i_3] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(3441834703U)))) ? (arr_20 [i_3]) : (((/* implicit */int) (short)30452))));
                        }
                    } 
                } 
            } 
        }
        /* LoopNest 2 */
        for (unsigned char i_10 = 0; i_10 < 16; i_10 += 3) 
        {
            for (signed char i_11 = 2; i_11 < 15; i_11 += 4) 
            {
                {
                    arr_39 [i_3] [i_3] &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_11 - 1])) >> (((1389192339) - (1389192329)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)-19152)) : (arr_14 [i_3])))) ? (247194076) : (-809709944)))) : (min((((/* implicit */unsigned int) arr_26 [i_11 - 1] [i_11 + 1] [i_11] [i_11 - 1])), (var_5)))));
                    var_23 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned char)192)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_11] [i_10] [i_10] [i_11 - 1] [i_10] [i_3]))) : (var_13))) < (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)63)))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (signed char i_12 = 0; i_12 < 16; i_12 += 2) 
        {
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 16; i_13 += 3) 
            {
                for (int i_14 = 0; i_14 < 16; i_14 += 2) 
                {
                    {
                        arr_48 [i_3] [i_12] [i_3] [i_12] &= ((/* implicit */int) (short)24226);
                        var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (short)24392)) ? (((/* implicit */unsigned long long int) 798652511U)) : (2886106942584714131ULL))))))));
                        var_25 -= ((/* implicit */short) ((signed char) (~(((/* implicit */int) arr_7 [i_3] [i_14])))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (short i_15 = 0; i_15 < 16; i_15 += 3) /* same iter space */
                        {
                            var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((((/* implicit */int) arr_4 [i_14] [i_12] [i_13])) + (((/* implicit */int) arr_4 [i_14] [i_14] [i_13])))))));
                            var_27 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_16 [i_13])) ? (((/* implicit */int) arr_16 [i_14])) : (((/* implicit */int) arr_16 [i_14]))));
                            arr_52 [i_3] [i_12] [i_13] [i_3] [i_15] [i_13] [i_3] = ((/* implicit */short) (unsigned char)192);
                            arr_53 [i_3] [i_12] [i_13] [i_14] [i_14] [i_15] = ((/* implicit */unsigned int) arr_26 [i_3] [i_3] [i_3] [i_14]);
                        }
                        for (short i_16 = 0; i_16 < 16; i_16 += 3) /* same iter space */
                        {
                            arr_57 [i_3] [i_12] [i_13] [i_14] [i_16] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) 2997573531U)) ? (((/* implicit */int) (short)15746)) : (((/* implicit */int) var_9))))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_46 [i_3] [i_3] [i_13] [i_13]))));
                            arr_58 [i_13] [i_13] [i_13] [i_13] [i_13] = ((/* implicit */signed char) var_7);
                            var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) 2886106942584714141ULL))));
                            var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) (~(((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_43 [i_12] [i_12]))) : (((((/* implicit */_Bool) 1276190341U)) ? (3227886183U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))))))));
                        }
                        /* vectorizable */
                        for (short i_17 = 0; i_17 < 16; i_17 += 3) /* same iter space */
                        {
                            arr_61 [i_3] [i_13] [i_13] [i_14] [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-62)) ? (1276190351U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-19636)))));
                            var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)23465)) ? (((/* implicit */unsigned long long int) var_4)) : (var_3)))) ? (((((/* implicit */_Bool) var_4)) ? (-865871476) : (((/* implicit */int) (signed char)-62)))) : (arr_41 [i_3]))))));
                            var_31 += ((/* implicit */unsigned char) arr_46 [i_3] [i_3] [i_14] [i_12]);
                            var_32 = ((/* implicit */unsigned long long int) min((var_32), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 3932827461360688701ULL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)-8))))) ? (((((/* implicit */_Bool) 10490188105019220885ULL)) ? (((/* implicit */unsigned long long int) arr_5 [i_3] [i_17])) : (1189863306016314947ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_3])))))));
                        }
                    }
                } 
            } 
            arr_62 [i_3] = ((signed char) ((((/* implicit */_Bool) arr_32 [i_3] [i_12])) ? (((arr_54 [i_3] [i_3] [i_3] [i_12] [i_12]) >> (((arr_27 [i_3] [i_12] [i_12] [i_3]) - (7311244573539489588ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
        }
    }
    var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? ((+(((/* implicit */int) var_7)))) : (((/* implicit */int) var_9)))))));
    var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((+(((/* implicit */int) (short)14516)))) + (((((/* implicit */_Bool) (signed char)125)) ? (var_11) : (((/* implicit */int) (short)30356))))))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) * (2739959081U)))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)-10379)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-10379))))))) : (((/* implicit */int) (short)18580))));
}
