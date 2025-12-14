/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170525
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
    for (signed char i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_2 = 2; i_2 < 19; i_2 += 1) 
                {
                    var_20 = ((/* implicit */short) var_14);
                    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) min((min((((/* implicit */int) arr_0 [i_1] [i_2])), (arr_4 [i_1] [i_1]))), (((/* implicit */int) arr_2 [i_1] [i_2 + 2])))))));
                    arr_6 [i_0] [i_1] [i_0] = ((/* implicit */signed char) (_Bool)1);
                }
                arr_7 [i_0] = ((/* implicit */unsigned char) min(((~(((/* implicit */int) (unsigned char)88)))), (((((/* implicit */int) arr_5 [i_0] [i_0])) >> (((/* implicit */int) arr_5 [i_0] [i_0]))))));
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_19)))))));
    var_23 = ((/* implicit */short) var_14);
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_3 = 2; i_3 < 12; i_3 += 3) 
    {
        arr_11 [13ULL] = ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))));
        var_24 = (!(var_4));
        /* LoopNest 3 */
        for (unsigned int i_4 = 0; i_4 < 14; i_4 += 1) 
        {
            for (short i_5 = 2; i_5 < 13; i_5 += 1) 
            {
                for (long long int i_6 = 0; i_6 < 14; i_6 += 3) 
                {
                    {
                        var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_15)))))));
                        var_26 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_15 [i_3 - 1] [2U] [i_3 + 2]))));
                        var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) ((arr_4 [(signed char)20] [(signed char)20]) >> (((var_9) + (1754043519))))))));
                        arr_18 [i_4] [(_Bool)1] = ((/* implicit */signed char) ((_Bool) (~(((/* implicit */int) var_0)))));
                    }
                } 
            } 
        } 
        var_28 = ((/* implicit */_Bool) var_15);
        arr_19 [i_3] = ((/* implicit */unsigned short) (((_Bool)1) ? (var_13) : (((/* implicit */unsigned long long int) arr_17 [i_3]))));
    }
    for (short i_7 = 0; i_7 < 17; i_7 += 4) 
    {
        var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_7] [i_7] [(unsigned char)13])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)26505)))))) : (min((var_12), (var_12)))))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */int) var_15)) ^ (((/* implicit */int) arr_1 [i_7])))), ((~(((/* implicit */int) arr_3 [8ULL] [8ULL] [8U]))))))) : (min((((/* implicit */unsigned long long int) arr_21 [i_7])), (var_12)))));
        var_30 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (signed char)-106)) ? (5266912968989014813LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))));
        var_31 = ((/* implicit */int) min((((((/* implicit */_Bool) arr_0 [i_7] [i_7])) ? (var_12) : (((/* implicit */unsigned long long int) 2251799813685247LL)))), (((/* implicit */unsigned long long int) arr_3 [i_7] [i_7] [i_7]))));
    }
    for (signed char i_8 = 0; i_8 < 22; i_8 += 2) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_9 = 0; i_9 < 22; i_9 += 2) 
        {
            arr_28 [i_8] = var_5;
            var_32 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 8546252990535657454ULL))));
        }
        for (short i_10 = 3; i_10 < 20; i_10 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_11 = 0; i_11 < 22; i_11 += 1) 
            {
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    {
                        arr_37 [i_8] [i_8] [i_11] [(unsigned char)6] [i_8] [i_10] &= ((/* implicit */unsigned int) (short)-22715);
                        arr_38 [i_10] [i_11] [i_10 - 1] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) == ((+(((((/* implicit */_Bool) arr_32 [i_12] [i_10 - 3])) ? (var_13) : (((/* implicit */unsigned long long int) var_9))))))));
                    }
                } 
            } 
            var_33 = ((/* implicit */unsigned int) min((var_16), (((((/* implicit */_Bool) ((1790121785U) << (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (((((/* implicit */_Bool) arr_23 [i_8] [i_8])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_4))))))));
            var_34 = ((/* implicit */_Bool) var_3);
            arr_39 [i_10] [i_10] = ((/* implicit */_Bool) max(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (signed char)-8))));
            arr_40 [i_8] [i_10] = ((/* implicit */unsigned char) max((((/* implicit */signed char) ((((/* implicit */_Bool) 2289293558U)) || (((/* implicit */_Bool) (unsigned char)44))))), (arr_24 [i_8])));
        }
        /* LoopSeq 4 */
        /* vectorizable */
        for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_14 = 0; i_14 < 22; i_14 += 4) 
            {
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    {
                        var_35 = ((/* implicit */signed char) ((((var_17) + (var_5))) & (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_2)) : (var_9))))));
                        var_36 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)22698)) & (((/* implicit */int) arr_42 [i_8] [i_13 - 1]))));
                        var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-61)) ? (((/* implicit */int) (signed char)14)) : (((/* implicit */int) (_Bool)1))));
                        var_38 &= ((/* implicit */_Bool) var_1);
                    }
                } 
            } 
            arr_49 [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)31906)) ? (((/* implicit */int) (signed char)8)) : (((/* implicit */int) (unsigned char)1))));
        }
        /* vectorizable */
        for (long long int i_16 = 0; i_16 < 22; i_16 += 4) 
        {
            var_39 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-32643))) > (3181201454U))))));
            arr_53 [i_8] [i_8] = arr_31 [18U] [i_8];
            arr_54 [i_8] [i_8] = var_17;
        }
        for (unsigned long long int i_17 = 0; i_17 < 22; i_17 += 4) /* same iter space */
        {
            arr_57 [16] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)53319))) % (1113765842U)));
            /* LoopNest 3 */
            for (short i_18 = 1; i_18 < 21; i_18 += 2) 
            {
                for (_Bool i_19 = 0; i_19 < 0; i_19 += 1) 
                {
                    for (signed char i_20 = 1; i_20 < 21; i_20 += 4) 
                    {
                        {
                            var_40 += ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)245))))) ? (var_17) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)128)) + (((/* implicit */int) (unsigned char)136))))))));
                            var_41 = ((/* implicit */signed char) (~(((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (2510603677U)))))));
                            arr_65 [i_8] [i_17] [i_18 + 1] [i_19] [i_20] = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) (signed char)125)) - (((/* implicit */int) (_Bool)1))))));
                        }
                    } 
                } 
            } 
            arr_66 [i_8] [15U] [20U] = ((/* implicit */unsigned char) (-(((arr_34 [i_8] [i_8] [i_17] [i_8]) - (arr_34 [i_8] [i_8] [i_8] [i_8])))));
            /* LoopSeq 2 */
            for (unsigned int i_21 = 2; i_21 < 20; i_21 += 4) 
            {
                var_42 = ((/* implicit */_Bool) min((((/* implicit */long long int) arr_47 [i_8] [i_8] [(unsigned short)5])), (max((((/* implicit */long long int) (!(((/* implicit */_Bool) 2579078407U))))), (min((arr_36 [8ULL] [i_21] [(unsigned char)14] [i_21] [(unsigned char)14] [i_17]), (((/* implicit */long long int) var_6))))))));
                arr_69 [i_8] [i_17] [(short)13] [i_21] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_34 [i_21 + 1] [i_21 + 1] [i_21 + 1] [i_17])) ? (min((((/* implicit */unsigned int) (unsigned char)19)), (2005673738U))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_7)))))));
                arr_70 [i_21] [i_21] [i_21 + 1] = ((/* implicit */signed char) (+(((/* implicit */int) max((arr_52 [i_21 - 1]), (((/* implicit */unsigned short) arr_35 [i_21 + 1] [i_21 + 1] [i_21 + 2] [i_17])))))));
                arr_71 [(short)13] [i_21 + 1] = ((/* implicit */signed char) max((((/* implicit */long long int) (_Bool)1)), (arr_36 [i_8] [i_21] [i_8] [i_8] [i_8] [(short)6])));
            }
            /* vectorizable */
            for (unsigned int i_22 = 0; i_22 < 22; i_22 += 2) 
            {
                var_43 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [i_22] [(_Bool)1]))) - (var_3)));
                arr_75 [3LL] [3LL] [i_8] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_3))));
                /* LoopSeq 4 */
                for (signed char i_23 = 0; i_23 < 22; i_23 += 3) 
                {
                    var_44 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_46 [i_17] [i_17])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-18)))))) : (((((/* implicit */_Bool) 8143592486366443559ULL)) ? (4194048U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                    var_45 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_78 [i_8] [i_8] [i_8] [i_8]))));
                    arr_79 [i_8] [i_8] [i_8] [i_23] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_22 [i_23] [i_17])) ? (arr_22 [i_22] [i_17]) : (arr_22 [(unsigned short)6] [i_22])));
                }
                for (unsigned char i_24 = 4; i_24 < 21; i_24 += 3) /* same iter space */
                {
                    var_46 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)47)) ? (1455488346429239794LL) : (var_17))))));
                    var_47 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_24 [i_22]))));
                    arr_82 [(unsigned short)1] [(unsigned short)1] [(unsigned short)1] [i_24 - 3] [i_24 - 4] [11ULL] = arr_42 [i_17] [i_17];
                }
                for (unsigned char i_25 = 4; i_25 < 21; i_25 += 3) /* same iter space */
                {
                    var_48 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_60 [(signed char)16] [(signed char)16] [i_25] [i_25 + 1] [i_25] [i_25])) ? (arr_60 [i_25] [i_22] [i_22] [i_17] [i_8] [i_8]) : (arr_60 [i_25 - 3] [i_8] [i_22] [i_25 - 2] [i_25] [i_25 - 1])));
                    arr_86 [1ULL] [i_25] [i_22] [i_25] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)3))));
                }
                for (unsigned char i_26 = 4; i_26 < 21; i_26 += 3) /* same iter space */
                {
                    var_49 = ((/* implicit */unsigned long long int) 2862806474U);
                    arr_90 [i_26] [i_17] = ((/* implicit */_Bool) var_8);
                }
                var_50 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)0)) ? (arr_84 [i_22] [i_22] [i_22] [(short)13] [4U] [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
            }
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned int i_27 = 3; i_27 < 19; i_27 += 4) 
            {
                arr_94 [i_27] = ((/* implicit */unsigned int) arr_62 [i_8] [i_8]);
                var_51 += ((/* implicit */unsigned int) (~(arr_36 [(signed char)14] [i_17] [(signed char)14] [i_27 + 3] [i_27] [i_27])));
            }
            for (int i_28 = 0; i_28 < 22; i_28 += 3) 
            {
                var_52 = ((/* implicit */unsigned char) (signed char)-54);
                arr_97 [i_8] [i_17] [i_28] = ((/* implicit */long long int) ((min((var_13), (((/* implicit */unsigned long long int) var_19)))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) (signed char)125))) ? (((/* implicit */int) arr_72 [i_8])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))));
            }
        }
        /* vectorizable */
        for (unsigned long long int i_29 = 0; i_29 < 22; i_29 += 4) /* same iter space */
        {
            arr_102 [i_8] = ((/* implicit */signed char) arr_50 [i_8] [i_29]);
            var_53 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_11))));
            var_54 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_52 [i_8]))) / (((((/* implicit */_Bool) 209590675U)) ? (((/* implicit */unsigned long long int) arr_43 [i_8] [i_8] [i_29])) : (16940062468671740895ULL)))));
        }
        var_55 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) (-(((/* implicit */int) var_11)))))))));
    }
}
