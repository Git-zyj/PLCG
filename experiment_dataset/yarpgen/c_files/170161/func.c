/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170161
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
    var_17 += ((/* implicit */_Bool) var_5);
    /* LoopSeq 4 */
    for (unsigned short i_0 = 3; i_0 < 11; i_0 += 4) /* same iter space */
    {
        arr_3 [(unsigned short)10] = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_1 [i_0 - 2])) : (((/* implicit */int) arr_1 [i_0 + 2])))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 14; i_4 += 2) 
                        {
                            {
                                var_18 -= ((/* implicit */short) min((((/* implicit */int) (unsigned char)0)), (((((/* implicit */int) arr_12 [i_0] [(short)12] [i_2] [i_4])) >> ((((~(((/* implicit */int) arr_12 [i_0 - 2] [i_1] [(_Bool)1] [i_4])))) + (25)))))));
                                var_19 = ((/* implicit */short) 1984LL);
                                var_20 *= ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) (short)-14355)), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_10 [(signed char)7] [i_2] [i_0 + 3] [i_0 + 3])) : (((/* implicit */int) var_10))))))) ? (((((/* implicit */int) var_6)) & (((((((/* implicit */int) arr_1 [i_0 - 1])) + (2147483647))) >> (((796543643U) - (796543620U))))))) : (((/* implicit */int) ((_Bool) arr_1 [i_0])))));
                                var_21 ^= (short)11782;
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (int i_5 = 0; i_5 < 14; i_5 += 4) 
                    {
                        var_22 ^= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (unsigned short)65535)), (3028465996321846119ULL)));
                        arr_16 [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned int) (-(((long long int) var_13)))));
                    }
                }
            } 
        } 
    }
    for (unsigned short i_6 = 3; i_6 < 11; i_6 += 4) /* same iter space */
    {
        arr_19 [i_6] [i_6] = ((/* implicit */_Bool) var_14);
        var_23 = ((/* implicit */unsigned short) (~((+(((((/* implicit */_Bool) arr_15 [i_6] [i_6] [i_6 + 2] [i_6])) ? (((/* implicit */int) (unsigned char)132)) : (((/* implicit */int) var_10))))))));
        arr_20 [i_6] = ((/* implicit */int) arr_0 [i_6 - 1]);
        /* LoopNest 2 */
        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
        {
            for (unsigned short i_8 = 2; i_8 < 11; i_8 += 4) 
            {
                {
                    var_24 *= ((/* implicit */int) (signed char)-105);
                    arr_25 [11ULL] [i_6] [i_8] = ((/* implicit */unsigned int) arr_13 [i_6 - 1] [i_7] [i_8]);
                }
            } 
        } 
    }
    for (short i_9 = 0; i_9 < 20; i_9 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
        {
            for (unsigned short i_11 = 3; i_11 < 18; i_11 += 2) 
            {
                {
                    arr_35 [i_11 - 3] [i_10] [i_10] [i_9] = ((/* implicit */unsigned int) var_3);
                    var_25 *= ((/* implicit */short) ((unsigned short) ((((/* implicit */int) var_8)) == (((((((/* implicit */int) var_5)) + (2147483647))) << (((2) - (2))))))));
                }
            } 
        } 
        var_26 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((unsigned short) arr_30 [(unsigned short)15] [(_Bool)1] [i_9]))) ? (((/* implicit */int) max((((/* implicit */short) (signed char)-67)), (var_5)))) : ((+(((/* implicit */int) (unsigned short)39250))))))));
        /* LoopNest 3 */
        for (signed char i_12 = 0; i_12 < 20; i_12 += 2) 
        {
            for (unsigned char i_13 = 1; i_13 < 17; i_13 += 3) 
            {
                for (short i_14 = 0; i_14 < 20; i_14 += 4) 
                {
                    {
                        arr_43 [i_13] [5LL] [(unsigned short)9] [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_31 [i_13] [i_13] [i_13] [i_13 - 1]) : (((/* implicit */unsigned long long int) var_11))))) || (((/* implicit */_Bool) ((signed char) var_16)))));
                        /* LoopSeq 3 */
                        for (long long int i_15 = 3; i_15 < 19; i_15 += 2) 
                        {
                            var_27 = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) arr_36 [i_12] [i_12])), (arr_26 [4LL] [4LL])));
                            arr_46 [i_15] [i_13] [i_13 + 2] [i_12] [i_13] [i_9] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -2305843009213693952LL)) ? ((-(((/* implicit */int) arr_40 [(unsigned char)16] [i_12] [i_14])))) : (((((/* implicit */int) var_7)) << (((((/* implicit */int) (signed char)-111)) + (112))))))))));
                        }
                        for (unsigned int i_16 = 1; i_16 < 19; i_16 += 3) 
                        {
                            var_28 -= ((/* implicit */_Bool) (((-(1U))) * (((/* implicit */unsigned int) min((arr_33 [i_9] [18U] [5U] [i_9]), (arr_33 [i_9] [i_12] [i_9] [16LL]))))));
                            arr_50 [i_9] [i_9] [i_13] [i_13] [i_16 + 1] [i_9] = (i_13 % 2 == zero) ? (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) ((((((/* implicit */int) arr_36 [i_9] [i_9])) + (2147483647))) << (((((/* implicit */int) arr_29 [i_13] [17LL] [i_13])) - (166)))))) ? (((/* implicit */int) ((_Bool) arr_38 [i_16 - 1] [i_14]))) : (((/* implicit */int) var_3))))))) : (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) ((((((/* implicit */int) arr_36 [i_9] [i_9])) + (2147483647))) << (((((((((/* implicit */int) arr_29 [i_13] [17LL] [i_13])) - (166))) + (62))) - (7)))))) ? (((/* implicit */int) ((_Bool) arr_38 [i_16 - 1] [i_14]))) : (((/* implicit */int) var_3)))))));
                            var_29 = max((((/* implicit */int) arr_29 [i_13] [i_13] [i_12])), ((-(((/* implicit */int) var_10)))));
                        }
                        /* vectorizable */
                        for (int i_17 = 0; i_17 < 20; i_17 += 3) 
                        {
                            arr_54 [i_17] [i_12] [i_13] [i_12] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_52 [i_9] [i_9] [i_13] [i_12] [(short)15] [i_13])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_34 [i_13] [i_12] [i_12])) && (((/* implicit */_Bool) arr_49 [17] [i_12] [i_12] [i_12] [i_14] [i_12]))))) : (((/* implicit */int) ((var_14) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))));
                            arr_55 [(unsigned char)6] [(unsigned char)6] [i_13] [i_14] [4] [i_14] = ((/* implicit */_Bool) arr_52 [i_17] [i_17] [i_13] [i_17] [i_17] [i_17]);
                            arr_56 [i_17] [i_9] [i_13] [i_13] [i_13] [i_12] [i_9] = ((/* implicit */unsigned char) var_1);
                            var_30 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) var_8))) - (((/* implicit */int) (!(((/* implicit */_Bool) (short)-19)))))));
                        }
                        arr_57 [i_9] [i_13] [i_13 + 2] = ((/* implicit */short) max((min((((/* implicit */int) (short)1753)), (-56964980))), (((/* implicit */int) arr_40 [i_9] [i_12] [i_13 - 1]))));
                    }
                } 
            } 
        } 
    }
    for (short i_18 = 0; i_18 < 20; i_18 += 4) /* same iter space */
    {
        var_31 -= ((/* implicit */unsigned short) var_8);
        var_32 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) (+(arr_59 [i_18])))) && (((/* implicit */_Bool) (signed char)46))))) << (((((/* implicit */int) var_10)) - (17207)))));
    }
}
