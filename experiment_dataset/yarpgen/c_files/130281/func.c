/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130281
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
    var_19 = ((long long int) ((_Bool) var_16));
    var_20 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) 15ULL))) ? (((/* implicit */int) ((short) (unsigned char)72))) : (((((/* implicit */_Bool) 905774164)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_6))))))) + (min((((/* implicit */unsigned int) var_14)), ((-(3221225472U)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 18; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */long long int) ((unsigned char) max((min((((/* implicit */unsigned short) arr_4 [i_0] [i_1] [i_1 + 2])), ((unsigned short)61848))), (((/* implicit */unsigned short) ((_Bool) arr_1 [i_0]))))));
                var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((unsigned short) max((var_9), (((/* implicit */unsigned int) arr_0 [i_0]))))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 4; i_2 < 16; i_2 += 4) 
                {
                    arr_9 [(unsigned char)18] [i_1 - 3] = ((/* implicit */unsigned short) ((unsigned int) (short)1411));
                    arr_10 [i_0] [16LL] [i_2] [i_2] = max((((/* implicit */int) arr_0 [(signed char)7])), ((~(min((((/* implicit */int) arr_8 [i_0])), (-712539799))))));
                }
                var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((((/* implicit */int) max((arr_7 [(_Bool)1] [i_1] [i_1 - 2]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_8)))))))) / (((((_Bool) arr_0 [i_1])) ? (((/* implicit */int) ((_Bool) arr_8 [11ULL]))) : (var_2))))))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned int) var_12);
    /* LoopSeq 1 */
    for (unsigned char i_3 = 1; i_3 < 9; i_3 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_4 = 1; i_4 < 7; i_4 += 1) 
        {
            /* LoopSeq 2 */
            for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
            {
                var_25 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_3] [i_3] [(unsigned char)1])) % (((/* implicit */int) arr_3 [i_3 + 1] [i_4] [i_5 + 1]))));
                arr_18 [i_4] = ((/* implicit */short) ((int) var_10));
                arr_19 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) & ((+(arr_2 [i_3] [i_4])))));
            }
            for (int i_6 = 0; i_6 < 10; i_6 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_7 = 0; i_7 < 10; i_7 += 4) /* same iter space */
                {
                    var_26 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_25 [i_4 + 2] [i_3 - 1])) == (((/* implicit */int) arr_25 [i_4 + 2] [i_3 - 1]))));
                    arr_27 [i_4] [i_4] = (signed char)37;
                }
                for (unsigned char i_8 = 0; i_8 < 10; i_8 += 4) /* same iter space */
                {
                    var_27 -= ((/* implicit */unsigned short) ((0U) >> (((((/* implicit */int) (_Bool)1)) >> (((arr_5 [i_6] [i_6] [15ULL] [i_8]) - (3905013279888071288LL)))))));
                    var_28 -= ((/* implicit */unsigned char) arr_20 [i_3] [i_4] [i_6] [3U]);
                }
                var_29 += ((/* implicit */_Bool) (((-(((/* implicit */int) (unsigned char)156)))) / (((/* implicit */int) ((unsigned char) arr_7 [i_3] [i_4] [i_4 - 1])))));
                arr_30 [i_4] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) arr_26 [i_3 - 1] [i_3 - 1] [i_4 + 2])) ? (arr_26 [i_3 - 1] [i_3 - 1] [i_4 + 2]) : (arr_26 [i_3 - 1] [i_3 + 1] [i_4 - 1])));
                /* LoopSeq 3 */
                for (unsigned int i_9 = 0; i_9 < 10; i_9 += 1) 
                {
                    var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -712539784)) ? (1171003595) : (((/* implicit */int) arr_25 [i_6] [i_9]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)0)) ? (4294967284U) : (((/* implicit */unsigned int) ((/* implicit */int) var_17)))))) : (((long long int) var_7))));
                    arr_34 [i_4] [i_3] [5LL] [(unsigned short)0] [1U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_24 [i_3 + 1] [i_4] [i_6] [i_9] [i_3 + 1] [i_4]) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)60287)))))) ? (((unsigned long long int) 3719981719U)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)7198)) ? (arr_13 [4ULL] [i_9]) : (((/* implicit */long long int) 1171003591)))))));
                }
                for (unsigned short i_10 = 0; i_10 < 10; i_10 += 4) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_11 = 4; i_11 < 7; i_11 += 3) 
                    {
                        arr_39 [i_3] [i_4] [i_6] [i_6] = ((/* implicit */signed char) arr_13 [i_4 + 3] [8LL]);
                        var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(var_3)))) ? (((((/* implicit */_Bool) var_2)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_3]))))) : (((/* implicit */unsigned int) ((((/* implicit */int) (short)18513)) | (((/* implicit */int) (short)-1435)))))));
                    }
                    for (unsigned char i_12 = 0; i_12 < 10; i_12 += 4) 
                    {
                        var_32 = ((/* implicit */unsigned char) (-((+(1171003595)))));
                        var_33 = ((/* implicit */_Bool) (short)29138);
                        var_34 = ((/* implicit */_Bool) 0U);
                        var_35 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_3])) ? (12225402699926773968ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))) || ((!(((/* implicit */_Bool) arr_8 [i_3]))))));
                    }
                    /* LoopSeq 3 */
                    for (short i_13 = 1; i_13 < 6; i_13 += 3) 
                    {
                        arr_47 [i_3] [i_4] [i_6] [i_4] [i_13] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_10)) ? (arr_5 [i_3] [i_4] [i_4] [i_10]) : (arr_5 [(_Bool)0] [(signed char)19] [8ULL] [i_10])))));
                        var_36 = ((/* implicit */unsigned long long int) min((var_36), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)51101)) ? (((/* implicit */int) (signed char)66)) : (((/* implicit */int) (unsigned short)3691))))) ? ((-(var_4))) : (((/* implicit */int) arr_36 [i_4 + 2] [i_4 + 1])))))));
                        var_37 = ((/* implicit */unsigned char) max((var_37), (((/* implicit */unsigned char) (+(((/* implicit */int) (!((_Bool)1)))))))));
                        var_38 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-1435)) < (((/* implicit */int) arr_41 [i_4] [1] [i_13])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (4294967295U)));
                    }
                    for (unsigned int i_14 = 0; i_14 < 10; i_14 += 2) /* same iter space */
                    {
                        var_39 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)1437)) ? (((/* implicit */int) (signed char)-47)) : (-1966965836)));
                        var_40 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_4 - 1] [i_14]))));
                        var_41 = ((/* implicit */unsigned int) arr_49 [i_14] [i_4 + 2] [8ULL] [i_10] [i_4 + 2]);
                    }
                    for (unsigned int i_15 = 0; i_15 < 10; i_15 += 2) /* same iter space */
                    {
                        var_42 = ((/* implicit */unsigned short) var_4);
                        arr_53 [(unsigned char)3] [i_4] [i_4] [i_10] [i_15] [0LL] = ((/* implicit */_Bool) var_8);
                    }
                }
                for (unsigned short i_16 = 0; i_16 < 10; i_16 += 4) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
                    {
                        arr_60 [i_3 - 1] [i_4] [i_6] [i_16] [7U] [i_17] [7ULL] = ((/* implicit */_Bool) ((unsigned char) (((_Bool)1) ? (var_11) : (((/* implicit */int) arr_56 [i_4] [i_4 + 2] [i_6])))));
                        var_43 = ((/* implicit */unsigned int) var_0);
                    }
                    var_44 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_7 [i_3] [i_3] [i_3 - 1]))));
                }
            }
            /* LoopSeq 3 */
            for (long long int i_18 = 1; i_18 < 6; i_18 += 1) 
            {
                /* LoopNest 2 */
                for (long long int i_19 = 2; i_19 < 9; i_19 += 4) 
                {
                    for (unsigned long long int i_20 = 1; i_20 < 9; i_20 += 3) 
                    {
                        {
                            var_45 = ((/* implicit */short) (signed char)-3);
                            arr_71 [0] [i_4] [i_18] [i_4] [i_20] = ((/* implicit */int) arr_2 [i_18 + 2] [i_20]);
                        }
                    } 
                } 
                var_46 = ((/* implicit */int) var_10);
                arr_72 [i_4] [i_3 + 1] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_18) + (((/* implicit */long long int) ((/* implicit */int) (signed char)-1)))))) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) arr_55 [i_3] [i_4] [i_4 + 2] [i_4]))));
            }
            for (short i_21 = 1; i_21 < 9; i_21 += 1) 
            {
                /* LoopSeq 3 */
                for (signed char i_22 = 3; i_22 < 7; i_22 += 3) 
                {
                    var_47 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-1457)) / (((/* implicit */int) arr_63 [i_4] [i_4 + 3] [i_21] [i_22]))))) / ((-(13527982028399772207ULL)))));
                    arr_79 [i_3] [i_4] [i_4] [i_4] [i_21 - 1] [i_22 - 3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32750)) ? (2604540178U) : (4100624633U)))) ? ((-(-4400214850734262637LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 2424207308U)) ? (((/* implicit */int) (_Bool)1)) : (-243722539))))));
                    arr_80 [i_4] [i_22] [i_21 + 1] [i_4] = ((_Bool) ((((/* implicit */int) arr_56 [i_4] [8] [8])) / (((/* implicit */int) (_Bool)1))));
                }
                for (signed char i_23 = 0; i_23 < 10; i_23 += 1) 
                {
                    var_48 = ((/* implicit */_Bool) min((var_48), (((/* implicit */_Bool) arr_70 [i_21] [i_4] [i_21] [0U] [i_4]))));
                    var_49 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-1471))));
                }
                for (unsigned long long int i_24 = 0; i_24 < 10; i_24 += 1) 
                {
                    arr_86 [i_21 + 1] [i_4] [(signed char)1] [i_4] = ((/* implicit */unsigned short) (-(arr_76 [i_3])));
                    var_50 = ((/* implicit */unsigned char) arr_52 [i_3 + 1] [i_3 - 1] [(unsigned short)9] [i_3 + 1] [6ULL] [i_3 + 1] [i_3 - 1]);
                    /* LoopSeq 3 */
                    for (signed char i_25 = 0; i_25 < 10; i_25 += 1) 
                    {
                        var_51 -= ((/* implicit */_Bool) 4649915459844968567ULL);
                        arr_89 [i_4] [i_4 + 3] [i_21] [i_24] = ((/* implicit */unsigned int) ((var_3) & (((/* implicit */unsigned long long int) arr_5 [i_3 - 1] [i_4 + 1] [i_4 + 2] [i_21 - 1]))));
                        var_52 = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) 142552099U)) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)27075))))));
                        arr_90 [i_3 - 1] [i_24] [i_24] [i_24] [i_4] [(_Bool)1] = ((/* implicit */int) 14083182308511971241ULL);
                    }
                    for (short i_26 = 2; i_26 < 7; i_26 += 2) 
                    {
                        var_53 ^= ((/* implicit */signed char) 0U);
                        arr_93 [i_3 - 1] [i_4 - 1] [i_21] [i_24] [i_4] = ((/* implicit */unsigned long long int) ((_Bool) arr_61 [i_4 + 2] [i_4 + 1] [i_4]));
                        arr_94 [i_3] [0] [i_24] [i_4] = ((/* implicit */unsigned long long int) arr_42 [i_3 - 1] [i_3] [i_4 + 3] [i_21 - 1] [i_26 - 2] [i_4 + 3] [7]);
                        arr_95 [i_24] [i_4] [i_21] [i_4] = ((/* implicit */unsigned int) (-(((/* implicit */int) (short)29123))));
                        arr_96 [6U] [i_21] [1U] [i_4] [6U] = ((/* implicit */signed char) (+(((/* implicit */int) arr_84 [i_3] [i_21] [i_21 + 1] [i_4 + 3] [i_21]))));
                    }
                    for (long long int i_27 = 0; i_27 < 10; i_27 += 4) 
                    {
                        arr_100 [i_4] [i_4] [i_4] = ((/* implicit */_Bool) arr_37 [i_4 + 2]);
                        arr_101 [i_3 - 1] [i_4] [i_21] [(short)1] [i_27] = ((((/* implicit */int) (short)-18514)) + (((/* implicit */int) (unsigned char)76)));
                        var_54 = ((/* implicit */unsigned char) ((unsigned long long int) ((signed char) 1468753244581094785LL)));
                    }
                }
                var_55 = ((/* implicit */long long int) ((int) var_10));
                arr_102 [8LL] [i_3 + 1] [i_4] [i_3 - 1] = ((/* implicit */short) arr_97 [i_3 + 1] [1LL] [i_21] [i_21]);
                var_56 -= ((/* implicit */unsigned short) ((unsigned int) (unsigned short)62076));
            }
            for (signed char i_28 = 2; i_28 < 9; i_28 += 2) 
            {
                var_57 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_13))));
                var_58 -= ((/* implicit */_Bool) arr_24 [i_3 - 1] [i_4] [i_28] [0U] [i_28] [0U]);
                arr_106 [i_4] [i_4] [i_4] [i_28] = ((/* implicit */long long int) ((arr_20 [i_4 + 3] [i_28 - 2] [i_28] [i_3 - 1]) ? (((/* implicit */int) arr_20 [i_4 + 3] [i_28 - 2] [i_28] [i_3 - 1])) : (((/* implicit */int) arr_20 [i_4 + 3] [i_28 - 2] [(unsigned char)9] [i_3 - 1]))));
            }
        }
        arr_107 [i_3] = ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) arr_73 [i_3 - 1] [i_3] [(short)2]))) >> (((((/* implicit */int) max((arr_67 [i_3 + 1] [(_Bool)1] [8U] [i_3 + 1]), (((/* implicit */unsigned char) (signed char)127))))) - (110)))));
        var_59 = ((/* implicit */unsigned long long int) arr_65 [6LL] [i_3 + 1] [i_3] [i_3] [i_3]);
        var_60 = ((/* implicit */_Bool) (+(min((-1468753244581094782LL), (((/* implicit */long long int) (unsigned short)22694))))));
    }
}
