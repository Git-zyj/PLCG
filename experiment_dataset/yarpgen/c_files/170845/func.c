/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170845
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
    var_15 = ((/* implicit */_Bool) max((9279725815510203323ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((7059307458254633397ULL) ^ (((/* implicit */unsigned long long int) 2586446825U))))) ? (((((/* implicit */int) var_9)) & (var_2))) : (((/* implicit */int) var_13)))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 3; i_0 < 19; i_0 += 2) 
    {
        arr_4 [i_0] = ((signed char) (~(arr_1 [i_0])));
        arr_5 [i_0] [i_0] = arr_3 [i_0];
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)1)) ? (((((var_8) - (var_8))) + (((/* implicit */long long int) arr_1 [i_0])))) : (((/* implicit */long long int) (+(((/* implicit */int) ((short) arr_3 [i_0]))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        /* LoopSeq 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_10 [i_2] = ((/* implicit */short) (signed char)-2);
            /* LoopSeq 2 */
            for (unsigned int i_3 = 2; i_3 < 19; i_3 += 1) 
            {
                var_17 &= ((/* implicit */unsigned long long int) (((+(((/* implicit */int) var_12)))) <= (((/* implicit */int) ((_Bool) min(((short)-8715), ((short)16)))))));
                var_18 = ((/* implicit */long long int) ((signed char) (_Bool)1));
            }
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned char i_5 = 4; i_5 < 19; i_5 += 2) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) ((unsigned char) 13068789607819473105ULL))) ? (max((451430661595296974LL), (((/* implicit */long long int) (_Bool)1)))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
                            arr_22 [(unsigned char)5] [i_2] [i_1] [i_1] = ((/* implicit */short) min((var_3), (((/* implicit */unsigned char) ((signed char) arr_6 [i_1] [i_1])))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (signed char i_7 = 0; i_7 < 20; i_7 += 1) 
                {
                    var_20 = ((/* implicit */_Bool) ((arr_12 [i_2] [15ULL] [i_2] [i_2]) * (((((/* implicit */_Bool) arr_9 [16ULL])) ? (((arr_12 [i_1] [i_2] [i_4] [i_2]) % (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_7] [i_7] [i_7] [i_7] [i_7]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */int) (short)-8)) : (((/* implicit */int) (_Bool)1)))))))));
                    var_21 &= ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_21 [i_1] [i_1] [i_2] [i_1] [i_7] [i_7])), (arr_6 [i_1] [i_1])))) ? (4294967281U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_8 = 0; i_8 < 20; i_8 += 4) 
                    {
                        var_22 = ((/* implicit */short) ((max((((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (var_6)))), ((+(((/* implicit */int) (unsigned char)234)))))) <= (arr_1 [i_2])));
                        arr_28 [i_2] [i_1] [i_1] = ((/* implicit */signed char) ((_Bool) ((_Bool) arr_8 [i_2])));
                        arr_29 [i_2] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */unsigned int) (~((~(max((arr_24 [i_4] [i_2] [i_4] [i_7] [i_8] [i_2]), (((/* implicit */unsigned long long int) (short)8759))))))));
                        arr_30 [i_1] [i_1] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_15 [i_1] [i_2] [13LL] [i_8])) <= (((/* implicit */int) arr_15 [i_1] [i_7] [i_4] [i_7])))) ? (((/* implicit */int) max((arr_15 [i_8] [i_7] [i_4] [i_2]), (arr_15 [i_8] [i_2] [i_2] [i_7])))) : (((/* implicit */int) arr_15 [i_8] [i_4] [i_2] [i_1]))));
                    }
                    var_23 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)8694))));
                    var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((((/* implicit */int) var_7)) % (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 1395746781)) || (((/* implicit */_Bool) (short)(-32767 - 1))))))))))));
                }
                for (unsigned int i_9 = 1; i_9 < 16; i_9 += 1) 
                {
                    var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(1767272702U)))) ? ((-(((/* implicit */int) arr_33 [i_9 - 1] [i_9 - 1] [i_9 + 2] [i_9 + 3])))) : (((((/* implicit */_Bool) arr_11 [i_9 + 1] [12U] [i_9] [i_9])) ? (((/* implicit */int) arr_15 [i_1] [i_9 + 2] [i_1] [i_9 - 1])) : (arr_11 [i_9 + 1] [i_9 + 3] [i_9] [i_9])))));
                    /* LoopSeq 2 */
                    for (int i_10 = 0; i_10 < 20; i_10 += 2) 
                    {
                        var_26 = ((((/* implicit */int) ((((((/* implicit */int) arr_35 [i_1] [i_2] [i_4] [i_9] [i_10])) % (((/* implicit */int) (unsigned short)24576)))) <= (((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_1] [i_2])) || (((/* implicit */_Bool) arr_27 [i_2])))))))) <= (((/* implicit */int) min((((((/* implicit */int) arr_27 [i_2])) <= (((/* implicit */int) (_Bool)1)))), (arr_16 [i_9 + 1] [i_9] [i_9 + 1])))));
                        arr_37 [i_1] [i_2] [i_1] [17U] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_4] [i_4] [i_9 + 4] [i_9] [i_9 + 3])) ? (((/* implicit */int) arr_20 [i_4] [i_4] [i_9 + 4] [i_9 + 1] [i_9 - 1])) : (((/* implicit */int) arr_31 [i_9] [i_9] [i_9 + 4] [i_9] [i_9 + 4]))))) ? (((/* implicit */int) ((short) (short)37))) : (((/* implicit */int) ((4294967295U) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_4] [i_9 + 2] [i_9 + 4] [i_9] [i_9 + 4]))))))));
                        arr_38 [i_2] [(_Bool)1] [i_4] [i_10] = arr_24 [i_9] [i_9] [i_9 + 1] [i_9 + 1] [i_9] [i_9];
                    }
                    for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                    {
                        var_27 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)123)) ? (((/* implicit */int) arr_33 [i_4] [i_4] [i_4] [i_4])) : (((/* implicit */int) (signed char)-53))))) % (min((((/* implicit */long long int) (short)17362)), (arr_6 [i_1] [i_11 - 1]))))));
                        arr_43 [i_11 - 1] [i_1] [i_4] [i_1] [i_1] &= ((((/* implicit */int) min((((((/* implicit */int) arr_2 [i_1] [i_1])) <= (((/* implicit */int) arr_32 [i_1])))), (((((/* implicit */_Bool) var_6)) || (var_13)))))) << (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)21)))))));
                    }
                }
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    arr_48 [i_1] [i_2] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) min((((/* implicit */signed char) (((_Bool)1) || (((/* implicit */_Bool) (short)-1174))))), (((signed char) (short)8681)))))));
                    arr_49 [i_2] [i_4] [i_2] [i_2] = min((((((/* implicit */_Bool) var_6)) ? (((arr_9 [i_1]) | (((/* implicit */unsigned int) ((/* implicit */int) (short)-17363))))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_14 [5ULL] [i_2])) ^ (((/* implicit */int) arr_34 [i_1] [i_1] [(_Bool)1] [i_4] [i_12]))))))), (((/* implicit */unsigned int) ((signed char) ((var_8) ^ (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_2]))))))));
                }
                var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) 387918376U)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_32 [i_1])) << (((((/* implicit */int) var_3)) - (61)))))) : (((var_4) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8694))) : (arr_24 [i_1] [i_1] [i_1] [i_1] [i_1] [(_Bool)1])))))))));
            }
        }
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            arr_52 [i_13] = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (unsigned short)25))));
            var_29 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_51 [i_1] [i_13] [i_13])) <= (((/* implicit */int) arr_51 [i_1] [i_13] [i_1])))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_1)) >> (((((/* implicit */int) arr_42 [i_1] [0ULL] [i_1] [i_1] [i_1] [i_1] [i_13])) - (39045)))))) ? (((((-4452992665596329258LL) + (9223372036854775807LL))) << (((((arr_13 [i_1] [i_1]) + (115402453))) - (9))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -4452992665596329258LL)))))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_1]))))))));
            arr_53 [i_13] [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+((~(((/* implicit */int) arr_16 [i_13] [i_1] [i_1]))))))) ? (var_2) : (((/* implicit */int) (unsigned char)5))));
            arr_54 [i_13] [i_1] [i_13] |= ((/* implicit */unsigned long long int) arr_26 [i_1] [i_1] [i_13] [i_13] [i_13]);
        }
        for (signed char i_14 = 0; i_14 < 20; i_14 += 4) 
        {
            var_30 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_20 [i_1] [i_1] [i_1] [i_14] [i_14]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [i_1] [i_1])) ? (996108732U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_14] [i_14] [i_14] [i_14] [i_14] [i_1])))))) ? (((/* implicit */int) min((arr_45 [i_1] [i_1] [i_1] [i_14]), (var_9)))) : (((/* implicit */int) (short)-1054)))) : ((+((+(((/* implicit */int) (signed char)6))))))));
            /* LoopNest 2 */
            for (signed char i_15 = 0; i_15 < 20; i_15 += 2) 
            {
                for (signed char i_16 = 0; i_16 < 20; i_16 += 4) 
                {
                    {
                        arr_64 [i_15] [i_15] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) min(((short)-23), ((short)-24192)))), (var_8)))) ? (((/* implicit */long long int) (+(((((/* implicit */int) arr_39 [i_1] [i_1] [i_15] [i_1] [i_1] [i_1])) << (((arr_0 [(signed char)20] [i_15]) - (11664671207466958014ULL)))))))) : (4452992665596329257LL)));
                        arr_65 [i_1] [i_14] [i_14] [i_15] = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) arr_33 [i_16] [i_15] [i_14] [i_1])))) <= (((/* implicit */int) (!(((/* implicit */_Bool) (short)16)))))));
                    }
                } 
            } 
            var_31 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) ((_Bool) (unsigned short)32658)))) ? (((((/* implicit */_Bool) max((var_14), (((/* implicit */short) (signed char)-1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_15 [i_1] [i_1] [i_14] [i_14])), ((unsigned short)33413))))) : ((+(0ULL))))) : (((/* implicit */unsigned long long int) ((((unsigned int) 4452992665596329258LL)) % (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_33 [i_14] [i_1] [1] [1])) || (var_0))))))))));
            var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) arr_8 [i_1]))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_63 [i_1] [i_14] [i_1] [i_1]))))) : (((4234676917U) % (((/* implicit */unsigned int) (+(((/* implicit */int) arr_41 [i_1] [16U] [i_14] [i_14] [i_14]))))))))))));
            arr_66 [i_1] [i_14] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) 4452992665596329281LL)) || (((/* implicit */_Bool) arr_23 [i_1] [i_14] [i_1] [(short)12] [i_1]))))) <= (((/* implicit */int) var_14))))) % (((/* implicit */int) (unsigned char)31))));
        }
        arr_67 [i_1] = (((((((~(0LL))) + (9223372036854775807LL))) << (((((((((/* implicit */_Bool) arr_18 [i_1] [(short)19] [i_1] [i_1] [i_1])) ? (arr_13 [i_1] [i_1]) : (((/* implicit */int) (short)4080)))) + (115402481))) - (37))))) % (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_1] [i_1])) || (((/* implicit */_Bool) var_8)))))));
        var_33 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 17727676952927396235ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))) : (805306368U)))) || (((/* implicit */_Bool) min((4294967295U), (((/* implicit */unsigned int) (short)4794))))))))) <= (((((/* implicit */_Bool) arr_50 [i_1])) ? (17727676952927396239ULL) : (((/* implicit */unsigned long long int) -4452992665596329270LL))))));
        var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)105)) << (((/* implicit */int) (unsigned short)5))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_1] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_51 [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_33 [i_1] [i_1] [i_1] [i_1]))))) : (min((0ULL), (((/* implicit */unsigned long long int) -4452992665596329243LL)))))), (((/* implicit */unsigned long long int) (-((-(-4452992665596329276LL)))))))))));
    }
    for (unsigned int i_17 = 1; i_17 < 13; i_17 += 4) 
    {
        var_35 -= arr_25 [2U] [i_17 + 1] [2U];
        var_36 *= ((/* implicit */_Bool) min((((((/* implicit */int) ((((/* implicit */_Bool) -4452992665596329243LL)) || (var_1)))) * (((arr_19 [i_17 - 1] [i_17 + 1] [i_17] [i_17 - 1] [i_17 + 1]) ? (((/* implicit */int) arr_47 [i_17] [i_17] [i_17] [i_17 + 1])) : (((/* implicit */int) var_4)))))), (((/* implicit */int) var_3))));
    }
    var_37 |= ((/* implicit */short) var_3);
}
