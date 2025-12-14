/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173920
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
    var_12 *= ((/* implicit */short) var_1);
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (var_9) : (((/* implicit */int) (unsigned short)18144))))), (((((/* implicit */_Bool) var_3)) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]))))));
        arr_4 [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)47392)) ? (((/* implicit */int) max(((unsigned short)18143), (((/* implicit */unsigned short) (_Bool)1))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)18144)) : (((/* implicit */int) arr_1 [i_0]))))))), (arr_2 [i_0])));
        arr_5 [i_0] = ((/* implicit */signed char) arr_0 [i_0] [i_0]);
    }
    for (int i_1 = 1; i_1 < 20; i_1 += 2) 
    {
        var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) min((((/* implicit */unsigned short) var_10)), ((unsigned short)18144))))));
        var_14 = ((/* implicit */_Bool) min(((+(5757841192200924680LL))), (((/* implicit */long long int) (-(var_6))))));
    }
    for (unsigned int i_2 = 2; i_2 < 13; i_2 += 2) /* same iter space */
    {
        var_15 = min((((/* implicit */unsigned long long int) ((((-22616171) + (2147483647))) >> (max((var_0), (((/* implicit */int) (_Bool)1))))))), (((var_5) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_11 [(unsigned char)6])) : (((/* implicit */int) var_2))))))));
        var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) var_3))));
    }
    for (unsigned int i_3 = 2; i_3 < 13; i_3 += 2) /* same iter space */
    {
        arr_14 [i_3 + 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)47373)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-5757841192200924656LL)));
        arr_15 [i_3] [i_3 + 2] = ((/* implicit */unsigned int) arr_2 [i_3]);
        var_17 -= ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) 7864796071691823004LL)) ? (((/* implicit */unsigned long long int) var_6)) : (var_5))) << (((arr_0 [i_3] [18]) + (2110159239))))) - (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) arr_12 [i_3 + 1] [i_3 + 3])) : (var_9))))));
    }
    /* LoopSeq 4 */
    for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 3) 
    {
        /* LoopSeq 2 */
        for (signed char i_5 = 0; i_5 < 23; i_5 += 4) /* same iter space */
        {
            arr_22 [i_4] [(short)16] [i_4] = ((/* implicit */unsigned int) var_4);
            arr_23 [i_4] = ((/* implicit */unsigned short) var_11);
        }
        for (signed char i_6 = 0; i_6 < 23; i_6 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (short i_7 = 0; i_7 < 23; i_7 += 3) 
            {
                for (unsigned int i_8 = 0; i_8 < 23; i_8 += 1) 
                {
                    {
                        var_18 ^= ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)18144))));
                        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) / (((/* implicit */int) min(((short)-14578), (((/* implicit */short) (_Bool)1)))))))))));
                        arr_32 [i_6] [8] [i_7] [i_6] [i_4] [i_6] &= ((/* implicit */unsigned char) max((((/* implicit */long long int) var_4)), ((+(((((/* implicit */_Bool) (short)16280)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (signed char)99)))))))));
                        var_20 = ((/* implicit */_Bool) var_5);
                        /* LoopSeq 1 */
                        for (int i_9 = 0; i_9 < 23; i_9 += 3) 
                        {
                            var_21 = ((/* implicit */int) max((((var_11) ? (((/* implicit */long long int) min((arr_18 [i_6] [i_6] [i_6]), (((/* implicit */unsigned int) arr_25 [i_4] [(short)17] [i_7]))))) : (((((/* implicit */_Bool) (unsigned short)47391)) ? (1603094417789315530LL) : (-1603094417789315524LL))))), (((/* implicit */long long int) arr_30 [i_4]))));
                            arr_37 [i_4] = ((/* implicit */int) ((unsigned int) (+(((/* implicit */int) arr_35 [i_4] [i_8] [i_7] [i_7] [i_4] [i_4])))));
                            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_27 [i_7] [i_8] [i_8])), (max(((unsigned short)18150), (((/* implicit */unsigned short) var_2))))))) ? (((((/* implicit */_Bool) ((4294967295U) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-124)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_4] [i_4] [i_7] [i_6] [i_6] [i_4]))) : (arr_18 [i_4] [i_6] [(unsigned char)4]))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_11)) * (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))))));
                        }
                    }
                } 
            } 
            var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (arr_24 [(signed char)4] [i_6] [i_4])))) ? ((+(arr_17 [i_6]))) : (min((((/* implicit */unsigned long long int) 9223372036854775807LL)), (18014398509481983ULL))))))));
            /* LoopNest 2 */
            for (unsigned long long int i_10 = 0; i_10 < 23; i_10 += 1) 
            {
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    {
                        var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (unsigned short)18144)) : (((/* implicit */int) (short)867))));
                        arr_42 [i_4] [i_4] [i_10] [i_11] = ((/* implicit */long long int) var_6);
                        var_25 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */int) (short)-31986)) / (127))));
                        var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(1940739454291554976ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) % (((/* implicit */int) var_7))))) : (var_5)));
                    }
                } 
            } 
        }
        /* LoopSeq 2 */
        for (long long int i_12 = 0; i_12 < 23; i_12 += 3) 
        {
            var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_40 [22U] [i_12] [i_4]))) ? (((((/* implicit */_Bool) ((unsigned long long int) arr_31 [(unsigned short)9] [i_4] [i_12] [i_12] [i_12] [6U]))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_2)) : (var_9)))) : (arr_24 [i_12] [i_4] [(signed char)14]))) : (((/* implicit */long long int) ((((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) 2147483647)))) ? (min((((/* implicit */unsigned int) (unsigned short)18483)), (4283688121U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))));
            /* LoopNest 3 */
            for (short i_13 = 0; i_13 < 23; i_13 += 2) 
            {
                for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
                {
                    for (long long int i_15 = 0; i_15 < 23; i_15 += 2) 
                    {
                        {
                            var_28 = ((/* implicit */unsigned short) (-((((_Bool)1) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (signed char)-82))))));
                            var_29 = ((/* implicit */signed char) max((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))), (var_9)));
                            arr_55 [i_4] [i_4] = ((/* implicit */long long int) -1906751429);
                            var_30 = ((/* implicit */long long int) -1906751429);
                        }
                    } 
                } 
            } 
        }
        for (signed char i_16 = 0; i_16 < 23; i_16 += 2) 
        {
            arr_58 [i_4] [i_4] = ((((/* implicit */_Bool) ((var_7) ? (((/* implicit */int) arr_33 [7LL] [9] [i_4] [i_4] [i_4] [i_4])) : (((/* implicit */int) arr_33 [11] [i_16] [i_16] [i_4] [i_4] [i_4]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 498411008))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_21 [i_4] [i_4]))))))));
            var_31 = ((/* implicit */int) min((max((min((((/* implicit */unsigned long long int) (short)30720)), (16506004619417996639ULL))), (((/* implicit */unsigned long long int) var_11)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_41 [(unsigned char)11] [i_4]), (((/* implicit */unsigned int) var_7))))) ? (((/* implicit */int) max((((/* implicit */short) var_7)), ((short)32767)))) : ((+(((/* implicit */int) var_2)))))))));
            arr_59 [i_4] [i_4] [i_4] = ((/* implicit */unsigned int) ((int) 7250228144894638080LL));
            arr_60 [i_4] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_4] [i_16] [i_16] [i_4])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)18484))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_4] [i_16] [i_16])) ? (arr_18 [i_4] [i_4] [i_16]) : (var_6)))) : (((((/* implicit */_Bool) var_1)) ? (arr_51 [14LL] [i_16] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_4] [i_16]))))));
        }
    }
    for (short i_17 = 0; i_17 < 22; i_17 += 2) 
    {
        var_32 -= ((/* implicit */unsigned int) var_1);
        arr_64 [21LL] [21LL] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)51))) == (4210801700U)));
        var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) ((7250228144894638080LL) / (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((3548815780U) * (((/* implicit */unsigned int) -1906751443))))))))))));
    }
    for (int i_18 = 0; i_18 < 10; i_18 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_19 = 0; i_19 < 10; i_19 += 4) 
        {
            var_34 += ((/* implicit */long long int) var_7);
            var_35 = ((/* implicit */_Bool) min((var_35), (((/* implicit */_Bool) arr_27 [i_19] [i_19] [(_Bool)1]))));
        }
        arr_70 [i_18] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))) & (18446744073709551615ULL))) >> (((var_3) - (3993545126U)))));
        arr_71 [i_18] = ((/* implicit */short) ((var_11) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_51 [i_18] [i_18] [i_18])) ? (((/* implicit */int) arr_27 [(unsigned short)17] [i_18] [18ULL])) : (var_9)))) ? (((/* implicit */int) arr_43 [i_18] [(short)8])) : (((/* implicit */int) (signed char)-94)))))));
        var_36 ^= ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)1))));
    }
    for (int i_20 = 0; i_20 < 10; i_20 += 4) /* same iter space */
    {
        var_37 = ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)81))));
        /* LoopSeq 1 */
        for (short i_21 = 0; i_21 < 10; i_21 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_22 = 2; i_22 < 7; i_22 += 3) 
            {
                var_38 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_30 [i_22 + 3])) : (((/* implicit */int) arr_30 [10LL]))))) ? ((+(((/* implicit */int) var_4)))) : ((-(((/* implicit */int) arr_30 [i_21])))));
                var_39 = ((/* implicit */unsigned int) min((var_39), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_77 [i_21] [i_22 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_77 [i_21] [i_22 + 1]))) : (-7250228144894638095LL))) << (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 403750626U)), (arr_47 [22U] [i_21]))))))))))));
                arr_82 [i_20] [i_20] [i_21] [i_22] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_38 [i_20] [i_21] [i_20]) ? (((/* implicit */int) (unsigned char)190)) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) ((3530425594715987022LL) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)-79)))))) : (arr_25 [i_20] [(short)8] [i_22 - 1])));
            }
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_23 = 0; i_23 < 10; i_23 += 1) 
            {
                arr_85 [i_20] &= ((/* implicit */short) ((((/* implicit */_Bool) arr_21 [i_20] [(short)8])) ? (3530425594715987022LL) : ((+(536870911LL)))));
                var_40 = arr_25 [(signed char)18] [i_21] [i_23];
                arr_86 [i_20] [5ULL] [i_23] = ((/* implicit */_Bool) arr_26 [i_23] [i_21] [i_23] [i_20]);
                /* LoopNest 2 */
                for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                {
                    for (signed char i_25 = 0; i_25 < 10; i_25 += 1) 
                    {
                        {
                            var_41 ^= ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)26128)) : (((/* implicit */int) (signed char)94))));
                            var_42 = ((/* implicit */unsigned int) (-((-(498411008)))));
                        }
                    } 
                } 
                arr_93 [i_20] [(unsigned char)1] [(signed char)7] = ((((/* implicit */_Bool) var_4)) ? (var_0) : (((/* implicit */int) (unsigned short)6219)));
            }
        }
        arr_94 [i_20] = ((/* implicit */unsigned char) (((!(var_7))) ? (((((/* implicit */long long int) (-(var_6)))) / (((((/* implicit */_Bool) (unsigned short)24676)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)144))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_77 [i_20] [i_20])))));
    }
}
