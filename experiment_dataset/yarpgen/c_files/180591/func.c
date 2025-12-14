/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180591
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
    for (unsigned int i_0 = 4; i_0 < 8; i_0 += 3) 
    {
        arr_2 [i_0] [i_0 - 3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) -612918341))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_15)))) ? (((unsigned long long int) 2522769800U)) : (max((((((/* implicit */_Bool) 2522769789U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (18446744073709551601ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)20270)))))))));
        var_16 -= ((/* implicit */_Bool) max((((unsigned int) var_13)), (((/* implicit */unsigned int) ((unsigned char) var_12)))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            /* LoopSeq 3 */
            for (long long int i_2 = 2; i_2 < 9; i_2 += 3) 
            {
                arr_9 [i_0] [i_1] [(_Bool)1] = ((/* implicit */_Bool) ((unsigned int) max(((-(18446744073709551615ULL))), (((/* implicit */unsigned long long int) ((long long int) var_10))))));
                var_17 &= ((/* implicit */unsigned int) (short)20270);
                arr_10 [i_0] [0U] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) (~(2522769808U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)20270)))))) : ((((_Bool)1) ? (1772197487U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))));
                arr_11 [i_2] [i_1] = ((/* implicit */unsigned short) (~(var_5)));
            }
            for (short i_3 = 0; i_3 < 10; i_3 += 3) 
            {
                var_18 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-26850)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((short) 3188113284461642358ULL)))));
                var_19 = ((/* implicit */unsigned int) ((unsigned char) 3188113284461642364ULL));
                /* LoopSeq 2 */
                for (short i_4 = 2; i_4 < 9; i_4 += 1) 
                {
                    arr_18 [i_0] [(signed char)1] [i_3] [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) (short)12222))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (2522769808U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (max((8578388092682424610ULL), (var_8))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) max((((/* implicit */short) var_0)), ((short)-20270)))))))));
                    var_20 ^= ((/* implicit */_Bool) (+(((unsigned int) (signed char)22))));
                    arr_19 [(signed char)6] [0ULL] [i_3] [i_4] = (+((+(((/* implicit */int) ((signed char) (_Bool)1))))));
                }
                for (long long int i_5 = 0; i_5 < 10; i_5 += 4) 
                {
                    var_21 = ((/* implicit */unsigned long long int) min((var_21), (max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (signed char)-90)), (max((((/* implicit */unsigned int) var_12)), (var_2)))))), (max((((var_6) ? (var_8) : (14523569854258734375ULL))), (max((((/* implicit */unsigned long long int) var_10)), (var_8)))))))));
                    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) (signed char)18))));
                    arr_23 [(signed char)0] [i_0 - 1] [i_3] [i_0] = ((/* implicit */signed char) ((_Bool) (-(((/* implicit */int) var_10)))));
                    arr_24 [i_3] [0LL] [3U] [0] [i_3] [0LL] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) max(((signed char)54), (var_4))))));
                }
                arr_25 [(signed char)7] [i_3] [i_0 - 4] = ((unsigned int) (~(((/* implicit */int) (short)-3509))));
                var_23 *= (~(max((((/* implicit */unsigned int) max(((signed char)23), ((signed char)-31)))), (var_5))));
            }
            /* vectorizable */
            for (long long int i_6 = 1; i_6 < 9; i_6 += 4) 
            {
                arr_30 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)1783))))) ? ((~(((/* implicit */int) (signed char)9)))) : (((/* implicit */int) (unsigned short)29372))));
                /* LoopNest 2 */
                for (long long int i_7 = 0; i_7 < 10; i_7 += 1) 
                {
                    for (unsigned long long int i_8 = 1; i_8 < 8; i_8 += 3) 
                    {
                        {
                            arr_36 [i_0] [i_7] [i_6] [i_7] [i_8 + 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)29716)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_13))));
                            arr_37 [i_7] [i_1] [i_6] [i_7] [i_7] = ((/* implicit */signed char) var_15);
                            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(14783241766027278067ULL)))) ? ((~(((/* implicit */int) (signed char)92)))) : (((/* implicit */int) ((_Bool) 2ULL)))));
                        }
                    } 
                } 
                arr_38 [i_0] [i_1] [i_1] [(unsigned char)2] = ((/* implicit */short) (~(5397336624892684610ULL)));
                /* LoopSeq 2 */
                for (unsigned long long int i_9 = 1; i_9 < 7; i_9 += 1) 
                {
                    var_25 *= ((/* implicit */unsigned short) (~(var_15)));
                    var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((unsigned long long int) var_15)))));
                    var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) ((unsigned long long int) (signed char)-92)))));
                }
                for (short i_10 = 0; i_10 < 10; i_10 += 3) 
                {
                    arr_43 [i_0] [i_1] [(unsigned char)8] = ((/* implicit */long long int) ((((/* implicit */_Bool) 1953954654)) ? (((/* implicit */int) (short)-10395)) : ((-(((/* implicit */int) var_10))))));
                    var_28 = ((/* implicit */unsigned short) var_6);
                    arr_44 [i_10] [(signed char)0] [i_0] = ((/* implicit */_Bool) ((signed char) var_15));
                }
            }
            var_29 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) 2053457521U)) ? (((/* implicit */int) (short)-10390)) : (((/* implicit */int) var_13))))));
        }
        var_30 &= ((/* implicit */_Bool) (signed char)-112);
    }
    for (short i_11 = 0; i_11 < 22; i_11 += 3) 
    {
        arr_48 [i_11] = ((/* implicit */short) (unsigned short)65535);
        /* LoopSeq 1 */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_13 = 0; i_13 < 22; i_13 += 3) 
            {
                for (int i_14 = 2; i_14 < 21; i_14 += 4) 
                {
                    {
                        arr_57 [i_11] [i_12] [i_12] [i_14] = ((/* implicit */unsigned int) ((unsigned short) max(((~(((/* implicit */int) (unsigned short)65535)))), ((((_Bool)1) ? (((/* implicit */int) (signed char)-61)) : (((/* implicit */int) (_Bool)1)))))));
                        arr_58 [i_11] [i_12] [(short)1] [i_14] |= ((/* implicit */unsigned long long int) var_14);
                    }
                } 
            } 
            arr_59 [i_11] = var_6;
            var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) max(((~(((/* implicit */int) (unsigned char)105)))), (((/* implicit */int) var_9))))) ? (((/* implicit */int) var_12)) : (max(((~(((/* implicit */int) (short)23115)))), (((/* implicit */int) ((_Bool) var_9)))))));
            /* LoopNest 2 */
            for (unsigned int i_15 = 1; i_15 < 21; i_15 += 2) 
            {
                for (unsigned long long int i_16 = 1; i_16 < 19; i_16 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (signed char i_17 = 1; i_17 < 20; i_17 += 1) 
                        {
                            var_32 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) 18446744073709551615ULL)))) ? (((unsigned int) var_6)) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
                            var_33 *= ((/* implicit */signed char) var_7);
                            var_34 += ((/* implicit */unsigned int) var_9);
                            var_35 = ((/* implicit */short) (!(((/* implicit */_Bool) ((signed char) (+(((/* implicit */int) var_11))))))));
                        }
                        var_36 = ((/* implicit */signed char) max((((/* implicit */unsigned short) ((signed char) 16564781224455221890ULL))), ((unsigned short)38773)));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned char i_18 = 3; i_18 < 20; i_18 += 3) 
                        {
                            var_37 = (_Bool)1;
                            var_38 = (-(1309890084238367880LL));
                            var_39 = ((/* implicit */unsigned long long int) var_6);
                        }
                        for (long long int i_19 = 0; i_19 < 22; i_19 += 3) 
                        {
                            arr_71 [i_11] [i_12] = ((/* implicit */unsigned int) ((unsigned short) (-(((/* implicit */int) (signed char)127)))));
                            var_40 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((!(var_6))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_4))))) : (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_2))))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((_Bool) var_14)))));
                        }
                        for (unsigned int i_20 = 2; i_20 < 20; i_20 += 2) 
                        {
                            arr_74 [i_11] [i_11] [i_11] = ((/* implicit */unsigned long long int) max(((+(((/* implicit */int) ((_Bool) (signed char)127))))), (((((/* implicit */_Bool) (unsigned char)254)) ? (((/* implicit */int) (short)-10390)) : (((/* implicit */int) (unsigned short)57312))))));
                            var_41 = ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_14))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((_Bool)1), (var_6))))) : ((-(var_2)))));
                        }
                    }
                } 
            } 
        }
        /* LoopSeq 3 */
        for (signed char i_21 = 1; i_21 < 20; i_21 += 3) 
        {
            /* LoopSeq 1 */
            for (long long int i_22 = 0; i_22 < 22; i_22 += 4) 
            {
                arr_81 [i_21] [i_21] [i_21] = ((/* implicit */signed char) (((!((_Bool)1))) ? (((/* implicit */int) max(((unsigned short)14505), (((/* implicit */unsigned short) var_9))))) : ((~(((/* implicit */int) (unsigned short)55556))))));
                arr_82 [i_11] [i_21] [i_11] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (signed char)-118))));
                var_42 = ((/* implicit */unsigned char) ((unsigned long long int) (~((~(738999437U))))));
            }
            arr_83 [(short)14] [i_21] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1)))))));
        }
        for (signed char i_23 = 0; i_23 < 22; i_23 += 4) 
        {
            arr_87 [i_11] = ((/* implicit */unsigned int) var_8);
            arr_88 [i_11] = ((/* implicit */unsigned short) 18446744073709551615ULL);
            var_43 = ((/* implicit */int) ((((/* implicit */_Bool) 12902628150558658316ULL)) ? (16459723142599795223ULL) : (((/* implicit */unsigned long long int) 992809133))));
        }
        for (short i_24 = 0; i_24 < 22; i_24 += 1) 
        {
            var_44 = ((/* implicit */long long int) (+(((/* implicit */int) ((_Bool) 1088154397865639509ULL)))));
            var_45 = ((/* implicit */_Bool) ((unsigned int) (-(((/* implicit */int) (_Bool)1)))));
            var_46 = ((/* implicit */unsigned char) max((var_46), (((/* implicit */unsigned char) var_7))));
            var_47 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))) : ((+(var_15)))));
            var_48 |= (+(((unsigned int) 4382929644095669666LL)));
        }
        arr_91 [17] = ((/* implicit */signed char) 2053457536U);
    }
    /* vectorizable */
    for (unsigned int i_25 = 2; i_25 < 8; i_25 += 4) 
    {
        var_49 = ((/* implicit */unsigned long long int) ((unsigned char) var_14));
        var_50 = ((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (4382929644095669662LL)));
    }
    var_51 = ((/* implicit */long long int) var_2);
}
