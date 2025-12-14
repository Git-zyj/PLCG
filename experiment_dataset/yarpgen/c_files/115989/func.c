/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115989
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
    var_18 = (-((~(max((((/* implicit */unsigned int) var_6)), (var_1))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        var_19 ^= ((/* implicit */unsigned char) (+(((/* implicit */int) var_12))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 19; i_1 += 3) /* same iter space */
        {
            arr_6 [i_0] [i_0] = ((/* implicit */long long int) ((var_4) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)123)))));
            /* LoopSeq 1 */
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                var_20 = ((/* implicit */signed char) (((-(-3680467048054939438LL))) >> (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) | (var_8))) - (7505278498692521209ULL)))));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 19; i_3 += 4) 
                {
                    for (unsigned char i_4 = 4; i_4 < 18; i_4 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_0 - 1] [i_0 + 1])) || (((/* implicit */_Bool) (short)-2868))));
                            var_22 ^= ((/* implicit */_Bool) ((unsigned char) (-(((/* implicit */int) arr_9 [i_3] [(unsigned short)4] [i_3])))));
                            arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 - 2] = (+(var_1));
                        }
                    } 
                } 
            }
            /* LoopSeq 2 */
            for (unsigned int i_5 = 0; i_5 < 19; i_5 += 2) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 3) 
                {
                    var_23 |= ((/* implicit */short) arr_11 [(unsigned short)16] [i_0 - 2] [i_1] [i_0 - 2] [i_0 - 2]);
                    var_24 = ((/* implicit */int) ((unsigned int) (-(var_1))));
                    arr_20 [i_6] [i_0] [i_0] [i_0] = ((/* implicit */int) ((var_11) >= (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_12))) - (arr_7 [i_6] [i_1] [i_0 - 1]))))));
                }
                arr_21 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((int) var_8))) - (arr_2 [17])));
            }
            for (unsigned int i_7 = 0; i_7 < 19; i_7 += 2) /* same iter space */
            {
                var_25 = ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (unsigned short)57781)));
                /* LoopNest 2 */
                for (unsigned int i_8 = 2; i_8 < 17; i_8 += 3) 
                {
                    for (unsigned int i_9 = 3; i_9 < 15; i_9 += 4) 
                    {
                        {
                            arr_29 [i_0] [i_1] [i_7] [i_0] [10ULL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) 18446744073709551599ULL)) ? (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0])) : (var_3))) : (((/* implicit */unsigned long long int) 3120409659U))));
                            var_26 = ((/* implicit */long long int) (-((+(((/* implicit */int) var_7))))));
                            arr_30 [i_1] [i_1] [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((unsigned int) arr_23 [i_0]));
                        }
                    } 
                } 
                arr_31 [i_0] [i_1] [i_0] = ((arr_17 [i_0 + 2] [i_7] [i_0]) ? (((/* implicit */unsigned long long int) arr_5 [i_0 + 1] [i_0])) : (16849191793955228739ULL));
                var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) 3120409659U))));
            }
            var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) (-(((/* implicit */int) (signed char)49)))))));
        }
        for (short i_10 = 0; i_10 < 19; i_10 += 3) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned long long int i_11 = 0; i_11 < 19; i_11 += 1) 
            {
                for (signed char i_12 = 0; i_12 < 19; i_12 += 1) 
                {
                    for (unsigned int i_13 = 2; i_13 < 15; i_13 += 3) 
                    {
                        {
                            arr_45 [i_0] [i_10] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((~(3120409659U))), (((/* implicit */unsigned int) var_7))))) ? ((-(min((((/* implicit */unsigned long long int) var_9)), (arr_28 [i_0] [i_0] [i_10] [i_11] [i_12] [i_13]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
                            var_29 -= ((/* implicit */signed char) var_1);
                            arr_46 [i_0] [i_10] [i_11] [i_0] [i_13] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 593408836U))));
                            arr_47 [i_0] [i_0] [i_0] [i_0 - 2] [i_0] [i_0 + 1] [i_0] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) 1174557633U)))) && (((/* implicit */_Bool) ((short) (!(((/* implicit */_Bool) var_14))))))));
                            var_30 ^= ((/* implicit */unsigned long long int) var_16);
                        }
                    } 
                } 
            } 
            var_31 = ((/* implicit */_Bool) max((min((arr_13 [i_0] [i_0 + 3]), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_16))))))), (((/* implicit */long long int) 3120409665U))));
            arr_48 [i_0] = ((/* implicit */signed char) arr_2 [i_10]);
        }
        for (short i_14 = 0; i_14 < 19; i_14 += 3) /* same iter space */
        {
            /* LoopNest 3 */
            for (short i_15 = 0; i_15 < 19; i_15 += 4) 
            {
                for (long long int i_16 = 1; i_16 < 16; i_16 += 4) 
                {
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        {
                            arr_58 [i_0] [i_0] = ((/* implicit */unsigned char) var_4);
                            arr_59 [i_0 + 1] [i_14] [i_0 + 1] [i_16 + 2] [i_0] = ((/* implicit */unsigned char) arr_25 [i_0] [i_15] [i_0] [i_15] [i_0] [i_14]);
                            var_32 = ((/* implicit */unsigned char) (+(min((((((/* implicit */_Bool) 3120409658U)) ? (3120409669U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_42 [i_0 - 2] [i_14] [(signed char)6] [i_14] [i_16] [i_17] [i_0]))))), (((/* implicit */unsigned int) (unsigned short)7))))));
                        }
                    } 
                } 
            } 
            var_33 -= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_49 [i_14])) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)53343)))))) ? (var_10) : (((/* implicit */unsigned long long int) arr_13 [14U] [14U])))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_0 - 1] [i_0 + 1] [i_14])))));
            arr_60 [i_0] [i_0] = ((/* implicit */short) 1530355772U);
            /* LoopSeq 2 */
            for (int i_18 = 0; i_18 < 19; i_18 += 4) /* same iter space */
            {
                arr_64 [i_0] [i_0] = ((/* implicit */int) (unsigned short)65535);
                arr_65 [i_0] [(signed char)3] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_2 [i_0 + 3]) % (var_2)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) min(((unsigned short)57822), (((/* implicit */unsigned short) (_Bool)1)))))))) : (min((var_3), (((/* implicit */unsigned long long int) ((var_0) >> (((/* implicit */int) arr_23 [i_0])))))))));
            }
            for (int i_19 = 0; i_19 < 19; i_19 += 4) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned int i_20 = 1; i_20 < 18; i_20 += 3) 
                {
                    var_34 -= ((/* implicit */short) ((unsigned long long int) min((((((/* implicit */_Bool) var_16)) ? (arr_4 [i_14] [i_19]) : (((/* implicit */long long int) ((/* implicit */int) arr_38 [i_0] [i_0] [i_0]))))), (((/* implicit */long long int) ((((((/* implicit */int) arr_44 [i_0] [i_14] [i_0] [i_0] [i_14] [i_14] [i_20 + 1])) + (2147483647))) >> (((166055242U) - (166055230U)))))))));
                    /* LoopSeq 1 */
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        var_35 = ((/* implicit */unsigned int) max((var_35), (((/* implicit */unsigned int) min((var_8), (((/* implicit */unsigned long long int) arr_38 [18ULL] [18ULL] [18ULL])))))));
                        arr_72 [i_0] [i_20 + 1] [i_21] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)68)) ? (((/* implicit */int) (unsigned short)15392)) : (((/* implicit */int) var_16))));
                        arr_73 [i_21] [i_0] [i_19] [i_0] [i_0 - 1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(arr_53 [i_0] [i_0 + 2]))))));
                        arr_74 [i_0] [(short)12] [(short)12] [i_20 - 1] [i_21] [i_21] = ((/* implicit */signed char) (-(4294967295U)));
                    }
                }
                /* LoopNest 2 */
                for (int i_22 = 2; i_22 < 17; i_22 += 2) 
                {
                    for (unsigned short i_23 = 0; i_23 < 19; i_23 += 1) 
                    {
                        {
                            var_36 += ((/* implicit */signed char) min((arr_4 [i_0 + 3] [i_22]), (((/* implicit */long long int) (~(var_0))))));
                            arr_79 [i_0] [i_0] [i_22] [i_22] = ((/* implicit */int) arr_28 [i_0] [i_14] [i_14] [(signed char)3] [i_23] [i_14]);
                            var_37 |= ((/* implicit */signed char) ((unsigned int) (signed char)1));
                        }
                    } 
                } 
                arr_80 [i_0] [i_14] [i_0] = ((/* implicit */_Bool) arr_4 [1U] [i_0]);
            }
            arr_81 [16ULL] |= ((/* implicit */long long int) ((((/* implicit */_Bool) -2147483620)) ? (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) arr_23 [(signed char)14])) : (((/* implicit */int) arr_44 [i_0] [i_0 - 2] [i_0] [i_14] [i_0 - 2] [i_0 - 2] [i_0 + 3]))))) : (var_1)));
        }
        /* LoopNest 2 */
        for (unsigned short i_24 = 1; i_24 < 16; i_24 += 3) 
        {
            for (int i_25 = 0; i_25 < 19; i_25 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_26 = 0; i_26 < 19; i_26 += 1) 
                    {
                        for (unsigned char i_27 = 0; i_27 < 19; i_27 += 1) 
                        {
                            {
                                arr_94 [i_0] = ((/* implicit */int) ((unsigned int) ((min((((/* implicit */long long int) var_5)), (arr_54 [i_0 + 2] [i_24] [i_0 + 2] [i_26]))) * (((/* implicit */long long int) 3701918788U)))));
                                var_38 += ((/* implicit */unsigned char) ((int) ((unsigned char) (+(1630796621U)))));
                                var_39 -= 14105957483507215984ULL;
                                var_40 = ((/* implicit */unsigned int) max((var_40), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) arr_56 [i_0 - 1] [18ULL] [i_25] [i_26] [i_27])) : (var_10))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-1))))))))));
                            }
                        } 
                    } 
                    arr_95 [i_25] [i_0] [i_0] = ((/* implicit */short) var_7);
                }
            } 
        } 
    }
}
