/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144881
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
    var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) + (var_7))))) ? (((/* implicit */int) ((unsigned short) (unsigned char)3))) : (var_5)));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 15; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        {
                            arr_13 [i_0] [i_2 - 1] [i_1] [i_0] &= ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((unsigned char) var_0))) ? (min((((/* implicit */long long int) var_2)), (-1778042202180442776LL))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_5 [i_3] [i_2] [i_0]))))))) ^ (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((10344318868717637277ULL) ^ (((/* implicit */unsigned long long int) var_5)))))))))));
                            arr_14 [i_2] [i_2] = ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_2 [i_3] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_7))))) : (((/* implicit */int) ((_Bool) arr_4 [i_1] [i_3]))));
                            var_13 = ((/* implicit */unsigned long long int) var_0);
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (unsigned short i_4 = 0; i_4 < 16; i_4 += 3) 
                {
                    var_14 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned int) arr_1 [i_4] [i_0])))));
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 16; i_5 += 3) 
                    {
                        for (short i_6 = 0; i_6 < 16; i_6 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((3492447824989320048LL) >= (1778042202180442776LL)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_5] [i_1]))))))))))));
                                arr_22 [i_0] [i_4] [i_0] [i_0] [i_0] [i_0] = ((var_4) ^ (((((/* implicit */_Bool) -1778042202180442768LL)) ? (((((/* implicit */int) var_8)) ^ (1040187392))) : (var_4))));
                                var_16 = ((/* implicit */long long int) ((max((((/* implicit */long long int) (unsigned char)0)), (0LL))) >= (((/* implicit */long long int) ((/* implicit */int) ((1491375274U) >= (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (short i_7 = 0; i_7 < 16; i_7 += 4) 
                    {
                        var_17 = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_4] [i_7])) ? (((/* implicit */int) (signed char)-34)) : (var_4)))) | (((((var_10) + (9223372036854775807LL))) << (((((/* implicit */int) var_8)) - (69)))))));
                        arr_27 [i_0] [i_4] [i_4] [i_7] [i_0] = ((/* implicit */int) ((long long int) var_11));
                    }
                    /* vectorizable */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (int i_9 = 0; i_9 < 16; i_9 += 3) 
                        {
                            var_18 = ((/* implicit */long long int) var_2);
                            var_19 = ((/* implicit */long long int) (_Bool)1);
                        }
                        arr_36 [i_4] = var_9;
                        var_20 ^= ((/* implicit */short) ((((/* implicit */int) (unsigned char)160)) >= (((/* implicit */int) (_Bool)1))));
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                    {
                        arr_39 [i_4] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((unsigned int) var_10));
                        arr_40 [i_4] [i_4] = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */int) (unsigned char)159)) >= (((/* implicit */int) arr_2 [i_10] [i_1])))))));
                        arr_41 [i_4] [i_4] = ((/* implicit */long long int) arr_21 [i_4] [i_10]);
                        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) (~(13777936536838583984ULL)))) ? (arr_10 [i_10] [i_4] [i_0]) : (((/* implicit */long long int) (((_Bool)1) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)31512))))))));
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                    {
                        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) max(((((!((_Bool)1))) ? (((unsigned long long int) var_10)) : (((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned short)14946)), (var_5)))))), (max((((((/* implicit */_Bool) (unsigned short)34494)) ? (var_1) : (((/* implicit */unsigned long long int) arr_24 [i_11] [i_0] [i_1])))), (((/* implicit */unsigned long long int) 32767U)))))))));
                        arr_44 [i_1] [i_1] [i_1] [i_1] [i_4] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_11)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)31042))))))) ? ((+(((/* implicit */int) var_3)))) : (((((/* implicit */_Bool) ((unsigned long long int) var_1))) ? (min((((/* implicit */int) var_2)), (var_4))) : (((/* implicit */int) arr_0 [i_4] [i_0]))))));
                    }
                }
                for (signed char i_12 = 0; i_12 < 16; i_12 += 2) 
                {
                    var_23 = (-(((long long int) arr_29 [i_1])));
                    arr_48 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((int) (-((~(1778042202180442783LL))))));
                    var_24 = ((/* implicit */unsigned short) min((((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -583373544)))))) ^ (var_0))), (((/* implicit */long long int) ((unsigned char) arr_2 [i_1] [i_0])))));
                }
                for (unsigned long long int i_13 = 0; i_13 < 16; i_13 += 2) 
                {
                    arr_52 [i_0] [i_1] [i_13] &= ((/* implicit */unsigned char) 18446744073709551606ULL);
                    var_25 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1] [i_13])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (0LL)))) ? (((((/* implicit */_Bool) ((unsigned short) arr_6 [i_0] [i_1] [i_0] [i_0]))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_1] [i_0])) && (((/* implicit */_Bool) var_7)))))) : (((long long int) (unsigned char)146)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-32758))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_14 = 0; i_14 < 16; i_14 += 4) 
                    {
                        for (short i_15 = 0; i_15 < 16; i_15 += 1) 
                        {
                            {
                                var_26 -= ((/* implicit */unsigned short) ((max((arr_17 [i_15] [i_14] [i_13] [i_1] [i_0]), (arr_17 [i_15] [i_14] [i_13] [i_1] [i_0]))) + (((/* implicit */unsigned long long int) -2081759106408466649LL))));
                                var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) ((((/* implicit */int) max((arr_19 [i_0] [i_1] [i_0] [i_14]), (((/* implicit */unsigned char) var_6))))) >= (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_2)) : (arr_9 [i_14]))))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
