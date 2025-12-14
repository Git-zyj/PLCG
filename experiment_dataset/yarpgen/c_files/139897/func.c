/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139897
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
    var_18 = ((/* implicit */unsigned long long int) min((max((1935424392), (577564140))), ((~(((/* implicit */int) var_1))))));
    var_19 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)19201)) : (-577564141)))) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned long long int) max((577564159), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (signed char)67)) : (((/* implicit */int) var_6)))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_11 [i_1] [i_1] [i_2] [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */unsigned int) ((arr_3 [i_3 - 1] [i_3 - 1] [i_3 - 1]) ? (((/* implicit */int) arr_3 [i_3 - 1] [i_3 - 1] [i_3 - 1])) : (((/* implicit */int) arr_3 [i_3 - 1] [i_3 - 1] [i_3 - 1]))))) > (var_13)));
                        arr_12 [i_0] [i_1] [i_1] [i_2] [i_2] [i_3] = ((/* implicit */long long int) ((((((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0])))) == (((/* implicit */int) arr_8 [i_3] [i_3] [i_3 - 1] [i_3 - 1] [i_3 - 1])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_2]))) : (var_13)))) ? (((/* implicit */int) ((arr_7 [i_0] [i_1] [i_1]) < (arr_7 [i_1] [i_2] [i_3])))) : (((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2] [i_3])) ? (((/* implicit */int) arr_8 [i_3] [i_2] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_4 [i_1])))))) : ((-(((/* implicit */int) arr_9 [i_2] [i_3] [i_3 - 1] [i_2]))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_4 = 0; i_4 < 12; i_4 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_5 = 2; i_5 < 8; i_5 += 2) 
            {
                for (long long int i_6 = 3; i_6 < 11; i_6 += 2) 
                {
                    {
                        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((14U) > (((/* implicit */unsigned int) ((/* implicit */int) ((var_14) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_4] [i_5]))))))))))));
                        var_21 *= ((/* implicit */unsigned char) arr_21 [i_5 + 1] [i_5 - 2] [i_5 + 2] [i_6 + 1]);
                    }
                } 
            } 
            arr_22 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_4] [i_0]))) - (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) ^ (arr_15 [i_0] [i_0])))));
        }
        arr_23 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)24)) ? (16170126280640980933ULL) : (3507050332198247310ULL)));
        arr_24 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)218))))), (((var_0) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0])))))))) ? (((/* implicit */unsigned long long int) arr_19 [i_0])) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2097151)) ? (((/* implicit */unsigned long long int) 1935424392)) : (var_2)))) ? (max((((/* implicit */unsigned long long int) var_4)), (arr_15 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_2 [i_0])))))))));
        var_22 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_4 [i_0])))) > (((/* implicit */int) min((arr_4 [i_0]), (arr_4 [i_0]))))));
    }
    for (unsigned char i_7 = 0; i_7 < 22; i_7 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_8 = 0; i_8 < 22; i_8 += 3) /* same iter space */
        {
            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) 577564159)) ? (((/* implicit */int) (unsigned short)26438)) : (1935424407)));
            /* LoopNest 2 */
            for (unsigned int i_9 = 0; i_9 < 22; i_9 += 4) 
            {
                for (unsigned short i_10 = 0; i_10 < 22; i_10 += 2) 
                {
                    {
                        arr_38 [i_7] [i_7] [i_9] [i_7] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (2328099742U) : (((/* implicit */unsigned int) -577564141))));
                        arr_39 [i_7] [i_7] [i_8] [i_8] [i_8] [i_10] = ((/* implicit */_Bool) arr_28 [i_8]);
                    }
                } 
            } 
        }
        for (unsigned int i_11 = 0; i_11 < 22; i_11 += 3) /* same iter space */
        {
            /* LoopSeq 3 */
            for (unsigned short i_12 = 2; i_12 < 21; i_12 += 3) 
            {
                arr_44 [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_43 [i_12]) ^ (arr_43 [i_12])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_11] [i_11]))) : (((((/* implicit */_Bool) ((var_0) ? (((/* implicit */int) (unsigned short)2047)) : (((/* implicit */int) arr_37 [i_7] [i_7] [i_7] [i_7] [i_7]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_26 [i_12])) ? (arr_41 [i_7] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) : (arr_27 [i_12 - 1])))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_13 = 0; i_13 < 22; i_13 += 3) 
                {
                    var_24 = ((/* implicit */signed char) (~(((((/* implicit */int) arr_31 [i_7] [i_12] [i_12])) / (((/* implicit */int) (signed char)-1))))));
                    var_25 = ((/* implicit */short) (~(var_4)));
                }
                arr_47 [i_7] [i_12] = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) var_15))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_7]))) | (arr_27 [i_11]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)17))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1)))))));
            }
            for (short i_14 = 2; i_14 < 19; i_14 += 2) 
            {
                var_26 ^= ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_27 [i_7])) ? (arr_27 [i_7]) : (arr_40 [i_7])))));
                var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) var_4))) | (((((/* implicit */_Bool) ((10311485432459428706ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)127)))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (((_Bool)0) || (((/* implicit */_Bool) var_5)))))))));
                var_28 = ((/* implicit */signed char) max((-7061529909908178979LL), (((/* implicit */long long int) (-(((/* implicit */int) (signed char)66)))))));
                var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_43 [i_14])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_43 [i_14]))))))))));
            }
            for (unsigned char i_15 = 0; i_15 < 22; i_15 += 2) 
            {
                arr_53 [i_7] [i_11] = ((/* implicit */unsigned char) (~(((unsigned long long int) arr_48 [i_7] [i_11] [i_15] [i_15]))));
                var_30 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (8589934592ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_7] [i_11] [i_7] [i_7] [i_7])))))) ? (((((/* implicit */_Bool) (unsigned char)229)) ? (arr_30 [i_15]) : (2571096181216094422LL))) : (((/* implicit */long long int) ((((/* implicit */int) arr_49 [i_15])) - (((/* implicit */int) arr_32 [i_7] [i_7]))))));
                /* LoopSeq 1 */
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    arr_58 [i_11] [i_15] [i_15] = max((((/* implicit */unsigned int) (-(((/* implicit */int) arr_42 [i_7] [i_15] [i_16]))))), (arr_41 [i_7] [i_7]));
                    var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)4)) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)1))))) ? (((/* implicit */unsigned long long int) arr_45 [i_7] [i_7] [i_15] [i_16])) : (((18446744073709551615ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_7]))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_49 [i_16])) : (((/* implicit */int) var_1)))))));
                }
                /* LoopNest 2 */
                for (signed char i_17 = 0; i_17 < 22; i_17 += 4) 
                {
                    for (short i_18 = 1; i_18 < 19; i_18 += 3) 
                    {
                        {
                            var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) max((((/* implicit */short) var_17)), ((short)3873))))))) ? (max((max((((/* implicit */unsigned int) arr_29 [i_7] [i_11] [i_18])), (arr_62 [i_18] [i_18] [i_15] [i_18] [i_7]))), (((/* implicit */unsigned int) arr_49 [i_18 + 2])))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_59 [i_15] [i_18 + 1] [i_18 + 1] [i_18] [i_18 + 3]) >= (((/* implicit */long long int) ((/* implicit */int) var_9)))))))));
                            var_33 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_37 [i_18] [i_18 + 3] [i_18 + 3] [i_18] [i_18 + 3]) ? (((((/* implicit */_Bool) (short)-29960)) ? (var_2) : (((/* implicit */unsigned long long int) -738232995)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_61 [i_15] [i_18] [i_18 - 1] [i_18 + 2])))))) ? (((/* implicit */int) arr_57 [i_18] [i_18 - 1] [i_18 + 2] [i_18 + 1])) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_50 [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (arr_40 [i_7])))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (signed char)-81))))));
                            var_34 = (~(((((/* implicit */_Bool) (unsigned short)53276)) ? (((((/* implicit */_Bool) arr_25 [i_7] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)27947), (((/* implicit */unsigned short) (signed char)73)))))))));
                        }
                    } 
                } 
                arr_64 [i_15] [i_7] [i_7] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_54 [i_11])) ? (arr_54 [i_7]) : (arr_54 [i_7]))) <= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_54 [i_7]))))))));
            }
            arr_65 [i_7] [i_11] [i_7] = ((/* implicit */long long int) 1073741823U);
            arr_66 [i_7] = ((/* implicit */signed char) arr_36 [i_11]);
            var_35 = ((/* implicit */int) min((var_35), (((((/* implicit */int) var_6)) / (((((/* implicit */_Bool) ((arr_40 [i_11]) / (((/* implicit */unsigned long long int) -401123188))))) ? (((/* implicit */int) arr_26 [i_7])) : (((((/* implicit */_Bool) arr_40 [i_7])) ? (((/* implicit */int) arr_50 [i_7])) : (((/* implicit */int) var_9))))))))));
        }
        for (unsigned int i_19 = 0; i_19 < 22; i_19 += 3) /* same iter space */
        {
            arr_71 [i_19] [i_19] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_69 [i_19] [i_19])) ? (arr_69 [i_19] [i_19]) : (arr_69 [i_7] [i_19])))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_7] [i_19] [i_19]))) : (((((/* implicit */_Bool) arr_51 [i_7] [i_7] [i_7] [i_7])) ? (arr_46 [i_19] [i_7] [i_7] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))))));
            /* LoopSeq 2 */
            for (unsigned int i_20 = 0; i_20 < 22; i_20 += 1) 
            {
                arr_76 [i_19] [i_19] [i_20] = ((/* implicit */unsigned short) (short)-21361);
                var_36 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)205)) ? (-6910479722897751576LL) : (((/* implicit */long long int) 1966867554U))))) ? (((((/* implicit */_Bool) 18437736874454810624ULL)) ? (12ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)20985))))) : (((/* implicit */unsigned long long int) ((((int) arr_43 [i_7])) - (((/* implicit */int) max(((short)-6195), (((/* implicit */short) var_3))))))))));
                arr_77 [i_19] [i_19] [i_20] = ((/* implicit */int) 18446744065119617032ULL);
                arr_78 [i_7] [i_19] &= ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) (short)29959)) && (((/* implicit */_Bool) var_10)))))));
                var_37 = ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */int) var_15)) * (((/* implicit */int) arr_63 [i_19] [i_19] [i_20]))))), (max((((/* implicit */unsigned int) (unsigned short)46330)), (4226489048U)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (arr_59 [i_7] [i_19] [i_19] [i_19] [i_20]) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_49 [i_7])) ? (((/* implicit */int) (short)29960)) : (((/* implicit */int) (unsigned char)238))))) : (((((/* implicit */_Bool) 12ULL)) ? (arr_59 [i_7] [i_7] [i_7] [i_19] [i_20]) : (((/* implicit */long long int) ((/* implicit */int) arr_72 [i_7] [i_19] [i_20] [i_20])))))))));
            }
            /* vectorizable */
            for (int i_21 = 0; i_21 < 22; i_21 += 2) 
            {
                arr_82 [i_19] = ((/* implicit */short) arr_62 [i_7] [i_7] [i_19] [i_19] [i_21]);
                var_38 += ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-6193)) ? (arr_70 [i_7]) : (((/* implicit */int) arr_42 [i_7] [i_7] [i_21]))));
            }
            var_39 = ((/* implicit */unsigned long long int) max((var_39), (((/* implicit */unsigned long long int) var_10))));
            var_40 ^= ((/* implicit */unsigned int) arr_81 [i_7] [i_7] [i_7] [i_19]);
        }
        arr_83 [i_7] = ((/* implicit */short) var_16);
    }
}
