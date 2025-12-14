/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124693
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
    var_10 = ((/* implicit */long long int) var_8);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(6052221326637004675LL)))) || (((/* implicit */_Bool) ((((/* implicit */int) (short)10506)) | (((/* implicit */int) var_1)))))));
        /* LoopSeq 2 */
        for (long long int i_1 = 1; i_1 < 18; i_1 += 3) /* same iter space */
        {
            var_12 = ((/* implicit */unsigned int) (unsigned char)191);
            var_13 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */long long int) (~(var_0)))) : (((7799118542844949326LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)46036)))))));
        }
        for (long long int i_2 = 1; i_2 < 18; i_2 += 3) /* same iter space */
        {
            var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned char) var_4)))))) ? (max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)172)))))), (((((/* implicit */long long int) ((/* implicit */int) var_1))) | (arr_1 [i_2 - 1]))))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (signed char)0)), ((unsigned char)191)))))));
            var_15 = ((/* implicit */unsigned short) max((max(((+(arr_4 [i_0]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)92)) || (((/* implicit */_Bool) (unsigned char)160))))))), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned char)176)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4240))) : (var_6))) <= ((~(var_6))))))));
            var_16 &= ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_2)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)168)) ? (((/* implicit */int) (unsigned char)92)) : (((/* implicit */int) (unsigned short)47847)))))));
            var_17 |= var_3;
        }
        arr_8 [i_0] = ((/* implicit */long long int) var_4);
        var_18 = ((/* implicit */short) ((1886083672U) << (((((/* implicit */int) (unsigned char)97)) - (92)))));
        var_19 = ((/* implicit */long long int) (~(((var_6) % (arr_7 [i_0])))));
    }
    for (unsigned short i_3 = 3; i_3 < 24; i_3 += 2) 
    {
        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned char)93)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)119)))) % (((/* implicit */int) var_5)))))));
        /* LoopSeq 2 */
        for (unsigned char i_4 = 0; i_4 < 25; i_4 += 4) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (signed char i_5 = 0; i_5 < 25; i_5 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_6 = 0; i_6 < 25; i_6 += 1) 
                {
                    arr_19 [i_3] [i_4] [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) 27U);
                    /* LoopSeq 3 */
                    for (long long int i_7 = 0; i_7 < 25; i_7 += 1) 
                    {
                        arr_23 [i_5] [i_5] [i_5] [i_3] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-32))) : (var_7)));
                        var_21 = ((/* implicit */unsigned char) ((short) (!(((/* implicit */_Bool) (unsigned char)191)))));
                        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) arr_10 [i_6]))) ? (((/* implicit */int) ((unsigned char) 9223372036854775793LL))) : (((/* implicit */int) ((signed char) arr_16 [4U] [i_6] [i_6] [i_5] [i_3 - 3] [i_3 - 3]))))))));
                        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)-23477)))))))));
                    }
                    for (unsigned int i_8 = 0; i_8 < 25; i_8 += 3) 
                    {
                        var_24 = ((/* implicit */unsigned char) 4294967257U);
                        var_25 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) 3216162786U)) ? (((/* implicit */int) arr_12 [i_3] [i_3])) : (((/* implicit */int) var_9))))));
                        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)154)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)87))) : (var_0)));
                        var_27 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)225))));
                    }
                    for (unsigned int i_9 = 2; i_9 < 23; i_9 += 2) 
                    {
                        var_28 -= ((/* implicit */unsigned char) 4125914793U);
                        var_29 += ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)221))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned char i_10 = 2; i_10 < 23; i_10 += 4) 
                    {
                        var_30 = ((/* implicit */long long int) (-(4125914793U)));
                        var_31 ^= ((/* implicit */signed char) ((arr_25 [i_10] [i_3 - 3] [i_10]) - (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_3 + 1])))));
                    }
                    var_32 = ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)65)) < (((/* implicit */int) var_1)))) || (((/* implicit */_Bool) ((var_2) | (4145269745333612733LL))))));
                    var_33 = ((/* implicit */unsigned char) (+(-6180033752141482440LL)));
                }
                var_34 = ((/* implicit */unsigned char) (-(((((/* implicit */long long int) var_6)) | (-2810818244207828429LL)))));
                var_35 = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)59))));
                var_36 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((169052502U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)178)))))) == (((((/* implicit */_Bool) (unsigned short)9771)) ? (3164515991380940703LL) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))));
            }
            for (signed char i_11 = 0; i_11 < 25; i_11 += 4) 
            {
                arr_33 [i_3] [i_3] [i_4] [i_11] = ((/* implicit */unsigned char) min((((/* implicit */long long int) min((0U), (((/* implicit */unsigned int) (unsigned char)137))))), (min((((/* implicit */long long int) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))))), (((((/* implicit */_Bool) (unsigned char)33)) ? (((/* implicit */long long int) var_7)) : (var_2)))))));
                arr_34 [i_3] [i_4] = -6273543780529546659LL;
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_12 = 1; i_12 < 24; i_12 += 2) 
                {
                    var_37 += ((/* implicit */unsigned char) (~(((/* implicit */int) arr_28 [i_11] [i_3 - 1]))));
                    arr_37 [i_3 - 3] [i_4] [i_3] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_21 [i_3 - 3] [i_3 - 3] [i_3 - 3] [i_3]))));
                }
            }
            var_38 = ((/* implicit */unsigned short) max((var_38), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_9))) / ((+(9223372036854775807LL))))))));
        }
        for (unsigned int i_13 = 3; i_13 < 23; i_13 += 3) 
        {
            var_39 = ((/* implicit */unsigned char) max((var_39), (((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (max((4093405535U), (var_0))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_41 [i_3 - 1]))))))))), ((-(9223372036854775807LL))))))));
            /* LoopSeq 4 */
            for (long long int i_14 = 2; i_14 < 24; i_14 += 4) 
            {
                var_40 ^= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */long long int) ((/* implicit */int) ((4125914810U) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)112))))))) : ((+(-2193713327682295262LL)))));
                var_41 = ((/* implicit */unsigned short) ((unsigned char) (unsigned char)227));
                arr_44 [i_3] [i_3] [i_14] = ((/* implicit */unsigned int) (~(max((((/* implicit */long long int) (unsigned char)178)), (9223372036854775807LL)))));
            }
            for (unsigned char i_15 = 1; i_15 < 24; i_15 += 4) 
            {
                var_42 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) arr_42 [i_3] [(unsigned short)16] [i_15 - 1]))))));
                arr_47 [i_3] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((+(1939654281987110469LL))), (((/* implicit */long long int) var_9))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (short)32767))))) : (((((/* implicit */_Bool) arr_45 [i_13 - 3] [i_13 - 1] [i_13 - 1])) ? (arr_45 [i_13 - 3] [i_13 - 1] [i_13 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))));
                var_43 = ((/* implicit */short) (~((-(4294967040U)))));
                arr_48 [(unsigned char)10] [(unsigned char)10] [i_3] = ((long long int) ((unsigned char) arr_12 [i_3 - 2] [i_3 - 2]));
            }
            for (unsigned char i_16 = 0; i_16 < 25; i_16 += 3) 
            {
                var_44 = ((/* implicit */short) max((((/* implicit */int) var_8)), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)17574)) << (((2860064446637104949LL) - (2860064446637104942LL)))))) ? (((/* implicit */int) (unsigned char)108)) : (((/* implicit */int) (signed char)-34))))));
                var_45 |= var_5;
            }
            for (short i_17 = 2; i_17 < 23; i_17 += 4) 
            {
                var_46 = ((/* implicit */unsigned char) (signed char)3);
                /* LoopNest 2 */
                for (long long int i_18 = 0; i_18 < 25; i_18 += 3) 
                {
                    for (unsigned char i_19 = 2; i_19 < 22; i_19 += 4) 
                    {
                        {
                            arr_58 [i_3] [i_18] [i_19] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_55 [i_13 - 2] [i_17 - 2] [i_3]))) : (((1675931795U) / (var_7)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (max((4125914793U), (((/* implicit */unsigned int) (short)-10248))))));
                            arr_59 [i_3] [i_3] [i_3] [i_18] [i_19 - 2] = ((/* implicit */long long int) max((((/* implicit */int) (((+(1939654281987110493LL))) > (((/* implicit */long long int) ((/* implicit */int) (unsigned char)5)))))), (((((/* implicit */_Bool) max((var_9), ((unsigned char)167)))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_3))))));
                        }
                    } 
                } 
                var_47 = ((/* implicit */long long int) min((var_47), (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_14 [i_3 + 1] [i_3 + 1] [i_3 - 1]))))) ? (((((/* implicit */int) arr_14 [i_3 + 1] [i_3 - 1] [i_3 - 1])) * (((/* implicit */int) (unsigned char)78)))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_3 - 2] [i_3 - 3] [i_3 - 1]))) < (var_7)))))))));
                arr_60 [i_13 - 1] [i_3] = ((/* implicit */long long int) (unsigned short)55906);
            }
            arr_61 [i_3] = ((/* implicit */unsigned char) (-((~(((/* implicit */int) (unsigned char)153))))));
        }
        /* LoopSeq 2 */
        for (long long int i_20 = 0; i_20 < 25; i_20 += 1) 
        {
            arr_65 [i_3] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) >= (-3598933152066997362LL))))));
            var_48 = ((/* implicit */unsigned char) (~(((((/* implicit */long long int) ((/* implicit */int) arr_64 [i_3 - 1] [i_3 - 2] [i_3]))) % (538076866192800418LL)))));
        }
        /* vectorizable */
        for (short i_21 = 0; i_21 < 25; i_21 += 4) 
        {
            var_49 = ((/* implicit */unsigned char) 4294967295U);
            /* LoopSeq 2 */
            for (unsigned char i_22 = 2; i_22 < 23; i_22 += 2) /* same iter space */
            {
                arr_70 [i_3] [i_21] [i_21] [i_3] = ((/* implicit */long long int) arr_28 [i_3] [i_22]);
                var_50 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_5))));
            }
            for (unsigned char i_23 = 2; i_23 < 23; i_23 += 2) /* same iter space */
            {
                var_51 = ((/* implicit */unsigned char) (~(-2409750617546634072LL)));
                var_52 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_3))));
                var_53 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_5))));
                /* LoopSeq 2 */
                for (unsigned char i_24 = 1; i_24 < 24; i_24 += 3) 
                {
                    var_54 = ((((/* implicit */long long int) ((/* implicit */int) var_4))) * (32767LL));
                    var_55 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 138885118U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)67))) : (arr_50 [i_3 + 1] [i_3] [i_3 + 1])));
                    /* LoopSeq 4 */
                    for (short i_25 = 0; i_25 < 25; i_25 += 1) 
                    {
                        var_56 += ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (1547041937U)))));
                        arr_78 [i_3] [i_3] [i_3] [i_3] [i_3] = (unsigned char)78;
                        var_57 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_4))));
                        arr_79 [i_3] [i_21] [i_23] [i_24 - 1] [i_3] [i_25] [i_25] = ((/* implicit */long long int) (~(204248872U)));
                    }
                    for (long long int i_26 = 0; i_26 < 25; i_26 += 2) 
                    {
                        var_58 = ((/* implicit */unsigned int) (~(((/* implicit */int) (short)-8146))));
                        var_59 = 0U;
                    }
                    for (unsigned int i_27 = 1; i_27 < 24; i_27 += 4) 
                    {
                        var_60 = ((/* implicit */signed char) (~(var_0)));
                        var_61 = ((/* implicit */long long int) min((var_61), (((/* implicit */long long int) ((unsigned char) (unsigned char)94)))));
                    }
                    for (unsigned char i_28 = 0; i_28 < 25; i_28 += 1) 
                    {
                        var_62 = ((/* implicit */long long int) var_6);
                        var_63 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)94))) ^ (-1939654281987110481LL)))) ? (((((/* implicit */_Bool) var_0)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)176))))) : (((/* implicit */long long int) ((/* implicit */int) arr_43 [(unsigned char)22] [i_23 - 2])))));
                    }
                }
                for (short i_29 = 0; i_29 < 25; i_29 += 1) 
                {
                    arr_88 [i_3] [i_3 - 1] [i_21] [i_23] [(unsigned short)11] [i_3] = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)7))));
                    var_64 = (-(7305923341591752289LL));
                }
            }
        }
    }
    var_65 = (unsigned char)55;
    var_66 = ((/* implicit */unsigned char) (+(max((((/* implicit */unsigned int) var_4)), (var_7)))));
}
