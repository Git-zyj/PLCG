/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151828
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
    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) var_9)) ? (((min((536854528ULL), (var_6))) | (min((((/* implicit */unsigned long long int) var_0)), (var_4))))) : (((((/* implicit */_Bool) min((var_13), (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (25ULL) : (0ULL))) : ((-(0ULL)))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_18 += ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_7)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : (((var_15) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))));
        var_19 ^= ((/* implicit */signed char) (-(((/* implicit */int) var_8))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 3; i_1 < 13; i_1 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_2 = 1; i_2 < 14; i_2 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned char i_3 = 1; i_3 < 14; i_3 += 2) 
            {
                for (signed char i_4 = 4; i_4 < 12; i_4 += 3) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            arr_12 [i_5] [i_5] [i_5] [i_1] [i_5] = ((/* implicit */unsigned long long int) (unsigned char)95);
                            arr_13 [i_1] [i_2] [i_1] [i_4] [i_5] = (((+(arr_10 [0ULL] [i_2] [(_Bool)1]))) % (((((/* implicit */_Bool) arr_10 [i_1] [i_2] [0ULL])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_16)))));
                            var_20 *= ((/* implicit */_Bool) (~(var_3)));
                        }
                    } 
                } 
            } 
            var_21 = ((/* implicit */int) -7761013600689370150LL);
        }
        for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 2) 
        {
            arr_18 [i_1] [i_1] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) ? (((/* implicit */int) arr_15 [i_1 + 3] [i_6])) : (((/* implicit */int) ((var_6) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)40))))))));
            var_22 = ((var_9) >> (((((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */unsigned long long int) -2267301765672639670LL)) : (var_7))) - (16179442308036911890ULL))));
        }
        for (unsigned long long int i_7 = 2; i_7 < 14; i_7 += 1) 
        {
            arr_22 [i_1] [i_1] = (+(var_11));
            var_23 = ((/* implicit */unsigned long long int) var_1);
            var_24 = ((/* implicit */_Bool) ((((((/* implicit */int) var_0)) + (2147483647))) >> (((/* implicit */int) var_10))));
            var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (arr_17 [i_7 - 2] [i_1] [i_1 + 3]) : (((/* implicit */unsigned long long int) arr_21 [i_1 + 1] [i_1]))));
            /* LoopNest 2 */
            for (unsigned long long int i_8 = 3; i_8 < 14; i_8 += 3) 
            {
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    {
                        arr_29 [i_1] [i_1] [i_1] [(unsigned char)3] = (-(13ULL));
                        var_26 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) 430887499)) : (arr_27 [i_1] [10] [10] [i_8] [i_9] [(unsigned char)10])))) ? ((-(arr_19 [(_Bool)1]))) : (arr_5 [i_1 + 1]));
                        arr_30 [(unsigned char)11] [i_7] [i_1] [10ULL] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [11ULL])) * (((/* implicit */int) var_15))))) ? (arr_17 [(_Bool)1] [i_1 - 3] [i_1]) : (arr_6 [i_1 + 3] [i_8 + 1])));
                        var_27 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) & ((-(((/* implicit */int) (unsigned char)172))))));
                    }
                } 
            } 
        }
        var_28 = ((/* implicit */unsigned long long int) min((var_28), ((-(((((/* implicit */_Bool) var_4)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))));
    }
    for (long long int i_10 = 2; i_10 < 21; i_10 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            for (unsigned char i_12 = 0; i_12 < 24; i_12 += 4) 
            {
                {
                    arr_38 [i_10] [i_10] [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_32 [i_10 - 2])), (var_11)))) ? (((((/* implicit */_Bool) min((((/* implicit */long long int) var_0)), (arr_33 [i_10] [i_11])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_10]))) : (min((0ULL), (1927640647102692137ULL))))) : (min((max((((/* implicit */unsigned long long int) var_1)), (var_9))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_37 [i_10] [i_11] [i_11])))))))));
                    var_29 = (-(((((/* implicit */_Bool) arr_37 [i_10 - 1] [i_10 + 3] [i_10 - 1])) ? (arr_37 [i_10 + 3] [i_10 - 1] [i_10 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))));
                }
            } 
        } 
        arr_39 [i_10] [i_10] = ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_31 [i_10])) ? (((/* implicit */int) var_15)) : (var_13)))), (arr_33 [(unsigned char)6] [i_10])))) != ((+(min((8219879184600452192ULL), (((/* implicit */unsigned long long int) var_10)))))));
        var_30 ^= (-(((((/* implicit */_Bool) arr_34 [i_10])) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_10]))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8)))))));
            /* LoopNest 2 */
            for (unsigned long long int i_14 = 2; i_14 < 20; i_14 += 3) 
            {
                for (unsigned long long int i_15 = 3; i_15 < 22; i_15 += 2) 
                {
                    {
                        var_32 = ((/* implicit */unsigned long long int) min((var_32), (((((var_10) || (((/* implicit */_Bool) arr_31 [i_10])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_45 [i_10] [i_13] [i_14] [(_Bool)1])) || (arr_32 [i_10]))))) : (arr_31 [i_10 - 2])))));
                        arr_48 [i_10] [i_10] [11ULL] [i_15] [i_15] [(signed char)11] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_34 [i_15 - 2]))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned long long int i_16 = 4; i_16 < 23; i_16 += 3) 
            {
                var_33 = ((/* implicit */int) ((var_15) ? (((((/* implicit */_Bool) arr_34 [i_16])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_33 [i_10] [i_13]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_46 [i_13] [i_16]))))))));
                var_34 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_49 [i_10 + 2] [i_10 + 2] [i_16 - 1]))));
                var_35 = ((/* implicit */long long int) min((var_35), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_7)))))));
                /* LoopSeq 1 */
                for (unsigned char i_17 = 3; i_17 < 22; i_17 += 1) 
                {
                    arr_55 [19ULL] [i_13] [i_16] [23ULL] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (signed char)-90)))) * (((((/* implicit */_Bool) 2267301765672639692LL)) ? (1108307720798208ULL) : (28ULL)))));
                    /* LoopSeq 1 */
                    for (unsigned char i_18 = 0; i_18 < 24; i_18 += 2) 
                    {
                        arr_60 [i_13] [i_16] [i_17] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) ((arr_32 [i_10]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_16]))) : (arr_43 [i_17] [i_16]))))));
                        var_36 = ((/* implicit */signed char) (+(arr_54 [i_10 + 1] [i_16 + 1])));
                        arr_61 [i_10] [(signed char)10] [i_16] [i_10] [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551598ULL)) || (((/* implicit */_Bool) 18446744073709551594ULL))));
                        arr_62 [i_10] [i_10] [i_16] [i_17] = ((/* implicit */signed char) (+(((/* implicit */int) ((arr_54 [i_10] [i_10]) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned long long int i_19 = 2; i_19 < 22; i_19 += 1) 
                    {
                        var_37 = (~(((((/* implicit */_Bool) 4ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_65 [i_10] [i_10]))) : (12719739687616743403ULL))));
                        arr_67 [i_10] [i_19] [i_16] = ((/* implicit */unsigned char) arr_51 [i_16] [i_13]);
                        arr_68 [i_10] [i_13] [i_10] [i_19] [i_13] [i_19] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_59 [i_19 + 1] [i_10])) + (((/* implicit */int) arr_59 [i_19 + 2] [i_10]))));
                    }
                    var_38 = ((((((/* implicit */_Bool) var_0)) ? (10226864889109099426ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_53 [i_10] [i_10] [i_16] [4ULL]))))) != (((/* implicit */unsigned long long int) arr_47 [i_10 + 2])));
                }
            }
        }
    }
    /* vectorizable */
    for (unsigned long long int i_20 = 1; i_20 < 23; i_20 += 2) 
    {
        var_39 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_53 [i_20] [i_20] [i_20] [i_20]))) - (255LL))))));
        var_40 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)250)) >> (((10226864889109099426ULL) - (10226864889109099423ULL)))));
    }
    /* LoopNest 3 */
    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
    {
        for (unsigned long long int i_22 = 3; i_22 < 14; i_22 += 1) 
        {
            for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
            {
                {
                    var_41 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)239))))) ? (min((var_5), (((/* implicit */unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)(-127 - 1))), (18446744073709551615ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (((((/* implicit */_Bool) var_7)) ? (var_5) : (var_3))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((min((((/* implicit */unsigned long long int) var_8)), (arr_24 [i_22]))) != (arr_57 [i_22 - 2] [i_22 - 2] [i_22 - 2] [i_23] [i_22])))))));
                    var_42 += ((/* implicit */int) (!(((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) && (((/* implicit */_Bool) (+(var_6))))))));
                }
            } 
        } 
    } 
}
