/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157916
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_13 -= ((/* implicit */int) ((unsigned short) max(((+(((/* implicit */int) (unsigned short)8064)))), (1855365007))));
        arr_4 [i_0] [i_0] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((unsigned int) arr_2 [i_0])) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32765)))));
        var_14 += ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_3 [i_0]))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 3; i_1 < 14; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                for (unsigned int i_3 = 0; i_3 < 15; i_3 += 4) 
                {
                    {
                        arr_13 [i_1] [i_2] [i_1] [i_1] = (unsigned char)31;
                        /* LoopSeq 3 */
                        for (short i_4 = 0; i_4 < 15; i_4 += 4) /* same iter space */
                        {
                            var_15 -= ((/* implicit */unsigned char) (short)-32765);
                            var_16 = ((((/* implicit */int) min(((unsigned char)59), (arr_6 [i_1])))) >> (((/* implicit */int) arr_10 [i_1])));
                            var_17 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-10596)) / (((/* implicit */int) (unsigned char)225))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (short)-24702))))) : (781936061U)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_1 - 2] [i_2]))))) : ((~(((var_8) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_2] [i_0] [i_0] [i_4])) : (((/* implicit */int) arr_10 [10ULL]))))))));
                        }
                        for (short i_5 = 0; i_5 < 15; i_5 += 4) /* same iter space */
                        {
                            var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) min((arr_7 [i_3] [i_3]), (((/* implicit */short) (!(((/* implicit */_Bool) arr_7 [i_5] [i_1]))))))))));
                            var_19 -= ((/* implicit */int) ((signed char) arr_9 [i_0] [(unsigned char)14] [i_1 + 1] [i_0]));
                        }
                        for (unsigned int i_6 = 0; i_6 < 15; i_6 += 3) 
                        {
                            var_20 = ((/* implicit */unsigned char) (((((-(((((/* implicit */_Bool) (unsigned short)65515)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)246))) : (3560471886603355152LL))))) + (9223372036854775807LL))) >> (((/* implicit */int) (!(((((/* implicit */_Bool) arr_18 [i_0] [i_0])) || (((/* implicit */_Bool) arr_2 [i_0])))))))));
                            arr_22 [i_1] [(unsigned short)5] [i_2] [i_3] [i_6] = ((/* implicit */int) arr_6 [i_1]);
                            arr_23 [i_0] [i_3] [i_2] [i_3] [i_3] [i_1] = var_6;
                            var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32766)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1 - 3]))) : (var_12))))));
                        }
                        var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) (-(arr_21 [i_0] [i_1 + 1] [i_1 + 1] [i_3] [i_0] [i_3] [i_3]))))));
                        arr_24 [i_1] = ((/* implicit */unsigned short) ((unsigned char) arr_12 [i_1] [i_3]));
                    }
                } 
            } 
        } 
    }
    for (short i_7 = 0; i_7 < 17; i_7 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 3) 
        {
            for (unsigned int i_9 = 4; i_9 < 15; i_9 += 4) 
            {
                {
                    var_23 = ((/* implicit */unsigned char) arr_25 [(short)8] [i_8]);
                    var_24 = ((/* implicit */unsigned int) min((var_24), (3724045467U)));
                    /* LoopNest 2 */
                    for (unsigned short i_10 = 0; i_10 < 17; i_10 += 3) 
                    {
                        for (unsigned char i_11 = 0; i_11 < 17; i_11 += 1) 
                        {
                            {
                                arr_38 [i_7] [i_8] [i_8] [i_10] [2] [i_8] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) (!(((/* implicit */_Bool) (unsigned char)239)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_31 [i_7] [4LL] [i_7] [i_7]))))))) : (((/* implicit */int) arr_32 [12] [i_8]))));
                                arr_39 [i_11] [i_11] [(unsigned char)7] [i_11] [i_7] = ((min((((unsigned int) var_3)), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_32 [i_8] [i_8])) ? (((/* implicit */int) arr_32 [(unsigned short)8] [i_11])) : (((/* implicit */int) var_11))))))) << (((/* implicit */int) ((_Bool) arr_29 [i_11]))));
                                var_25 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_33 [i_9 - 4] [i_9] [i_9 - 4] [5U])) << (((/* implicit */int) arr_33 [i_9 - 4] [i_9] [4] [i_9 - 4]))))) ? (((((/* implicit */_Bool) 7U)) ? (((/* implicit */int) arr_34 [i_9 - 4] [i_9 - 4] [i_9] [i_9] [i_9 - 2] [i_9 - 3])) : (((/* implicit */int) arr_34 [i_9 - 4] [i_9] [i_9] [i_9] [i_9 - 2] [i_9 - 3])))) : (((/* implicit */int) max((arr_34 [i_9 - 4] [(unsigned short)16] [(unsigned short)16] [i_9] [i_9 - 2] [i_9 - 3]), (arr_34 [i_9 - 4] [i_9] [i_9] [i_9 - 4] [i_9 - 2] [i_9 - 3])))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_40 [i_7] [i_7] = ((/* implicit */unsigned int) ((unsigned long long int) arr_35 [i_7]));
    }
    for (unsigned char i_12 = 2; i_12 < 10; i_12 += 3) 
    {
        arr_44 [i_12] = ((/* implicit */long long int) ((short) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_28 [i_12] [i_12])))) / (arr_25 [i_12 + 1] [i_12 - 2]))));
        var_26 ^= ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_16 [14LL] [i_12 - 2] [i_12 - 1] [(unsigned char)0] [i_12] [0])) : (((/* implicit */int) arr_16 [2U] [i_12 - 2] [i_12 - 1] [(unsigned short)8] [6] [i_12])))));
        var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) -4865985474906992697LL)) ? (((/* implicit */int) (unsigned char)194)) : (arr_35 [5ULL])))))));
    }
    var_28 = ((/* implicit */unsigned short) var_3);
    var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) (((((-9223372036854775807LL - 1LL)) == (((((/* implicit */_Bool) var_11)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (short)-32756))))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) / (((((/* implicit */_Bool) (unsigned char)225)) ? (((/* implicit */int) (unsigned char)105)) : (((/* implicit */int) var_11))))))) : (((unsigned int) ((unsigned char) var_2))))))));
}
