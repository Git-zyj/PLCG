/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1842
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
    var_19 -= ((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned char)255)), (max((((/* implicit */int) max(((short)32762), ((short)-32743)))), (((((/* implicit */int) (unsigned char)0)) - (((/* implicit */int) (short)-32763))))))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            var_20 = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) ((((/* implicit */int) var_8)) > (((/* implicit */int) (short)5202))))) & (((/* implicit */int) max((((/* implicit */short) (unsigned char)20)), ((short)12))))))));
            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */_Bool) max(((~(arr_1 [i_0] [i_1 + 1]))), (((0ULL) / (var_9)))))) ? (arr_0 [i_1 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0])))))))))));
        }
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 16; i_2 += 3) 
        {
            arr_8 [i_2] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-5214))));
            var_22 ^= min(((-(arr_4 [i_0] [i_0] [i_2]))), (((/* implicit */unsigned long long int) max((((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) < (var_9)))), (var_12)))));
            var_23 |= max((min((arr_2 [i_2]), (arr_2 [i_0]))), (max((((/* implicit */unsigned long long int) arr_3 [i_2] [i_0])), (arr_2 [i_0]))));
            /* LoopNest 2 */
            for (short i_3 = 0; i_3 < 16; i_3 += 4) 
            {
                for (short i_4 = 3; i_4 < 15; i_4 += 3) 
                {
                    {
                        var_24 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((short) arr_14 [i_3] [i_4] [i_4 + 1] [i_4 + 1] [i_3])))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_5 = 1; i_5 < 14; i_5 += 4) /* same iter space */
                        {
                            arr_19 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_18 [i_4] [i_4] [i_4] [i_4 - 1] [i_4] [i_4] [i_4 - 1]), (((unsigned long long int) var_1))))) ? (((min((((/* implicit */unsigned long long int) (short)10301)), (arr_15 [i_5] [(short)6] [i_2] [i_0]))) >> ((((+(((/* implicit */int) (unsigned char)255)))) - (240))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)242))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255))))) : (((/* implicit */int) max(((unsigned char)242), (var_14)))))))));
                            var_25 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) 262143ULL))) ? (min((arr_1 [i_5 + 2] [i_4 - 1]), (arr_1 [i_5 + 1] [i_4 - 2]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_5 + 1] [i_4 - 3])) ? (((/* implicit */int) (short)-16575)) : (((/* implicit */int) (unsigned char)250)))))));
                            var_26 = ((/* implicit */short) arr_15 [(short)4] [i_3] [i_4] [i_5 - 1]);
                        }
                        for (unsigned long long int i_6 = 1; i_6 < 14; i_6 += 4) /* same iter space */
                        {
                            var_27 = ((/* implicit */short) var_6);
                            var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)16))))) ^ ((~(max((arr_18 [i_6 + 2] [i_2] [(short)5] [i_3] [i_4 - 1] [i_6] [i_4 - 1]), (arr_12 [i_0] [i_3] [11ULL]))))))))));
                        }
                    }
                } 
            } 
        }
        var_29 *= ((/* implicit */unsigned long long int) (short)41);
        arr_22 [(short)14] |= min((1152886320234758144ULL), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) ((((/* implicit */_Bool) 262143ULL)) && (((/* implicit */_Bool) (short)-1))))), ((unsigned char)65)))));
        arr_23 [i_0] = ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_0]))) >= (arr_0 [i_0]))) ? ((((~(arr_4 [7ULL] [i_0] [i_0]))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-32762)) + (((/* implicit */int) var_7))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) max((arr_20 [i_0] [i_0] [i_0]), ((short)12)))))));
    }
    /* vectorizable */
    for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 2) 
    {
        var_30 |= var_5;
        /* LoopNest 2 */
        for (short i_8 = 1; i_8 < 7; i_8 += 2) 
        {
            for (unsigned long long int i_9 = 1; i_9 < 8; i_9 += 3) 
            {
                {
                    var_31 = var_11;
                    var_32 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_5 [i_8] [i_9])) ? (arr_27 [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)59))))) >= (arr_28 [i_8] [i_8] [i_7] [i_8])));
                    arr_32 [i_7] [i_8] [8ULL] = ((/* implicit */short) 12349725875152425802ULL);
                    var_33 |= ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)250)) >> (((12349725875152425804ULL) - (12349725875152425801ULL)))));
                }
            } 
        } 
        var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_14 [i_7] [i_7] [i_7] [i_7] [i_7])))) == (((unsigned long long int) arr_29 [9ULL] [i_7] [i_7])))))));
    }
    for (unsigned long long int i_10 = 0; i_10 < 20; i_10 += 2) 
    {
        var_35 = ((/* implicit */short) min((var_35), (((/* implicit */short) arr_34 [i_10]))));
        /* LoopSeq 1 */
        for (unsigned char i_11 = 0; i_11 < 20; i_11 += 1) 
        {
            var_36 = ((/* implicit */short) min((var_36), (((short) max((14061006173706218301ULL), (9002801208229888ULL))))));
            /* LoopSeq 4 */
            for (short i_12 = 0; i_12 < 20; i_12 += 3) 
            {
                arr_41 [i_11] [i_11] [6ULL] [i_11] = ((((unsigned long long int) ((arr_38 [i_10] [i_10] [i_10]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_11])))))) >> (((min((max((18437741272501321739ULL), (((/* implicit */unsigned long long int) arr_40 [i_10] [i_11] [(unsigned char)18])))), (((/* implicit */unsigned long long int) (short)13562)))) - (13534ULL))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_13 = 1; i_13 < 17; i_13 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_14 = 0; i_14 < 20; i_14 += 2) 
                    {
                        var_37 = ((/* implicit */unsigned long long int) (short)-1);
                        var_38 = ((/* implicit */short) (+(((/* implicit */int) (unsigned char)7))));
                    }
                    for (unsigned char i_15 = 1; i_15 < 17; i_15 += 1) 
                    {
                        var_39 = ((short) ((((/* implicit */_Bool) arr_48 [i_15] [(unsigned char)12] [i_12] [i_11] [(unsigned char)8])) ? (((/* implicit */int) arr_44 [i_10] [i_10] [i_10] [(short)18] [i_10])) : (((/* implicit */int) (unsigned char)90))));
                        var_40 = ((/* implicit */unsigned long long int) min((var_40), (((/* implicit */unsigned long long int) ((unsigned char) arr_48 [i_13 - 1] [i_13 - 1] [18ULL] [i_15 + 1] [i_15])))));
                    }
                    arr_50 [i_13] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_48 [i_13 + 1] [i_13 - 1] [i_13] [i_13 - 1] [(unsigned char)5])) >= (((/* implicit */int) arr_42 [i_13] [i_13 - 1] [i_13] [i_13 + 2]))));
                    arr_51 [i_13] = arr_42 [i_13] [i_13] [i_13 + 1] [(short)1];
                    /* LoopSeq 1 */
                    for (unsigned char i_16 = 0; i_16 < 20; i_16 += 3) 
                    {
                        var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1755864375486653046ULL)) ? (((/* implicit */int) (short)-5202)) : (((/* implicit */int) (unsigned char)236))))) >= (((((/* implicit */_Bool) (unsigned char)192)) ? (arr_45 [i_13] [i_13 + 1] [i_13] [6ULL] [(short)2] [i_11] [i_13]) : (5903379946592103025ULL)))));
                        var_42 -= ((((/* implicit */_Bool) ((unsigned long long int) (unsigned char)30))) ? (((((/* implicit */_Bool) var_15)) ? (var_18) : (12032018803336427547ULL))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)20934))) : (var_6))));
                        var_43 += ((/* implicit */unsigned long long int) arr_48 [i_11] [i_11] [i_12] [i_12] [i_13 - 1]);
                    }
                }
                arr_55 [i_10] [i_11] = min((((min((((/* implicit */unsigned long long int) (unsigned char)255)), (13289779887365589333ULL))) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_10]))))), (((((((/* implicit */_Bool) var_18)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_12]))))) / (max((1016189941983726345ULL), (((/* implicit */unsigned long long int) var_16)))))));
            }
            /* vectorizable */
            for (short i_17 = 0; i_17 < 20; i_17 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_18 = 0; i_18 < 20; i_18 += 4) 
                {
                    var_44 = ((/* implicit */unsigned long long int) min((var_44), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)8188)))))));
                    var_45 -= ((unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (5903379946592103007ULL)));
                    /* LoopSeq 1 */
                    for (short i_19 = 2; i_19 < 19; i_19 += 3) 
                    {
                        var_46 = ((/* implicit */short) 18213887646709071600ULL);
                        var_47 = ((/* implicit */short) min((var_47), (((/* implicit */short) ((arr_45 [i_10] [i_11] [i_17] [i_19 - 1] [i_11] [(short)18] [(unsigned char)14]) == (((((/* implicit */_Bool) var_16)) ? (14011868092804418647ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)47))))))))));
                        arr_63 [i_19] [i_11] [i_11] [i_18] = ((/* implicit */short) ((((/* implicit */int) arr_37 [i_10] [i_11] [i_17])) % (((/* implicit */int) arr_37 [i_19 - 1] [i_18] [i_17]))));
                    }
                    var_48 = ((/* implicit */short) ((((/* implicit */int) arr_48 [i_18] [i_17] [i_10] [i_10] [i_10])) + (((/* implicit */int) arr_48 [i_18] [i_17] [i_11] [i_11] [i_10]))));
                    var_49 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 9002801208229903ULL))));
                }
                for (short i_20 = 4; i_20 < 16; i_20 += 3) 
                {
                    /* LoopSeq 3 */
                    for (short i_21 = 0; i_21 < 20; i_21 += 2) 
                    {
                        var_50 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_37 [i_20 + 4] [i_20 + 2] [i_20 + 1]))));
                        var_51 *= ((/* implicit */unsigned char) ((((3ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [i_11] [i_17] [i_20] [i_21]))))) ? (232856427000480015ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_20 + 4])))));
                        var_52 -= ((/* implicit */unsigned char) (+((~(((/* implicit */int) var_14))))));
                        arr_68 [i_10] [(unsigned char)4] [i_20] [i_21] = ((/* implicit */short) var_17);
                        var_53 = ((/* implicit */unsigned long long int) max((var_53), (((((/* implicit */_Bool) arr_65 [i_20 + 2] [i_11])) ? (((((/* implicit */_Bool) 3674719875183026793ULL)) ? (14772024198526524822ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)510))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
                    }
                    for (short i_22 = 1; i_22 < 19; i_22 += 3) 
                    {
                        var_54 += ((/* implicit */unsigned char) arr_49 [i_20 - 4] [i_20 - 2] [i_20 + 3] [i_20 - 1] [i_20] [i_20] [i_20 + 3]);
                        var_55 = ((/* implicit */unsigned long long int) max((var_55), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-16427)))))));
                    }
                    for (unsigned long long int i_23 = 3; i_23 < 17; i_23 += 2) 
                    {
                        arr_73 [(short)12] [i_23] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((short) 4997638315087912809ULL)))));
                        arr_74 [i_10] [(unsigned char)15] [i_17] [i_23] [i_23] = ((short) ((((/* implicit */_Bool) (short)-11899)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_7))));
                    }
                    var_56 -= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_67 [i_20 - 1]))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_24 = 0; i_24 < 20; i_24 += 3) 
                    {
                        var_57 = ((/* implicit */short) (~(((/* implicit */int) (short)2047))));
                        var_58 = ((/* implicit */short) 18446744073709551612ULL);
                        var_59 = ((/* implicit */unsigned char) max((var_59), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)31)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_7))))))))));
                        var_60 = ((/* implicit */unsigned long long int) min((var_60), (((unsigned long long int) var_13))));
                    }
                    var_61 = ((/* implicit */short) ((unsigned char) arr_49 [i_20 - 3] [i_20 - 2] [i_20] [i_20] [i_20 + 2] [i_20] [i_20 - 4]));
                }
                var_62 = var_18;
            }
            for (short i_25 = 0; i_25 < 20; i_25 += 3) 
            {
                arr_80 [i_10] [i_11] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((14772024198526524823ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)23))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)95))))))) % (((unsigned long long int) arr_48 [i_10] [(short)15] [i_25] [i_10] [i_10]))));
                arr_81 [i_25] [i_11] [i_10] [i_10] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned char) min((4660138397152091027ULL), (((/* implicit */unsigned long long int) (unsigned char)30))))))));
                var_63 = (+(var_15));
            }
            /* vectorizable */
            for (short i_26 = 0; i_26 < 20; i_26 += 2) 
            {
                var_64 = var_1;
                arr_85 [i_26] = ((/* implicit */short) (+(((((/* implicit */_Bool) 6140553435234588769ULL)) ? (15930990177613045602ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767)))))));
                var_65 = (short)21335;
            }
        }
    }
    for (unsigned long long int i_27 = 0; i_27 < 16; i_27 += 4) 
    {
        var_66 ^= ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) max(((short)-20063), ((short)1516))))))) ? (((/* implicit */int) max((min((((/* implicit */short) (unsigned char)29)), (arr_14 [i_27] [(unsigned char)10] [i_27] [i_27] [i_27]))), (((short) var_16))))) : (((/* implicit */int) (short)16418))));
        arr_89 [i_27] = ((/* implicit */unsigned long long int) arr_42 [i_27] [i_27] [i_27] [i_27]);
        var_67 *= (-(arr_6 [i_27] [i_27]));
        arr_90 [i_27] = ((/* implicit */unsigned long long int) max(((unsigned char)30), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) 18145203746410787318ULL)))))));
    }
}
