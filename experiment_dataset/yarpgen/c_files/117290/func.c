/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117290
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
    for (long long int i_0 = 1; i_0 < 15; i_0 += 1) /* same iter space */
    {
        var_10 -= ((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) (unsigned char)183))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) (signed char)126))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 8580582996359000601LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-124))))) ? (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_3)))) : (((/* implicit */int) ((unsigned char) (unsigned char)152))))) : (((/* implicit */int) min((min((var_2), (((/* implicit */unsigned char) (signed char)-119)))), (((/* implicit */unsigned char) min((((/* implicit */signed char) var_3)), (var_4)))))))));
        var_11 = ((min((((long long int) var_4)), (((((/* implicit */_Bool) (signed char)-124)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))) <= (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (signed char)22)) : (((/* implicit */int) (_Bool)1))))));
        var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) ((((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((/* implicit */int) ((signed char) var_6))) : (((/* implicit */int) (_Bool)0)))) != (((/* implicit */int) ((var_0) <= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))))));
    }
    /* vectorizable */
    for (long long int i_1 = 1; i_1 < 15; i_1 += 1) /* same iter space */
    {
        var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)22)) : (((/* implicit */int) arr_0 [i_1 + 2] [i_1 - 1]))));
        /* LoopSeq 4 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_8 [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)0)) != ((~(((/* implicit */int) var_5))))));
            /* LoopSeq 1 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1))))))));
                var_15 = ((/* implicit */signed char) (-((+(((/* implicit */int) (_Bool)1))))));
            }
            var_16 -= ((/* implicit */signed char) ((((/* implicit */int) arr_6 [(signed char)6] [i_1 + 1] [(signed char)6])) != (((/* implicit */int) (_Bool)1))));
        }
        for (signed char i_4 = 1; i_4 < 16; i_4 += 4) 
        {
            var_17 = ((/* implicit */short) ((((/* implicit */int) var_8)) != (((/* implicit */int) (_Bool)0))));
            var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32767)) ? ((+(((/* implicit */int) var_8)))) : ((~(((/* implicit */int) (_Bool)1))))));
            /* LoopSeq 3 */
            for (unsigned long long int i_5 = 1; i_5 < 14; i_5 += 4) 
            {
                var_19 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_4 - 1])) ? (((/* implicit */int) (unsigned char)205)) : (((/* implicit */int) var_1))));
                arr_18 [i_1 + 1] [i_5 + 1] [i_5 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-127)) ? ((-(((/* implicit */int) (unsigned short)46007)))) : (((/* implicit */int) (short)32767))));
                /* LoopSeq 1 */
                for (long long int i_6 = 3; i_6 < 16; i_6 += 2) 
                {
                    var_20 = ((/* implicit */short) ((signed char) arr_17 [i_5 + 1] [i_4 - 1] [i_1 + 1]));
                    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) arr_19 [i_1] [i_1 + 1] [i_5 + 2] [(_Bool)1])) : (((/* implicit */int) (signed char)-124))));
                    arr_22 [i_6] [i_4 - 1] [i_4] [i_4 + 1] [i_4] [i_4 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)32768)) ? (((/* implicit */int) arr_6 [i_1] [i_4 + 1] [i_6])) : (((/* implicit */int) arr_6 [i_1] [i_4 + 1] [i_6]))));
                    var_22 -= ((/* implicit */_Bool) ((arr_17 [i_5 + 1] [i_4 + 1] [i_1 + 2]) ? (((/* implicit */int) (signed char)103)) : (((/* implicit */int) arr_17 [i_5 - 1] [i_4 + 1] [i_1 + 2]))));
                }
            }
            for (signed char i_7 = 3; i_7 < 16; i_7 += 2) 
            {
                arr_25 [i_1 - 1] [i_7] [i_7] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) ((short) arr_6 [i_1 + 1] [i_4] [i_7]))) != (((/* implicit */int) (unsigned char)48))));
                /* LoopSeq 1 */
                for (unsigned char i_8 = 0; i_8 < 17; i_8 += 3) 
                {
                    var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((arr_9 [i_4 + 1] [i_4 - 1] [i_1 - 1]) <= (((/* implicit */long long int) ((/* implicit */int) (short)-16065))))))));
                    /* LoopSeq 1 */
                    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                    {
                        arr_32 [i_7] [(_Bool)1] [i_7] [(_Bool)1] [i_7] = ((/* implicit */_Bool) arr_14 [(_Bool)1] [i_1 + 2] [i_7 - 3]);
                        var_24 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-3942)))))) ? (((/* implicit */int) var_6)) : (((var_5) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)13611))))));
                        var_25 -= ((/* implicit */unsigned char) (-(((/* implicit */int) (short)29581))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned char i_10 = 1; i_10 < 14; i_10 += 2) 
                    {
                        var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_21 [i_1] [i_10 + 2] [i_7 - 1] [i_7 - 1] [(_Bool)1])) + (((/* implicit */int) (signed char)66)))))));
                        var_27 -= var_3;
                        arr_35 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_7] = ((((var_1) ? (((/* implicit */int) arr_19 [i_8] [i_8] [i_4 + 1] [i_1])) : (((/* implicit */int) arr_15 [i_1] [i_1])))) != (((/* implicit */int) ((((/* implicit */int) (unsigned char)205)) != (((/* implicit */int) (short)-32744))))));
                        arr_36 [i_1 + 1] [i_8] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((2711380422192647829LL) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-121))) : (((((/* implicit */_Bool) (unsigned char)74)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_4] [i_4]))) : (9223372036854775789LL)))));
                        arr_37 [i_7] [i_4] [i_7 - 2] [i_8] [i_7] = ((/* implicit */unsigned long long int) ((signed char) 5311208503059823168LL));
                    }
                    for (short i_11 = 0; i_11 < 17; i_11 += 2) 
                    {
                        var_28 = ((/* implicit */signed char) (short)31935);
                        var_29 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_5))) <= (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (8727373545472LL)))));
                    }
                    var_30 -= ((/* implicit */short) 8727373545499LL);
                }
            }
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                arr_44 [i_12] [i_12] [i_12] [i_12] = ((/* implicit */_Bool) ((unsigned char) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)20))) : (3497439448552847470ULL))));
                var_31 -= ((/* implicit */unsigned char) ((-8727373545483LL) + (((((/* implicit */_Bool) (short)-32763)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-32763))) : (-2711380422192647838LL)))));
                var_32 &= ((/* implicit */unsigned char) ((((/* implicit */int) var_5)) != (((/* implicit */int) (signed char)-21))));
                var_33 = ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-9))));
            }
            arr_45 [i_4] [i_1 + 1] = ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1))));
            arr_46 [i_1] [i_4] [(signed char)8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (short)-29584)) : (((/* implicit */int) (signed char)-100))));
        }
        for (short i_13 = 3; i_13 < 16; i_13 += 1) 
        {
            var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2711380422192647821LL)) ? (6132179134089681650LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-68)))))) ? (((long long int) (short)13592)) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_3)) != (((/* implicit */int) arr_48 [i_13] [i_1] [i_1])))))))))));
            var_35 = ((/* implicit */signed char) min((var_35), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_40 [i_1 + 1] [i_1 + 1]))) + ((((_Bool)1) ? (3621242413803665947LL) : (((/* implicit */long long int) ((/* implicit */int) var_6))))))))));
        }
        for (signed char i_14 = 0; i_14 < 17; i_14 += 2) 
        {
            arr_51 [i_14] [(_Bool)1] = ((/* implicit */short) (-(((/* implicit */int) arr_19 [i_1 + 2] [i_1 - 1] [i_1] [i_1]))));
            var_36 = ((/* implicit */unsigned char) (-(((/* implicit */int) (short)13611))));
            arr_52 [i_1] [i_14] = ((/* implicit */short) (signed char)(-127 - 1));
        }
        var_37 = ((/* implicit */unsigned short) max((var_37), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_15 [i_1] [(signed char)7]))))) - ((+(arr_26 [i_1]))))))));
        var_38 = ((/* implicit */_Bool) max((var_38), (((_Bool) arr_49 [i_1] [i_1 - 1]))));
        arr_53 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-6))) : (6132179134089681669LL)));
    }
    for (long long int i_15 = 1; i_15 < 15; i_15 += 1) /* same iter space */
    {
        /* LoopSeq 4 */
        for (signed char i_16 = 0; i_16 < 17; i_16 += 1) /* same iter space */
        {
            var_39 -= ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) arr_42 [i_15 + 2] [i_15 + 2] [i_16] [i_15 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32767))) : (18446744073709551613ULL))));
            arr_58 [i_15] [i_16] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */int) arr_10 [(signed char)9] [i_15 + 2])) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)19))))))));
            var_40 = ((/* implicit */signed char) max((var_40), (((/* implicit */signed char) (-(((var_1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_15 [i_15 + 2] [i_15 + 1])))))))));
            arr_59 [i_15] = ((((/* implicit */_Bool) min((min((8787503087616LL), (((/* implicit */long long int) (signed char)-16)))), (((/* implicit */long long int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) : (min((((/* implicit */long long int) (unsigned char)255)), (2711380422192647837LL))));
        }
        for (signed char i_17 = 0; i_17 < 17; i_17 += 1) /* same iter space */
        {
            var_41 -= ((/* implicit */signed char) (short)32736);
            arr_62 [i_15] [i_15] [i_15] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((18446744073709551615ULL) <= (16554307496058672109ULL)))) : (((/* implicit */int) (signed char)-127))))) ? (11282822597539136309ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((((/* implicit */int) (short)32736)) != (((/* implicit */int) (signed char)-20)))), (arr_19 [i_17] [i_17] [(signed char)9] [i_15])))))));
            arr_63 [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned short)65520), (((/* implicit */unsigned short) var_4))))) ? (min((((/* implicit */unsigned long long int) 9223372036854775807LL)), (18446744073709551611ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)32751), (((/* implicit */short) arr_61 [i_15]))))))))) ? (((/* implicit */long long int) (-((+(((/* implicit */int) (short)-14088))))))) : ((~(((2711380422192647825LL) | (((/* implicit */long long int) ((/* implicit */int) var_9)))))))));
            var_42 = ((/* implicit */short) (!(((((/* implicit */int) (short)32751)) <= (((/* implicit */int) ((unsigned char) var_3)))))));
        }
        /* vectorizable */
        for (signed char i_18 = 0; i_18 < 17; i_18 += 1) /* same iter space */
        {
            var_43 = ((/* implicit */_Bool) (signed char)10);
            var_44 = ((/* implicit */unsigned long long int) ((long long int) ((signed char) (_Bool)1)));
            var_45 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2711380422192647843LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (18446744073709551613ULL)))) ? (((/* implicit */int) (short)32747)) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-22)))))));
            var_46 -= ((/* implicit */unsigned short) ((_Bool) var_4));
            var_47 = ((/* implicit */long long int) arr_61 [i_15 - 1]);
        }
        for (signed char i_19 = 0; i_19 < 17; i_19 += 1) /* same iter space */
        {
            var_48 = ((/* implicit */_Bool) min((var_48), (((/* implicit */_Bool) min((((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) var_8)) <= (((/* implicit */int) var_1))))) <= (((/* implicit */int) var_1))))), (min(((unsigned char)77), (((/* implicit */unsigned char) (_Bool)1)))))))));
            arr_70 [(unsigned char)12] [(unsigned char)12] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((8911501576580185193LL), (((/* implicit */long long int) arr_10 [i_19] [i_15]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (short)32747)) ? (((/* implicit */int) arr_40 [i_15] [i_15])) : (((/* implicit */int) (short)16)))) != (((/* implicit */int) var_8)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)29962)) ? (1150669704793161728LL) : (-7714296881242428518LL)))) ? ((+(-9221664642937903165LL))) : (((/* implicit */long long int) (+(((/* implicit */int) (signed char)-4)))))))));
            var_49 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)0)), (arr_26 [(unsigned char)4])))) ? (((((/* implicit */_Bool) 254683315099602432LL)) ? (-6752134137947245441LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-14))))) : (((((/* implicit */_Bool) 18446744073709551613ULL)) ? (-8744797321514525535LL) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))))) ? (((((/* implicit */int) ((((/* implicit */int) arr_29 [i_15] [i_15] [i_15])) != (((/* implicit */int) var_6))))) + (((/* implicit */int) var_1)))) : (((((/* implicit */_Bool) (unsigned char)70)) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) (signed char)16)) ? (((/* implicit */int) (unsigned char)130)) : (((/* implicit */int) (_Bool)1))))))));
        }
        arr_71 [i_15] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(-8744797321514525535LL)))) ? (min((((((/* implicit */_Bool) arr_14 [(signed char)0] [i_15] [i_15])) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_5))))), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)243))) <= (-2711380422192647835LL)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) + (((/* implicit */int) var_3))))) ? (((/* implicit */int) min((((/* implicit */signed char) var_5)), ((signed char)44)))) : ((-(((/* implicit */int) var_8)))))))));
    }
    var_50 = ((/* implicit */unsigned long long int) min((var_50), (((/* implicit */unsigned long long int) (short)-10570))));
    var_51 = ((/* implicit */unsigned char) (signed char)14);
}
