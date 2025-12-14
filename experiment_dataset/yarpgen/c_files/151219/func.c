/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151219
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
    var_10 = ((/* implicit */int) (~((~(4294967295U)))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) max((7U), (((/* implicit */unsigned int) (signed char)6))));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (signed char i_2 = 3; i_2 < 16; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)38492)) ? ((((~(3U))) | (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1] [i_2 + 1] [i_2 - 3] [i_0]))))) : (((/* implicit */unsigned int) 210728375)))))));
                        var_12 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)109)) ? (3541526630U) : (0U)));
                    }
                } 
            } 
            var_13 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) 34359607296ULL)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_2 [i_0] [i_1]))))) : ((+(4294967290U))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (signed char i_4 = 1; i_4 < 16; i_4 += 4) /* same iter space */
            {
                arr_17 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_4 + 1] [i_1] [i_1])) ? (34359607296ULL) : (arr_7 [i_1] [i_4] [i_4] [i_4 + 2])));
                arr_18 [i_0] [i_1] [i_0] |= ((/* implicit */unsigned short) ((((int) 1851865758U)) <= (((/* implicit */int) arr_8 [i_4 + 2] [i_4 + 1] [i_4 + 1] [i_0]))));
                arr_19 [i_1] = ((/* implicit */unsigned int) ((18446744039349944319ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)6)))));
                /* LoopSeq 3 */
                for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 3) 
                {
                    /* LoopSeq 1 */
                    for (short i_6 = 1; i_6 < 16; i_6 += 2) 
                    {
                        arr_25 [i_0] [i_4] [i_4 + 1] [i_4] [i_4 - 1] [i_4 + 1] |= ((/* implicit */int) ((734244991U) - (2755202876U)));
                        var_14 = ((/* implicit */unsigned long long int) ((long long int) (short)22186));
                    }
                    var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_4 + 2] [i_4 + 2])) & (((/* implicit */int) arr_5 [i_4 - 1] [i_4 + 1])))))));
                }
                for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) /* same iter space */
                {
                    var_16 = ((/* implicit */unsigned short) 18446744039349944319ULL);
                    arr_28 [i_0] [i_1] [i_1] [i_1] [i_7 + 1] [i_7] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_12 [i_1] [i_4] [i_1] [i_1])) | (10031391613496515299ULL)));
                }
                for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) /* same iter space */
                {
                    arr_32 [i_1] [i_8 + 1] [i_4 + 2] [i_4] [i_0] [i_1] = ((/* implicit */short) (~(((/* implicit */int) (unsigned short)406))));
                    /* LoopSeq 1 */
                    for (signed char i_9 = 0; i_9 < 18; i_9 += 3) 
                    {
                        var_17 = ((/* implicit */signed char) 4294967295U);
                        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_27 [i_9] [i_1] [i_8] [i_1] [i_8])) ? (((/* implicit */long long int) (~(var_8)))) : (arr_24 [i_9] [i_4] [i_9])));
                        var_19 = ((/* implicit */unsigned int) ((arr_30 [i_4 + 1] [i_9]) | (arr_30 [i_4 + 1] [i_4])));
                    }
                }
                arr_36 [i_1] [i_1] [i_4] = ((var_6) & (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_4 + 1] [i_1]))));
            }
            for (signed char i_10 = 1; i_10 < 16; i_10 += 4) /* same iter space */
            {
                var_20 *= ((/* implicit */unsigned long long int) ((5U) | (4294967290U)));
                arr_40 [i_1] [i_1] [i_10] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) (-(0U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)127))) : (2755202864U)))));
            }
            arr_41 [i_1] = (!(((/* implicit */_Bool) arr_39 [i_1] [i_0] [i_0] [i_0])));
        }
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
        {
            var_21 |= ((/* implicit */unsigned char) ((4294967286U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)20)))));
            var_22 = ((/* implicit */unsigned int) (+(max((-4701138584663606766LL), (((/* implicit */long long int) (signed char)-6))))));
            arr_44 [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_6)))) ? (((/* implicit */int) ((unsigned char) arr_31 [i_0] [i_0] [i_11] [i_11]))) : (((/* implicit */int) min((arr_23 [i_0]), (arr_23 [i_0]))))));
            var_23 = ((/* implicit */int) min((var_23), (((((/* implicit */int) max(((signed char)-11), ((signed char)6)))) >> (((/* implicit */int) ((arr_16 [i_0] [i_11] [i_0]) == (arr_16 [i_0] [i_0] [i_0]))))))));
        }
        arr_45 [i_0] |= arr_4 [i_0] [i_0];
        /* LoopNest 2 */
        for (unsigned short i_12 = 1; i_12 < 17; i_12 += 3) 
        {
            for (signed char i_13 = 2; i_13 < 16; i_13 += 3) 
            {
                {
                    var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((unsigned short) (signed char)-9)))));
                    arr_52 [i_13] [i_12] [i_13] = ((/* implicit */signed char) ((((arr_39 [i_12 - 1] [i_12 - 1] [i_13 - 2] [i_13 - 2]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_12 + 1] [i_12 - 1]))))) - (((/* implicit */unsigned int) (-(512))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
    {
        arr_55 [i_14 - 1] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_3))));
        var_25 = ((/* implicit */signed char) min((var_25), ((signed char)0)));
        arr_56 [i_14] [i_14] = ((((/* implicit */_Bool) ((var_8) & (((/* implicit */int) (signed char)0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_49 [i_14] [i_14]))) : (((1U) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)6))))));
        var_26 *= ((/* implicit */int) (((!(((/* implicit */_Bool) 16376)))) || (((/* implicit */_Bool) arr_29 [i_14 - 1]))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_15 = 2; i_15 < 20; i_15 += 2) 
    {
        for (signed char i_16 = 2; i_16 < 19; i_16 += 3) 
        {
            {
                var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) (~(18446744073709551615ULL))))));
                /* LoopNest 2 */
                for (signed char i_17 = 0; i_17 < 21; i_17 += 1) 
                {
                    for (unsigned char i_18 = 3; i_18 < 18; i_18 += 4) 
                    {
                        {
                            var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) min((((/* implicit */unsigned long long int) (unsigned char)170)), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -7738672543218020989LL)) ? (((/* implicit */long long int) 2755202864U)) : (-4701138584663606774LL)))) ^ (((((/* implicit */_Bool) (signed char)3)) ? (6038279818606350824ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)25412))))))))))));
                            var_29 *= ((((/* implicit */unsigned int) ((((/* implicit */int) arr_57 [i_15 - 2])) | ((~(((/* implicit */int) (signed char)0))))))) & (1796999006U));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (signed char i_19 = 3; i_19 < 20; i_19 += 3) 
                {
                    var_30 |= ((/* implicit */short) (~(max((((/* implicit */unsigned long long int) var_3)), (max((((/* implicit */unsigned long long int) (unsigned char)178)), (34359607279ULL)))))));
                    var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) (+((+(arr_65 [i_19] [i_19 + 1] [i_16 + 2] [i_16]))))))));
                    var_32 = ((/* implicit */long long int) min((var_32), ((-(((((/* implicit */_Bool) (signed char)34)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)0))) : (-5731070585829122643LL)))))));
                    /* LoopNest 2 */
                    for (int i_20 = 0; i_20 < 21; i_20 += 4) 
                    {
                        for (signed char i_21 = 0; i_21 < 21; i_21 += 3) 
                        {
                            {
                                var_33 = ((/* implicit */long long int) ((((/* implicit */int) (signed char)18)) & (((/* implicit */int) (signed char)-98))));
                                var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) (!(((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_74 [i_15] [i_15] [i_21] [i_15] [i_20] [i_16] [i_19 - 3])))))))));
                            }
                        } 
                    } 
                    var_35 |= ((/* implicit */unsigned long long int) min(((-(4701138584663606764LL))), (max((((((/* implicit */long long int) ((/* implicit */int) (signed char)115))) / (4701138584663606765LL))), (((/* implicit */long long int) (-(-1359430914))))))));
                }
                arr_76 [i_15 - 1] [i_16] [i_16 - 1] = var_7;
            }
        } 
    } 
}
