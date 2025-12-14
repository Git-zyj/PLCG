/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166329
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
    var_15 = ((/* implicit */unsigned char) var_9);
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            var_16 += ((/* implicit */unsigned char) 536870911U);
            var_17 &= ((/* implicit */unsigned int) ((_Bool) (short)29373));
            /* LoopNest 3 */
            for (unsigned long long int i_2 = 4; i_2 < 15; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 2) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */short) ((unsigned char) min((((/* implicit */unsigned short) ((unsigned char) var_4))), (((unsigned short) var_14)))));
                            var_19 += ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_4 [i_0] [i_2 - 2] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-29373))) : (min((0LL), (((/* implicit */long long int) var_13)))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_11 [i_0] [(_Bool)1] [i_2] [i_3])))))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 4) 
        {
            var_20 = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((2648237028U) - (536870894U)))))))));
            arr_17 [i_0] [i_0] = max(((~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)88))))))), (((/* implicit */int) arr_2 [i_0] [i_5])));
            arr_18 [i_5] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) -1)), (var_2)))) ? (3758096401U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) 644222450))))) * (((((/* implicit */_Bool) (short)29359)) ? (((/* implicit */int) (signed char)54)) : (-667909318)))))) : ((+(max((536870894U), (((/* implicit */unsigned int) var_9))))))));
            arr_19 [i_0] [(unsigned short)3] = ((/* implicit */unsigned long long int) var_6);
        }
        for (int i_6 = 0; i_6 < 18; i_6 += 2) 
        {
            arr_23 [i_0] = ((/* implicit */unsigned short) var_14);
            arr_24 [i_0] = ((/* implicit */unsigned long long int) 3758096401U);
        }
        arr_25 [i_0] = (+(((((/* implicit */_Bool) 144115188075855871LL)) ? (17185520887863884174ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3758096401U)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_7 = 3; i_7 < 15; i_7 += 2) 
        {
            for (unsigned char i_8 = 2; i_8 < 14; i_8 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (short i_9 = 0; i_9 < 18; i_9 += 2) 
                    {
                        var_21 |= (~(((/* implicit */int) (!(((/* implicit */_Bool) (-(var_11))))))));
                        arr_34 [i_0] [i_7] [i_9] = ((/* implicit */long long int) var_8);
                    }
                    for (unsigned short i_10 = 0; i_10 < 18; i_10 += 4) /* same iter space */
                    {
                        var_22 = ((/* implicit */unsigned char) ((_Bool) (!(((((/* implicit */int) (unsigned char)129)) < (((/* implicit */int) (short)29373)))))));
                        var_23 = ((/* implicit */_Bool) (signed char)-1);
                    }
                    for (unsigned short i_11 = 0; i_11 < 18; i_11 += 4) /* same iter space */
                    {
                        var_24 = ((/* implicit */_Bool) (+((-(var_11)))));
                        var_25 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)124)) ? (((/* implicit */int) arr_40 [i_0] [i_7 - 1])) : (-2147483645)))) ? (((/* implicit */int) ((short) var_3))) : ((~(((/* implicit */int) (short)-4096)))))));
                        var_26 &= ((/* implicit */unsigned int) ((int) ((long long int) var_11)));
                        var_27 = ((/* implicit */short) max(((~(var_12))), (min(((+(((/* implicit */int) (short)29382)))), (((/* implicit */int) ((unsigned char) 0U)))))));
                        arr_41 [i_0] [i_0] [i_0] [4LL] = max((((/* implicit */short) ((var_12) != (arr_30 [i_0] [i_7] [i_8 - 2] [i_11])))), ((short)-32587));
                    }
                    arr_42 [i_0] [i_7 - 2] [i_8] |= var_12;
                }
            } 
        } 
        var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967291U)) ? (((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) var_7)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)216))))))) : (min((min((((/* implicit */unsigned int) var_1)), (0U))), (var_3)))));
        arr_43 [i_0] [i_0] = (-((~(var_2))));
    }
    for (signed char i_12 = 0; i_12 < 24; i_12 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_13 = 0; i_13 < 24; i_13 += 4) 
        {
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                {
                    var_29 -= ((unsigned long long int) (!(((/* implicit */_Bool) var_10))));
                    /* LoopNest 2 */
                    for (unsigned short i_15 = 3; i_15 < 23; i_15 += 4) 
                    {
                        for (int i_16 = 1; i_16 < 21; i_16 += 4) 
                        {
                            {
                                var_30 -= ((/* implicit */unsigned long long int) max((4294967294U), (((/* implicit */unsigned int) (_Bool)1))));
                                var_31 = ((/* implicit */unsigned char) min((353839986), ((~(((/* implicit */int) var_0))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_32 = ((/* implicit */int) (~((~(12292633763420442721ULL)))));
        /* LoopNest 3 */
        for (signed char i_17 = 1; i_17 < 23; i_17 += 2) 
        {
            for (unsigned int i_18 = 0; i_18 < 24; i_18 += 4) 
            {
                for (unsigned short i_19 = 0; i_19 < 24; i_19 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_20 = 0; i_20 < 24; i_20 += 4) 
                        {
                            arr_70 [i_12] [i_17] [i_18] [i_19] [i_20] = ((unsigned int) (unsigned char)126);
                            var_33 = ((/* implicit */int) (+((((_Bool)1) ? (arr_57 [i_12] [i_17] [i_18] [i_18] [i_19] [i_20]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                        }
                        /* vectorizable */
                        for (long long int i_21 = 0; i_21 < 24; i_21 += 2) 
                        {
                            var_34 = ((/* implicit */short) ((((/* implicit */_Bool) arr_52 [i_17 - 1] [i_17])) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_13)))) : ((((_Bool)1) ? (-7810308746300744135LL) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))));
                            arr_73 [i_12] [i_17] [i_18] [i_19] [i_21] = ((unsigned short) (unsigned char)125);
                            var_35 = ((/* implicit */_Bool) min((var_35), ((!(((/* implicit */_Bool) (+(((/* implicit */int) arr_59 [i_18])))))))));
                            arr_74 [i_21] [i_17] = ((long long int) (unsigned char)128);
                        }
                        var_36 ^= ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? (1ULL) : (((/* implicit */unsigned long long int) (+(68719460352LL))))));
                        arr_75 [i_12] [i_17] [i_18] [i_17] [i_18] [i_19] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_5)) ? (var_14) : (((/* implicit */int) ((unsigned short) 4886641141416866982LL))))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
                        var_37 = ((/* implicit */_Bool) (short)29373);
                    }
                } 
            } 
        } 
    }
    for (signed char i_22 = 0; i_22 < 24; i_22 += 2) /* same iter space */
    {
        var_38 *= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (unsigned short)65535)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))));
        /* LoopNest 2 */
        for (unsigned int i_23 = 4; i_23 < 22; i_23 += 2) 
        {
            for (unsigned short i_24 = 0; i_24 < 24; i_24 += 4) 
            {
                {
                    var_39 = ((/* implicit */unsigned short) var_3);
                    var_40 ^= ((/* implicit */unsigned short) var_6);
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_25 = 1; i_25 < 23; i_25 += 2) 
        {
            for (unsigned long long int i_26 = 0; i_26 < 24; i_26 += 2) 
            {
                {
                    var_41 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) min((var_3), (((/* implicit */unsigned int) (unsigned short)41706)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_6)), (max(((unsigned short)41706), (var_0))))))) : ((~(((((/* implicit */_Bool) var_10)) ? (4260103498053108084ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_27 = 0; i_27 < 24; i_27 += 2) 
                    {
                        for (unsigned short i_28 = 0; i_28 < 24; i_28 += 4) 
                        {
                            {
                                arr_94 [i_22] [i_25] [i_26] [i_26] [i_22] [i_28] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned short) min((14186640575656443534ULL), (((/* implicit */unsigned long long int) var_14))))))));
                                var_42 = ((/* implicit */long long int) var_1);
                                arr_95 [i_28] [i_27] [i_26] [i_25] [i_22] = min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 1581636373)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)-29374))))) ? (((((/* implicit */_Bool) arr_66 [i_28] [i_28] [i_28] [i_28] [i_28] [i_28])) ? (((/* implicit */unsigned long long int) var_5)) : (var_11))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)21))) : (2954228355301370327ULL))))), (((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) var_0))))))));
                                var_43 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)-29377))))) ? (var_11) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)28756)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)77))) : (var_3)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_46 [i_28]) > (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_60 [i_22] [i_25 + 1]), (arr_76 [i_22] [17LL])))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_44 = ((/* implicit */unsigned long long int) var_8);
}
