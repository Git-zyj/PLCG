/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155077
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
    var_14 = min((var_10), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (short)-4013)))) && (((/* implicit */_Bool) ((unsigned short) var_13)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (short i_2 = 4; i_2 < 9; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((1505545165105556606LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_2)))))) | (max((var_5), (((/* implicit */unsigned long long int) (short)-4023))))));
                    arr_7 [1ULL] [1ULL] [1ULL] [i_1] = ((/* implicit */int) (unsigned char)157);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 3) 
    {
        for (long long int i_4 = 2; i_4 < 21; i_4 += 4) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_5 = 3; i_5 < 19; i_5 += 3) 
                {
                    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */int) arr_13 [i_3] [i_4] [i_4])) : (((/* implicit */int) arr_13 [i_3] [i_4] [i_5]))))) ? (((/* implicit */int) arr_15 [i_3] [i_3])) : (((/* implicit */int) var_12))));
                    /* LoopSeq 1 */
                    for (unsigned char i_6 = 0; i_6 < 22; i_6 += 1) 
                    {
                        var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_12 [i_4 - 1] [i_4 - 2] [i_4 + 1]))));
                        var_18 = ((/* implicit */signed char) ((unsigned char) (unsigned char)56));
                        var_19 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6491675876738162920ULL)) ? (-319490996) : (((/* implicit */int) (signed char)127))))) / (((((/* implicit */_Bool) arr_15 [i_4] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)7))) : (1047844034735217572ULL)))));
                    }
                    arr_18 [i_3] = ((/* implicit */unsigned char) ((long long int) 1505545165105556606LL));
                    var_20 |= ((/* implicit */_Bool) (unsigned char)7);
                    arr_19 [i_3] [i_3] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (unsigned char)229)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_14 [i_3] [i_3]))))));
                }
                /* LoopSeq 1 */
                for (signed char i_7 = 0; i_7 < 22; i_7 += 3) 
                {
                    var_21 &= ((/* implicit */long long int) ((var_5) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) arr_11 [i_4] [i_4])) : (((/* implicit */int) arr_11 [i_4] [i_7])))))));
                    arr_22 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)56)) ? (((/* implicit */int) arr_14 [i_3] [(short)15])) : (((/* implicit */int) (unsigned char)248))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned char)229)), (var_1)))) : (var_5))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)-11)), ((unsigned char)18)))) ? (((((/* implicit */_Bool) 347882844794774779LL)) ? (((/* implicit */long long int) var_9)) : (-6976836306435057957LL))) : (((((/* implicit */_Bool) arr_10 [i_3] [i_3])) ? (-7462062555421004170LL) : (9223372036854775799LL))))))));
                    /* LoopSeq 3 */
                    for (unsigned short i_8 = 0; i_8 < 22; i_8 += 4) 
                    {
                        arr_25 [i_3] [i_4] [i_4] [i_7] [i_8] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)43)) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_3] [(_Bool)1] [i_3]))) : (6976836306435057948LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)122)) ? (((/* implicit */int) arr_15 [i_3] [i_3])) : (((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) arr_21 [i_3] [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_3] [i_4]))) : (1047844034735217572ULL))))))));
                        arr_26 [i_3] [i_3] [i_7] [i_7] = ((/* implicit */unsigned char) (((((!(((/* implicit */_Bool) 4194303LL)))) && (((/* implicit */_Bool) arr_23 [i_4 + 1] [i_4 - 2])))) || ((!(((/* implicit */_Bool) 3985082656U))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_9 = 1; i_9 < 18; i_9 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_10 = 2; i_10 < 18; i_10 += 4) 
                        {
                            arr_32 [i_4 - 2] [i_4] [i_3] [i_4] [i_4 - 2] = ((/* implicit */_Bool) ((int) (unsigned char)128));
                            var_22 = ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)118)) && (((/* implicit */_Bool) (unsigned char)242))))) % (((/* implicit */int) (unsigned char)251)));
                            var_23 = ((/* implicit */short) ((((/* implicit */int) arr_14 [i_3] [i_9 + 4])) - (((/* implicit */int) arr_11 [i_3] [i_9 + 4]))));
                        }
                        /* LoopSeq 3 */
                        for (unsigned short i_11 = 0; i_11 < 22; i_11 += 4) 
                        {
                            var_24 = ((/* implicit */unsigned char) ((unsigned long long int) var_1));
                            arr_35 [i_3] = ((/* implicit */unsigned long long int) ((int) ((long long int) arr_23 [i_3] [i_4])));
                            var_25 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)232)) ? (arr_29 [i_9 + 4] [i_7] [i_4 - 2] [i_4 - 2] [i_4 - 2]) : (arr_29 [i_9 - 1] [i_4] [i_4 - 2] [i_4 - 1] [i_4 - 1])));
                        }
                        for (signed char i_12 = 0; i_12 < 22; i_12 += 3) /* same iter space */
                        {
                            var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_34 [i_3] [i_4 + 1] [i_9 + 4] [i_9] [i_12])) != (((/* implicit */int) arr_34 [i_3] [i_4 - 1] [i_9 + 4] [i_9] [i_12]))));
                            arr_40 [i_3] [i_3] [i_3] [i_9] [i_12] [i_4] |= ((/* implicit */signed char) var_8);
                            arr_41 [i_4] [i_3] [i_7] [i_4] [i_3] [i_3] = ((/* implicit */long long int) ((_Bool) (unsigned short)13459));
                            var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 570971820755424960ULL)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127)))))) ? (((unsigned long long int) var_2)) : (((/* implicit */unsigned long long int) -1505545165105556606LL))));
                        }
                        for (signed char i_13 = 0; i_13 < 22; i_13 += 3) /* same iter space */
                        {
                            var_28 += ((/* implicit */unsigned short) 3107395442U);
                            var_29 = ((/* implicit */unsigned short) ((short) arr_16 [i_9] [i_4] [i_7] [i_9 + 2] [i_4]));
                            arr_46 [i_13] [i_3] [i_7] [i_3] [i_3] = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) -1505545165105556627LL)) ? (((/* implicit */int) arr_43 [i_3] [i_3] [i_3] [i_3] [i_3])) : (1998159251))));
                            var_30 -= ((((/* implicit */_Bool) ((signed char) (short)32767))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) <= (1023U))))) : (790334567U));
                            arr_47 [i_3] [i_9] = ((/* implicit */int) var_2);
                        }
                        /* LoopSeq 3 */
                        for (unsigned char i_14 = 0; i_14 < 22; i_14 += 3) /* same iter space */
                        {
                            arr_50 [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_14 [i_3] [i_4 - 2]))));
                            arr_51 [i_3] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -165597914)) ? (var_1) : (((/* implicit */long long int) 3504632712U))))) ? (-660230872) : (((/* implicit */int) (signed char)104))));
                            arr_52 [i_3] [i_4] [i_7] [i_3] [i_4] = ((/* implicit */unsigned char) ((long long int) arr_21 [i_3] [i_9 - 1]));
                        }
                        for (unsigned char i_15 = 0; i_15 < 22; i_15 += 3) /* same iter space */
                        {
                            arr_55 [i_3] = ((/* implicit */short) ((0ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
                            var_31 = ((/* implicit */unsigned int) ((signed char) (signed char)1));
                            var_32 -= ((/* implicit */unsigned char) var_8);
                            arr_56 [i_3] [i_3] [i_3] [(unsigned short)7] [i_9] [i_15] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 12990543789123420681ULL)) ? (arr_31 [i_3] [i_4] [i_7] [i_7] [i_4] [i_15]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) && (((/* implicit */_Bool) 2297235943U))));
                        }
                        for (unsigned char i_16 = 2; i_16 < 19; i_16 += 3) 
                        {
                            arr_61 [i_3] [i_3] [i_3] [i_9] [i_3] = ((/* implicit */int) ((arr_16 [i_3] [i_16 + 1] [i_7] [i_4 - 2] [i_16]) & (4516647066687651735LL)));
                            var_33 = ((/* implicit */unsigned short) min((var_33), ((unsigned short)596)));
                            var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 18446744073709551605ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-112))) : (var_13)));
                            var_35 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_16 - 2] [i_16 - 2] [i_16 - 2] [i_9 - 1] [i_3] [i_4 - 1]))) != (arr_59 [i_4 - 2] [i_9 + 4] [i_16 - 2] [i_16 - 1] [i_16 + 3] [i_16 - 2])));
                        }
                    }
                    for (long long int i_17 = 1; i_17 < 19; i_17 += 4) 
                    {
                        var_36 = ((/* implicit */unsigned short) min((var_36), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_44 [i_3] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_13)))) : (max((var_1), (((/* implicit */long long int) (signed char)-92))))))) != (min((min((((/* implicit */unsigned long long int) (short)32767)), (17875772252954126655ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_4] [i_4 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65524))) : (1505545165105556626LL)))))))))));
                        arr_64 [i_3] [i_3] [i_4] [i_4] [i_3] [i_17] = ((/* implicit */int) arr_37 [i_3] [i_3] [i_4] [i_3] [i_17]);
                        arr_65 [i_17 + 1] [i_3] [i_17 + 1] [i_17 + 1] = ((/* implicit */signed char) ((unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967279U)) ? (arr_48 [i_4] [i_4 + 1] [(unsigned char)6] [i_4 + 1] [i_3]) : (((/* implicit */int) arr_21 [i_3] [i_3]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)237))) + (var_5))))));
                    }
                    arr_66 [i_3] [i_4 + 1] [i_7] = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_10)), (17398900038974334018ULL)))) ? (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)34671))) : (-4516647066687651735LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 2147483644)) && (((/* implicit */_Bool) arr_42 [i_3] [i_3] [i_4 - 1] [i_4 - 2] [i_3] [i_3])))))))));
                }
                var_37 -= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_0)), ((-9223372036854775807LL - 1LL))))), (((((/* implicit */_Bool) ((unsigned int) var_4))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_4)) > (((/* implicit */int) (short)16383)))))) : (((((/* implicit */_Bool) arr_21 [i_4] [i_4])) ? (((/* implicit */unsigned long long int) arr_28 [i_4 - 1] [i_4] [i_4 - 1] [i_4 - 1])) : (16976672322795786560ULL)))))));
            }
        } 
    } 
    var_38 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((max((6976836306435057957LL), (((/* implicit */long long int) (_Bool)0)))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))))) ? (((((/* implicit */unsigned long long int) var_9)) - (min((var_5), (((/* implicit */unsigned long long int) (signed char)-113)))))) : (((min((16976672322795786545ULL), (var_5))) % (((/* implicit */unsigned long long int) var_7))))));
}
