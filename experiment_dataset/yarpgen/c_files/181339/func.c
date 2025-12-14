/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181339
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    arr_8 [i_2] = ((/* implicit */int) ((max((arr_0 [i_0]), (((/* implicit */long long int) arr_6 [i_0] [i_1] [i_2] [i_0])))) / (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)14099)) ? (((/* implicit */int) ((unsigned short) (unsigned short)10781))) : (((((((/* implicit */int) (short)-32761)) + (2147483647))) << (((((((/* implicit */int) var_5)) + (98))) - (12))))))))));
                    var_11 = ((/* implicit */unsigned int) max((((unsigned long long int) arr_7 [i_0] [i_2] [i_0] [i_0])), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((unsigned short) (signed char)-15))), (((var_1) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-15))))))))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)14099))));
    var_13 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-125))));
    /* LoopSeq 3 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_4 = 0; i_4 < 22; i_4 += 3) 
        {
            for (unsigned char i_5 = 1; i_5 < 18; i_5 += 4) 
            {
                for (unsigned short i_6 = 1; i_6 < 21; i_6 += 4) 
                {
                    {
                        var_14 = ((/* implicit */unsigned short) (((((-(arr_16 [6U]))) <= (((/* implicit */int) arr_15 [i_3] [i_4] [i_3] [i_5 + 4])))) || (((/* implicit */_Bool) min((min((arr_10 [i_3]), (((/* implicit */int) var_6)))), (((((/* implicit */int) var_4)) ^ (((/* implicit */int) (short)-32761)))))))));
                        var_15 *= ((/* implicit */unsigned int) min((((((/* implicit */int) arr_9 [i_3])) >> (((((/* implicit */long long int) ((/* implicit */int) arr_15 [(unsigned char)20] [i_4] [i_4] [i_6 - 1]))) / (5101760263951136458LL))))), ((~(((((/* implicit */_Bool) (signed char)20)) ? (((/* implicit */int) (unsigned short)47690)) : (((/* implicit */int) arr_13 [2LL] [i_4] [2LL]))))))));
                        var_16 &= ((/* implicit */long long int) ((((((unsigned int) arr_9 [i_3])) != (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) ? ((-((+(((/* implicit */int) (unsigned char)70)))))) : ((-(((/* implicit */int) arr_15 [14U] [i_5 + 3] [i_5 + 4] [14U]))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        for (long long int i_7 = 3; i_7 < 20; i_7 += 4) /* same iter space */
        {
            arr_22 [i_3] = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) 140737488289792LL)) || ((!(((/* implicit */_Bool) var_3)))))));
            var_17 |= ((/* implicit */short) min(((+(((/* implicit */int) arr_13 [i_3] [i_3] [(unsigned short)4])))), (((/* implicit */int) max((((/* implicit */unsigned char) ((signed char) arr_15 [0] [i_3] [i_7] [(short)18]))), (max((var_3), (var_9))))))));
            var_18 = ((/* implicit */signed char) arr_18 [i_3] [i_3] [i_3] [16ULL] [i_7] [i_7]);
        }
        for (long long int i_8 = 3; i_8 < 20; i_8 += 4) /* same iter space */
        {
            var_19 ^= ((/* implicit */unsigned char) arr_20 [i_3] [i_3] [3LL]);
            var_20 = ((/* implicit */unsigned char) max((1572247050217300966ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)55232))) : (7U))))));
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 22; i_9 += 4) 
        {
            /* LoopSeq 3 */
            for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) /* same iter space */
            {
                var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_27 [i_3] [i_10 - 1])) * (((/* implicit */int) arr_9 [i_3]))));
                arr_31 [i_3] = ((/* implicit */unsigned int) ((unsigned short) arr_13 [i_3] [i_3] [i_3]));
            }
            for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) /* same iter space */
            {
                var_22 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */int) (signed char)-42)) ^ (((/* implicit */int) (signed char)-26)))));
                arr_34 [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */int) arr_32 [i_3] [i_3] [i_3])) / (arr_10 [i_3])));
            }
            for (int i_12 = 0; i_12 < 22; i_12 += 4) 
            {
                var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) arr_26 [i_3]))));
                var_24 = ((/* implicit */unsigned long long int) ((unsigned char) 0ULL));
                var_25 = ((/* implicit */unsigned int) ((signed char) ((1656937510U) % (var_1))));
            }
            var_26 = ((/* implicit */unsigned short) (-((+(arr_11 [i_3] [i_9] [i_3])))));
        }
    }
    for (unsigned char i_13 = 0; i_13 < 19; i_13 += 4) 
    {
        var_27 = ((/* implicit */long long int) ((((((((/* implicit */int) arr_20 [i_13] [i_13] [i_13])) <= (((/* implicit */int) (signed char)14)))) ? (((/* implicit */int) arr_29 [i_13] [i_13] [i_13])) : (((/* implicit */int) (signed char)3)))) == (min((((/* implicit */int) ((unsigned char) arr_30 [i_13] [i_13] [i_13] [i_13]))), ((+(((/* implicit */int) (short)-32764))))))));
        arr_39 [i_13] = ((/* implicit */unsigned short) ((var_1) >= (((/* implicit */unsigned int) min((((((/* implicit */int) (unsigned short)2629)) + (arr_16 [i_13]))), (((/* implicit */int) (!(((/* implicit */_Bool) 4294967285U))))))))));
        /* LoopSeq 2 */
        for (short i_14 = 0; i_14 < 19; i_14 += 1) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned short i_15 = 0; i_15 < 19; i_15 += 4) 
            {
                var_28 = ((/* implicit */unsigned char) ((arr_30 [i_13] [i_15] [i_15] [i_15]) == (((int) (unsigned short)14099))));
                var_29 = ((/* implicit */unsigned short) (+(arr_26 [i_13])));
                /* LoopSeq 3 */
                for (int i_16 = 0; i_16 < 19; i_16 += 4) 
                {
                    arr_47 [i_13] [i_14] [i_15] [i_13] [i_16] [i_16] = ((/* implicit */int) -9112560798342238672LL);
                    var_30 = (-(4075509318U));
                }
                for (unsigned char i_17 = 0; i_17 < 19; i_17 += 3) /* same iter space */
                {
                    var_31 = ((/* implicit */_Bool) 2638029808U);
                    arr_50 [i_13] [i_15] [i_15] [11] [i_15] = ((/* implicit */int) (((!(((/* implicit */_Bool) -6663231640492609724LL)))) || (arr_29 [i_13] [(short)6] [i_15])));
                }
                for (unsigned char i_18 = 0; i_18 < 19; i_18 += 3) /* same iter space */
                {
                    /* LoopSeq 4 */
                    for (unsigned char i_19 = 0; i_19 < 19; i_19 += 4) 
                    {
                        arr_55 [i_13] [(unsigned short)1] [i_13] [i_18] [i_18] = (+(((/* implicit */int) var_2)));
                        var_32 = (unsigned short)51436;
                        var_33 = ((/* implicit */unsigned char) (-(((((/* implicit */int) (signed char)14)) / (((/* implicit */int) (unsigned char)38))))));
                        var_34 = ((/* implicit */signed char) ((short) arr_26 [i_13]));
                    }
                    for (unsigned int i_20 = 3; i_20 < 17; i_20 += 1) 
                    {
                        var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_27 [i_20 - 1] [(unsigned char)0])) ? (((/* implicit */int) (unsigned char)249)) : (((/* implicit */int) arr_48 [i_20] [i_20 + 2] [i_20 + 1] [i_20 + 1]))));
                        var_36 = ((/* implicit */unsigned short) max((var_36), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(arr_41 [i_13] [i_14] [i_18])))))))));
                        var_37 = ((((arr_36 [i_13]) + (((/* implicit */long long int) ((/* implicit */int) arr_48 [i_13] [i_14] [i_20] [i_20]))))) % (arr_19 [(signed char)11]));
                    }
                    for (short i_21 = 0; i_21 < 19; i_21 += 3) 
                    {
                        var_38 = ((/* implicit */unsigned short) min((var_38), (((/* implicit */unsigned short) ((int) (+(((/* implicit */int) arr_54 [i_15] [i_15] [i_15] [i_15] [i_15] [(signed char)11] [i_15]))))))));
                        arr_62 [i_18] [(signed char)14] [i_15] [i_15] [(signed char)14] = ((/* implicit */unsigned short) (~(460617147U)));
                    }
                    for (unsigned int i_22 = 3; i_22 < 17; i_22 += 3) 
                    {
                        arr_66 [17LL] [17LL] [i_18] = ((/* implicit */unsigned int) (((~(((/* implicit */int) arr_35 [i_14] [i_18])))) + ((+(-1458670673)))));
                        var_39 = ((/* implicit */short) (+(((/* implicit */int) arr_64 [1ULL] [1ULL] [i_15] [i_22 + 2] [6] [i_22] [i_15]))));
                        var_40 = ((/* implicit */int) ((unsigned char) ((long long int) arr_52 [i_13] [i_13] [i_13] [i_13])));
                        var_41 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_49 [i_22 + 1] [i_22 - 2])) * (((/* implicit */int) arr_45 [i_13] [(_Bool)1] [i_13] [i_22 + 2]))));
                    }
                    var_42 = ((((/* implicit */_Bool) (unsigned char)224)) ? (((/* implicit */int) arr_35 [i_14] [i_14])) : (((((/* implicit */int) arr_32 [i_13] [i_13] [i_13])) * (((/* implicit */int) arr_54 [4U] [i_14] [i_14] [i_14] [i_14] [i_14] [i_14])))));
                    arr_67 [i_18] [i_18] = ((/* implicit */unsigned int) ((int) arr_18 [i_13] [(signed char)16] [i_14] [i_15] [i_15] [i_18]));
                    arr_68 [i_18] [i_18] = ((/* implicit */short) ((((/* implicit */_Bool) arr_49 [i_14] [i_15])) ? (((/* implicit */int) arr_49 [i_14] [i_14])) : (((/* implicit */int) arr_49 [i_13] [i_13]))));
                }
            }
            for (short i_23 = 3; i_23 < 18; i_23 += 4) /* same iter space */
            {
                var_43 += ((/* implicit */unsigned int) var_10);
                var_44 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned int) (+(((/* implicit */int) var_8))))))));
                var_45 = ((/* implicit */unsigned int) (~(((unsigned long long int) (+(9223372036854775803LL))))));
                arr_73 [i_14] [i_23 + 1] = ((/* implicit */unsigned char) var_0);
                var_46 = ((/* implicit */short) (~(((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_9 [i_14])), (arr_61 [i_13] [i_13] [i_13] [i_14] [i_23])))) ? (max((arr_26 [i_13]), (((/* implicit */unsigned int) arr_56 [i_13] [i_13] [i_13] [i_13] [i_13])))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) -4194304)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (unsigned char)38)))))))));
            }
            for (short i_24 = 3; i_24 < 18; i_24 += 4) /* same iter space */
            {
                var_47 = ((/* implicit */int) ((((134213632U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16545))))) / (((/* implicit */unsigned int) arr_41 [i_24 - 3] [(signed char)4] [i_24]))));
                var_48 = (unsigned short)51447;
            }
            /* LoopNest 2 */
            for (unsigned int i_25 = 1; i_25 < 18; i_25 += 3) 
            {
                for (unsigned long long int i_26 = 1; i_26 < 18; i_26 += 1) 
                {
                    {
                        arr_81 [i_13] [i_14] [6U] [i_25 + 1] [i_26] = (+(((/* implicit */int) (signed char)-1)));
                        var_49 = ((/* implicit */unsigned int) ((int) (!(((/* implicit */_Bool) ((2892953528U) & (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_27 = 2; i_27 < 17; i_27 += 4) 
                        {
                            var_50 = ((/* implicit */long long int) arr_48 [i_13] [(_Bool)1] [i_13] [i_14]);
                            arr_85 [i_13] [i_14] [i_25] [i_13] [i_27] [i_27] = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-108)) + (arr_82 [i_27 - 2] [i_13])));
                            var_51 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) 16874497023492250666ULL)) || (((/* implicit */_Bool) (unsigned short)12728)))))));
                            arr_86 [i_13] [i_14] [i_25] [i_13] [i_14] = ((unsigned int) (+(((/* implicit */int) (unsigned short)51427))));
                        }
                        /* vectorizable */
                        for (short i_28 = 0; i_28 < 19; i_28 += 4) 
                        {
                            var_52 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)75))));
                            var_53 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)14106)) - (((/* implicit */int) (short)589))))) - (((long long int) arr_25 [2U] [9U]))));
                            var_54 = ((/* implicit */unsigned char) (signed char)64);
                        }
                    }
                } 
            } 
        }
        for (signed char i_29 = 3; i_29 < 17; i_29 += 4) 
        {
            arr_91 [i_29] = ((unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) 2367238085U)) ? (((/* implicit */int) (unsigned short)51436)) : (((/* implicit */int) (signed char)-97)))));
            var_55 = ((/* implicit */signed char) (+(((/* implicit */int) var_6))));
        }
    }
    /* vectorizable */
    for (unsigned short i_30 = 0; i_30 < 14; i_30 += 4) 
    {
        var_56 = ((-1728457391) & (((((/* implicit */int) var_4)) | (((/* implicit */int) (unsigned char)253)))));
        arr_95 [i_30] = ((/* implicit */unsigned short) (-(((unsigned long long int) (-9223372036854775807LL - 1LL)))));
        arr_96 [i_30] = ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-1))));
        /* LoopSeq 1 */
        for (signed char i_31 = 0; i_31 < 14; i_31 += 4) 
        {
            var_57 = ((/* implicit */short) ((arr_43 [i_30] [i_31] [i_31]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)51434)))));
            arr_100 [i_30] [i_30] [i_30] = ((/* implicit */unsigned char) (~(-911243401)));
        }
    }
}
