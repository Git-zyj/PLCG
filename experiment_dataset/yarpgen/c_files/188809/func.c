/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188809
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 19; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) (!(((/* implicit */_Bool) min((min((((/* implicit */unsigned short) (_Bool)1)), (var_2))), (((/* implicit */unsigned short) var_10))))))))));
                            var_14 = max((((((/* implicit */_Bool) ((var_5) ? (((/* implicit */int) (unsigned char)166)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */int) var_12)) + (((/* implicit */int) var_0)))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_8)))))), (((/* implicit */int) var_0)));
                            var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) max((((/* implicit */unsigned short) min((var_8), (((/* implicit */short) (unsigned char)166))))), (var_2))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned char i_4 = 0; i_4 < 20; i_4 += 4) 
                {
                    var_16 &= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_7))))))) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_12)))));
                    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) var_5))));
                }
                /* vectorizable */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_9))));
                    var_19 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_3))));
                    var_20 *= ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1)));
                    var_21 -= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) ^ (var_9)));
                    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_4))));
                }
                /* LoopNest 2 */
                for (int i_6 = 3; i_6 < 19; i_6 += 3) 
                {
                    for (unsigned int i_7 = 0; i_7 < 20; i_7 += 3) 
                    {
                        {
                            var_23 = var_6;
                            var_24 = ((/* implicit */long long int) max((max((((/* implicit */int) var_5)), (((((/* implicit */int) var_12)) % (((/* implicit */int) var_5)))))), (((/* implicit */int) ((((((/* implicit */_Bool) 1648530998)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)70))) : (5262016080449736791ULL))) <= (((/* implicit */unsigned long long int) min((0LL), (((/* implicit */long long int) var_6))))))))));
                            arr_18 [i_0] [i_0] [18] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)16320)) ? (9223372036854775807LL) : (((/* implicit */long long int) 1073725440U))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_25 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) var_9)) ? (((var_10) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)60660))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_1)))))))));
    /* LoopSeq 2 */
    for (signed char i_8 = 1; i_8 < 14; i_8 += 2) 
    {
        /* LoopSeq 2 */
        for (long long int i_9 = 0; i_9 < 15; i_9 += 3) 
        {
            var_26 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_2)))), (((/* implicit */int) (unsigned char)187))));
            /* LoopSeq 1 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_11 = 0; i_11 < 15; i_11 += 1) 
                {
                    var_27 -= ((/* implicit */short) var_5);
                    var_28 = (!(((/* implicit */_Bool) var_3)));
                    arr_29 [i_11] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */int) var_8)) > (((/* implicit */int) (unsigned short)4874))));
                }
                /* vectorizable */
                for (unsigned int i_12 = 0; i_12 < 15; i_12 += 3) 
                {
                    arr_33 [i_12] [i_9] [i_10] [i_12] [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (11LL)));
                    var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) (signed char)34))));
                    /* LoopSeq 3 */
                    for (unsigned short i_13 = 0; i_13 < 15; i_13 += 3) 
                    {
                        arr_37 [i_8] [i_9] [i_9] [i_9] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_12))));
                        var_30 = ((/* implicit */unsigned char) var_9);
                        var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) / (((/* implicit */int) var_4))));
                    }
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        var_32 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5262016080449736791ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_9)));
                        arr_41 [i_14] [i_12] [i_9] [i_9] [i_14] = ((/* implicit */short) var_2);
                    }
                    for (unsigned short i_15 = 0; i_15 < 15; i_15 += 3) 
                    {
                        var_33 = ((/* implicit */unsigned long long int) (~((-(var_11)))));
                        var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)222)) ? (var_11) : (((/* implicit */long long int) var_3))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_12)))))));
                    }
                }
                var_35 = ((/* implicit */unsigned short) min((var_35), (((/* implicit */unsigned short) (~(max((var_6), (((/* implicit */int) (_Bool)1)))))))));
                /* LoopSeq 4 */
                for (unsigned int i_16 = 3; i_16 < 14; i_16 += 3) 
                {
                    arr_47 [i_8] [i_8] [i_8 - 1] [i_8] = ((/* implicit */int) var_5);
                    /* LoopSeq 3 */
                    for (unsigned short i_17 = 0; i_17 < 15; i_17 += 4) /* same iter space */
                    {
                        arr_50 [i_8] [i_10] [i_10] [i_16] [i_17] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 3221241855U)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1020)))));
                        var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) (~((~(((/* implicit */int) var_0)))))))));
                        var_37 = ((/* implicit */_Bool) min((var_37), (((/* implicit */_Bool) var_1))));
                    }
                    /* vectorizable */
                    for (unsigned short i_18 = 0; i_18 < 15; i_18 += 4) /* same iter space */
                    {
                        var_38 = ((/* implicit */unsigned char) min((var_38), (((/* implicit */unsigned char) ((((/* implicit */int) var_7)) & (((/* implicit */int) var_2)))))));
                        var_39 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)26731))));
                    }
                    for (unsigned char i_19 = 0; i_19 < 15; i_19 += 2) 
                    {
                        var_40 = ((/* implicit */unsigned char) min((var_40), (((/* implicit */unsigned char) var_12))));
                        var_41 = ((/* implicit */unsigned int) min((var_41), (((/* implicit */unsigned int) var_6))));
                    }
                    var_42 = var_12;
                    var_43 = ((/* implicit */int) var_11);
                    var_44 = ((/* implicit */int) var_3);
                }
                for (unsigned char i_20 = 0; i_20 < 15; i_20 += 1) 
                {
                    var_45 = ((/* implicit */unsigned short) (+(var_6)));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_21 = 0; i_21 < 15; i_21 += 3) 
                    {
                        var_46 = ((/* implicit */unsigned int) min((var_46), (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))) ? (((((/* implicit */_Bool) 10U)) ? (((/* implicit */int) (unsigned char)63)) : (((/* implicit */int) (short)32767)))) : (((/* implicit */int) var_12))))), ((-(var_9)))))));
                        var_47 = ((/* implicit */long long int) min((var_47), (((/* implicit */long long int) var_6))));
                        var_48 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) var_6)), (max((((/* implicit */unsigned int) var_8)), (var_9)))));
                    }
                    var_49 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)187)) ? (((/* implicit */unsigned long long int) 731005762U)) : (13184727993259814822ULL)));
                }
                /* vectorizable */
                for (unsigned int i_22 = 2; i_22 < 14; i_22 += 3) 
                {
                    var_50 = ((/* implicit */unsigned int) var_8);
                    var_51 ^= ((/* implicit */signed char) ((var_9) >= (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
                }
                /* vectorizable */
                for (unsigned long long int i_23 = 0; i_23 < 15; i_23 += 4) 
                {
                    /* LoopSeq 2 */
                    for (short i_24 = 1; i_24 < 14; i_24 += 3) 
                    {
                        var_52 = ((/* implicit */int) min((var_52), (((/* implicit */int) var_9))));
                        var_53 = ((/* implicit */unsigned short) max((var_53), (((/* implicit */unsigned short) (((!(var_10))) ? (((((/* implicit */int) var_8)) | (((/* implicit */int) (_Bool)1)))) : (var_6))))));
                        var_54 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)126)) ? (var_6) : (((/* implicit */int) var_1))));
                        arr_67 [(unsigned char)0] [i_8] [i_8 - 1] [i_8 - 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)31635)) : (((/* implicit */int) (unsigned short)384))));
                    }
                    for (unsigned char i_25 = 2; i_25 < 13; i_25 += 3) 
                    {
                        var_55 = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)64832))));
                        var_56 &= ((/* implicit */signed char) var_5);
                    }
                    var_57 = (((!(var_5))) ? (((/* implicit */int) var_8)) : (var_6));
                    arr_70 [i_8 + 1] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned long long int) var_9);
                }
            }
            arr_71 [i_8] [i_8] [i_8] = ((/* implicit */unsigned short) 2251799813160960LL);
        }
        for (unsigned int i_26 = 0; i_26 < 15; i_26 += 4) 
        {
            arr_75 [i_8] = ((/* implicit */unsigned long long int) var_1);
            arr_76 [i_8] [i_8] = ((/* implicit */int) var_9);
        }
        var_58 = ((/* implicit */int) max((var_58), (((((/* implicit */int) var_7)) >> (((((/* implicit */int) var_0)) - (23451)))))));
        /* LoopNest 2 */
        for (long long int i_27 = 1; i_27 < 14; i_27 += 3) 
        {
            for (int i_28 = 1; i_28 < 13; i_28 += 4) 
            {
                {
                    var_59 -= var_5;
                    arr_82 [i_8] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_8))));
                    arr_83 [i_27] = ((/* implicit */unsigned short) var_11);
                }
            } 
        } 
    }
    for (unsigned short i_29 = 2; i_29 < 14; i_29 += 3) 
    {
        var_60 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)62)) : (((/* implicit */int) var_12))))) || (((/* implicit */_Bool) min(((unsigned short)65159), (((/* implicit */unsigned short) var_7)))))));
        var_61 = ((/* implicit */short) min(((-(var_9))), (((/* implicit */unsigned int) min((((/* implicit */short) var_7)), (var_8))))));
    }
    var_62 = ((/* implicit */unsigned char) var_9);
    var_63 = ((/* implicit */long long int) max((var_63), (((/* implicit */long long int) (-(((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) var_4)))))))));
}
