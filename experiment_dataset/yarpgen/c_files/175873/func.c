/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175873
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
    for (unsigned char i_0 = 4; i_0 < 9; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (short)26287)) ? (17663266529431376089ULL) : (arr_2 [i_1] [i_0 - 1] [i_1]))), (((/* implicit */unsigned long long int) max((((/* implicit */short) (!((_Bool)1)))), (var_11))))));
                var_14 = ((/* implicit */_Bool) var_1);
            }
        } 
    } 
    /* LoopSeq 3 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 1; i_3 < 23; i_3 += 4) 
        {
            for (unsigned long long int i_4 = 3; i_4 < 22; i_4 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_5 = 1; i_5 < 20; i_5 += 4) 
                    {
                        arr_13 [i_2] [i_4] = ((unsigned char) var_4);
                        var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((((/* implicit */int) (short)22676)) - (((/* implicit */int) (short)-646)))))));
                    }
                    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) (short)26287))));
                }
            } 
        } 
        arr_14 [i_2] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_5 [i_2] [i_2])) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2] [i_2]))))) ^ (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_5 [i_2] [i_2])))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_6 = 1; i_6 < 20; i_6 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned char i_7 = 3; i_7 < 21; i_7 += 3) 
            {
                for (short i_8 = 2; i_8 < 23; i_8 += 3) 
                {
                    for (unsigned char i_9 = 1; i_9 < 23; i_9 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */short) var_3);
                            arr_27 [i_2] [i_7] [i_7] [i_8 - 2] [i_9] = ((/* implicit */unsigned long long int) var_10);
                            var_18 = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */int) var_0)) - (((/* implicit */int) var_10))))) ? (((/* implicit */int) (short)-26282)) : (((/* implicit */int) ((((/* implicit */int) var_10)) != (((/* implicit */int) var_1))))))), (((/* implicit */int) var_0))));
                            arr_28 [i_9] [i_7] [i_7] [i_2] = ((/* implicit */signed char) (unsigned char)194);
                            var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) var_12))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (short i_10 = 2; i_10 < 22; i_10 += 3) 
            {
                for (unsigned long long int i_11 = 0; i_11 < 24; i_11 += 4) 
                {
                    {
                        arr_33 [i_10] [i_10] = ((/* implicit */short) (unsigned char)188);
                        var_20 -= ((/* implicit */short) var_10);
                        var_21 -= ((/* implicit */short) ((signed char) ((((/* implicit */int) arr_24 [i_2] [i_6 + 1] [i_10 + 1] [i_6 + 4] [i_2] [i_11] [i_10 + 1])) + (((/* implicit */int) arr_24 [i_2] [i_6 + 3] [i_2] [i_6 + 3] [i_11] [i_11] [i_6 + 3])))));
                        /* LoopSeq 1 */
                        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                        {
                            var_22 = ((/* implicit */unsigned char) ((short) arr_26 [i_10 - 1] [i_10 + 1] [i_10 - 1]));
                            arr_36 [i_2] [i_6 + 1] [i_10] [i_10] = ((/* implicit */short) min((((/* implicit */int) var_5)), (((((/* implicit */_Bool) arr_17 [i_11] [i_2] [i_6 - 1] [i_2])) ? (((/* implicit */int) (short)31299)) : (((/* implicit */int) (signed char)-111))))));
                        }
                    }
                } 
            } 
        }
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            /* LoopSeq 2 */
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                arr_41 [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_35 [i_2] [i_2])) != (((((/* implicit */int) (short)25089)) + (((/* implicit */int) arr_19 [i_13] [i_13] [i_2] [i_2]))))));
                var_23 -= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) < (min((arr_4 [i_2]), (arr_4 [i_2])))));
                arr_42 [i_14] [i_13] [i_2] = ((/* implicit */short) ((min((max((((/* implicit */unsigned long long int) (short)10684)), (var_2))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)10684))))))) << (min((((/* implicit */unsigned long long int) arr_18 [i_2] [i_13] [i_2] [i_13])), (((unsigned long long int) (_Bool)1))))));
            }
            for (unsigned long long int i_15 = 3; i_15 < 21; i_15 += 4) 
            {
                arr_45 [i_13] [i_13] [i_13] = ((/* implicit */short) var_4);
                var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) var_2))));
                /* LoopNest 2 */
                for (unsigned long long int i_16 = 1; i_16 < 22; i_16 += 2) 
                {
                    for (short i_17 = 4; i_17 < 23; i_17 += 4) 
                    {
                        {
                            arr_51 [i_2] [i_2] [i_15 - 2] [i_16] [i_13] [i_13] [i_17] = (+((+(var_2))));
                            var_25 -= ((/* implicit */unsigned char) (_Bool)1);
                            arr_52 [i_15] [i_15 + 1] [i_15] [i_13] [i_15] [i_15] [i_15 + 2] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_37 [i_13] [i_17 + 1])))) ? (((/* implicit */int) (unsigned char)43)) : (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */short) var_6)), (arr_5 [i_2] [i_2])))))))));
                        }
                    } 
                } 
                var_26 -= var_2;
            }
            /* LoopSeq 2 */
            for (unsigned char i_18 = 0; i_18 < 24; i_18 += 3) 
            {
                var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) min((var_2), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) > (((/* implicit */int) (short)-2364))))))))));
                /* LoopSeq 4 */
                for (short i_19 = 2; i_19 < 22; i_19 += 3) 
                {
                    var_28 = arr_5 [i_13] [i_13];
                    arr_58 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13] = ((/* implicit */signed char) ((short) max((((arr_18 [i_13] [i_18] [i_13] [i_13]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)43))) : (arr_22 [i_19] [i_19] [i_19] [i_13]))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_25 [i_2] [i_2] [i_13] [i_2]))))))));
                }
                for (short i_20 = 1; i_20 < 21; i_20 += 3) 
                {
                    arr_62 [i_2] [i_2] [i_13] [i_18] [i_13] [i_20 + 3] = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) min((18042285144043073194ULL), (((/* implicit */unsigned long long int) (short)30552))))) || (((/* implicit */_Bool) (unsigned char)98)))));
                    var_29 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_26 [i_2] [i_2] [i_2]), ((short)28984))))) & (arr_43 [i_13])));
                }
                for (signed char i_21 = 4; i_21 < 21; i_21 += 3) 
                {
                    arr_67 [i_2] [i_13] [i_13] [i_21] [i_21] = ((/* implicit */unsigned char) (short)-30561);
                    var_30 = ((/* implicit */unsigned long long int) var_4);
                    var_31 -= ((/* implicit */_Bool) max(((short)32316), (((/* implicit */short) var_10))));
                    var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) var_2))));
                }
                for (unsigned long long int i_22 = 0; i_22 < 24; i_22 += 1) 
                {
                    var_33 = ((/* implicit */unsigned long long int) ((var_10) ? (((((((/* implicit */int) arr_19 [i_13] [i_13] [i_18] [i_18])) * (((/* implicit */int) (short)-24769)))) / ((-(((/* implicit */int) var_5)))))) : (((/* implicit */int) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-28969))) / (arr_70 [i_2] [i_2] [i_2])))))));
                    var_34 -= arr_23 [i_2] [i_2] [10ULL] [i_2] [i_2];
                }
            }
            for (unsigned long long int i_23 = 1; i_23 < 20; i_23 += 2) 
            {
                var_35 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) (short)-29392)) ? (((/* implicit */int) (short)-5247)) : (((/* implicit */int) arr_35 [i_2] [i_2])))) * (((/* implicit */int) (unsigned char)213)))) < (((/* implicit */int) (short)8))));
                arr_74 [i_13] [i_13] = ((/* implicit */short) (unsigned char)213);
                /* LoopNest 2 */
                for (short i_24 = 3; i_24 < 21; i_24 += 3) 
                {
                    for (unsigned long long int i_25 = 0; i_25 < 24; i_25 += 4) 
                    {
                        {
                            var_36 -= ((/* implicit */short) (_Bool)1);
                            arr_81 [i_2] [i_2] [i_2] [i_2] [i_13] = ((/* implicit */short) ((404458929666478418ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8408)))));
                        }
                    } 
                } 
                var_37 = ((/* implicit */unsigned char) (short)32760);
            }
            var_38 = max(((short)-28984), (((/* implicit */short) (signed char)0)));
        }
    }
    /* vectorizable */
    for (_Bool i_26 = 1; i_26 < 1; i_26 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_27 = 0; i_27 < 19; i_27 += 3) 
        {
            for (short i_28 = 1; i_28 < 16; i_28 += 2) 
            {
                for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
                {
                    {
                        arr_95 [i_26] = ((/* implicit */unsigned long long int) var_11);
                        var_39 = ((/* implicit */short) (!(((arr_68 [i_26] [i_26] [i_28 + 1] [i_28 + 3]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))));
                        /* LoopSeq 3 */
                        for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
                        {
                            var_40 -= ((/* implicit */short) ((((/* implicit */int) (unsigned char)192)) <= (((/* implicit */int) (short)32299))));
                            arr_98 [i_26] [i_26] [i_28 - 1] [i_27] [i_27] [i_26] = (((_Bool)1) || ((!(((/* implicit */_Bool) var_5)))));
                            arr_99 [i_30] [i_29] [i_26] [i_27] [i_26 - 1] = ((/* implicit */_Bool) ((((/* implicit */int) (short)28249)) | (((/* implicit */int) var_4))));
                            var_41 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_84 [i_28 - 1]))));
                        }
                        for (short i_31 = 2; i_31 < 17; i_31 += 2) /* same iter space */
                        {
                            var_42 = ((short) var_12);
                            var_43 -= ((/* implicit */_Bool) ((signed char) var_5));
                        }
                        for (short i_32 = 2; i_32 < 17; i_32 += 2) /* same iter space */
                        {
                            var_44 -= ((/* implicit */_Bool) (short)-25365);
                            arr_107 [i_26] [i_27] [i_26] [i_28 + 3] [i_28] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) arr_16 [i_26 - 1] [i_26 - 1]))) % (((/* implicit */int) arr_11 [i_26 - 1] [i_32 + 2] [i_28]))));
                            var_45 = ((/* implicit */short) (!(((/* implicit */_Bool) var_8))));
                            arr_108 [i_26] [i_26] [i_28] [i_29] [i_32] = ((/* implicit */short) ((((/* implicit */int) ((_Bool) arr_4 [i_26]))) & (((/* implicit */int) arr_76 [i_26] [i_27] [i_26] [i_32]))));
                            arr_109 [i_32] [i_26] [i_28 + 3] [i_26] [i_26] = ((/* implicit */unsigned long long int) var_0);
                        }
                    }
                } 
            } 
        } 
        var_46 = ((/* implicit */short) ((((/* implicit */int) (signed char)21)) / (((/* implicit */int) arr_89 [i_26]))));
    }
    for (short i_33 = 3; i_33 < 21; i_33 += 3) 
    {
        var_47 = arr_8 [i_33] [i_33] [2ULL] [i_33];
        /* LoopSeq 2 */
        for (_Bool i_34 = 0; i_34 < 0; i_34 += 1) /* same iter space */
        {
            var_48 -= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_112 [i_34 + 1]) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_44 [i_34])) : (((/* implicit */int) arr_26 [i_33 - 1] [i_33] [i_33]))))))))) < ((~(8190ULL)))));
            /* LoopNest 2 */
            for (unsigned char i_35 = 0; i_35 < 23; i_35 += 4) 
            {
                for (short i_36 = 1; i_36 < 22; i_36 += 3) 
                {
                    {
                        var_49 = ((/* implicit */signed char) max((var_49), (((/* implicit */signed char) var_5))));
                        var_50 = max(((!(((/* implicit */_Bool) var_6)))), (((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [i_33] [i_34 + 1] [i_35] [i_36 - 1]))))))));
                        var_51 = (short)-26304;
                    }
                } 
            } 
            arr_123 [i_33] [i_33] [i_33] = ((/* implicit */_Bool) (~(((/* implicit */int) (short)32755))));
            arr_124 [i_33 - 3] [i_33 - 3] [i_34] = ((/* implicit */unsigned long long int) ((max((((/* implicit */int) var_4)), (((((/* implicit */_Bool) (signed char)20)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (short)32340)))))) - (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_34 + 1])) ? (1562003747476695523ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_33] [i_33 - 1] [i_33 - 1] [i_33 - 2] [i_33] [i_33 - 1])))))))))));
        }
        for (_Bool i_37 = 0; i_37 < 0; i_37 += 1) /* same iter space */
        {
            arr_128 [i_37 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) arr_35 [i_33] [i_33 - 2]))));
            arr_129 [i_33] [i_33] [i_33] = ((/* implicit */short) 36028797018963456ULL);
        }
        /* LoopNest 3 */
        for (_Bool i_38 = 0; i_38 < 1; i_38 += 1) 
        {
            for (_Bool i_39 = 0; i_39 < 1; i_39 += 1) 
            {
                for (_Bool i_40 = 1; i_40 < 1; i_40 += 1) 
                {
                    {
                        var_52 = ((/* implicit */_Bool) 18042285144043073189ULL);
                        /* LoopSeq 1 */
                        for (_Bool i_41 = 0; i_41 < 0; i_41 += 1) 
                        {
                            var_53 -= ((/* implicit */signed char) var_8);
                            arr_138 [i_33] [i_33] [i_38] [i_38] [i_39] [i_40] [i_41] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) arr_110 [i_33])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 5940941312182025857ULL)) && (((/* implicit */_Bool) arr_71 [i_38])))))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_41]))) : (var_12))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-314)))));
                            var_54 = ((/* implicit */_Bool) arr_17 [i_40] [i_40] [i_38] [i_33 - 3]);
                        }
                        var_55 -= ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((short) max((var_0), (((/* implicit */signed char) (_Bool)1)))))) : (((((/* implicit */int) (signed char)-64)) & (((/* implicit */int) var_8))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (short i_42 = 0; i_42 < 23; i_42 += 3) 
        {
            for (short i_43 = 2; i_43 < 21; i_43 += 3) 
            {
                {
                    var_56 -= (short)-23671;
                    arr_144 [i_33] [i_43] = ((/* implicit */short) var_12);
                    arr_145 [i_42] = (unsigned char)255;
                    /* LoopSeq 3 */
                    for (_Bool i_44 = 0; i_44 < 1; i_44 += 1) 
                    {
                        arr_148 [i_44] [i_43 - 1] [i_42] [i_43] [i_42] [i_33] = ((/* implicit */short) (-(((((/* implicit */int) (unsigned char)114)) | (((/* implicit */int) (short)-17961))))));
                        arr_149 [i_33] [i_33] [i_33] [i_33] [i_33] [i_33] = ((/* implicit */short) ((((/* implicit */int) (signed char)127)) / (((/* implicit */int) (unsigned char)17))));
                    }
                    /* vectorizable */
                    for (unsigned char i_45 = 0; i_45 < 23; i_45 += 1) 
                    {
                        var_57 = ((/* implicit */short) arr_37 [(short)10] [(short)10]);
                        arr_152 [i_45] [i_43 - 2] [i_33] [i_33] [i_33] [i_33] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-63)) || (((/* implicit */_Bool) (unsigned char)17))));
                        arr_153 [i_45] [i_43] [i_42] [i_42] [i_33 - 3] [i_33 - 3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32743))) ^ (arr_112 [i_45])))) ? (((/* implicit */int) var_3)) : ((~(((/* implicit */int) (short)-5432))))));
                    }
                    for (short i_46 = 3; i_46 < 22; i_46 += 4) 
                    {
                        arr_157 [i_33] [i_46] [i_43] [i_46 + 1] [i_46] = ((/* implicit */short) ((((/* implicit */int) var_6)) & (((/* implicit */int) var_11))));
                        var_58 -= ((/* implicit */unsigned char) (short)23350);
                        var_59 -= ((/* implicit */unsigned char) (_Bool)1);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_47 = 1; i_47 < 22; i_47 += 2) 
                        {
                            var_60 -= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)66))) + (((arr_126 [i_33] [i_33]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))));
                            var_61 -= ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) (short)32749))))) ? ((+(13581761887029304267ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)14))));
                        }
                        var_62 = ((/* implicit */_Bool) (short)-32751);
                    }
                    /* LoopSeq 1 */
                    for (signed char i_48 = 1; i_48 < 20; i_48 += 2) 
                    {
                        arr_163 [i_48] = ((/* implicit */_Bool) arr_147 [i_33 - 1] [i_33 + 2] [i_42] [i_43 - 2] [i_48 + 3] [i_48]);
                        var_63 -= ((/* implicit */signed char) min((((_Bool) ((((/* implicit */_Bool) (unsigned char)98)) ? (((/* implicit */int) arr_73 [i_33] [i_48] [i_33] [i_48])) : (((/* implicit */int) var_4))))), (((((/* implicit */_Bool) (short)32749)) || (((/* implicit */_Bool) min((((/* implicit */signed char) var_3)), (var_0))))))));
                        var_64 = ((/* implicit */signed char) ((((((/* implicit */int) arr_111 [i_43 + 1] [i_43 + 2])) != (((/* implicit */int) arr_156 [i_33 - 1] [i_48] [i_48 + 1] [i_43 - 2])))) ? (((/* implicit */int) ((unsigned char) var_11))) : (((/* implicit */int) arr_110 [i_33 + 2]))));
                    }
                }
            } 
        } 
    }
    var_65 = ((/* implicit */short) ((11585459670090837782ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-15407)))));
    var_66 = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) var_10))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)127)))), (((/* implicit */int) var_1))));
}
