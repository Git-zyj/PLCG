/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187640
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (+(18446744073709551604ULL)))))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 4; i_1 < 20; i_1 += 2) 
        {
            for (unsigned short i_2 = 3; i_2 < 19; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 22; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-10140))) : (2026448897U)))) ? (min(((-(2026448888U))), (((((/* implicit */_Bool) arr_8 [i_2])) ? (2268518394U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) : (max((67108863U), (((/* implicit */unsigned int) arr_1 [i_1 - 2]))))));
                                arr_14 [i_1] = ((/* implicit */long long int) (!(arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 2; i_5 < 22; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 23; i_6 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((arr_11 [i_0] [i_0] [i_1] [i_2 + 1] [i_2 - 3] [i_5] [i_6]) ? (2026448898U) : (((/* implicit */unsigned int) arr_18 [i_0] [i_1] [i_2] [i_5] [i_1] [i_1] [i_0]))))))) ? (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned char)130)) : (((/* implicit */int) (unsigned short)46572))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0])) ? (5ULL) : (((/* implicit */unsigned long long int) 0U))))) ? (arr_17 [i_2 + 3] [i_2 - 2] [i_2 + 2] [i_2 + 2] [9U] [i_2 - 3] [9U]) : ((+(2026448885U))))))))));
                                var_21 = (((_Bool)1) ? (((/* implicit */unsigned int) ((arr_11 [i_1 - 4] [i_1 - 4] [i_5 - 2] [i_5 - 1] [i_1 - 4] [i_1 - 4] [i_1 - 4]) ? (((/* implicit */int) arr_11 [i_1 + 3] [i_1 + 3] [i_1 + 3] [i_5 - 2] [12U] [i_5] [i_6])) : (((/* implicit */int) arr_11 [i_1 - 1] [i_1 - 1] [i_2] [i_5 + 1] [i_6] [i_6] [i_6]))))) : ((+(2026448900U))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */int) arr_12 [i_0]);
                    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)65523)), (((((/* implicit */_Bool) arr_7 [i_0] [(unsigned char)10] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [22ULL] [12ULL] [i_1 - 4] [i_1] [12ULL] [i_0] [i_0]))) : (arr_17 [i_0] [i_0] [i_1] [i_2 - 1] [0ULL] [1ULL] [i_2])))))) ? ((-(((((/* implicit */_Bool) arr_7 [i_0] [i_1 - 3] [i_2])) ? (arr_8 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [(unsigned char)17] [i_2]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0])))));
                }
            } 
        } 
        var_24 = 1967661357U;
        /* LoopSeq 2 */
        for (unsigned short i_7 = 0; i_7 < 23; i_7 += 2) 
        {
            arr_21 [i_0] [i_7] = ((/* implicit */unsigned short) arr_5 [i_0] [i_0] [i_7]);
            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_0])) ? (max((arr_2 [i_0] [i_7]), (((/* implicit */unsigned long long int) arr_15 [i_7] [i_0] [i_0] [i_0])))) : (max((((/* implicit */unsigned long long int) 2026448900U)), (arr_2 [i_7] [i_7])))));
        }
        for (unsigned int i_8 = 2; i_8 < 20; i_8 += 4) 
        {
            var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)6624)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [21ULL] [i_8 + 3]))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_0] [i_0] [0ULL]))))) ? (1165188199) : ((+(((/* implicit */int) (unsigned short)65535))))))));
            var_27 -= ((/* implicit */_Bool) 2268518373U);
            var_28 = ((/* implicit */unsigned int) max((arr_2 [i_0] [i_8 + 1]), (((((/* implicit */_Bool) arr_16 [i_8] [i_8 - 2] [i_8] [(signed char)8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_8 + 2] [i_8 + 3] [i_0]))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)46569))) : (12613950261721717739ULL)))))));
            /* LoopNest 3 */
            for (unsigned short i_9 = 1; i_9 < 22; i_9 += 4) 
            {
                for (signed char i_10 = 2; i_10 < 20; i_10 += 1) 
                {
                    for (unsigned short i_11 = 1; i_11 < 22; i_11 += 2) 
                    {
                        {
                            arr_34 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-((-(2268518419U)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 127159115U)) ? (arr_2 [i_10] [i_11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)46568)))))) ? (((/* implicit */int) arr_6 [i_10 - 1] [i_8 - 2] [i_10 - 1] [i_11 + 1])) : (((/* implicit */int) min(((unsigned short)46550), (((/* implicit */unsigned short) arr_0 [i_9] [i_11])))))))) : (((((/* implicit */_Bool) arr_16 [i_11 - 1] [i_10] [(unsigned short)3] [19])) ? (max((arr_17 [i_0] [i_0] [i_8 - 2] [i_9] [i_10] [i_0] [i_11 - 1]), (((/* implicit */unsigned int) arr_26 [i_11 - 1] [i_8 + 1] [i_8] [i_10])))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_10] [i_10 + 3] [i_10] [i_10 - 1] [i_10 + 3] [i_10 + 1])))))));
                            arr_35 [i_0] [i_0] [i_9] [i_10] [i_10] [i_10] [i_11] = ((/* implicit */short) min((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_0] [9ULL] [i_0] [i_9] [i_10] [i_9] [i_11 - 1]))))) : (((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */int) (unsigned short)46562)) : (arr_33 [i_8 + 2] [i_10 - 2] [i_10 - 2] [i_9] [i_0] [i_8 + 2] [i_0])))))), ((-((-(arr_2 [i_9] [i_10 - 2])))))));
                            var_29 = ((/* implicit */unsigned long long int) (unsigned short)46554);
                        }
                    } 
                } 
            } 
            arr_36 [i_8] [i_8] [i_8 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_0])) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)-27613)), (arr_8 [i_0])))) ? (((((/* implicit */_Bool) arr_23 [i_8 + 2] [i_0] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)18985)))) : (arr_33 [i_0] [i_0] [i_0] [(unsigned short)6] [i_0] [i_0] [i_0]))) : (((/* implicit */int) (unsigned char)31))));
        }
        /* LoopNest 3 */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                for (unsigned char i_14 = 2; i_14 < 19; i_14 += 2) 
                {
                    {
                        var_30 &= ((/* implicit */unsigned long long int) (~(arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [(unsigned short)22])));
                        var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)128))))) ? (((/* implicit */long long int) (+(2080374784U)))) : (min((((/* implicit */long long int) (_Bool)1)), (arr_27 [(unsigned short)9] [(unsigned short)9])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_41 [i_14] [i_12] [0ULL] [i_14])) ? (max((arr_27 [i_0] [i_12]), (((/* implicit */long long int) arr_38 [i_14] [i_12])))) : (((/* implicit */long long int) arr_18 [(unsigned short)17] [i_12] [i_12] [i_13] [i_13] [i_14] [i_14]))))) : (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((((/* implicit */_Bool) arr_27 [i_12] [i_13])) ? (arr_31 [i_14] [i_13] [i_12] [i_12] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (576460752303423487ULL))))))));
                        arr_46 [i_0] [5U] [i_12] [i_12] [i_14 + 3] = (+((-(arr_40 [(unsigned char)5] [i_13] [i_14]))));
                        var_32 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~((+(((/* implicit */int) (unsigned short)18990))))))) ? (((/* implicit */unsigned long long int) max((3285323911U), (((/* implicit */unsigned int) arr_18 [i_0] [(_Bool)1] [i_13] [i_14] [i_0] [i_12] [i_13]))))) : (((((/* implicit */_Bool) arr_22 [i_12])) ? ((~(arr_42 [i_0] [i_14 - 2] [i_13] [(unsigned short)18] [i_14] [i_13]))) : (((/* implicit */unsigned long long int) arr_15 [i_0] [i_12] [i_13] [i_14]))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_15 = 0; i_15 < 23; i_15 += 2) /* same iter space */
    {
        var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_15] [i_15] [i_15] [i_15])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 3285323898U)) ? (arr_9 [i_15]) : (3U)))) : (((((/* implicit */_Bool) arr_8 [i_15])) ? (((/* implicit */long long int) 4294967293U)) : (arr_27 [i_15] [i_15])))))) ? (((((/* implicit */_Bool) arr_0 [i_15] [i_15])) ? (((/* implicit */int) arr_0 [i_15] [i_15])) : (((/* implicit */int) arr_0 [i_15] [i_15])))) : ((+(((/* implicit */int) (_Bool)1))))));
        var_34 += ((/* implicit */unsigned short) max(((-(max((1152921504606781440LL), (((/* implicit */long long int) arr_24 [i_15] [i_15] [i_15] [i_15])))))), (((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) min((4025465121U), (arr_48 [i_15])))) : (65535LL)))));
        var_35 = (((!(((/* implicit */_Bool) arr_37 [i_15] [i_15] [i_15])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4U)) ? (2026448888U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)45952)))))) : (((((/* implicit */_Bool) arr_41 [i_15] [i_15] [i_15] [i_15])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_44 [i_15] [i_15])) ? (arr_12 [i_15]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)20330)))))) : (((((/* implicit */_Bool) (unsigned short)27887)) ? (((/* implicit */unsigned long long int) 18U)) : (18446744073709551609ULL))))));
        var_36 = ((/* implicit */unsigned short) min((min((1152921504606781432LL), (((/* implicit */long long int) ((((/* implicit */_Bool) 2147483642)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_15]))) : (arr_48 [i_15])))))), (((/* implicit */long long int) arr_10 [i_15] [i_15] [14U] [i_15] [i_15] [i_15]))));
    }
    var_37 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~((-(((/* implicit */int) var_10))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (var_12) : (((/* implicit */long long int) 255U))))) : (18446744073709551615ULL)));
    var_38 -= min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (var_0) : (1547684254U)))) : (15ULL))), (((/* implicit */unsigned long long int) var_18)));
}
