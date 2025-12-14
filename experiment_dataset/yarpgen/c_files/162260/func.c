/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162260
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
    var_18 += ((/* implicit */unsigned short) min((var_17), (((/* implicit */signed char) var_15))));
    var_19 = ((/* implicit */short) var_10);
    var_20 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (unsigned char)188)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (_Bool)1)))) : (1048574U)))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */short) min(((~(((/* implicit */int) ((_Bool) arr_5 [i_0] [i_1] [(unsigned short)17]))))), (max((((/* implicit */int) arr_2 [i_0] [i_0])), ((~(((/* implicit */int) arr_9 [i_1] [i_1] [i_2]))))))));
                    var_22 *= ((/* implicit */unsigned int) (+((+(((/* implicit */int) arr_9 [i_0 - 1] [i_0] [i_0]))))));
                }
            } 
        } 
        var_23 ^= ((/* implicit */short) (~(562647168U)));
        var_24 = ((/* implicit */_Bool) (-(((/* implicit */int) ((signed char) ((unsigned char) (unsigned char)13))))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 16; i_3 += 1) 
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 16; i_4 += 2) 
        {
            for (short i_5 = 3; i_5 < 12; i_5 += 3) 
            {
                for (signed char i_6 = 0; i_6 < 16; i_6 += 4) 
                {
                    {
                        arr_23 [i_3] [i_4] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_5 + 4] [i_4] [i_5 + 4])) ? (((/* implicit */int) arr_9 [i_5 + 4] [21U] [21U])) : (((/* implicit */int) arr_9 [i_5 + 4] [i_3] [i_5]))));
                        var_25 |= ((/* implicit */long long int) ((short) (-(((/* implicit */int) arr_14 [i_4])))));
                    }
                } 
            } 
        } 
        arr_24 [i_3] = ((/* implicit */short) (-(((/* implicit */int) arr_11 [i_3] [i_3]))));
        /* LoopSeq 3 */
        for (short i_7 = 0; i_7 < 16; i_7 += 3) 
        {
            /* LoopSeq 2 */
            for (int i_8 = 0; i_8 < 16; i_8 += 2) 
            {
                var_26 *= ((/* implicit */int) ((((/* implicit */int) arr_21 [i_8])) >= (((/* implicit */int) arr_21 [i_8]))));
                arr_29 [i_3] [i_3] [i_3] [i_8] = ((/* implicit */unsigned char) ((signed char) arr_0 [i_8] [i_7]));
                /* LoopSeq 1 */
                for (signed char i_9 = 3; i_9 < 14; i_9 += 2) 
                {
                    arr_33 [i_3] [10] [i_3] [(short)10] = ((/* implicit */unsigned int) (~(((/* implicit */int) (short)27703))));
                    arr_34 [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_3])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_21 [i_3])))))));
                    var_27 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */int) (_Bool)0)) % (((/* implicit */int) (signed char)127)))));
                }
                arr_35 [i_3] [i_3] [i_8] = ((/* implicit */unsigned short) (-(((/* implicit */int) (short)(-32767 - 1)))));
                var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) (signed char)-1))) ? (((/* implicit */int) (unsigned char)13)) : (((/* implicit */int) arr_12 [i_3] [i_3]))));
            }
            for (signed char i_10 = 1; i_10 < 15; i_10 += 2) 
            {
                var_29 |= ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((arr_15 [i_10] [i_10]) ^ (((/* implicit */int) arr_1 [(signed char)16] [i_10]))))) ^ (arr_7 [i_3] [i_10 + 1])));
                var_30 = ((/* implicit */short) ((6089312168384582194LL) << ((((((-(((/* implicit */int) (_Bool)1)))) + (2))) - (1)))));
            }
            var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_21 [i_3]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_3] [i_7]))) : (((arr_20 [i_3] [i_3] [i_3]) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)244)))))));
            var_32 += ((/* implicit */signed char) (+(((/* implicit */int) (signed char)-81))));
            var_33 = ((((/* implicit */_Bool) (unsigned char)13)) ? (((/* implicit */int) (signed char)0)) : (((((/* implicit */_Bool) (signed char)29)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (_Bool)1)))));
            var_34 += ((/* implicit */unsigned char) (((~(var_12))) << (((/* implicit */int) (unsigned char)0))));
        }
        for (short i_11 = 0; i_11 < 16; i_11 += 4) 
        {
            var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) ((signed char) arr_7 [i_3] [i_11])))));
            arr_43 [i_3] [i_11] [i_3] &= ((/* implicit */short) (!(arr_17 [i_3] [i_11])));
            var_36 = ((/* implicit */short) max((var_36), (((/* implicit */short) arr_28 [i_3] [i_3] [i_3] [i_3]))));
            arr_44 [i_3] [i_3] [i_11] = ((/* implicit */signed char) (_Bool)1);
        }
        for (short i_12 = 0; i_12 < 16; i_12 += 2) 
        {
            arr_48 [i_3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_8))));
            /* LoopNest 2 */
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                for (unsigned char i_14 = 3; i_14 < 14; i_14 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            var_37 *= ((/* implicit */signed char) (((~(((/* implicit */int) arr_6 [i_3] [i_14 + 2])))) ^ (((/* implicit */int) arr_2 [i_3] [i_12]))));
                            var_38 *= ((/* implicit */short) (!(((/* implicit */_Bool) (signed char)95))));
                            var_39 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_5)))))));
                            var_40 ^= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_42 [4U] [i_12])) ? (((/* implicit */int) (signed char)35)) : (((/* implicit */int) arr_8 [(signed char)0] [i_13] [i_3]))))));
                        }
                        /* LoopSeq 3 */
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                        {
                            var_41 = ((/* implicit */signed char) (((~(((/* implicit */int) (unsigned char)252)))) != (((/* implicit */int) ((unsigned char) arr_12 [i_3] [i_3])))));
                            var_42 &= ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned char) (signed char)(-127 - 1))))));
                            arr_58 [i_3] [(unsigned char)12] [(unsigned char)12] [i_13] [i_3] = ((/* implicit */signed char) ((unsigned int) arr_52 [i_3] [i_12]));
                            arr_59 [i_3] [i_3] [(signed char)8] [12LL] [i_14] [(signed char)8] = ((((/* implicit */_Bool) arr_51 [i_14 + 2] [i_3] [i_14] [i_14 + 1])) ? (((/* implicit */int) arr_51 [i_14 - 3] [i_3] [(short)9] [i_14 - 3])) : (((/* implicit */int) arr_51 [i_14 + 1] [i_3] [i_14 + 1] [i_14 - 1])));
                        }
                        for (int i_17 = 0; i_17 < 16; i_17 += 2) /* same iter space */
                        {
                            arr_63 [i_3] [(short)5] [i_13] [i_3] [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) arr_49 [(short)3] [i_14 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_14 + 2] [0] [i_14 - 2] [i_14 - 2]))) : (arr_20 [i_3] [i_14 + 1] [i_14 + 1])));
                            var_43 = ((/* implicit */short) arr_12 [i_3] [i_3]);
                        }
                        for (int i_18 = 0; i_18 < 16; i_18 += 2) /* same iter space */
                        {
                            var_44 = ((/* implicit */short) ((int) ((((/* implicit */_Bool) (short)27652)) ? (-2305843009213693952LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)20))))));
                            arr_66 [i_3] [i_3] [i_3] [i_14] [i_18] = ((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned char)127)) & (((/* implicit */int) (signed char)0)))) ^ (((/* implicit */int) arr_32 [i_3] [i_3] [i_12] [i_14 - 1]))));
                            arr_67 [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_32 [i_13] [(signed char)6] [i_14 + 2] [i_18]))));
                        }
                        var_45 = ((/* implicit */unsigned char) min((var_45), (((/* implicit */unsigned char) ((unsigned int) (~(((/* implicit */int) (unsigned char)0))))))));
                    }
                } 
            } 
        }
    }
}
