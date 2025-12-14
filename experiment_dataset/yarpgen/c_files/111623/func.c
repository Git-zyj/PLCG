/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111623
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
    var_18 = ((/* implicit */short) var_4);
    var_19 -= (+(min((((/* implicit */unsigned int) var_5)), (((((/* implicit */unsigned int) var_7)) | (var_16))))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 17; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            {
                var_20 -= ((/* implicit */signed char) max(((+(var_2))), (((/* implicit */long long int) ((((((/* implicit */int) var_15)) + (((/* implicit */int) (unsigned char)159)))) << (((max((((/* implicit */long long int) arr_0 [i_1])), (10434529663821383LL))) - (10434529663821374LL))))))));
                arr_5 [i_0 + 1] [i_0] [i_0] = ((/* implicit */_Bool) arr_1 [i_0]);
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_2 = 3; i_2 < 21; i_2 += 4) 
    {
        var_21 -= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2])) ? (var_6) : (((/* implicit */long long int) var_10))))) ? (((/* implicit */int) ((unsigned short) arr_6 [i_2]))) : (((int) 4689391499049291692LL)))) >= (var_7)));
        var_22 = ((/* implicit */long long int) min((var_22), (((((((arr_7 [i_2]) && (arr_7 [i_2]))) ? (((/* implicit */long long int) var_4)) : (((((/* implicit */_Bool) var_1)) ? (var_6) : (((/* implicit */long long int) var_7)))))) | (((max((arr_6 [i_2]), (((/* implicit */long long int) var_1)))) | (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_7))))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_23 &= ((/* implicit */int) ((_Bool) arr_8 [i_2 - 2] [6]));
            arr_11 [i_2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_2 + 2] [i_2 + 2])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_14)) : (var_7)))) : (var_2)));
            var_24 &= ((/* implicit */unsigned short) arr_9 [i_2 + 1] [i_3]);
            var_25 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_5))));
        }
        /* vectorizable */
        for (signed char i_4 = 0; i_4 < 23; i_4 += 1) 
        {
            var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((arr_13 [(signed char)16]) == (((/* implicit */long long int) arr_8 [i_2] [0U])))))));
            arr_14 [i_4] [8ULL] &= ((/* implicit */int) (((+(arr_13 [2U]))) & (((/* implicit */long long int) arr_8 [i_2] [(unsigned char)22]))));
            /* LoopSeq 1 */
            for (unsigned char i_5 = 0; i_5 < 23; i_5 += 4) 
            {
                /* LoopSeq 2 */
                for (long long int i_6 = 1; i_6 < 22; i_6 += 4) 
                {
                    var_27 ^= ((/* implicit */signed char) arr_18 [i_2] [i_2] [i_5] [i_2]);
                    arr_21 [i_2] [i_2] [i_2] [i_6 - 1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) var_10)) >= ((~(var_11)))));
                    var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) (unsigned char)96))) || (((/* implicit */_Bool) arr_17 [i_2] [i_2] [i_5] [i_6 - 1])))))));
                }
                for (int i_7 = 0; i_7 < 23; i_7 += 4) 
                {
                    var_29 = ((/* implicit */int) ((unsigned int) arr_9 [i_2 - 3] [i_2]));
                    arr_26 [i_2 + 1] [i_2] [i_5] = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_16 [i_2] [i_4] [i_2])) ? (((/* implicit */int) arr_16 [i_4] [i_5] [i_2])) : (((/* implicit */int) var_12)))));
                    arr_27 [i_5] [i_4] &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_25 [i_2] [i_2] [i_5] [i_7] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)2))) : (arr_25 [i_2 + 2] [i_2 + 2] [i_2] [i_2 - 3] [i_2 + 2])));
                    var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) arr_6 [i_2]))));
                }
                /* LoopSeq 3 */
                for (long long int i_8 = 0; i_8 < 23; i_8 += 4) 
                {
                    arr_30 [i_2] [i_8] [i_2] [i_4] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) arr_10 [i_2] [i_2] [i_2 + 1])) == (((((/* implicit */int) var_15)) & (var_7)))));
                    /* LoopSeq 2 */
                    for (short i_9 = 0; i_9 < 23; i_9 += 4) 
                    {
                        var_31 = ((int) var_17);
                        var_32 += ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)82))));
                    }
                    for (unsigned char i_10 = 0; i_10 < 23; i_10 += 4) 
                    {
                        var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (var_3) : (((/* implicit */unsigned int) var_10))))))))));
                        var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) arr_25 [i_2] [i_2] [i_2] [i_8] [i_2]))));
                        var_35 += ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_10 [i_2] [i_2] [i_5])) : (((/* implicit */int) ((var_16) >= (var_16))))));
                    }
                }
                for (unsigned char i_11 = 0; i_11 < 23; i_11 += 1) /* same iter space */
                {
                    var_36 = ((/* implicit */unsigned long long int) var_0);
                    /* LoopSeq 4 */
                    for (int i_12 = 3; i_12 < 21; i_12 += 4) 
                    {
                        arr_42 [i_2] = ((/* implicit */unsigned int) (((+(((/* implicit */int) arr_10 [i_2] [i_4] [i_2])))) << (((((((((/* implicit */long long int) ((/* implicit */int) var_5))) | (var_6))) + (636671935123812413LL))) - (12LL)))));
                        var_37 = ((/* implicit */unsigned long long int) min((var_37), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)4)) ? (((/* implicit */int) arr_39 [i_2 - 1] [i_2 - 1] [i_5] [i_5] [i_11] [i_12 + 1])) : (((/* implicit */int) var_1)))))));
                        var_38 = ((/* implicit */signed char) (+(((/* implicit */int) arr_31 [i_2 - 2] [i_12 + 1] [i_5] [i_5] [i_2]))));
                        var_39 = (i_2 % 2 == 0) ? (((/* implicit */signed char) ((arr_24 [i_2 - 3] [i_2] [i_2] [i_2 - 3]) << (((((arr_9 [i_4] [i_4]) + (4610763170669054985LL))) - (2LL)))))) : (((/* implicit */signed char) ((((arr_24 [i_2 - 3] [i_2] [i_2] [i_2 - 3]) + (9223372036854775807LL))) << (((((arr_9 [i_4] [i_4]) + (4610763170669054985LL))) - (2LL))))));
                    }
                    for (long long int i_13 = 0; i_13 < 23; i_13 += 1) 
                    {
                        var_40 = ((/* implicit */int) ((unsigned int) ((var_11) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)158))))));
                        var_41 = ((/* implicit */unsigned short) ((long long int) var_0));
                        var_42 = ((/* implicit */unsigned short) min((var_42), (((/* implicit */unsigned short) ((((/* implicit */int) arr_20 [i_5])) & (((((/* implicit */int) arr_31 [i_2] [i_4] [i_2] [i_2] [i_5])) << (((18446744073709551615ULL) - (18446744073709551592ULL))))))))));
                        var_43 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)101)) || (((/* implicit */_Bool) arr_8 [i_2 - 2] [i_2]))));
                        var_44 = ((/* implicit */unsigned long long int) ((signed char) arr_35 [i_2] [i_2] [i_2 - 3] [i_2 + 2]));
                    }
                    for (unsigned int i_14 = 1; i_14 < 20; i_14 += 1) 
                    {
                        var_45 = ((/* implicit */short) ((var_0) + (((/* implicit */int) ((signed char) var_5)))));
                        arr_48 [i_2] [i_4] [i_2] [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_45 [i_14 + 2] [i_2]))));
                    }
                    for (int i_15 = 0; i_15 < 23; i_15 += 1) 
                    {
                        arr_51 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_31 [i_2] [i_2] [i_2] [i_2] [i_2]))))) ? (arr_13 [i_2]) : (arr_25 [i_2] [i_4] [i_5] [i_5] [i_5])));
                        arr_52 [i_2 - 1] [i_2] [i_2] = ((/* implicit */unsigned int) (!(arr_7 [i_15])));
                        var_46 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((signed char) var_3)))));
                    }
                    /* LoopSeq 2 */
                    for (int i_16 = 0; i_16 < 23; i_16 += 4) 
                    {
                        var_47 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 5146298964279130761ULL)) || (((/* implicit */_Bool) 1270565963U)))) ? (var_4) : (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
                        arr_55 [i_2] [i_4] [i_2] [i_11] [i_2] = ((/* implicit */short) var_8);
                    }
                    for (unsigned short i_17 = 0; i_17 < 23; i_17 += 4) 
                    {
                        var_48 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_50 [i_2] [i_11] [i_11] [i_5] [i_4] [i_2])) << (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) : (((((/* implicit */_Bool) var_9)) ? (var_17) : (((/* implicit */long long int) var_3))))));
                        var_49 = ((/* implicit */int) max((var_49), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_56 [i_2] [i_2] [i_2 - 2] [i_2 - 3] [i_2]))) & (2072952272U))))));
                        arr_59 [i_4] [i_2] [i_4] [i_11] [i_4] [i_11] [i_4] = (~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) arr_7 [i_2 + 1])))));
                    }
                    var_50 = ((/* implicit */int) min((var_50), (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_45 [i_2] [i_5])) ? (((/* implicit */int) var_5)) : (var_7)))) >= (((((/* implicit */_Bool) var_3)) ? (var_2) : (((/* implicit */long long int) var_10)))))))));
                }
                for (unsigned char i_18 = 0; i_18 < 23; i_18 += 1) /* same iter space */
                {
                    var_51 = ((/* implicit */signed char) ((((/* implicit */int) arr_61 [i_2 - 3] [i_4] [i_4] [i_2 - 3])) | (((/* implicit */int) arr_61 [i_2 - 1] [i_4] [i_2 - 1] [i_2 - 1]))));
                    var_52 = ((/* implicit */short) ((unsigned short) (!(((/* implicit */_Bool) var_14)))));
                    arr_62 [i_2] [i_2] [i_2] = ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_13)) == (((/* implicit */int) arr_16 [i_2] [i_4] [i_2])))))) & (((((/* implicit */_Bool) 17143657491621169875ULL)) ? (((/* implicit */unsigned int) arr_49 [i_2] [i_2] [i_2])) : (var_16))));
                }
            }
            /* LoopNest 2 */
            for (short i_19 = 0; i_19 < 23; i_19 += 4) 
            {
                for (signed char i_20 = 0; i_20 < 23; i_20 += 4) 
                {
                    {
                        arr_69 [i_2 + 1] [i_2 + 1] [i_2] [i_20] [i_2] [i_20] = ((/* implicit */int) var_13);
                        var_53 = ((((/* implicit */long long int) (+(((/* implicit */int) var_12))))) >= (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)43491))) & (var_2))));
                    }
                } 
            } 
            arr_70 [i_2] = ((/* implicit */signed char) (+(((/* implicit */int) var_8))));
        }
    }
    for (unsigned int i_21 = 0; i_21 < 10; i_21 += 4) 
    {
        var_54 = ((/* implicit */unsigned int) ((8388265648609473371ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
        arr_73 [i_21] [i_21] = ((/* implicit */short) max((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_21] [i_21] [i_21] [i_21])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_47 [i_21] [i_21] [i_21] [i_21])))) || (((/* implicit */_Bool) max((var_6), (((/* implicit */long long int) arr_46 [i_21] [i_21] [i_21] [i_21] [i_21])))))))), (((((/* implicit */int) min((arr_31 [i_21] [i_21] [i_21] [i_21] [i_21]), (arr_17 [i_21] [i_21] [i_21] [i_21])))) << ((((~(((/* implicit */int) var_9)))) - (99)))))));
        arr_74 [i_21] [i_21] = ((/* implicit */short) ((int) var_5));
        var_55 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned char) (!(arr_46 [i_21] [i_21] [i_21] [i_21] [i_21])))))));
    }
    /* LoopSeq 4 */
    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
    {
        var_56 = ((/* implicit */signed char) ((var_8) ? (((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) arr_68 [i_22] [i_22] [i_22] [i_22] [i_22] [i_22]))))) : (((/* implicit */int) arr_45 [i_22] [22]))));
        var_57 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_36 [i_22] [i_22] [i_22] [i_22])) || (((/* implicit */_Bool) ((signed char) var_6)))));
        arr_78 [i_22] = ((/* implicit */unsigned long long int) arr_46 [i_22] [22] [i_22] [i_22] [i_22]);
        var_58 += ((/* implicit */unsigned short) arr_50 [i_22] [i_22] [i_22] [i_22] [i_22] [12U]);
    }
    /* vectorizable */
    for (unsigned int i_23 = 0; i_23 < 20; i_23 += 4) 
    {
        arr_82 [i_23] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)43488)) / (((/* implicit */int) (unsigned short)64677))))) || (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)43491)) | (arr_35 [i_23] [i_23] [i_23] [i_23]))))));
        arr_83 [i_23] = (!(((/* implicit */_Bool) arr_32 [i_23] [i_23] [i_23] [i_23] [i_23] [i_23])));
    }
    for (int i_24 = 0; i_24 < 11; i_24 += 1) 
    {
        var_59 = ((/* implicit */unsigned int) max((var_59), (((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */long long int) var_3)) != ((~(arr_77 [i_24])))))))))));
        arr_87 [i_24] = ((/* implicit */signed char) (-((((+(var_17))) | (((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_24])))))))));
        arr_88 [i_24] [i_24] = max((((((var_11) | (((/* implicit */unsigned int) ((/* implicit */int) var_14))))) | (((/* implicit */unsigned int) ((int) arr_79 [i_24]))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 3945936908U))))));
        var_60 += ((/* implicit */short) min((((/* implicit */long long int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_17))))), (((((/* implicit */_Bool) 7171244288677172011LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_32 [i_24] [i_24] [i_24] [i_24] [i_24] [i_24])))))), (((((/* implicit */_Bool) arr_47 [i_24] [i_24] [i_24] [i_24])) ? (arr_47 [i_24] [i_24] [i_24] [i_24]) : (arr_47 [i_24] [i_24] [i_24] [i_24])))));
        var_61 = ((/* implicit */long long int) ((short) ((arr_47 [i_24] [i_24] [i_24] [i_24]) | (((/* implicit */long long int) ((/* implicit */int) var_5))))));
    }
    for (int i_25 = 1; i_25 < 19; i_25 += 4) 
    {
        arr_92 [i_25] [i_25] = ((/* implicit */unsigned int) -15);
        var_62 &= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((arr_38 [i_25] [i_25 - 1] [i_25 - 1] [i_25 - 1] [i_25 + 1]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_25] [i_25 + 2] [i_25 + 2] [i_25 + 2] [i_25 + 2]))) : (var_11)))) | (max((var_6), (((/* implicit */long long int) arr_38 [i_25] [i_25 + 1] [i_25] [i_25 + 1] [i_25 + 2]))))));
    }
}
