/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151016
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 = ((/* implicit */signed char) ((((/* implicit */int) var_13)) + (((/* implicit */int) var_3))));
        arr_3 [(unsigned short)6] &= ((/* implicit */long long int) var_9);
    }
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */int) var_12)) - (var_4)))))) ? (((/* implicit */unsigned long long int) min((var_8), (((/* implicit */long long int) ((var_13) ? (var_0) : (((/* implicit */int) var_13)))))))) : (((((/* implicit */_Bool) -6LL)) ? (2198949338798733808ULL) : (11766286971483328464ULL)))));
    var_16 -= ((/* implicit */short) min((((/* implicit */unsigned int) var_6)), ((-(((2742353072U) + (((/* implicit */unsigned int) -1))))))));
    /* LoopSeq 2 */
    for (signed char i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_2 = 0; i_2 < 16; i_2 += 4) 
        {
            var_17 *= (+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_13)))));
            var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)7))))) ? (max((var_4), (((/* implicit */int) var_11)))) : (((((/* implicit */int) var_12)) / (((/* implicit */int) var_12))))));
        }
        var_19 = ((/* implicit */unsigned short) (~((~(2198949338798733795ULL)))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_4 = 1; i_4 < 20; i_4 += 3) 
        {
            /* LoopSeq 4 */
            for (signed char i_5 = 2; i_5 < 22; i_5 += 4) 
            {
                arr_17 [i_4 + 1] [i_4] [i_5] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 2893746835U)), (6680457102226223168ULL)))) ? (((/* implicit */int) (unsigned char)18)) : (((/* implicit */int) (_Bool)1))));
                var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (short)16491)) ? (((/* implicit */int) (unsigned short)18636)) : (((/* implicit */int) (signed char)66)))), (max((var_2), (var_0)))))) || (((/* implicit */_Bool) ((10974812488415280813ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)112)))))))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_6 = 1; i_6 < 20; i_6 += 2) 
                {
                    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) var_2))));
                    arr_21 [i_6] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_5)))) : ((-(((/* implicit */int) var_3)))))) & (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) max((var_13), (var_10)))) : (max((((/* implicit */int) var_13)), (var_4)))))));
                    var_22 ^= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-91))) != (-4582224001933847864LL)));
                    var_23 = (!(((/* implicit */_Bool) (~(((/* implicit */int) var_6))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_7 = 1; i_7 < 21; i_7 += 3) 
                    {
                        arr_26 [i_4 + 1] [i_5] [i_6] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) 3ULL)) ? (((/* implicit */int) (signed char)-77)) : (((/* implicit */int) min(((signed char)78), ((signed char)-24))))));
                        arr_27 [i_3] [i_6] [i_3] [i_6 - 1] = ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_1)));
                        arr_28 [i_3] [i_3] [i_3] [i_3] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_7)), (((var_12) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_8)))))) ? (min(((~(((/* implicit */int) var_1)))), (max((((/* implicit */int) var_1)), (var_4))))) : ((+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_6))))))));
                        arr_29 [i_7] [i_6] [i_5] [i_6] [i_4 + 3] [i_3] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)24561)), (max((((/* implicit */unsigned int) (_Bool)1)), (0U)))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) - (7471931585294270803ULL))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)97)))))))));
                        arr_30 [i_3] [i_6] [i_5] [i_5] [i_7] = ((/* implicit */unsigned char) (-((~(((/* implicit */int) (unsigned short)57535))))));
                    }
                    for (unsigned int i_8 = 4; i_8 < 22; i_8 += 2) 
                    {
                        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((((((/* implicit */_Bool) 5456426960778957027ULL)) ? (((/* implicit */int) (unsigned char)97)) : (((/* implicit */int) (_Bool)0)))) / (var_2))))));
                        var_25 -= ((/* implicit */unsigned char) var_11);
                        var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_10)) : (var_0))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_11)))))))));
                    }
                }
                for (unsigned short i_9 = 0; i_9 < 23; i_9 += 1) 
                {
                    var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_4), (((/* implicit */int) (!(var_12))))))) ? (((max((var_8), (((/* implicit */long long int) var_0)))) * (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_9)))))) : (((/* implicit */long long int) min((((var_12) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned int) var_4))))))))));
                    var_28 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */int) (!(var_12)))), ((+(((/* implicit */int) var_6)))))))));
                }
                arr_37 [i_5 - 2] [i_4] [i_4 + 2] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((signed char)-66), (((/* implicit */signed char) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : ((~(var_8)))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) var_11)), (var_6)))) : (((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_3)))) | (((var_12) ? (var_0) : (var_4)))))));
            }
            /* vectorizable */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                var_29 = ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (!(((/* implicit */_Bool) 1622946278U))))));
                var_30 *= ((/* implicit */signed char) var_8);
                arr_40 [i_4] = (!(((/* implicit */_Bool) var_11)));
                /* LoopNest 2 */
                for (unsigned char i_11 = 1; i_11 < 21; i_11 += 2) 
                {
                    for (unsigned short i_12 = 0; i_12 < 23; i_12 += 4) 
                    {
                        {
                            var_31 ^= (!(((/* implicit */_Bool) var_8)));
                            var_32 ^= ((/* implicit */signed char) var_3);
                            arr_45 [i_3] [i_4 + 2] [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_10))));
                            var_33 -= ((/* implicit */long long int) ((((var_2) + (2147483647))) >> (((((/* implicit */int) var_5)) - (85)))));
                        }
                    } 
                } 
                arr_46 [i_10] [i_4] = ((/* implicit */unsigned int) (-(var_0)));
            }
            /* vectorizable */
            for (unsigned int i_13 = 0; i_13 < 23; i_13 += 1) /* same iter space */
            {
                var_34 = ((/* implicit */unsigned long long int) max((var_34), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_11)))))));
                var_35 ^= ((/* implicit */unsigned char) (~(var_4)));
            }
            for (unsigned int i_14 = 0; i_14 < 23; i_14 += 1) /* same iter space */
            {
                var_36 = ((/* implicit */unsigned char) min((var_36), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) (short)-15184)), (1799060520)))) ? (((((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (-6921283971448131779LL)))) ? (((/* implicit */int) ((((/* implicit */int) var_1)) > (var_2)))) : (((/* implicit */int) var_13)))) : (((var_10) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1)))))))))));
                arr_53 [i_3] [i_4 - 1] [i_14] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((((var_13) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_12)))) >> (((var_8) - (3054960066134656774LL))))) : ((+(((/* implicit */int) var_6))))));
            }
            /* LoopNest 2 */
            for (unsigned char i_15 = 1; i_15 < 20; i_15 += 1) 
            {
                for (unsigned long long int i_16 = 0; i_16 < 23; i_16 += 2) 
                {
                    {
                        var_37 = ((/* implicit */unsigned int) var_11);
                        var_38 = ((/* implicit */signed char) max((var_38), (((/* implicit */signed char) (-(((var_4) - (var_2))))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                        {
                            arr_63 [i_17] [i_15] [i_15] [i_15] [i_3] = ((/* implicit */signed char) ((((/* implicit */int) var_5)) < (((/* implicit */int) (_Bool)1))));
                            arr_64 [i_3] [i_15] [i_15] = ((/* implicit */unsigned int) ((((/* implicit */int) var_10)) - (((/* implicit */int) var_11))));
                            var_39 -= ((/* implicit */signed char) var_13);
                        }
                        /* vectorizable */
                        for (int i_18 = 1; i_18 < 20; i_18 += 3) 
                        {
                            var_40 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_6))));
                            var_41 = ((/* implicit */unsigned int) min((var_41), (((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) var_2)) : (var_9))) : (((/* implicit */unsigned int) var_0))))));
                        }
                    }
                } 
            } 
            var_42 = ((/* implicit */long long int) min((var_42), (((/* implicit */long long int) var_10))));
            var_43 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5456426960778957042ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)46900))) : (7875987267453311667ULL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) 8707755669727811002LL)) && (((/* implicit */_Bool) (short)15184))))) : (((var_12) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_11)))));
        }
        arr_68 [i_3] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) | (3453386459U)))), (-902365884440583817LL)));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_19 = 1; i_19 < 7; i_19 += 1) 
    {
        var_44 = ((/* implicit */int) (~(var_8)));
        arr_71 [i_19] [i_19 + 2] = ((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) (signed char)88))) / (-902365884440583833LL))) & (((/* implicit */long long int) ((/* implicit */int) var_11)))));
    }
    for (int i_20 = 0; i_20 < 20; i_20 += 1) 
    {
        /* LoopNest 2 */
        for (int i_21 = 0; i_21 < 20; i_21 += 3) 
        {
            for (unsigned long long int i_22 = 0; i_22 < 20; i_22 += 4) 
            {
                {
                    var_45 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_13) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_13))))) ? (((/* implicit */int) var_12)) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_13))))));
                    var_46 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) * (((/* implicit */int) var_3))))) ? ((+(((/* implicit */int) var_5)))) : (max((-1204492417), (((/* implicit */int) (unsigned char)240))))));
                }
            } 
        } 
        var_47 = ((/* implicit */int) max((var_47), (((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_11))) <= (var_8)))) << (((/* implicit */int) ((var_8) < (((/* implicit */long long int) ((/* implicit */int) var_3))))))))));
        arr_79 [i_20] &= ((/* implicit */unsigned long long int) var_11);
    }
    for (unsigned short i_23 = 4; i_23 < 9; i_23 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_24 = 3; i_24 < 6; i_24 += 1) 
        {
            arr_85 [i_24] [i_23] [i_23] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (var_2) : (((/* implicit */int) var_10))));
            arr_86 [i_23] [i_24] [i_24] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_5)) : (var_4)));
            var_48 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) - (((/* implicit */int) var_6))))) ? (((((/* implicit */int) var_13)) * (((/* implicit */int) var_6)))) : (var_4)));
            /* LoopNest 3 */
            for (unsigned long long int i_25 = 1; i_25 < 8; i_25 += 1) 
            {
                for (unsigned char i_26 = 0; i_26 < 10; i_26 += 4) 
                {
                    for (unsigned short i_27 = 0; i_27 < 10; i_27 += 4) 
                    {
                        {
                            var_49 -= ((/* implicit */signed char) ((var_0) > (var_4)));
                            arr_95 [i_25] [i_24] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_0) : (((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) (signed char)-78)) ? (((/* implicit */unsigned long long int) 404304314)) : (15233807878789481097ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))));
                            var_50 = ((/* implicit */unsigned short) ((var_10) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_13))));
                            var_51 = ((/* implicit */unsigned int) max((var_51), (((((/* implicit */_Bool) ((((/* implicit */int) var_1)) - (((/* implicit */int) var_3))))) ? (var_9) : (((/* implicit */unsigned int) var_2))))));
                        }
                    } 
                } 
            } 
        }
        var_52 = ((/* implicit */unsigned short) min((((var_8) << (((((((/* implicit */int) var_11)) + (150))) - (23))))), (((/* implicit */long long int) var_4))));
    }
}
