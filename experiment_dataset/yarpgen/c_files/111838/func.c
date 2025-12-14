/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111838
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
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [(signed char)21] = ((/* implicit */short) ((((/* implicit */int) var_14)) != (((/* implicit */int) arr_0 [i_0 - 1]))));
        var_19 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (arr_1 [i_0 - 1]) : (arr_1 [i_0 - 1])));
        arr_3 [i_0] |= ((/* implicit */unsigned char) ((unsigned int) (~(((/* implicit */int) (_Bool)0)))));
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (arr_1 [i_0 - 1])));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 13; i_1 += 3) 
    {
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) ((arr_5 [i_1]) < (((/* implicit */unsigned long long int) arr_1 [i_1]))))) : ((-(var_5)))));
        var_21 = ((/* implicit */_Bool) ((signed char) arr_0 [i_1]));
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 1; i_2 < 12; i_2 += 3) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 3) 
            {
                /* LoopSeq 1 */
                for (long long int i_4 = 1; i_4 < 10; i_4 += 3) 
                {
                    var_22 = ((/* implicit */int) arr_7 [4]);
                    arr_15 [i_1] [i_3] [(unsigned char)8] [i_3] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) arr_14 [i_4 - 1])) : (((/* implicit */int) arr_9 [i_2] [i_1]))));
                    var_23 = ((/* implicit */unsigned char) arr_14 [i_3]);
                }
                /* LoopSeq 1 */
                for (unsigned char i_5 = 3; i_5 < 11; i_5 += 3) 
                {
                    /* LoopSeq 3 */
                    for (short i_6 = 0; i_6 < 13; i_6 += 3) 
                    {
                        arr_23 [i_1] [i_1] [i_2] [i_1] [i_3] [i_5] [(signed char)2] = ((/* implicit */unsigned short) (~((+(((/* implicit */int) var_9))))));
                        arr_24 [i_6] [i_6] [i_6] [i_3] [i_6] [i_6] = ((/* implicit */unsigned int) ((unsigned short) arr_14 [i_5 - 1]));
                        var_24 = ((/* implicit */unsigned char) arr_16 [i_1] [i_2] [i_3] [i_6]);
                        arr_25 [i_1] [i_1] [i_1] [i_3] [i_1] = arr_21 [i_5 - 3] [i_6] [i_3] [i_6] [i_6];
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_25 = (+(((/* implicit */int) (_Bool)1)));
                        arr_28 [i_3] [i_2 + 1] [i_3] [i_2] [i_2 + 1] = ((/* implicit */long long int) ((unsigned int) var_6));
                        var_26 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) != (arr_16 [(unsigned short)12] [i_1] [i_2 - 1] [i_7])));
                    }
                    for (int i_8 = 2; i_8 < 11; i_8 += 3) 
                    {
                        arr_31 [9U] [i_3] [i_3] [i_3] [i_8] = ((/* implicit */int) 4294967295U);
                        arr_32 [i_1] [i_1] [i_1] [i_3] [i_1] [2] [(_Bool)1] = ((/* implicit */int) (~(arr_11 [i_3])));
                        arr_33 [i_3] [9U] [i_3] = ((/* implicit */long long int) (~(((/* implicit */int) arr_30 [i_1] [10ULL] [(short)0] [i_1] [i_3] [5LL] [2U]))));
                    }
                    arr_34 [i_3] = ((/* implicit */unsigned int) arr_8 [i_1] [i_1]);
                    /* LoopSeq 2 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        arr_37 [i_1] [i_1] [i_3] [i_5] = ((/* implicit */short) (+(2147483647)));
                        var_27 = ((/* implicit */int) min((var_27), ((+(((/* implicit */int) arr_7 [i_2 - 1]))))));
                        var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) ((((/* implicit */int) arr_22 [i_1] [i_2 - 1] [i_3])) >= (((/* implicit */int) arr_22 [8ULL] [i_3] [i_5 + 1])))))));
                    }
                    for (unsigned long long int i_10 = 0; i_10 < 13; i_10 += 3) 
                    {
                        arr_41 [10ULL] [i_2 + 1] [i_3] [12LL] [i_2 + 1] &= ((/* implicit */unsigned short) arr_35 [1] [i_2] [i_3] [i_5] [i_10]);
                        arr_42 [i_3] = ((/* implicit */_Bool) 4294967290U);
                        arr_43 [(unsigned short)9] [i_5] [i_3] [i_2] [i_1] = ((/* implicit */_Bool) 432345564227567616ULL);
                    }
                    /* LoopSeq 2 */
                    for (signed char i_11 = 1; i_11 < 10; i_11 += 3) /* same iter space */
                    {
                        arr_46 [i_1] [(unsigned short)0] [i_2] [(unsigned short)0] [4ULL] [i_5] [i_11 + 1] |= ((/* implicit */_Bool) arr_7 [i_2 - 1]);
                        arr_47 [i_1] [i_1] [i_1] [i_1] [i_3] = ((/* implicit */int) (+(((((/* implicit */_Bool) (-2147483647 - 1))) ? (arr_26 [i_1] [i_1] [i_1] [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))));
                        var_29 |= ((/* implicit */long long int) arr_13 [8LL]);
                        var_30 = ((/* implicit */int) ((long long int) arr_39 [i_1] [(_Bool)1] [i_3] [i_1] [i_3]));
                    }
                    for (signed char i_12 = 1; i_12 < 10; i_12 += 3) /* same iter space */
                    {
                        var_31 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_2 - 1])) ? (((((/* implicit */_Bool) var_4)) ? (31U) : (((/* implicit */unsigned int) var_5)))) : (arr_26 [i_1] [(signed char)3] [i_1] [i_1] [i_1])));
                        arr_50 [i_1] [i_3] [(unsigned short)4] [i_1] [(unsigned short)4] = ((/* implicit */short) ((((/* implicit */_Bool) arr_20 [12] [i_5 - 3] [i_5] [i_12 + 2] [i_12] [i_3])) ? (((/* implicit */int) arr_20 [i_5] [i_5 + 2] [i_12] [i_12 - 1] [i_12] [i_3])) : (((/* implicit */int) (_Bool)1))));
                        var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_22 [i_1] [i_3] [9])) >> (((((/* implicit */int) arr_22 [i_1] [i_5 - 3] [i_12])) - (6465)))));
                        var_33 = ((((/* implicit */_Bool) (unsigned short)2)) ? ((-(((/* implicit */int) arr_22 [i_5] [i_3] [i_2 - 1])))) : (((((/* implicit */_Bool) var_16)) ? ((-2147483647 - 1)) : (((/* implicit */int) var_16)))));
                    }
                    arr_51 [i_3] [i_3] [i_2] [0LL] [i_3] = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)0))));
                }
                var_34 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (-2147483647 - 1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) : (((arr_38 [i_1] [i_1] [i_1] [i_3] [i_3] [i_3]) >> (((/* implicit */int) (unsigned char)0))))));
                var_35 -= ((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_2] [(short)5]))));
            }
            for (unsigned char i_13 = 1; i_13 < 11; i_13 += 3) 
            {
                var_36 = ((/* implicit */short) max((var_36), (((/* implicit */short) -20))));
                var_37 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_18 [i_13 - 1] [i_13 - 1])) & (((/* implicit */int) var_7))));
                arr_54 [i_2 - 1] [0LL] [i_13] [i_2] &= ((/* implicit */unsigned int) arr_45 [i_1] [(unsigned short)4] [i_2] [(unsigned char)12] [i_13]);
            }
            arr_55 [i_1] = ((/* implicit */_Bool) 0ULL);
            var_38 = ((/* implicit */int) ((((/* implicit */_Bool) arr_44 [i_2 - 1] [i_2 - 1] [i_2] [i_2] [i_2 + 1])) ? (var_17) : (((/* implicit */unsigned long long int) arr_44 [i_1] [i_1] [i_1] [i_1] [i_2 - 1]))));
        }
        for (unsigned long long int i_14 = 1; i_14 < 12; i_14 += 3) /* same iter space */
        {
            var_39 = ((/* implicit */unsigned short) arr_18 [i_1] [i_1]);
            var_40 = ((/* implicit */unsigned char) var_14);
            var_41 = ((/* implicit */long long int) (-((+(((/* implicit */int) (unsigned short)65515))))));
            var_42 = ((/* implicit */unsigned char) (~(arr_8 [i_14 + 1] [i_14 - 1])));
        }
    }
    for (unsigned int i_15 = 0; i_15 < 23; i_15 += 3) /* same iter space */
    {
        var_43 = ((/* implicit */unsigned char) max((((unsigned long long int) ((((/* implicit */_Bool) 35184372086784ULL)) ? (511ULL) : (((/* implicit */unsigned long long int) arr_59 [i_15]))))), (((/* implicit */unsigned long long int) max(((-(2147483636))), (((/* implicit */int) ((((/* implicit */_Bool) 9223372036854775807LL)) && (((/* implicit */_Bool) arr_1 [1]))))))))));
        var_44 = ((/* implicit */unsigned short) min((var_44), (((/* implicit */unsigned short) (!(((((/* implicit */_Bool) arr_59 [20LL])) || (((/* implicit */_Bool) arr_0 [20LL])))))))));
    }
    for (unsigned int i_16 = 0; i_16 < 23; i_16 += 3) /* same iter space */
    {
        var_45 = ((/* implicit */unsigned int) var_4);
        arr_64 [i_16] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (((long long int) (~(var_11)))) : (((/* implicit */long long int) -2147483647))));
        var_46 = ((/* implicit */unsigned short) max((var_46), (((/* implicit */unsigned short) ((short) var_18)))));
        arr_65 [i_16] = (+(min((9U), (((/* implicit */unsigned int) -1)))));
        var_47 += ((/* implicit */_Bool) (~(((((/* implicit */unsigned long long int) 0LL)) * (((var_10) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_62 [i_16] [(unsigned short)3])))))))));
    }
    var_48 = ((/* implicit */unsigned long long int) var_8);
}
