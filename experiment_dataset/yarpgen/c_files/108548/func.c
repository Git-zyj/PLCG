/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108548
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 3; i_0 < 12; i_0 += 2) 
    {
        var_16 = ((/* implicit */short) (~(var_10)));
        arr_3 [(unsigned char)12] [i_0] = (unsigned char)41;
        var_17 = ((/* implicit */long long int) var_7);
        arr_4 [(_Bool)1] = ((/* implicit */long long int) (((((~(var_5))) + (2147483647))) << (((((int) 6279477307184144409LL)) - (1037459481)))));
        arr_5 [i_0] [(unsigned char)7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_4))))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) var_3)) ? (var_15) : (((/* implicit */long long int) var_3))))));
    }
    var_18 = ((/* implicit */long long int) var_11);
    var_19 = ((/* implicit */long long int) var_7);
    /* LoopSeq 1 */
    for (int i_1 = 2; i_1 < 10; i_1 += 1) 
    {
        /* LoopSeq 3 */
        for (short i_2 = 0; i_2 < 12; i_2 += 2) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (long long int i_3 = 0; i_3 < 12; i_3 += 4) 
            {
                var_20 = ((/* implicit */short) (~(((((/* implicit */_Bool) var_9)) ? (var_11) : (var_11)))));
                var_21 = ((/* implicit */unsigned char) ((short) ((int) var_6)));
            }
            /* vectorizable */
            for (unsigned char i_4 = 0; i_4 < 12; i_4 += 4) 
            {
                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) 870264415U)) ? (598865117) : (var_1)));
                var_23 = ((/* implicit */signed char) (~(-598865144)));
            }
            /* vectorizable */
            for (int i_5 = 2; i_5 < 10; i_5 += 2) 
            {
                /* LoopSeq 3 */
                for (short i_6 = 0; i_6 < 12; i_6 += 2) 
                {
                    arr_22 [i_1] [i_1] [i_1 + 1] [i_1 - 1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_0)) : (var_8)));
                    var_24 = ((((/* implicit */_Bool) -598865118)) ? (-598865104) : (((/* implicit */int) var_2)));
                    /* LoopSeq 1 */
                    for (unsigned char i_7 = 0; i_7 < 12; i_7 += 2) 
                    {
                        var_25 = ((/* implicit */long long int) var_7);
                        arr_27 [i_5] [i_5] [i_5 - 2] [i_5] [(signed char)8] [(short)7] [1U] = ((var_11) != (((/* implicit */int) var_9)));
                        var_26 = ((/* implicit */int) (~(var_15)));
                    }
                }
                for (long long int i_8 = 3; i_8 < 8; i_8 += 1) 
                {
                    arr_31 [i_1] [i_1 - 2] [i_5 - 2] [i_5 + 1] = ((((var_12) < (((/* implicit */int) (unsigned char)56)))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_4))))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)132))) : (3167826898390838328LL))));
                    /* LoopSeq 1 */
                    for (int i_9 = 2; i_9 < 10; i_9 += 3) 
                    {
                        var_27 -= ((/* implicit */signed char) var_11);
                        var_28 -= ((/* implicit */unsigned char) ((((/* implicit */int) var_9)) <= (((/* implicit */int) ((short) var_10)))));
                        arr_34 [i_1] [i_2] = ((/* implicit */long long int) (((~(((/* implicit */int) var_14)))) > ((~(var_5)))));
                    }
                }
                for (signed char i_10 = 0; i_10 < 12; i_10 += 3) 
                {
                    var_29 = var_15;
                    arr_37 [i_10] [i_5] [(short)8] [i_10] = ((unsigned char) (+(var_11)));
                }
                var_30 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_10) : (var_8)))) ? (((((/* implicit */_Bool) -598865116)) ? (((/* implicit */long long int) -598865104)) : (var_15))) : (((/* implicit */long long int) 1235431305))));
                var_31 = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((var_14) ? (var_11) : (var_11))) : (((/* implicit */int) var_14))));
            }
            var_32 = ((/* implicit */long long int) max((var_32), (((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) var_9)) <= (var_11))))))) ? (((/* implicit */long long int) max((var_11), (((/* implicit */int) max((var_9), (var_4))))))) : (max((((/* implicit */long long int) max((var_5), (var_12)))), (((((/* implicit */_Bool) var_0)) ? (1530085763272231700LL) : (-4918038403013155228LL)))))))));
            var_33 = ((/* implicit */unsigned char) ((max((((/* implicit */long long int) 2007683395U)), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) var_12)) : (-3590087552506527980LL))))) | (((/* implicit */long long int) max((var_7), (max((var_11), (var_7))))))));
            arr_38 [i_1 - 1] [i_2] = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (-1488125615) : (var_5)))) ? (((var_14) ? (-1377611193) : (var_1))) : (var_12))), (((/* implicit */int) var_14))));
        }
        /* vectorizable */
        for (long long int i_11 = 0; i_11 < 12; i_11 += 2) /* same iter space */
        {
            arr_42 [i_1] = ((/* implicit */long long int) ((var_14) ? (((((/* implicit */_Bool) var_13)) ? (var_10) : (((/* implicit */int) var_2)))) : (((/* implicit */int) ((_Bool) (signed char)34)))));
            var_34 = ((/* implicit */int) ((((unsigned int) (signed char)-7)) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (var_12) : (var_6))))));
            var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) var_2))));
            var_36 = ((/* implicit */short) max((var_36), (((/* implicit */short) (-(((/* implicit */int) var_0)))))));
            arr_43 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)54))) <= (var_13)))) != (((/* implicit */int) var_14))));
        }
        for (long long int i_12 = 0; i_12 < 12; i_12 += 2) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned char i_13 = 0; i_13 < 12; i_13 += 4) 
            {
                var_37 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) max((var_3), (((/* implicit */unsigned int) var_7)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) max((((/* implicit */short) var_14)), (var_9)))) ? (max((6308711793267149513LL), (((/* implicit */long long int) var_4)))) : (max((var_15), (((/* implicit */long long int) -593387011))))))));
                arr_51 [1] [i_12] [i_1 + 1] = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */long long int) var_7)) | (2187658174598892367LL)))) ? (max((-702455376341344417LL), (((/* implicit */long long int) var_14)))) : (((/* implicit */long long int) -948826030)))) & (((/* implicit */long long int) var_7))));
            }
            for (long long int i_14 = 0; i_14 < 12; i_14 += 4) 
            {
                arr_54 [i_1] [i_1] = ((/* implicit */short) max((((/* implicit */long long int) (short)-29829)), (max((((long long int) var_8)), (max((4470038536669315729LL), (var_15)))))));
                arr_55 [i_1] [i_12] [i_14] = ((/* implicit */long long int) max((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 7084583288787357112LL)) ? (var_11) : (((/* implicit */int) var_9))))), (max((var_3), (((/* implicit */unsigned int) var_7)))))), (((/* implicit */unsigned int) (unsigned char)104))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_15 = 0; i_15 < 12; i_15 += 4) 
                {
                    var_38 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (var_5) : (((/* implicit */int) var_4))));
                    arr_58 [2LL] [i_14] [i_12] [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_7)) ? (var_3) : (((/* implicit */unsigned int) var_11)))) / (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
                }
            }
            arr_59 [8U] = 412132796;
            arr_60 [i_1] [(_Bool)1] = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((unsigned char) (-(((/* implicit */int) var_4)))))), (((((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_13))) % (((/* implicit */long long int) max((((/* implicit */int) var_9)), (var_12))))))));
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_16 = 0; i_16 < 12; i_16 += 1) 
        {
            var_39 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) 3489079874U)) : (((((/* implicit */long long int) ((/* implicit */int) var_14))) + (var_13)))));
            var_40 = ((/* implicit */signed char) min((var_40), (((/* implicit */signed char) (((~(var_6))) | (((/* implicit */int) ((short) var_14))))))));
            arr_64 [i_16] = ((/* implicit */unsigned int) (unsigned char)130);
        }
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
        {
            arr_68 [i_17] = ((/* implicit */unsigned char) max((((/* implicit */long long int) (~(var_1)))), (((long long int) var_3))));
            arr_69 [i_17] [i_17] = ((/* implicit */signed char) ((long long int) var_15));
        }
    }
    var_41 -= max((((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned int) var_2))))) ? (((/* implicit */long long int) var_12)) : (((long long int) var_14)))), (((/* implicit */long long int) var_0)));
}
