/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150060
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
    /* vectorizable */
    for (short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_14 = ((/* implicit */signed char) (((_Bool)1) || (((/* implicit */_Bool) (unsigned char)47))));
        arr_3 [i_0] [i_0] = (+(((/* implicit */int) arr_0 [i_0] [i_0])));
        /* LoopSeq 4 */
        for (int i_1 = 1; i_1 < 17; i_1 += 4) /* same iter space */
        {
            var_15 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 6284217751023553148LL)) ? (((/* implicit */int) (unsigned short)34877)) : (((/* implicit */int) (signed char)(-127 - 1)))));
            arr_7 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_1 + 1] [i_1 - 1])) ? (-6284217751023553149LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)202)))));
            arr_8 [i_1] [i_0] [i_1] = ((/* implicit */long long int) (-(((/* implicit */int) arr_5 [i_1 - 1]))));
            var_16 = ((/* implicit */unsigned char) arr_0 [i_1 + 1] [i_1 - 1]);
        }
        for (int i_2 = 1; i_2 < 17; i_2 += 4) /* same iter space */
        {
            arr_12 [i_2] [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) 3025150225U)) ? (-1372964592996693966LL) : (((/* implicit */long long int) ((/* implicit */int) (short)21283)))));
            var_17 |= ((/* implicit */_Bool) ((450460167) << (((((((/* implicit */_Bool) -1831253308)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)12))) : (arr_2 [i_0]))) - (10LL)))));
        }
        for (int i_3 = 1; i_3 < 17; i_3 += 4) /* same iter space */
        {
            var_18 = ((/* implicit */unsigned short) (short)13439);
            /* LoopNest 2 */
            for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
            {
                for (long long int i_5 = 0; i_5 < 18; i_5 += 2) 
                {
                    {
                        arr_20 [i_0] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_3 + 1] [i_4 + 1])) ? (((/* implicit */int) arr_4 [i_3 + 1] [i_4 + 1])) : (((/* implicit */int) arr_4 [i_3 + 1] [i_4 + 1]))));
                        /* LoopSeq 1 */
                        for (int i_6 = 1; i_6 < 15; i_6 += 1) 
                        {
                            var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_3 + 1] [i_3 + 1]))) : (2899539679010276426ULL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0]))))) : (((((/* implicit */_Bool) 1831253308)) ? (1831253308) : (((/* implicit */int) (signed char)-124)))))))));
                            arr_23 [i_6] [i_5] = ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)4095)));
                            arr_24 [i_3 + 1] [i_3 - 1] [i_6] [i_3 - 1] [i_3 - 1] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) 6020669026145827481LL)) && (((/* implicit */_Bool) (unsigned short)5470))));
                        }
                    }
                } 
            } 
            var_20 = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)42503)) : (((/* implicit */int) (signed char)-76))));
        }
        for (unsigned char i_7 = 0; i_7 < 18; i_7 += 1) 
        {
            arr_27 [i_0] [i_7] [i_7] = ((/* implicit */short) (+(((/* implicit */int) arr_0 [i_0] [i_7]))));
            arr_28 [i_0] [i_7] [i_7] = ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)127))));
            var_21 = ((/* implicit */long long int) ((((/* implicit */long long int) -552646280)) <= (856356575444300297LL)));
            var_22 |= ((/* implicit */unsigned short) (((_Bool)0) ? (((/* implicit */int) (short)-26387)) : (((/* implicit */int) (unsigned short)61647))));
        }
        arr_29 [i_0] = ((((/* implicit */_Bool) -937542678)) ? (((/* implicit */int) (short)-31371)) : (((/* implicit */int) (signed char)-110)));
    }
    /* vectorizable */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        arr_32 [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))));
        var_23 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 262143U)) ? (16LL) : (((/* implicit */long long int) arr_10 [i_8] [i_8]))));
        var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_8])) ? ((+(((/* implicit */int) (signed char)(-127 - 1))))) : (((/* implicit */int) arr_18 [i_8] [(signed char)13] [i_8] [i_8] [i_8] [i_8])))))));
        /* LoopSeq 1 */
        for (int i_9 = 0; i_9 < 18; i_9 += 1) 
        {
            var_25 += ((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_9]))));
            var_26 ^= ((/* implicit */signed char) ((((/* implicit */int) (signed char)-110)) > (937542678)));
        }
    }
    /* vectorizable */
    for (signed char i_10 = 2; i_10 < 21; i_10 += 4) 
    {
        var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) (~(arr_36 [i_10] [i_10 + 1]))))));
        var_28 *= ((/* implicit */unsigned int) (unsigned short)33527);
        /* LoopSeq 3 */
        for (int i_11 = 1; i_11 < 21; i_11 += 1) /* same iter space */
        {
            arr_39 [i_10] [15ULL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_37 [i_11 + 1] [i_11] [i_10 + 1])) ? (((/* implicit */int) arr_37 [i_11 + 1] [i_11] [i_10 + 1])) : (((/* implicit */int) arr_37 [i_11 + 1] [i_10 - 1] [i_10 + 1]))));
            arr_40 [i_11] [i_10] [i_10] = (unsigned short)16501;
        }
        for (int i_12 = 1; i_12 < 21; i_12 += 1) /* same iter space */
        {
            arr_43 [13LL] = ((/* implicit */_Bool) -35739890);
            /* LoopNest 2 */
            for (long long int i_13 = 0; i_13 < 22; i_13 += 1) 
            {
                for (long long int i_14 = 0; i_14 < 22; i_14 += 4) 
                {
                    {
                        arr_52 [i_10] [i_12] [i_13] [i_14] = ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-94))));
                        var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -6284217751023553134LL)) ? (5606660481101360681LL) : (((/* implicit */long long int) arr_49 [i_10 + 1] [i_10 - 1] [i_13] [i_10 - 1]))));
                        var_30 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (short)29267)) : (((/* implicit */int) (signed char)90)))) <= (-1682126548)));
                    }
                } 
            } 
            arr_53 [i_12 - 1] [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)111)) ? (((/* implicit */unsigned int) -1583966994)) : (0U)));
        }
        for (int i_15 = 1; i_15 < 21; i_15 += 1) /* same iter space */
        {
            arr_56 [i_15] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16501))) ^ (0ULL)));
            var_31 = ((/* implicit */unsigned char) 11175574737769057580ULL);
        }
    }
    var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)27759)) ? (-1) : ((-(((/* implicit */int) (signed char)121))))));
    /* LoopNest 3 */
    for (signed char i_16 = 0; i_16 < 20; i_16 += 1) 
    {
        for (unsigned short i_17 = 0; i_17 < 20; i_17 += 2) 
        {
            for (long long int i_18 = 2; i_18 < 17; i_18 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_19 = 0; i_19 < 20; i_19 += 4) 
                    {
                        for (unsigned short i_20 = 0; i_20 < 20; i_20 += 2) 
                        {
                            {
                                var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)126)) ? (((/* implicit */int) (unsigned short)34216)) : (((/* implicit */int) (unsigned char)0))));
                                var_34 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) -2118301919)) ? (((/* implicit */int) (signed char)28)) : (((/* implicit */int) (signed char)127))))));
                                var_35 = ((/* implicit */unsigned int) max((var_35), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (248012853U)))))))));
                            }
                        } 
                    } 
                    var_36 *= ((/* implicit */signed char) max((1730084609), (-521596871)));
                    var_37 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2147483637)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8))) : (((((/* implicit */_Bool) arr_35 [i_18 - 2])) ? (((/* implicit */long long int) -17)) : (4515464742408563065LL)))));
                    arr_72 [i_16] [i_18] [i_18] = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_44 [i_18] [i_16] [i_18])) ? (((/* implicit */int) (signed char)61)) : (-264774393)))) / (((((/* implicit */_Bool) (unsigned short)1419)) ? (((((/* implicit */_Bool) (unsigned char)27)) ? (-6284217751023553134LL) : (((/* implicit */long long int) ((/* implicit */int) arr_57 [i_17]))))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */signed char) arr_54 [i_16] [i_18])), ((signed char)0)))))))));
                }
            } 
        } 
    } 
}
