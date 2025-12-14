/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142830
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
    var_16 = ((/* implicit */long long int) var_6);
    var_17 = ((/* implicit */int) (+(var_7)));
    var_18 = ((/* implicit */_Bool) var_3);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 3; i_0 < 22; i_0 += 4) 
    {
        var_19 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) (signed char)3))) ? (max((((/* implicit */long long int) (short)0)), (arr_0 [i_0 - 3]))) : (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_2 [i_0])), (var_4))))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                for (unsigned char i_3 = 0; i_3 < 23; i_3 += 4) 
                {
                    {
                        var_20 = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? ((-(var_4))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_1] [i_3])) ? (((/* implicit */int) arr_2 [(_Bool)1])) : (((/* implicit */int) arr_6 [i_1] [i_1]))))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-34))))) : (((((/* implicit */_Bool) 458752U)) ? (((/* implicit */unsigned int) 2147483647)) : (4294967293U)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_3 [(_Bool)1] [i_2] [4U]), (arr_7 [i_0 + 1] [i_0 + 1] [i_0 + 1] [10U])))) ? (max((var_7), (((/* implicit */long long int) var_10)))) : (((/* implicit */long long int) min((var_4), (((/* implicit */unsigned int) var_15)))))))) : ((+(min((((/* implicit */unsigned long long int) var_6)), (var_1)))))));
                            arr_12 [(unsigned short)11] [i_2] [i_1] [i_3] [i_4] = ((/* implicit */unsigned char) var_11);
                        }
                        arr_13 [22U] [i_1] [i_1] [(_Bool)1] = ((/* implicit */unsigned char) arr_0 [i_0 - 1]);
                    }
                } 
            } 
        } 
        arr_14 [i_0] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_11 [i_0 - 2] [i_0] [i_0 - 2] [i_0 - 1] [i_0 - 3])) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_11 [i_0 - 2] [i_0 - 3] [i_0] [i_0] [i_0 - 2])))), (((/* implicit */int) arr_5 [(unsigned char)0]))));
    }
    /* vectorizable */
    for (unsigned int i_5 = 0; i_5 < 24; i_5 += 2) 
    {
        var_22 = var_6;
        var_23 = ((/* implicit */int) arr_16 [i_5] [i_5]);
        /* LoopSeq 4 */
        for (long long int i_6 = 0; i_6 < 24; i_6 += 1) 
        {
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 24; i_7 += 1) 
            {
                for (unsigned int i_8 = 4; i_8 < 23; i_8 += 2) 
                {
                    for (unsigned char i_9 = 0; i_9 < 24; i_9 += 1) 
                    {
                        {
                            arr_29 [i_5] [i_6] [i_7] [i_7] [i_5] [i_5] = ((/* implicit */unsigned int) (-((-(arr_23 [i_5] [i_5] [i_7] [11] [i_8] [i_9])))));
                            arr_30 [i_7] [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) 4294967292U)) || (var_10)))) <= (((/* implicit */int) (_Bool)1))));
                            var_24 = ((/* implicit */unsigned char) (_Bool)1);
                            arr_31 [i_5] [i_5] [i_7] [i_8 - 2] [i_9] [i_9] = ((/* implicit */signed char) ((long long int) (-(var_0))));
                        }
                    } 
                } 
            } 
            var_25 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [18U] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65531))) : (1903789966U)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 31U)) ? (((/* implicit */int) arr_19 [i_5] [i_5])) : (((/* implicit */int) (_Bool)1))))) : (4257376491U)));
        }
        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
        {
            arr_35 [i_5] [i_10] = ((/* implicit */unsigned char) ((unsigned int) 4294967276U));
            arr_36 [i_5] [i_10 - 1] [i_10] = ((/* implicit */long long int) (!(arr_21 [i_10 - 1] [i_10 - 1] [i_5])));
        }
        for (unsigned short i_11 = 0; i_11 < 24; i_11 += 4) /* same iter space */
        {
            arr_39 [21LL] [21LL] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_20 [i_11] [i_5] [i_5] [i_5])) ? (((/* implicit */int) arr_19 [i_11] [i_11])) : (((/* implicit */int) ((_Bool) arr_26 [i_5] [i_11])))));
            var_26 = ((/* implicit */unsigned long long int) (((+(var_12))) - (((/* implicit */unsigned int) -1336802752))));
            var_27 = ((/* implicit */signed char) arr_16 [i_5] [i_5]);
            /* LoopSeq 1 */
            for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
            {
                var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_33 [i_5] [i_11] [i_12 - 1])) ? ((-(((/* implicit */int) var_15)))) : (((/* implicit */int) arr_41 [i_12] [i_11] [(unsigned char)1]))));
                arr_43 [i_5] [i_11] [i_11] = ((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_12] [i_12] [i_12 - 1])) ? (((/* implicit */long long int) (~(arr_34 [i_5] [i_5] [i_5])))) : ((((_Bool)1) ? (4503599627370495LL) : (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_11] [i_11] [i_5])))))));
                arr_44 [i_12] [i_11] [i_5] [i_5] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_41 [0LL] [i_12 - 1] [0LL]))));
                var_29 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_15))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_37 [i_12 - 1] [i_11]) >= (arr_38 [i_5]))))) : (((unsigned int) arr_22 [i_5]))));
            }
        }
        for (unsigned short i_13 = 0; i_13 < 24; i_13 += 4) /* same iter space */
        {
            var_30 = ((/* implicit */short) (~(((arr_28 [i_5] [(unsigned short)2] [(unsigned short)2] [i_13] [i_13]) ? (var_0) : (((/* implicit */unsigned int) -2147483642))))));
            arr_47 [i_5] [i_5] = ((/* implicit */unsigned short) arr_15 [i_13]);
            var_31 = ((/* implicit */int) ((var_6) <= (((/* implicit */unsigned int) arr_34 [i_5] [i_5] [i_5]))));
        }
        arr_48 [(signed char)6] [(signed char)6] = ((/* implicit */unsigned char) var_3);
        /* LoopSeq 3 */
        for (long long int i_14 = 0; i_14 < 24; i_14 += 4) 
        {
            arr_53 [i_5] = ((/* implicit */unsigned int) ((var_13) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_5] [i_14])))));
            arr_54 [i_5] = (((_Bool)1) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_42 [i_5] [12LL] [8U] [i_14]))));
            arr_55 [i_14] [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [i_14] [i_5])) ? (((/* implicit */int) arr_52 [i_5] [i_5] [i_14])) : (((/* implicit */int) arr_52 [i_14] [i_14] [i_5]))));
        }
        for (unsigned int i_15 = 3; i_15 < 23; i_15 += 3) 
        {
            var_32 = ((/* implicit */signed char) 4294967295U);
            var_33 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (short)-32762)) : (((/* implicit */int) arr_18 [i_5] [21U] [i_15 + 1]))));
        }
        for (signed char i_16 = 0; i_16 < 24; i_16 += 2) 
        {
            var_34 = ((/* implicit */unsigned int) ((_Bool) ((_Bool) var_11)));
            arr_62 [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_52 [i_5] [i_5] [i_5])) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) ? (((((/* implicit */_Bool) 15U)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) : (arr_20 [i_5] [i_5] [i_5] [2LL]))) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
            var_35 = ((/* implicit */unsigned int) (~((+(((/* implicit */int) var_15))))));
            var_36 = arr_59 [i_16];
        }
    }
    for (unsigned int i_17 = 0; i_17 < 18; i_17 += 1) 
    {
        var_37 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) ^ (arr_25 [i_17] [i_17] [i_17] [i_17] [i_17]))))) ? (((/* implicit */int) arr_58 [i_17] [i_17])) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_15))) <= (arr_51 [i_17] [(_Bool)1] [(unsigned char)15]))))));
        var_38 = ((/* implicit */unsigned int) ((unsigned char) 2147483647));
    }
}
