/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186853
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
    var_14 = ((/* implicit */unsigned short) var_11);
    var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)31683)))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 4) /* same iter space */
    {
        arr_3 [(unsigned short)8] [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (unsigned short)15)) : (var_3)))) : (max((16869492251478936999ULL), (((/* implicit */unsigned long long int) arr_0 [i_0])))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) min((arr_0 [i_0]), (arr_0 [i_0])))) - (((/* implicit */int) max(((signed char)112), ((signed char)-112)))))))));
        var_16 = ((/* implicit */unsigned short) max((max((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_0]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0])))))));
        arr_4 [(short)14] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)112))) <= (1577251822230614635ULL)));
        /* LoopSeq 4 */
        for (short i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) -3404495358323818317LL);
            arr_9 [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((long long int) (signed char)-114))), (min((((/* implicit */unsigned long long int) arr_6 [i_1 - 2] [i_1 + 2])), (((unsigned long long int) (signed char)-114))))));
            arr_10 [10] = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [6LL])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))) : ((-(3404495358323818317LL)))));
            var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)65528)))))));
        }
        for (unsigned long long int i_2 = 2; i_2 < 19; i_2 += 2) /* same iter space */
        {
            var_18 |= ((/* implicit */long long int) max((min((var_10), (((/* implicit */unsigned long long int) 1313716445U)))), (((/* implicit */unsigned long long int) var_1))));
            arr_14 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)-124)) ? (3404495358323818320LL) : (((/* implicit */long long int) 1313716445U)))) * (((/* implicit */long long int) ((/* implicit */int) (unsigned short)2)))))) ? ((+(((((/* implicit */_Bool) 16911943275495267139ULL)) ? (13618442538314294084ULL) : (arr_7 [i_2]))))) : (((/* implicit */unsigned long long int) ((int) 16869492251478936999ULL)))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned int i_3 = 0; i_3 < 21; i_3 += 4) 
            {
                var_19 = ((arr_7 [i_2 - 1]) / (arr_7 [i_3]));
                var_20 = ((int) (+(arr_11 [i_0])));
                /* LoopSeq 1 */
                for (signed char i_4 = 2; i_4 < 19; i_4 += 4) 
                {
                    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) 2994864239U))));
                    /* LoopSeq 2 */
                    for (unsigned short i_5 = 0; i_5 < 21; i_5 += 2) 
                    {
                        var_22 = ((/* implicit */signed char) arr_17 [i_0] [i_0]);
                        var_23 = ((/* implicit */unsigned long long int) (signed char)114);
                        var_24 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) 1534800798214284478ULL))) ? ((+(9223336852482686976LL))) : (((/* implicit */long long int) ((int) arr_11 [2ULL])))));
                        var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? ((+(((/* implicit */int) arr_0 [(unsigned short)15])))) : (((/* implicit */int) arr_13 [i_4] [i_3] [i_2])))))));
                    }
                    for (unsigned short i_6 = 1; i_6 < 20; i_6 += 2) 
                    {
                        arr_24 [i_0] [i_0] [i_3] [i_4] [i_6 - 1] [i_2] [i_6] = ((/* implicit */int) (~(((unsigned int) arr_16 [i_0]))));
                        arr_25 [i_6] [i_2] [i_2] [i_3] [i_3] [(unsigned short)10] [7ULL] = ((/* implicit */signed char) ((unsigned long long int) (+(((/* implicit */int) var_6)))));
                    }
                }
            }
            for (short i_7 = 2; i_7 < 20; i_7 += 2) 
            {
                /* LoopSeq 2 */
                for (signed char i_8 = 1; i_8 < 17; i_8 += 4) 
                {
                    var_26 = ((/* implicit */signed char) max((((/* implicit */long long int) arr_12 [i_2])), (((long long int) arr_2 [i_2 - 1] [i_8 + 1]))));
                    var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)13540)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-51))) : (13185548083421575222ULL))))));
                    arr_30 [i_0] [i_0] [i_0] [i_7] [i_8] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_2] [i_7])) ? (((unsigned long long int) ((((/* implicit */_Bool) arr_27 [i_0] [i_0])) ? (((/* implicit */int) (signed char)-105)) : (((/* implicit */int) arr_27 [1U] [1U]))))) : (((/* implicit */unsigned long long int) ((long long int) -3404495358323818318LL)))));
                }
                for (signed char i_9 = 0; i_9 < 21; i_9 += 4) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_10 = 1; i_10 < 17; i_10 += 4) 
                    {
                        var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) arr_1 [i_7]))) ? (arr_31 [i_7 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [(unsigned short)5] [i_2] [i_10])))));
                        var_29 += ((/* implicit */signed char) (!(((/* implicit */_Bool) 8202640872901683450LL))));
                    }
                    for (int i_11 = 0; i_11 < 21; i_11 += 4) 
                    {
                        arr_38 [i_0] [i_2 + 2] [i_7] [i_9] [i_9] [(short)18] [(short)18] = ((/* implicit */short) min((((unsigned int) arr_33 [i_7] [i_7 - 1] [i_7] [i_7] [i_7 + 1] [i_7])), (((/* implicit */unsigned int) ((short) 8202640872901683450LL)))));
                        arr_39 [i_0] [i_2] [i_7] = min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [(signed char)4] [i_7 - 1] [i_7] [i_2 - 2] [i_11] [i_7])) ? (((/* implicit */int) arr_19 [(short)20] [i_7 - 1] [(signed char)2] [i_2 - 2] [i_11] [8ULL])) : (((/* implicit */int) arr_19 [i_0] [i_7 - 1] [i_2] [i_2 - 2] [i_2 - 2] [i_0]))))), (arr_2 [i_0] [i_0]));
                    }
                    /* LoopSeq 3 */
                    for (unsigned long long int i_12 = 0; i_12 < 21; i_12 += 4) 
                    {
                        var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) (((!(((/* implicit */_Bool) arr_6 [i_2 - 2] [i_7 - 1])))) && (((/* implicit */_Bool) ((((/* implicit */int) (signed char)-2)) & (arr_6 [i_2 - 2] [i_7 - 2])))))))));
                        arr_42 [i_12] [i_9] [i_7] [i_0] [i_0] = ((/* implicit */int) ((min((((/* implicit */unsigned long long int) 1960109392)), (14ULL))) << (((/* implicit */int) (short)0))));
                        var_31 = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-112)) ? (((/* implicit */unsigned long long int) (-(((((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_0] [i_12]))) - (arr_11 [i_0])))))) : (min((18446744073709551601ULL), (((/* implicit */unsigned long long int) (signed char)-51))))));
                        var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((arr_7 [i_0]) >= (((/* implicit */unsigned long long int) arr_35 [i_0] [(short)11] [(short)11] [(short)11] [15LL])))))))) ? (((((/* implicit */int) (unsigned short)35766)) | (arr_34 [(signed char)16] [i_2] [i_7] [i_7] [i_9] [i_12] [12ULL]))) : (min((arr_34 [i_2] [i_2 - 2] [i_2] [i_2] [i_7 - 1] [i_2] [i_7]), (arr_34 [i_0] [i_0] [i_7] [i_7 + 1] [i_7 + 1] [i_7] [i_7 - 2]))))))));
                    }
                    for (long long int i_13 = 0; i_13 < 21; i_13 += 4) 
                    {
                        var_33 = ((((/* implicit */_Bool) 88670439)) ? (16911943275495267131ULL) : (16911943275495267138ULL));
                        var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) max((max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) arr_6 [i_0] [i_2])) : (arr_37 [7ULL] [7ULL] [i_9]))), (((/* implicit */unsigned long long int) min((var_1), (arr_22 [i_9] [i_2] [i_9])))))), (arr_23 [i_13] [i_2]))))));
                        var_35 -= ((/* implicit */unsigned short) (~(((/* implicit */int) max(((!(((/* implicit */_Bool) arr_1 [i_7])))), ((!(((/* implicit */_Bool) 18446744073709551615ULL)))))))));
                        arr_46 [i_9] [(unsigned short)19] [i_7] [i_9] [i_13] [i_9] = ((/* implicit */int) arr_16 [i_9]);
                    }
                    for (short i_14 = 0; i_14 < 21; i_14 += 2) 
                    {
                        var_36 = ((/* implicit */unsigned long long int) max((var_36), (((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) (+(arr_32 [i_14])))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_19 [i_0] [(short)8] [i_7 + 1] [i_7 - 1] [i_9] [i_14])) : (((/* implicit */int) arr_33 [i_2] [i_2] [i_2] [i_0] [i_14] [i_2])))) : (((((/* implicit */_Bool) arr_32 [i_0])) ? (((/* implicit */int) arr_22 [i_0] [i_2] [i_7])) : (233438234)))))))));
                        var_37 = ((/* implicit */unsigned short) min((var_37), (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-13973)) ? (((/* implicit */int) (unsigned short)26303)) : (((/* implicit */int) (unsigned short)26303))))), (min((((/* implicit */unsigned long long int) arr_17 [i_0] [i_9])), (arr_1 [i_0]))))))));
                        var_38 = ((/* implicit */signed char) min((var_38), ((signed char)0)));
                    }
                }
                var_39 ^= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65526))) < (18446744073709551601ULL)));
                /* LoopNest 2 */
                for (signed char i_15 = 0; i_15 < 21; i_15 += 4) 
                {
                    for (unsigned int i_16 = 4; i_16 < 20; i_16 += 1) 
                    {
                        {
                            var_40 = ((/* implicit */unsigned int) 18446744073709551603ULL);
                            var_41 = ((/* implicit */short) arr_2 [i_0] [i_15]);
                        }
                    } 
                } 
            }
            arr_53 [i_2 + 1] [i_2] [i_0] |= ((/* implicit */short) max((((/* implicit */unsigned long long int) min((arr_19 [i_0] [i_2] [i_0] [i_2 + 1] [i_2 - 2] [i_2 + 2]), (arr_33 [i_2 + 1] [i_2] [i_2 - 2] [i_2 - 1] [i_2 - 1] [i_2 + 2])))), (((arr_37 [i_2] [i_0] [i_0]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_0])))))));
            var_42 = ((/* implicit */unsigned long long int) max((var_42), (((((/* implicit */_Bool) ((max((18446744073709551603ULL), (((/* implicit */unsigned long long int) arr_20 [(unsigned short)18] [i_0] [i_0] [i_2 - 1] [i_2])))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))) ? (((min((((/* implicit */unsigned long long int) var_13)), (18446744073709551615ULL))) + (((/* implicit */unsigned long long int) ((int) arr_35 [i_0] [i_0] [i_2] [i_0] [20LL]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_26 [i_2 - 2])) ? (((/* implicit */int) arr_15 [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2 - 1])) : (((/* implicit */int) ((short) var_1))))))))));
        }
        for (unsigned long long int i_17 = 2; i_17 < 19; i_17 += 2) /* same iter space */
        {
            var_43 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_0] [i_0] [i_0] [i_17] [i_17 - 1] [i_17 + 1])) ? (((/* implicit */unsigned long long int) arr_35 [i_0] [i_17] [i_0] [i_17 - 2] [i_17 - 1])) : (max((680935262172228925ULL), (((/* implicit */unsigned long long int) (unsigned short)57294))))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (4294967295U)))), (((((/* implicit */_Bool) 18446744073709551603ULL)) ? (var_2) : (((/* implicit */unsigned long long int) var_12)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)51147)))));
            /* LoopNest 2 */
            for (unsigned long long int i_18 = 1; i_18 < 18; i_18 += 4) 
            {
                for (int i_19 = 0; i_19 < 21; i_19 += 2) 
                {
                    {
                        var_44 = ((/* implicit */unsigned short) arr_11 [i_18]);
                        var_45 = ((((max((((/* implicit */unsigned long long int) arr_54 [i_19] [i_0])), (arr_51 [i_18] [i_17 - 2] [i_17] [i_17] [i_17 - 1]))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)12074))))) % (((/* implicit */unsigned long long int) min((arr_49 [i_0] [(unsigned short)5] [20U] [20U] [i_18 + 2] [i_19]), (arr_49 [i_0] [(signed char)2] [i_17 + 2] [i_18] [i_18] [i_19])))));
                    }
                } 
            } 
        }
        for (unsigned long long int i_20 = 2; i_20 < 19; i_20 += 2) /* same iter space */
        {
            var_46 = ((/* implicit */unsigned short) min((var_46), (((/* implicit */unsigned short) ((signed char) max((arr_48 [i_20 - 2] [i_20 - 1] [i_20 - 1] [i_20 + 2] [i_20] [i_20 + 1]), (arr_48 [i_20] [i_20 + 1] [i_20] [i_20] [20] [i_20 + 2])))))));
            var_47 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)37803)) ? (-9223336852482686972LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))))) ? (((/* implicit */int) min(((signed char)3), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_54 [i_20] [i_20])))))))) : (((((/* implicit */_Bool) arr_21 [i_20 + 2] [i_20 + 2])) ? (((/* implicit */int) arr_21 [i_20 + 1] [i_20 - 1])) : (((/* implicit */int) arr_21 [i_20 + 2] [i_20 - 1]))))));
            var_48 = ((/* implicit */unsigned short) 3404495358323818335LL);
        }
    }
    for (unsigned short i_21 = 0; i_21 < 21; i_21 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_22 = 2; i_22 < 20; i_22 += 2) 
        {
            arr_70 [i_22] = max((max((((/* implicit */long long int) (~(arr_2 [i_21] [i_21])))), ((-(-2366650866375081480LL))))), (arr_67 [i_21]));
            var_49 = ((/* implicit */signed char) max((var_49), (((/* implicit */signed char) ((unsigned short) (!(((/* implicit */_Bool) min((arr_51 [i_21] [i_22] [i_22] [i_22] [i_21]), (37ULL))))))))));
            var_50 = max((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -9223336852482686976LL)) ? (((/* implicit */int) (short)-12073)) : (((/* implicit */int) (short)-27101))))), (((((/* implicit */_Bool) (signed char)127)) ? (281474976710655ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)13))))))), (((/* implicit */unsigned long long int) arr_56 [i_22])));
        }
        /* LoopNest 2 */
        for (long long int i_23 = 0; i_23 < 21; i_23 += 4) 
        {
            for (signed char i_24 = 0; i_24 < 21; i_24 += 1) 
            {
                {
                    var_51 = ((/* implicit */unsigned long long int) min((var_51), (((/* implicit */unsigned long long int) (~(max(((+(((/* implicit */int) arr_26 [i_21])))), (((/* implicit */int) ((short) (signed char)-122))))))))));
                    /* LoopNest 2 */
                    for (short i_25 = 0; i_25 < 21; i_25 += 2) 
                    {
                        for (unsigned short i_26 = 0; i_26 < 21; i_26 += 2) 
                        {
                            {
                                var_52 = min((max((arr_47 [i_21] [i_23] [i_24] [i_24] [i_25] [i_24]), (min((((/* implicit */unsigned long long int) arr_81 [i_21] [i_21] [(signed char)0] [7] [i_25] [i_26])), (6407933580157472710ULL))))), (max((((/* implicit */unsigned long long int) min((714826164U), (((/* implicit */unsigned int) (signed char)-51))))), (((((/* implicit */_Bool) 6349851373783619910ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3))) : (13205941239319622434ULL))))));
                                arr_83 [i_23] [i_25] [i_24] [i_24] [i_23] [i_23] [i_21] = ((/* implicit */unsigned long long int) -5086804473309313095LL);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
