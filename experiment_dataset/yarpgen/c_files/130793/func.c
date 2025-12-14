/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130793
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
    for (int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_11 = ((/* implicit */_Bool) max((var_11), (((/* implicit */_Bool) (unsigned short)3574))));
        var_12 ^= ((/* implicit */int) var_10);
        var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) (((-(max((((/* implicit */long long int) (signed char)0)), (var_8))))) + (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_0 [8U] [i_0])))))))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 20; i_1 += 4) /* same iter space */
    {
        var_14 &= ((/* implicit */unsigned long long int) var_1);
        var_15 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_2 [i_1])))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1])))))));
    }
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 20; i_2 += 4) /* same iter space */
    {
        arr_7 [i_2] &= ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) == (18446744073709551615ULL))))));
        /* LoopSeq 3 */
        for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 2) /* same iter space */
        {
            arr_10 [(unsigned short)15] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_2])) ? (((/* implicit */long long int) var_6)) : (((((/* implicit */_Bool) var_9)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))));
            var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) (+(7854358581140907494LL))))));
        }
        for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 2) /* same iter space */
        {
            var_17 *= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) 3638799936996660637ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_6)))));
            var_18 = ((/* implicit */long long int) max((var_18), (((long long int) (-(6974181253648337891ULL))))));
            var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) -4281746966848608210LL)) == (0ULL)))))))));
        }
        for (long long int i_5 = 0; i_5 < 20; i_5 += 1) 
        {
            var_20 |= ((/* implicit */short) (+(((/* implicit */int) (_Bool)1))));
            /* LoopSeq 4 */
            for (unsigned int i_6 = 0; i_6 < 20; i_6 += 3) 
            {
                arr_17 [i_2] [i_2] [i_2] [i_2] &= ((/* implicit */unsigned long long int) ((signed char) 620929829U));
                var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) 22ULL)) ? (((/* implicit */unsigned long long int) var_8)) : (8ULL))))));
                /* LoopSeq 4 */
                for (short i_7 = 0; i_7 < 20; i_7 += 4) 
                {
                    var_22 &= ((/* implicit */long long int) (-(((var_7) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                    var_23 *= ((((/* implicit */_Bool) (unsigned short)0)) ? (11472562820061213725ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_2] [i_2] [i_6] [i_2]))));
                }
                for (long long int i_8 = 0; i_8 < 20; i_8 += 3) 
                {
                    var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-72))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_5) >= (((/* implicit */unsigned long long int) arr_6 [i_2] [i_5])))))) : (((323338205U) << (((9970255130191617289ULL) - (9970255130191617287ULL))))))))));
                    var_25 = ((/* implicit */_Bool) min((var_25), ((!(((/* implicit */_Bool) -1023594574))))));
                    var_26 += ((/* implicit */long long int) var_4);
                    var_27 = ((/* implicit */long long int) max((var_27), (((var_10) + (((/* implicit */long long int) (-(((/* implicit */int) var_3)))))))));
                    /* LoopSeq 2 */
                    for (int i_9 = 0; i_9 < 20; i_9 += 2) 
                    {
                        var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) ((arr_12 [i_5] [i_6]) ? (((unsigned long long int) var_4)) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))));
                        var_29 = ((/* implicit */int) (+(6974181253648337894ULL)));
                        var_30 ^= ((/* implicit */int) var_5);
                    }
                    for (unsigned long long int i_10 = 0; i_10 < 20; i_10 += 2) 
                    {
                        arr_30 [i_2] [i_2] [i_6] [i_10] [6LL] |= ((/* implicit */_Bool) ((unsigned int) arr_28 [i_2] [i_2] [i_6] [i_8] [i_10]));
                        var_31 &= ((/* implicit */int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)20463))) : (arr_18 [i_2] [i_2] [i_10] [i_10])));
                        var_32 |= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)65522))));
                        var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) 7ULL))));
                        var_34 *= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)45073)) ? (18446744073709551615ULL) : (15107789340215860188ULL)));
                    }
                }
                for (unsigned int i_11 = 0; i_11 < 20; i_11 += 2) 
                {
                    var_35 &= ((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))));
                    var_36 -= ((/* implicit */_Bool) ((var_6) + (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_11] [i_11])))));
                }
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    var_37 ^= ((((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_1)))) ? (((var_6) >> (((/* implicit */int) arr_28 [i_2] [i_2] [i_2] [i_2] [i_2])))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_9)))));
                    var_38 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-117)))))));
                    var_39 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)23084))) : (var_10)))) ? (arr_11 [i_2] [i_2] [i_2]) : (((/* implicit */int) arr_24 [i_2] [i_2] [i_2] [i_5] [i_5] [i_2] [i_12]))));
                }
            }
            for (unsigned int i_13 = 0; i_13 < 20; i_13 += 2) /* same iter space */
            {
                var_40 = ((/* implicit */long long int) min((var_40), (((/* implicit */long long int) ((_Bool) arr_22 [i_13] [i_13] [i_13])))));
                /* LoopSeq 2 */
                for (unsigned int i_14 = 0; i_14 < 20; i_14 += 3) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_15 = 0; i_15 < 20; i_15 += 4) 
                    {
                        arr_47 [i_2] [i_15] &= ((/* implicit */long long int) arr_3 [i_5]);
                        var_41 = ((/* implicit */int) min((var_41), (((/* implicit */int) var_3))));
                    }
                    var_42 -= ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)127))));
                }
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    var_43 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_33 [i_2] [i_2] [i_2] [i_2])) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)45)))));
                    var_44 -= ((/* implicit */_Bool) var_6);
                    var_45 = ((/* implicit */unsigned int) max((var_45), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)53950)))))));
                }
                var_46 = ((/* implicit */long long int) min((var_46), (((/* implicit */long long int) ((short) (unsigned short)0)))));
            }
            for (unsigned int i_17 = 0; i_17 < 20; i_17 += 2) /* same iter space */
            {
                var_47 ^= (~(((/* implicit */int) var_3)));
                var_48 |= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)20463))));
            }
            for (unsigned int i_18 = 0; i_18 < 20; i_18 += 2) /* same iter space */
            {
                var_49 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) var_8)) >= (11472562820061213724ULL)))) - (((/* implicit */int) (unsigned char)180))));
                var_50 ^= ((/* implicit */long long int) (~(((/* implicit */int) var_3))));
            }
            arr_57 [i_2] [i_2] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(var_5)))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (arr_50 [(short)14] [i_5] [i_2]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_6))))));
        }
        arr_58 [i_2] |= ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_45 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])) : (((/* implicit */int) var_9))));
    }
    var_51 = ((/* implicit */long long int) max((var_51), (((/* implicit */long long int) min((var_1), (((/* implicit */unsigned short) var_9)))))));
    var_52 = ((/* implicit */unsigned short) min((var_52), (((/* implicit */unsigned short) (unsigned char)180))));
}
