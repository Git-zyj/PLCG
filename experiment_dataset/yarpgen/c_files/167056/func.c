/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167056
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
    for (unsigned short i_0 = 2; i_0 < 23; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned long long int) max((var_11), (((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14982))) : (12659082077712709163ULL)))) ? (((/* implicit */int) (signed char)-3)) : (((((/* implicit */_Bool) (signed char)-11)) ? (((/* implicit */int) (unsigned short)27481)) : (arr_3 [i_0] [i_1] [i_1])))))) ? (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_5 [i_0] [i_0]))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (arr_0 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)163)))))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (14217902884343323622ULL) : (((/* implicit */unsigned long long int) arr_3 [i_1] [i_0] [i_0])))) : (((unsigned long long int) arr_5 [i_0] [i_0]))))))));
                var_12 = ((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) ((unsigned long long int) arr_4 [i_0] [i_1]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 19; i_2 += 2) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned long long int) arr_4 [i_2] [i_2]);
                var_14 *= ((/* implicit */long long int) 18446744073709551615ULL);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (int i_4 = 0; i_4 < 18; i_4 += 2) 
    {
        var_15 &= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)6)) ? (((/* implicit */int) arr_2 [i_4])) : (((/* implicit */int) arr_2 [i_4])))))));
        /* LoopSeq 2 */
        for (signed char i_5 = 1; i_5 < 17; i_5 += 2) 
        {
            var_16 = ((/* implicit */unsigned long long int) max(((~((+(((/* implicit */int) (unsigned char)68)))))), (((int) var_10))));
            var_17 = ((/* implicit */unsigned long long int) ((long long int) arr_2 [i_4]));
        }
        for (int i_6 = 0; i_6 < 18; i_6 += 2) 
        {
            var_18 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((min((arr_9 [i_4]), (((/* implicit */long long int) var_10)))) != (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)195)))))))))));
            arr_18 [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_16 [i_4])))) ? (max((arr_16 [i_4]), (arr_16 [i_4]))) : (min((arr_16 [i_4]), (arr_16 [i_6])))));
            var_19 = ((/* implicit */unsigned char) min((var_19), (((unsigned char) max((((arr_16 [i_6]) & (((/* implicit */unsigned long long int) arr_14 [i_4])))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)(-127 - 1))) < (((/* implicit */int) (unsigned short)63136))))))))));
            arr_19 [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) 8182891462099351828ULL)) ? (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)127)), (arr_10 [i_6])))) || (((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)18572)), (arr_17 [i_4] [i_4] [i_4]))))))) : ((-(((/* implicit */int) max((arr_4 [i_6] [i_4]), (arr_6 [i_6]))))))));
        }
        /* LoopNest 2 */
        for (signed char i_7 = 1; i_7 < 17; i_7 += 2) 
        {
            for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 4) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) ((unsigned long long int) (+(((/* implicit */int) var_6)))));
                    var_21 = ((/* implicit */unsigned long long int) max(((~(arr_11 [i_7 - 1] [i_7]))), (((((/* implicit */_Bool) arr_11 [i_7 - 1] [i_7])) ? (arr_11 [i_7 - 1] [i_7]) : (arr_11 [i_7 + 1] [i_7])))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned long long int i_9 = 2; i_9 < 17; i_9 += 4) 
                    {
                        var_22 = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) arr_14 [i_4])) : (arr_23 [i_9] [i_8] [i_7] [i_4]))));
                        var_23 *= ((/* implicit */signed char) ((unsigned short) arr_28 [i_9 + 1] [i_9] [i_9 - 1] [i_9 + 1]));
                        var_24 = ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) var_6))) ? (((((/* implicit */_Bool) arr_16 [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)104))) : (arr_16 [i_4]))) : (arr_0 [i_4])));
                        var_25 -= ((/* implicit */unsigned long long int) ((unsigned short) arr_8 [i_9] [i_9 + 1]));
                        /* LoopSeq 1 */
                        for (long long int i_10 = 0; i_10 < 18; i_10 += 1) 
                        {
                            var_26 = ((/* implicit */_Bool) 6522559462372128344ULL);
                            arr_31 [i_4] [i_4] [i_4] [i_4] [i_7] = ((/* implicit */unsigned short) arr_25 [i_8] [i_9 - 1] [i_10] [i_10]);
                            arr_32 [i_4] [i_7] [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) arr_26 [i_4] [i_7] [i_8] [i_9] [i_10] [i_4]))) ? (((/* implicit */unsigned long long int) arr_15 [i_9 - 2] [i_7 + 1])) : ((+(18446744073709551615ULL)))));
                            var_27 = ((/* implicit */unsigned char) ((signed char) arr_27 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10]));
                        }
                    }
                    /* vectorizable */
                    for (unsigned short i_11 = 1; i_11 < 16; i_11 += 1) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned short i_12 = 2; i_12 < 16; i_12 += 4) 
                        {
                            arr_38 [i_7] [i_4] [i_8] [i_11] [i_11] [i_12] = arr_16 [i_12 + 1];
                            var_28 = ((/* implicit */unsigned long long int) arr_37 [i_12] [i_12] [i_12]);
                        }
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            arr_42 [i_4] [i_7] [i_8] [i_11] [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_26 [i_11 + 1] [i_8] [i_8] [i_7 - 1] [i_7] [i_7])) ? (((/* implicit */int) arr_36 [i_7 + 1] [i_7 + 1] [i_8] [i_11 + 1])) : ((~(((/* implicit */int) arr_39 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]))))));
                            arr_43 [i_7] [i_7] [i_8] [i_11] [i_13] [i_8] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_4] [i_7] [i_7] [i_8] [i_11] [i_13])) ? (8574481263105715347ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_4] [i_8] [i_11])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_13] [i_13] [i_8] [i_7 - 1] [i_7] [i_7]))) : ((-(arr_34 [i_4] [i_7] [i_8] [i_13])))));
                        }
                        for (signed char i_14 = 0; i_14 < 18; i_14 += 3) 
                        {
                            arr_46 [i_4] [i_7] [i_14] [i_11] [i_7] = ((/* implicit */unsigned long long int) ((long long int) (unsigned short)2));
                            var_29 = ((/* implicit */signed char) (~(9223372036854775808ULL)));
                            var_30 = ((/* implicit */signed char) ((unsigned short) arr_5 [i_7] [i_7]));
                        }
                        for (unsigned long long int i_15 = 0; i_15 < 18; i_15 += 1) 
                        {
                            var_31 = ((((/* implicit */_Bool) ((arr_27 [i_7] [i_7] [i_8] [i_11] [i_7] [i_8]) - (2807264931932599361ULL)))) ? (((/* implicit */unsigned long long int) ((long long int) (unsigned short)10100))) : (arr_23 [i_11 - 1] [i_11 - 1] [i_11] [i_11 + 1]));
                            arr_51 [i_7] [i_7] [i_8] [i_11] [i_15] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_25 [i_8] [i_11 - 1] [i_4] [i_7 - 1])) ? (((/* implicit */int) arr_35 [i_7 - 1])) : (((/* implicit */int) arr_48 [i_11 + 1] [i_7 - 1]))));
                            arr_52 [i_4] [i_7] [i_8] [i_11] [i_15] [i_8] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_4] [i_4])) ? (((/* implicit */int) arr_6 [i_15])) : (((/* implicit */int) (unsigned short)2)))))));
                        }
                        /* LoopSeq 1 */
                        for (long long int i_16 = 0; i_16 < 18; i_16 += 2) 
                        {
                            var_32 = ((/* implicit */signed char) (~(((/* implicit */int) ((unsigned short) arr_12 [i_4] [i_16] [i_11])))));
                            var_33 = arr_41 [i_4] [i_7] [i_8] [i_11] [i_16];
                            var_34 += ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_25 [i_4] [i_7] [i_11] [i_16])) && (((/* implicit */_Bool) var_1)))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65518))) <= (arr_15 [i_11] [i_7])))) : ((-(((/* implicit */int) var_6))))));
                        }
                        var_35 = ((/* implicit */long long int) (-((+(((/* implicit */int) arr_45 [i_4] [i_7] [i_8] [i_8] [i_11]))))));
                    }
                    for (unsigned short i_17 = 2; i_17 < 17; i_17 += 3) 
                    {
                        var_36 -= ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)65535))));
                        var_37 = ((/* implicit */unsigned long long int) min((var_37), (((/* implicit */unsigned long long int) (-((~(864691128455135232LL))))))));
                        /* LoopSeq 1 */
                        for (int i_18 = 0; i_18 < 18; i_18 += 4) 
                        {
                            var_38 = ((signed char) ((arr_47 [i_4] [i_4] [i_7] [i_7] [i_8] [i_17] [i_18]) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_35 [i_8]))))));
                            var_39 &= ((/* implicit */signed char) ((min((((/* implicit */unsigned long long int) ((int) (_Bool)1))), (max((arr_8 [i_18] [i_17]), (arr_53 [i_18]))))) >> ((((~(((((/* implicit */int) (unsigned short)61440)) >> (((((/* implicit */int) (signed char)-10)) + (10))))))) + (61458)))));
                        }
                    }
                }
            } 
        } 
        arr_59 [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((max((3760714695272684986LL), (((/* implicit */long long int) var_10)))), (((/* implicit */long long int) (unsigned short)384))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((unsigned short) 14210808778505323110ULL))))) : (min((max((((/* implicit */unsigned long long int) var_4)), (11195434782184373898ULL))), (max((((/* implicit */unsigned long long int) var_0)), (arr_57 [i_4] [i_4] [i_4] [i_4] [i_4])))))));
    }
}
