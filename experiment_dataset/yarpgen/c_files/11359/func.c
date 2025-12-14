/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11359
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
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)188)), (var_11))))) | (4039824278U)))) | ((~(((unsigned long long int) var_0))))));
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            arr_4 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (255143016U)))) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (11391593576411704657ULL))) : (7055150497297846960ULL))) << (((((arr_0 [i_0 + 1]) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_0 [i_0 + 1]))))) : (((((/* implicit */_Bool) (unsigned char)202)) ? (7055150497297846960ULL) : (((/* implicit */unsigned long long int) var_13)))))) - (7055150497297846955ULL)))));
            var_18 ^= ((/* implicit */unsigned long long int) (unsigned char)43);
            var_19 = ((/* implicit */signed char) var_8);
        }
        for (signed char i_2 = 0; i_2 < 13; i_2 += 2) 
        {
            var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */int) ((((/* implicit */int) ((signed char) arr_7 [i_0]))) >= (((/* implicit */int) (!(((/* implicit */_Bool) 4039824308U)))))))) : (((/* implicit */int) arr_0 [i_0])))))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned long long int i_3 = 3; i_3 < 11; i_3 += 2) 
            {
                arr_10 [i_0] [i_2] [i_2] |= ((/* implicit */short) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) 4294967295U)) : (var_14))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))));
                /* LoopSeq 2 */
                for (unsigned short i_4 = 0; i_4 < 13; i_4 += 2) 
                {
                    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 19U)) ? ((-(((/* implicit */int) var_5)))) : (((/* implicit */int) arr_5 [i_0] [i_2] [i_3 + 1]))));
                    var_22 ^= ((/* implicit */signed char) (unsigned char)0);
                }
                for (signed char i_5 = 0; i_5 < 13; i_5 += 2) 
                {
                    var_23 ^= ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-47)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62221))) : (4039824270U)));
                    arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) arr_7 [i_3 + 1]);
                    /* LoopSeq 3 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        arr_19 [i_0] [i_2] [i_0] [i_5] [i_6] [i_2] [i_6] = ((/* implicit */unsigned short) ((2LL) <= (((/* implicit */long long int) ((/* implicit */int) ((6673672885234706979LL) == (((/* implicit */long long int) ((/* implicit */int) (signed char)0)))))))));
                        arr_20 [i_0] [i_0] [i_0] [i_5] [i_0] [i_3] = ((/* implicit */signed char) arr_11 [i_3 - 3] [i_3 + 2] [i_0 + 1] [i_0 + 1] [i_0 + 1]);
                    }
                    for (unsigned long long int i_7 = 4; i_7 < 12; i_7 += 3) 
                    {
                        var_24 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) 512406586U)) ? (((/* implicit */int) (short)-8928)) : (((/* implicit */int) (short)-20621))));
                        var_25 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) arr_13 [i_0 + 1] [i_2] [i_3] [i_5] [i_7 - 1]))))) % (((/* implicit */int) arr_18 [i_3 - 1] [i_5] [i_0] [i_5] [i_7]))));
                        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_22 [i_0] [i_2] [i_7 + 1] [i_5] [i_5] [i_3 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_0]))) : (arr_22 [i_2] [i_7] [i_7] [i_7 + 1] [i_7] [i_7])));
                        var_27 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)7)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_7 - 1]))) : (4294967289U)));
                    }
                    for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 2) 
                    {
                        arr_26 [i_0] [i_0] [i_3] [i_3] [i_0] = ((/* implicit */signed char) (unsigned short)49860);
                        var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) var_2))));
                        var_29 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551600ULL)))))));
                        arr_27 [i_0] [i_2] [i_0 + 1] [i_0 + 1] [i_0 + 1] = ((/* implicit */long long int) arr_17 [i_0] [i_0 + 1] [i_0 + 1] [i_0]);
                    }
                    arr_28 [i_0] [i_2] [i_3] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_0] [i_0 + 1] [i_0] [i_5] [i_0])) ? (((/* implicit */int) arr_0 [i_3 + 2])) : (((/* implicit */int) arr_18 [i_0] [i_0 + 1] [i_0] [i_5] [i_2]))));
                    var_30 = ((/* implicit */unsigned short) (-(4630620676951003831LL)));
                }
                var_31 = (+(((((/* implicit */_Bool) -6673672885234706987LL)) ? (((/* implicit */unsigned long long int) 2299948544U)) : (var_14))));
                var_32 ^= ((/* implicit */long long int) arr_5 [i_2] [i_2] [i_3]);
            }
            for (unsigned int i_9 = 0; i_9 < 13; i_9 += 3) 
            {
                /* LoopSeq 3 */
                for (unsigned char i_10 = 1; i_10 < 10; i_10 += 2) 
                {
                    var_33 = ((/* implicit */long long int) min((((/* implicit */unsigned short) (signed char)62)), ((unsigned short)65527)));
                    arr_35 [i_10] [i_10] [i_10] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((unsigned short) (signed char)-24))) ? ((+(((/* implicit */int) var_6)))) : (((/* implicit */int) arr_0 [i_0 + 1])))) > ((+(((/* implicit */int) (signed char)-127))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_11 = 3; i_11 < 12; i_11 += 1) 
                    {
                        arr_39 [i_0] [i_0] [i_9] [i_10] [i_11] = ((/* implicit */unsigned short) (unsigned char)87);
                        arr_40 [i_0] [i_2] [i_0] [i_11] [i_11] [i_11] [i_10 + 1] = ((signed char) (_Bool)1);
                    }
                    for (unsigned long long int i_12 = 4; i_12 < 10; i_12 += 2) 
                    {
                        arr_44 [i_0 + 1] [i_0] [i_0] [i_0 + 1] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)42212)) ? (((((/* implicit */_Bool) (short)-27889)) ? (((/* implicit */int) (short)-66)) : (((/* implicit */int) (unsigned short)42212)))) : (((/* implicit */int) ((signed char) (signed char)-67)))))) >= (var_3)));
                        var_34 = ((/* implicit */signed char) ((short) var_9));
                        arr_45 [i_12] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((signed char) ((unsigned short) max((arr_30 [i_0] [i_0]), (((/* implicit */long long int) (short)19255))))));
                    }
                }
                for (unsigned short i_13 = 0; i_13 < 13; i_13 += 1) 
                {
                    arr_49 [i_0] [i_2] [i_2] [i_2] [i_13] = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */int) var_11)) | (((/* implicit */int) arr_14 [i_0 + 1] [i_0 + 1] [i_2])))));
                    var_35 = ((/* implicit */unsigned short) min((var_35), (((/* implicit */unsigned short) ((unsigned int) ((signed char) arr_6 [i_2]))))));
                    arr_50 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_13] [i_2] |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) (unsigned short)21242)) ? (((/* implicit */int) arr_24 [i_0 + 1] [i_0 + 1] [i_13])) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) (signed char)-38)) ? (((/* implicit */int) (signed char)101)) : (((/* implicit */int) arr_46 [i_0] [i_0]))))))) ? (((((/* implicit */_Bool) arr_9 [i_13] [i_9] [i_2] [i_0])) ? (arr_9 [i_0] [i_0] [i_9] [i_13]) : (arr_9 [i_0 + 1] [i_2] [i_9] [i_13]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) 545208615)), (6307588597631624196LL)))) ? (((/* implicit */int) arr_5 [i_2] [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_37 [i_2])), (arr_32 [i_0] [i_2] [i_9] [i_13]))))))));
                }
                /* vectorizable */
                for (signed char i_14 = 0; i_14 < 13; i_14 += 2) 
                {
                    var_36 = ((/* implicit */signed char) max((var_36), (((/* implicit */signed char) 3112747000U))));
                    arr_53 [i_0 + 1] [i_0] [i_9] [i_14] = ((/* implicit */unsigned char) (_Bool)1);
                    var_37 = arr_48 [i_0] [i_0] [i_0] [i_0] [i_0 + 1] [i_0];
                    arr_54 [i_0] [i_2] [i_0] [i_0] [i_14] = ((/* implicit */int) arr_41 [i_0 + 1] [i_2] [i_9] [i_14] [i_0]);
                }
                arr_55 [i_0] [i_2] [i_0 + 1] [i_0] = max(((((-(((/* implicit */int) arr_3 [i_9] [i_0] [i_0])))) - (((/* implicit */int) arr_1 [i_0])))), (min((((((/* implicit */_Bool) -2692892843562658809LL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_46 [i_0] [i_9])))), (((/* implicit */int) (signed char)(-127 - 1))))));
                /* LoopSeq 3 */
                for (unsigned int i_15 = 0; i_15 < 13; i_15 += 1) 
                {
                    arr_58 [i_0] [i_2] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_38 [i_0] [i_0] [i_0 + 1] [i_0] [i_0] [i_0 + 1] [i_0]))));
                    arr_59 [i_0] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_16 [i_0] [i_0 + 1] [i_9] [i_15]), (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_6))))))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned short)21254)) : (((/* implicit */int) arr_1 [i_0])))) : (((((/* implicit */_Bool) (((_Bool)0) ? (arr_33 [i_0] [i_2] [i_9] [i_15]) : (((/* implicit */unsigned int) var_15))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((-6307588597631624206LL) != (((/* implicit */long long int) ((/* implicit */int) (unsigned short)9))))))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_16 = 0; i_16 < 13; i_16 += 1) 
                    {
                        arr_62 [i_0] [i_0] [i_0] [i_15] [i_0] = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_33 [i_0 + 1] [i_0 + 1] [i_2] [i_15])) ? (arr_33 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_16]) : (arr_33 [i_0 + 1] [i_0 + 1] [i_15] [i_0 + 1]))));
                        arr_63 [i_0] [i_2] [i_9] [i_15] [i_0] = ((/* implicit */_Bool) min((max((((((/* implicit */_Bool) (short)12288)) ? (4U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)128))))), (var_13))), (((((/* implicit */_Bool) (unsigned short)25458)) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) var_2)), ((unsigned short)30906))))) : (((((/* implicit */_Bool) (short)-1085)) ? (arr_9 [i_0 + 1] [i_9] [i_15] [i_16]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)31)))))))));
                        var_38 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_29 [i_0] [i_0 + 1] [i_0] [i_15])) ? (((/* implicit */int) arr_29 [i_0 + 1] [i_0 + 1] [i_0] [i_15])) : (((/* implicit */int) arr_29 [i_16] [i_0 + 1] [i_0] [i_15])))) << ((((((!(((/* implicit */_Bool) arr_43 [i_0] [i_0] [i_9] [i_15] [i_15] [i_15] [i_0])))) ? (((((/* implicit */int) arr_13 [i_16] [i_15] [i_9] [i_2] [i_0])) >> (((((/* implicit */int) (unsigned char)35)) - (27))))) : (((((/* implicit */_Bool) arr_13 [i_0] [i_2] [i_9] [i_0] [i_9])) ? (((/* implicit */int) (signed char)126)) : (((/* implicit */int) arr_0 [i_0])))))) - (121)))));
                        var_39 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_8 [i_0 + 1] [i_0 + 1] [i_0 + 1])), ((unsigned char)31))))) % (8162975186839877879ULL)));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_17 = 0; i_17 < 13; i_17 += 3) 
                    {
                        var_40 = ((/* implicit */unsigned char) max((var_40), (((/* implicit */unsigned char) ((short) (signed char)-10)))));
                        var_41 = ((/* implicit */signed char) min((var_41), (((/* implicit */signed char) (short)16833))));
                    }
                }
                for (signed char i_18 = 4; i_18 < 11; i_18 += 4) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_19 = 1; i_19 < 11; i_19 += 1) 
                    {
                        arr_70 [i_0] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) arr_52 [i_19 + 1] [i_2]))));
                        arr_71 [i_0] [i_2] [i_9] [i_9] [i_0] [i_19] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_12)) : (arr_7 [i_0]))) + (((/* implicit */int) var_16))));
                    }
                    arr_72 [i_0] [i_0] [i_2] [i_2] [i_18] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_8 [i_0] [i_2] [i_9]))));
                    arr_73 [i_0] [i_2] [i_0] [i_18] = 0U;
                    arr_74 [i_0] [i_2] [i_2] [i_2] |= ((/* implicit */short) ((((/* implicit */_Bool) max(((-(((/* implicit */int) arr_43 [i_0] [i_2] [i_9] [i_18] [i_2] [i_9] [i_2])))), ((-(((/* implicit */int) arr_38 [i_0] [i_2] [i_0] [i_2] [i_9] [i_18] [i_18]))))))) ? (((unsigned int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) (signed char)100))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_0 + 1] [i_18 - 4] [i_9] [i_0 + 1])))));
                }
                for (long long int i_20 = 2; i_20 < 11; i_20 += 2) 
                {
                    arr_78 [i_0] [i_20] [i_0] [i_0] [i_20] |= ((/* implicit */signed char) ((((/* implicit */_Bool) (-((-(((/* implicit */int) arr_17 [i_0] [i_2] [i_0] [i_20]))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_57 [i_0] [i_0] [i_0] [i_20] [i_20] [i_0 + 1]))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) (unsigned char)128))) || (((/* implicit */_Bool) max((((/* implicit */short) var_4)), (arr_46 [i_0 + 1] [i_2])))))))));
                    var_42 = ((/* implicit */unsigned short) 8162975186839877895ULL);
                }
                arr_79 [i_0] [i_9] [i_0] = ((/* implicit */_Bool) ((((((((/* implicit */int) (signed char)-101)) + (2147483647))) >> (((max((arr_66 [i_0 + 1] [i_0] [i_0 + 1] [i_0] [i_9]), (((/* implicit */unsigned int) (unsigned char)224)))) - (2414329815U))))) * (((/* implicit */int) (unsigned short)34629))));
                var_43 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_8 [i_0] [i_0 + 1] [i_9])) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_0 + 1] [i_0 + 1] [i_9] [i_0] [i_2]))))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_21 [i_0] [i_0 + 1] [i_0] [i_2] [i_0])))))));
            }
            for (unsigned short i_21 = 2; i_21 < 12; i_21 += 1) 
            {
                arr_83 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */signed char) (short)10917);
                arr_84 [i_0] [i_0] [i_21] = ((/* implicit */signed char) arr_64 [i_0 + 1] [i_21 + 1] [i_21 + 1] [i_21] [i_21 - 1] [i_21] [i_21]);
            }
            arr_85 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */unsigned int) arr_25 [i_0] [i_0] [i_0] [i_2] [i_2])) : (var_13)))) ? (((10017258006258906001ULL) & (((/* implicit */unsigned long long int) var_15)))) : (((((/* implicit */_Bool) var_11)) ? (var_14) : (var_14))))) & (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) 10283768886869673737ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-18320))) : (1520574472U))))))));
        }
        arr_86 [i_0] = ((/* implicit */unsigned int) max((((/* implicit */int) ((signed char) arr_32 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]))), ((+(((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0]))))));
        arr_87 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_25 [i_0] [i_0 + 1] [i_0] [i_0 + 1] [i_0]) % (((/* implicit */int) ((_Bool) var_7)))))) ? (((/* implicit */unsigned long long int) max((max((((/* implicit */int) var_16)), ((-2147483647 - 1)))), (((/* implicit */int) arr_31 [i_0] [i_0] [i_0]))))) : (17282015635110289724ULL)));
        var_44 = var_10;
        arr_88 [i_0] = ((/* implicit */unsigned short) max((arr_48 [i_0] [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1]), (((/* implicit */unsigned int) ((((/* implicit */int) arr_52 [i_0 + 1] [i_0])) << (((((/* implicit */int) arr_52 [i_0 + 1] [i_0])) - (50622))))))));
    }
    for (_Bool i_22 = 0; i_22 < 0; i_22 += 1) /* same iter space */
    {
        var_45 -= ((/* implicit */unsigned char) max(((~(arr_66 [i_22] [i_22 + 1] [i_22] [i_22 + 1] [i_22 + 1]))), (((/* implicit */unsigned int) max((((/* implicit */int) ((unsigned char) 12236973741440908130ULL))), (((((/* implicit */int) (short)10282)) >> (((12236973741440908132ULL) - (12236973741440908132ULL))))))))));
        var_46 = ((/* implicit */unsigned long long int) (short)13563);
    }
    for (_Bool i_23 = 0; i_23 < 0; i_23 += 1) /* same iter space */
    {
        var_47 = var_1;
        var_48 ^= ((/* implicit */long long int) ((short) ((short) (short)23870)));
    }
    for (_Bool i_24 = 0; i_24 < 0; i_24 += 1) /* same iter space */
    {
        arr_97 [i_24 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-117)) ? (9210760495289187719LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1))))))) ? (max((arr_33 [i_24] [i_24 + 1] [i_24] [i_24]), (arr_33 [i_24] [i_24 + 1] [i_24] [i_24 + 1]))) : (((/* implicit */unsigned int) arr_16 [i_24 + 1] [i_24] [i_24 + 1] [i_24 + 1]))));
        arr_98 [i_24] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((2937569337U) * (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)0)))))))) ? (((/* implicit */int) ((_Bool) arr_47 [i_24] [i_24] [i_24 + 1] [i_24 + 1]))) : (((/* implicit */int) arr_42 [(_Bool)1] [i_24 + 1] [(_Bool)1] [i_24] [i_24]))));
    }
}
