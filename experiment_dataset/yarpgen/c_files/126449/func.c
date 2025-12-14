/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126449
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */_Bool) ((short) ((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) >= (arr_4 [i_0] [i_0])))));
                var_12 = min((((/* implicit */int) (((-(((/* implicit */int) arr_1 [(signed char)0])))) == (((int) arr_0 [i_0]))))), ((~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_1 [i_0])) : (arr_0 [i_0]))))));
                var_13 = ((/* implicit */unsigned int) ((int) arr_0 [i_0]));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_2 = 0; i_2 < 22; i_2 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_3 = 1; i_3 < 20; i_3 += 3) 
        {
            arr_10 [i_2] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((arr_5 [i_2] [i_2]) & (arr_5 [i_2] [i_2])))), ((-(arr_6 [i_2])))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_3] [i_2])) ? (((/* implicit */unsigned int) arr_7 [i_2])) : (var_8)))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((_Bool) var_8)))))) : (min((((arr_6 [i_2]) - (((/* implicit */unsigned int) arr_7 [i_3])))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_4)))))))));
            var_14 -= ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_5 [i_2] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_8))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_2])) ? (arr_5 [i_2] [i_3]) : (((/* implicit */int) var_5)))))))) ? (arr_8 [i_2] [i_3 + 2]) : ((~(((/* implicit */int) max((var_5), (var_0))))))));
        }
        var_15 ^= ((((arr_5 [i_2] [i_2]) < (((/* implicit */int) var_3)))) ? ((-(((((/* implicit */_Bool) var_0)) ? (arr_8 [i_2] [i_2]) : (((/* implicit */int) var_3)))))) : (min((((/* implicit */int) ((var_8) == (((/* implicit */unsigned int) arr_5 [i_2] [i_2]))))), (max((arr_9 [i_2]), (arr_8 [i_2] [i_2]))))));
        arr_11 [i_2] = ((/* implicit */short) ((_Bool) max(((-(8418890909231505638LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)127))))))));
        var_16 *= ((/* implicit */long long int) ((unsigned int) ((_Bool) ((_Bool) arr_7 [i_2]))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 3) 
    {
        var_17 |= ((/* implicit */unsigned int) max((((int) arr_4 [i_4] [i_4])), (((/* implicit */int) ((arr_4 [i_4] [3]) > (arr_4 [i_4] [i_4]))))));
        arr_16 [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) max((((/* implicit */unsigned int) min((((/* implicit */int) arr_14 [i_4] [i_4])), (arr_5 [i_4] [i_4])))), (arr_6 [i_4])))) != ((+(((((/* implicit */_Bool) arr_8 [i_4] [i_4])) ? (((/* implicit */long long int) arr_12 [i_4])) : (var_7)))))));
        /* LoopSeq 1 */
        for (unsigned short i_5 = 0; i_5 < 10; i_5 += 2) 
        {
            /* LoopSeq 3 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
            {
                /* LoopSeq 3 */
                for (unsigned short i_7 = 0; i_7 < 10; i_7 += 3) 
                {
                    arr_25 [i_4] [i_4] [i_6] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_23 [i_4] [i_5] [i_5] [i_5]))));
                    /* LoopSeq 1 */
                    for (unsigned char i_8 = 0; i_8 < 10; i_8 += 4) 
                    {
                        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_0 [i_7]) - (((((/* implicit */int) arr_18 [i_8] [i_6])) % (((/* implicit */int) var_4))))))) ? ((+((-(((/* implicit */int) arr_18 [i_4] [i_4])))))) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_6)) < (((/* implicit */int) arr_1 [i_4]))))) >= (((/* implicit */int) ((unsigned short) arr_4 [i_5] [i_5]))))))));
                        var_19 = ((/* implicit */unsigned char) ((unsigned int) ((long long int) ((((/* implicit */_Bool) arr_14 [i_4] [i_5])) ? (((/* implicit */int) var_10)) : (arr_27 [i_6] [i_5] [i_6])))));
                        var_20 += ((/* implicit */unsigned char) var_5);
                        var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) arr_21 [i_7] [i_5] [i_6])), (arr_9 [i_4]))))));
                        var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) (+(((((((/* implicit */int) (signed char)-101)) >= (((/* implicit */int) (unsigned short)39095)))) ? (4168890274U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)33817))))))))));
                    }
                }
                /* vectorizable */
                for (int i_9 = 1; i_9 < 8; i_9 += 3) 
                {
                    arr_31 [i_9] [i_5] [i_5] [i_4] &= ((/* implicit */_Bool) ((unsigned long long int) (signed char)113));
                    /* LoopSeq 2 */
                    for (signed char i_10 = 4; i_10 < 8; i_10 += 2) 
                    {
                        var_23 *= ((/* implicit */short) ((int) var_1));
                        arr_34 [6ULL] [i_5] [i_6] [6ULL] [i_10] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_6])) ? (((/* implicit */int) var_5)) : ((-(((/* implicit */int) var_9))))));
                        arr_35 [i_6] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_22 [i_5] [i_6] [i_10 - 1])) ? (((((/* implicit */_Bool) arr_7 [i_4])) ? (((/* implicit */int) arr_14 [i_9] [i_9])) : (((/* implicit */int) arr_2 [i_5] [i_5] [5U])))) : (((/* implicit */int) (!(var_10))))));
                        var_24 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_33 [i_4] [9U]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))));
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        arr_38 [i_6] [i_6] [i_6] [i_9 + 1] [i_11] = ((/* implicit */signed char) ((int) (unsigned short)57783));
                        arr_39 [i_5] [i_6] [i_5] [i_6] [i_4] = (~(((/* implicit */int) arr_23 [i_9] [i_9 - 1] [i_9] [i_9 - 1])));
                    }
                    var_25 -= ((/* implicit */unsigned int) (+(((/* implicit */int) var_3))));
                }
                /* vectorizable */
                for (signed char i_12 = 0; i_12 < 10; i_12 += 2) 
                {
                    /* LoopSeq 2 */
                    for (int i_13 = 1; i_13 < 9; i_13 += 2) /* same iter space */
                    {
                        var_26 = ((/* implicit */unsigned char) (-((~(arr_4 [i_5] [i_5])))));
                        var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) (-(((/* implicit */int) arr_23 [i_4] [i_4] [i_6] [i_5])))))));
                        arr_47 [i_4] [i_4] [i_6] [i_6] [i_13] [i_6] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */int) arr_15 [i_4] [(unsigned short)8])) == (((/* implicit */int) arr_23 [i_4] [i_4] [(signed char)7] [i_4])))))));
                        var_28 = ((/* implicit */unsigned short) ((short) arr_36 [i_6] [i_6] [i_13 - 1] [i_6] [i_6] [i_13 + 1] [i_13 - 1]));
                    }
                    for (int i_14 = 1; i_14 < 9; i_14 += 2) /* same iter space */
                    {
                        var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) ((unsigned char) arr_30 [i_14 + 1] [i_12] [i_12] [i_5])))));
                        var_30 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_22 [i_4] [i_4] [0U])) == (((/* implicit */int) arr_22 [i_4] [i_5] [i_6]))));
                    }
                    var_31 = (~(arr_12 [i_6]));
                    arr_50 [i_6] [i_5] [i_6] [i_6] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */int) arr_40 [i_4] [i_6])) == (((/* implicit */int) arr_46 [(unsigned short)1])))))));
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_15 = 0; i_15 < 10; i_15 += 1) 
                {
                    var_32 = ((/* implicit */signed char) ((short) arr_46 [i_4]));
                    var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_33 [i_4] [i_4]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_5] [i_5])))))) ? (((/* implicit */int) arr_21 [i_4] [i_4] [i_4])) : (((/* implicit */int) ((arr_5 [i_6] [i_6]) <= (((/* implicit */int) arr_51 [i_4] [i_4] [i_15] [i_15] [i_15] [i_4])))))));
                }
            }
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
            {
                var_34 = ((/* implicit */short) max(((unsigned short)33817), (((/* implicit */unsigned short) (_Bool)1))));
                var_35 &= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (-(arr_17 [i_4] [i_4])))))) ? (((((/* implicit */_Bool) arr_55 [i_4] [i_4])) ? (((((/* implicit */_Bool) (short)-13824)) ? (((/* implicit */long long int) 126077022U)) : (2249133313512206202LL))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_44 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)179))) >= (0U)))))));
            }
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) /* same iter space */
            {
                arr_58 [i_4] [i_5] [i_17] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((arr_17 [7LL] [i_5]) < (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))) - (((/* implicit */int) ((var_10) || (((/* implicit */_Bool) var_7)))))));
                var_36 += ((/* implicit */signed char) ((((/* implicit */_Bool) min((((unsigned long long int) arr_13 [i_5])), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_55 [i_4] [i_5])) : (((/* implicit */int) var_4)))))))) ? (((arr_23 [i_4] [i_4] [i_4] [i_4]) ? (((((/* implicit */int) var_6)) * (((/* implicit */int) var_9)))) : (((/* implicit */int) ((-1864193244) >= (-1)))))) : ((+(((/* implicit */int) var_0))))));
                arr_59 [i_17] = ((/* implicit */short) (((-(((/* implicit */int) var_6)))) * ((+(((/* implicit */int) arr_52 [i_17] [i_5] [i_17] [i_5] [i_4] [i_4]))))));
            }
            arr_60 [i_4] [(signed char)6] [i_5] = ((/* implicit */int) arr_1 [i_5]);
            var_37 = ((/* implicit */unsigned char) arr_29 [i_5] [i_4] [i_4] [i_4]);
            var_38 += ((/* implicit */short) arr_5 [i_4] [i_4]);
            /* LoopSeq 1 */
            for (unsigned long long int i_18 = 1; i_18 < 8; i_18 += 3) 
            {
                var_39 = ((/* implicit */long long int) (((-(((((/* implicit */_Bool) (unsigned char)223)) ? (((/* implicit */int) (signed char)-44)) : (((/* implicit */int) (signed char)-55)))))) - (min((min((1238775563), (-1255211567))), (((((arr_57 [i_5] [i_5]) + (2147483647))) >> (((((/* implicit */int) arr_43 [i_4] [i_5] [i_5] [i_4])) - (12577)))))))));
                var_40 ^= ((/* implicit */signed char) min(((+(((/* implicit */int) arr_49 [i_18] [i_18] [i_18 + 1] [i_18] [i_18] [i_5] [i_18])))), (((/* implicit */int) arr_15 [i_4] [i_5]))));
                arr_63 [i_4] [i_5] [i_4] [i_5] = ((/* implicit */signed char) (((+(((/* implicit */int) ((unsigned short) arr_56 [i_5]))))) + (max((((/* implicit */int) arr_23 [i_18 + 2] [i_18 + 2] [i_18 + 1] [i_18 + 1])), ((+(((/* implicit */int) var_0))))))));
            }
        }
    }
}
