/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163053
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
    var_19 = ((((/* implicit */_Bool) max(((~(((/* implicit */int) var_7)))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_7)) : (var_6)))))) ? (var_4) : ((~(((/* implicit */int) ((short) var_15))))));
    var_20 = (+(max((((/* implicit */int) var_7)), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)34)) : (var_9))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)255)), (arr_1 [i_0]))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (8)))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((var_10), (((/* implicit */signed char) var_11)))))) == (((var_16) / (((/* implicit */unsigned long long int) arr_1 [i_0]))))))) : (((/* implicit */int) var_7))));
        var_22 = ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) arr_2 [i_0] [i_0]))))))) < ((((_Bool)1) ? (2596486192U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))));
        var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((unsigned short) max((((/* implicit */unsigned int) var_18)), (arr_1 [i_0])))))));
        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) & (((((/* implicit */long long int) (~(((/* implicit */int) var_14))))) * (((long long int) 2596486194U))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 14; i_1 += 3) 
    {
        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2596486215U)) ? (((/* implicit */int) (signed char)10)) : (((/* implicit */int) (signed char)-6))));
        var_26 = ((/* implicit */long long int) min((var_26), (arr_4 [i_1] [i_1])));
    }
    /* LoopSeq 4 */
    for (int i_2 = 0; i_2 < 22; i_2 += 4) 
    {
        /* LoopSeq 4 */
        for (unsigned short i_3 = 4; i_3 < 18; i_3 += 3) 
        {
            var_27 = ((/* implicit */short) max(((+(arr_12 [i_2] [i_3] [i_3 - 4]))), (((/* implicit */int) ((unsigned short) var_11)))));
            var_28 = ((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (unsigned char)7))));
            /* LoopNest 2 */
            for (int i_4 = 4; i_4 < 20; i_4 += 4) 
            {
                for (unsigned int i_5 = 0; i_5 < 22; i_5 += 3) 
                {
                    {
                        var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) ((((/* implicit */int) var_11)) % (((var_3) - (((/* implicit */int) var_8)))))))));
                        var_30 = ((/* implicit */signed char) var_8);
                        var_31 = arr_8 [i_2];
                        var_32 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) 12)) ? (8388607ULL) : (((/* implicit */unsigned long long int) var_4)))) >> ((((+(var_1))) - (3801831391U))))))));
                        var_33 = ((/* implicit */short) (((((+(((/* implicit */int) var_14)))) - (((/* implicit */int) arr_13 [i_2] [i_2] [i_2] [i_2])))) & (((((/* implicit */_Bool) ((((/* implicit */int) var_11)) << (((((/* implicit */int) (unsigned short)65535)) - (65527)))))) ? (max((((/* implicit */int) var_5)), (var_6))) : (((/* implicit */int) var_11))))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (signed char i_6 = 0; i_6 < 22; i_6 += 4) 
        {
            var_34 = ((/* implicit */signed char) ((((/* implicit */int) arr_20 [i_2] [i_2] [i_2])) | (((/* implicit */int) (signed char)-13))));
            var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_2)) : (arr_17 [i_2] [i_6] [i_6] [i_6]))) : (((/* implicit */int) arr_13 [i_2] [i_2] [i_2] [i_2]))));
            var_36 += ((/* implicit */long long int) var_5);
            arr_22 [i_2] = ((/* implicit */unsigned short) var_18);
        }
        /* vectorizable */
        for (short i_7 = 0; i_7 < 22; i_7 += 4) 
        {
            var_37 = ((/* implicit */short) ((((/* implicit */int) (short)-4)) != (((/* implicit */int) (signed char)-11))));
            var_38 = ((/* implicit */short) 286916499);
            /* LoopNest 3 */
            for (short i_8 = 1; i_8 < 21; i_8 += 4) 
            {
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    for (signed char i_10 = 1; i_10 < 19; i_10 += 3) 
                    {
                        {
                            var_39 = ((/* implicit */long long int) (+(var_4)));
                            arr_35 [i_8] [i_10] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 2596486210U))));
                            arr_36 [i_7] &= ((((/* implicit */int) var_12)) >= (arr_28 [i_10] [i_8 + 1] [i_10] [i_9]));
                        }
                    } 
                } 
            } 
        }
        for (signed char i_11 = 0; i_11 < 22; i_11 += 3) 
        {
            arr_39 [i_11] = max((((unsigned short) (~(3943063990U)))), (((/* implicit */unsigned short) arr_14 [i_2] [i_11] [i_2])));
            var_40 = ((/* implicit */unsigned long long int) max((var_40), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_15))))) ? (((/* implicit */int) var_18)) : (((((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_11]))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_11)) : (var_4))) : (((/* implicit */int) ((unsigned short) 469762048))))))))));
            var_41 = ((/* implicit */_Bool) min(((-(max((var_16), (((/* implicit */unsigned long long int) var_4)))))), (((/* implicit */unsigned long long int) var_14))));
            var_42 = ((/* implicit */unsigned short) arr_13 [i_2] [i_2] [i_2] [i_11]);
        }
        var_43 = ((/* implicit */_Bool) max(((~(2596486177U))), (((/* implicit */unsigned int) max((((/* implicit */int) (unsigned short)15791)), (var_6))))));
        arr_40 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? ((+(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) ((var_3) + (((/* implicit */int) (short)6144))))) ? (((/* implicit */int) ((((/* implicit */int) arr_19 [i_2] [i_2])) == (((/* implicit */int) arr_10 [i_2]))))) : (((/* implicit */int) max(((unsigned short)49745), (((/* implicit */unsigned short) (short)248)))))))));
    }
    for (unsigned short i_12 = 1; i_12 < 17; i_12 += 4) 
    {
        var_44 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((~(arr_42 [i_12]))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)42)))))) ? (min((((var_17) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_12]))))), (((/* implicit */unsigned long long int) max((arr_20 [i_12] [i_12] [i_12]), (((/* implicit */unsigned char) var_10))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_25 [i_12])), ((unsigned char)14))))))))));
        var_45 &= ((/* implicit */unsigned short) min((((int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (_Bool)1))))), (((/* implicit */int) var_14))));
    }
    for (unsigned short i_13 = 0; i_13 < 17; i_13 += 4) 
    {
        arr_46 [i_13] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)8536)) ? (((/* implicit */unsigned int) var_6)) : (var_1))) - (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_13] [i_13] [i_13])))))) ? (((unsigned long long int) max((((/* implicit */int) arr_15 [i_13] [i_13] [i_13] [i_13])), (arr_17 [i_13] [i_13] [i_13] [i_13])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
        var_46 = var_16;
    }
    for (signed char i_14 = 3; i_14 < 9; i_14 += 4) 
    {
        /* LoopSeq 1 */
        for (int i_15 = 0; i_15 < 10; i_15 += 3) 
        {
            var_47 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)8661), ((unsigned short)65535))))) <= ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_14 - 2] [i_14 - 3] [i_14 - 1]))) : (1698481098U)))));
            var_48 = ((/* implicit */unsigned short) (unsigned char)1);
            /* LoopSeq 3 */
            for (long long int i_16 = 0; i_16 < 10; i_16 += 4) 
            {
                var_49 = ((/* implicit */unsigned char) var_17);
                var_50 ^= ((/* implicit */short) var_16);
                var_51 = ((/* implicit */long long int) min((var_51), (((/* implicit */long long int) var_4))));
                arr_57 [i_14] [i_16] [i_14] [i_14] = ((/* implicit */signed char) ((((/* implicit */int) ((1698481120U) >= (((/* implicit */unsigned int) 469762048))))) + (((/* implicit */int) ((signed char) ((arr_42 [i_14]) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_55 [i_15])))))))));
            }
            for (unsigned short i_17 = 1; i_17 < 8; i_17 += 4) /* same iter space */
            {
                var_52 ^= ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_17] [i_14 - 2] [i_17 + 1])) ^ (-576007439)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)255)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_21 [i_14 - 3])))) : (arr_42 [i_14 - 2]))));
                var_53 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) arr_18 [i_14] [i_15] [i_15])), ((~(((unsigned long long int) var_14))))));
            }
            for (unsigned short i_18 = 1; i_18 < 8; i_18 += 4) /* same iter space */
            {
                var_54 = ((/* implicit */long long int) var_0);
                var_55 = ((/* implicit */unsigned int) var_18);
            }
        }
        var_56 = ((/* implicit */int) 3181517495U);
        var_57 |= ((/* implicit */unsigned short) max((((min((var_17), (((/* implicit */unsigned long long int) var_15)))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_14 - 1] [i_14 + 1]))))), (max((((/* implicit */unsigned long long int) ((short) arr_55 [i_14]))), (min((((/* implicit */unsigned long long int) (short)2047)), (var_16)))))));
        var_58 = ((/* implicit */unsigned short) (!(((((int) (unsigned short)25068)) <= (((/* implicit */int) ((unsigned short) (short)-232)))))));
        var_59 = ((((/* implicit */_Bool) max((((/* implicit */int) ((signed char) arr_6 [i_14 - 1]))), (((((/* implicit */int) (signed char)27)) + (((/* implicit */int) var_5))))))) ? (min((((/* implicit */unsigned int) ((((/* implicit */unsigned int) var_0)) > (1698481100U)))), (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) - (var_1))))) : (max((((/* implicit */unsigned int) (unsigned short)40163)), (var_1))));
    }
    var_60 = ((/* implicit */_Bool) min((var_60), (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_10)) ? (var_16) : (var_17)))))) % (((((/* implicit */_Bool) var_4)) ? (((var_2) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_15))))) : (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-24)) * (((/* implicit */int) var_12))))))))))));
}
