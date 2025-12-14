/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145467
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
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            var_10 = ((/* implicit */short) var_4);
            /* LoopSeq 2 */
            for (unsigned short i_2 = 1; i_2 < 8; i_2 += 2) 
            {
                var_11 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4293918720U)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (unsigned short)4269)))))));
                arr_10 [i_0] [i_1] [i_2] = ((unsigned int) arr_6 [i_2 - 1] [i_2 + 2] [i_2 - 1]);
                var_12 = ((((/* implicit */_Bool) (~(80622090)))) ? (((/* implicit */int) arr_8 [i_2 - 1] [i_2 + 2] [i_2 - 1])) : (((((/* implicit */int) var_9)) | (((/* implicit */int) var_2)))));
            }
            for (unsigned int i_3 = 0; i_3 < 10; i_3 += 4) 
            {
                /* LoopSeq 1 */
                for (short i_4 = 0; i_4 < 10; i_4 += 3) 
                {
                    arr_16 [i_0] [i_1] [i_3] [i_4] = ((/* implicit */unsigned int) ((_Bool) -158529733877841645LL));
                    arr_17 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)218)) ? (arr_4 [i_4] [i_1] [i_0]) : (arr_4 [i_0] [i_1] [i_3])));
                    arr_18 [i_0] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (2753134007U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)27218)))));
                    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(var_8)))) && (((/* implicit */_Bool) -4566465113645377552LL))));
                }
                /* LoopNest 2 */
                for (long long int i_5 = 3; i_5 < 9; i_5 += 1) 
                {
                    for (unsigned short i_6 = 0; i_6 < 10; i_6 += 4) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_5 - 3] [i_3]))))) != (((-822894428) - (((/* implicit */int) arr_11 [i_0] [i_3] [i_6]))))));
                            var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) arr_6 [i_1] [i_3] [i_6]))));
                            var_16 ^= ((/* implicit */unsigned short) ((arr_5 [i_5 - 2] [i_5 - 1]) == (arr_5 [i_5 - 1] [i_5 - 2])));
                            arr_24 [i_3] [i_1] [i_1] [i_5 - 3] [i_6] = ((/* implicit */long long int) (-(arr_23 [i_6] [i_5 - 2] [i_5 - 3] [i_5 - 3] [i_5 - 3])));
                        }
                    } 
                } 
                var_17 = ((/* implicit */_Bool) ((1127003508U) * (((/* implicit */unsigned int) ((/* implicit */int) (short)32742)))));
                arr_25 [i_0] [i_1] [i_3] = ((/* implicit */short) ((((((/* implicit */int) (short)-27219)) + (2147483647))) << (((((/* implicit */int) (short)27218)) - (27218)))));
            }
            var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */_Bool) (short)-27247)) && (((/* implicit */_Bool) (+(((/* implicit */int) arr_21 [i_0] [i_1]))))))))));
        }
        for (unsigned char i_7 = 0; i_7 < 10; i_7 += 4) 
        {
            arr_29 [i_0] &= ((/* implicit */long long int) 263700585);
            /* LoopSeq 2 */
            for (unsigned int i_8 = 0; i_8 < 10; i_8 += 2) /* same iter space */
            {
                var_19 += ((/* implicit */_Bool) 2408852319U);
                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (-((((_Bool)0) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (short)27216))))))))));
                var_21 &= ((/* implicit */unsigned int) ((short) (short)27238));
            }
            for (unsigned int i_9 = 0; i_9 < 10; i_9 += 2) /* same iter space */
            {
                /* LoopSeq 4 */
                for (unsigned int i_10 = 0; i_10 < 10; i_10 += 2) 
                {
                    arr_38 [i_0] [i_7] [i_9] [i_10] = ((((/* implicit */_Bool) arr_11 [i_0] [i_7] [i_9])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)127)));
                    arr_39 [i_0] [i_0] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_0] [i_7])) ? (arr_4 [i_7] [i_9] [i_10]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_35 [i_0] [i_7] [i_10])) ? (((/* implicit */int) arr_33 [i_0] [i_9] [i_10])) : (arr_23 [i_0] [i_7] [i_9] [i_10] [i_7]))))));
                    var_22 -= ((((/* implicit */_Bool) (short)27222)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_6 [i_0] [i_0] [i_0]));
                }
                for (int i_11 = 0; i_11 < 10; i_11 += 2) 
                {
                    var_23 = ((/* implicit */int) ((_Bool) ((3802429976172672583LL) == (((/* implicit */long long int) arr_34 [i_0])))));
                    var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-27223)) ? (((/* implicit */long long int) ((arr_28 [i_11] [i_9] [i_0]) * (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) : (((long long int) arr_26 [i_0]))));
                    arr_43 [i_0] [i_11] [i_9] [i_11] = ((((/* implicit */_Bool) arr_9 [i_0] [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)-22996)) == (((/* implicit */int) var_3)))))) : (((((/* implicit */_Bool) (short)-27219)) ? (858563438U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)29407))))));
                    var_25 = ((/* implicit */int) (-(arr_12 [i_0])));
                    var_26 = ((/* implicit */unsigned char) ((arr_13 [i_9] [i_9] [i_9]) ? (((/* implicit */int) (unsigned short)21299)) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_0]))));
                }
                for (unsigned char i_12 = 0; i_12 < 10; i_12 += 2) 
                {
                    var_27 = ((/* implicit */short) (+(((/* implicit */int) arr_14 [i_7] [i_9]))));
                    arr_46 [i_0] = (!(((/* implicit */_Bool) arr_23 [i_12] [i_9] [i_9] [i_7] [i_0])));
                    arr_47 [i_12] [i_12] [i_12] [i_12] = ((/* implicit */unsigned int) (+((~(((/* implicit */int) (short)-27230))))));
                    arr_48 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (((+(((/* implicit */int) (unsigned short)31826)))) % (((/* implicit */int) arr_15 [i_12] [i_7] [i_7] [i_12])));
                }
                for (unsigned char i_13 = 0; i_13 < 10; i_13 += 4) 
                {
                    var_28 = ((/* implicit */_Bool) min((var_28), (arr_49 [i_13] [i_13] [i_9] [i_9] [i_7] [i_0])));
                    arr_53 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) var_9))));
                    var_29 += ((/* implicit */unsigned short) -1228314702385952134LL);
                    arr_54 [i_0] [i_7] [i_9] [i_13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_9] [i_0])) ? ((-(var_4))) : (((/* implicit */long long int) ((((/* implicit */int) arr_44 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) - (((/* implicit */int) var_6)))))));
                }
                /* LoopSeq 2 */
                for (short i_14 = 0; i_14 < 10; i_14 += 4) 
                {
                    var_30 = ((/* implicit */long long int) (+(((/* implicit */int) arr_11 [i_7] [i_7] [i_9]))));
                    var_31 *= ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)27244))) < (3176808475U))))));
                }
                for (unsigned int i_15 = 0; i_15 < 10; i_15 += 2) 
                {
                    var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) 858563438U))));
                    var_33 += ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_36 [i_0])))) ? (((((/* implicit */_Bool) arr_61 [i_0] [i_7] [i_9] [i_15] [i_15] [i_0])) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) : (var_4)));
                }
            }
            /* LoopSeq 1 */
            for (short i_16 = 0; i_16 < 10; i_16 += 4) 
            {
                var_34 = ((/* implicit */unsigned int) (unsigned short)33698);
                var_35 = ((/* implicit */unsigned short) (+((+(1073479680)))));
                var_36 &= ((/* implicit */unsigned short) ((_Bool) (short)-22996));
                arr_64 [i_0] [i_7] [i_16] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_3 [i_0]))));
            }
            var_37 -= ((/* implicit */long long int) arr_11 [i_0] [i_0] [i_0]);
        }
        var_38 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_7)) ? (770298594U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_41 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))));
        var_39 = ((/* implicit */_Bool) max((var_39), (((/* implicit */_Bool) arr_34 [i_0]))));
        var_40 = ((/* implicit */int) ((((/* implicit */int) arr_27 [i_0] [i_0] [i_0])) != (((/* implicit */int) ((arr_12 [i_0]) != (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))));
    }
    var_41 = ((/* implicit */long long int) var_3);
    var_42 = var_2;
}
