/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163479
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned int i_2 = 4; i_2 < 18; i_2 += 2) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */signed char) 7227080735690309706ULL);
                            arr_16 [i_4] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) ((unsigned int) (!(((/* implicit */_Bool) arr_13 [i_0] [i_2 + 2] [i_2] [i_2] [i_4] [i_2])))));
                            var_16 = ((/* implicit */signed char) arr_3 [i_4] [i_2] [i_0]);
                        }
                    } 
                } 
            } 
            var_17 &= ((/* implicit */unsigned char) arr_1 [i_1]);
            arr_17 [(unsigned char)14] [i_1] = ((/* implicit */unsigned short) ((unsigned int) ((unsigned short) arr_5 [i_1])));
        }
        /* LoopSeq 4 */
        for (long long int i_5 = 0; i_5 < 20; i_5 += 4) 
        {
            var_18 += ((short) -3671946920942422704LL);
            var_19 = ((/* implicit */unsigned short) (+(1010300257)));
            /* LoopSeq 2 */
            /* vectorizable */
            for (int i_6 = 0; i_6 < 20; i_6 += 3) 
            {
                /* LoopSeq 1 */
                for (signed char i_7 = 2; i_7 < 17; i_7 += 3) 
                {
                    arr_26 [i_6] [i_6] = arr_8 [i_5] [i_6] [(signed char)9];
                    var_20 = ((/* implicit */unsigned short) ((unsigned long long int) arr_8 [i_5] [i_6] [i_7]));
                }
                /* LoopNest 2 */
                for (unsigned short i_8 = 0; i_8 < 20; i_8 += 2) 
                {
                    for (unsigned char i_9 = 1; i_9 < 17; i_9 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */_Bool) arr_25 [i_0] [i_0]);
                            var_22 = arr_6 [i_0];
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                {
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 11219663338019241909ULL))));
                            var_24 = ((/* implicit */short) var_4);
                            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_5] [i_6] [i_6] [i_10] [i_11])) ? (arr_10 [i_10] [i_5] [i_6] [i_10 + 1] [i_11] [i_5]) : (arr_10 [(unsigned char)19] [i_11] [i_10] [i_6] [(unsigned short)12] [(unsigned short)12])));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (unsigned long long int i_12 = 0; i_12 < 20; i_12 += 4) 
            {
                var_26 = ((/* implicit */_Bool) arr_36 [i_0] [i_0] [i_0]);
                arr_41 [i_12] [i_5] [i_5] [(signed char)11] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_13 [i_0] [16U] [(_Bool)0] [10] [(_Bool)0] [i_0]))));
            }
            var_27 = ((/* implicit */unsigned int) var_6);
        }
        /* vectorizable */
        for (short i_13 = 0; i_13 < 20; i_13 += 4) /* same iter space */
        {
            var_28 = ((/* implicit */unsigned int) min((var_28), ((-(arr_3 [i_0] [i_13] [i_13])))));
            var_29 += ((/* implicit */unsigned char) (~(((/* implicit */int) arr_15 [i_13] [i_13] [i_0] [i_0] [i_0] [i_0]))));
        }
        for (short i_14 = 0; i_14 < 20; i_14 += 4) /* same iter space */
        {
            arr_48 [(signed char)1] [i_14] [13LL] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9))));
            arr_49 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned char) arr_1 [i_0]));
        }
        for (unsigned char i_15 = 0; i_15 < 20; i_15 += 3) 
        {
            var_30 = ((/* implicit */int) (~(min((11219663338019241913ULL), (((/* implicit */unsigned long long int) (short)3681))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (int i_16 = 0; i_16 < 20; i_16 += 1) 
            {
                var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_15 [i_0] [i_0] [i_15] [i_16] [i_16] [i_16]))))) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_12 [i_16] [i_15] [i_15] [i_0] [6U])) != (arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                arr_55 [i_0] [i_0] [i_15] [i_0] = ((/* implicit */_Bool) ((unsigned short) ((signed char) arr_19 [i_15] [i_16])));
                /* LoopSeq 1 */
                for (unsigned short i_17 = 1; i_17 < 17; i_17 += 4) 
                {
                    arr_58 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) arr_54 [i_0] [i_0]);
                    arr_59 [9] [i_17] = ((/* implicit */unsigned int) ((unsigned long long int) arr_27 [8ULL] [i_17 + 2] [i_17] [i_17]));
                }
                /* LoopNest 2 */
                for (unsigned short i_18 = 2; i_18 < 19; i_18 += 3) 
                {
                    for (short i_19 = 0; i_19 < 20; i_19 += 4) 
                    {
                        {
                            var_32 = ((/* implicit */unsigned int) arr_35 [19U] [i_18] [6]);
                            var_33 = ((/* implicit */int) var_2);
                            var_34 = ((/* implicit */_Bool) 18446744073709551615ULL);
                        }
                    } 
                } 
            }
            for (short i_20 = 0; i_20 < 20; i_20 += 3) 
            {
                var_35 += (+(((/* implicit */int) arr_21 [i_0] [i_15])));
                var_36 ^= (~(((/* implicit */int) min((((/* implicit */unsigned short) ((signed char) arr_32 [i_0] [13] [i_0] [i_0] [i_0]))), (max((arr_25 [i_0] [i_0]), (((/* implicit */unsigned short) (_Bool)1))))))));
                arr_66 [i_0] [i_15] [i_20] [i_20] = ((/* implicit */_Bool) var_8);
            }
        }
        var_37 ^= ((unsigned long long int) (short)-683);
    }
    /* vectorizable */
    for (unsigned char i_21 = 1; i_21 < 9; i_21 += 4) 
    {
        var_38 = ((/* implicit */_Bool) ((int) arr_22 [i_21 - 1] [i_21] [i_21]));
        arr_69 [i_21] = ((/* implicit */signed char) arr_54 [i_21 - 1] [i_21 + 1]);
        /* LoopSeq 1 */
        for (unsigned int i_22 = 1; i_22 < 8; i_22 += 1) 
        {
            var_39 = ((/* implicit */unsigned long long int) var_2);
            arr_73 [i_21 - 1] [i_21] = ((/* implicit */unsigned short) arr_70 [i_21] [i_21]);
        }
        var_40 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_21 - 1] [i_21 + 1] [i_21 - 1])) ? (arr_56 [i_21 + 1] [i_21 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_13)))));
        var_41 ^= ((/* implicit */short) (unsigned short)32564);
    }
    /* LoopNest 3 */
    for (unsigned char i_23 = 2; i_23 < 11; i_23 += 4) 
    {
        for (unsigned short i_24 = 0; i_24 < 14; i_24 += 3) 
        {
            for (signed char i_25 = 1; i_25 < 11; i_25 += 1) 
            {
                {
                    var_42 = ((/* implicit */_Bool) arr_31 [i_25] [i_25 + 3] [i_25] [i_25 + 3] [i_25] [i_25 + 1]);
                    arr_80 [(unsigned short)12] [i_24] [i_24] = ((/* implicit */unsigned char) arr_1 [(_Bool)1]);
                    var_43 = ((/* implicit */unsigned int) max((var_43), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_8)))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_26 = 0; i_26 < 25; i_26 += 1) 
    {
        for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
        {
            {
                var_44 = ((/* implicit */_Bool) min((var_44), (((/* implicit */_Bool) max((((((/* implicit */int) arr_82 [i_27] [i_27])) + (((/* implicit */int) arr_82 [i_26] [i_26])))), ((+(((/* implicit */int) arr_82 [i_26] [i_27])))))))));
                var_45 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) var_12)), ((((+(2066254947U))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_84 [i_26] [i_27])))))));
            }
        } 
    } 
    var_46 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((unsigned int) ((((/* implicit */_Bool) (short)-672)) ? (((/* implicit */int) (short)-683)) : (((/* implicit */int) (short)702))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_28 = 2; i_28 < 13; i_28 += 3) 
    {
        var_47 ^= ((/* implicit */unsigned long long int) arr_36 [i_28 + 2] [i_28 + 1] [i_28]);
        /* LoopSeq 1 */
        for (int i_29 = 0; i_29 < 15; i_29 += 4) 
        {
            arr_92 [i_28] = (-(((/* implicit */int) var_10)));
            var_48 = arr_28 [i_28 + 1] [i_28 + 2] [i_28 + 1] [i_28 - 2];
            var_49 -= (-(((/* implicit */int) arr_50 [i_28 - 1] [i_28] [i_28 + 1])));
        }
        /* LoopNest 3 */
        for (unsigned int i_30 = 0; i_30 < 15; i_30 += 3) 
        {
            for (unsigned short i_31 = 2; i_31 < 12; i_31 += 1) 
            {
                for (_Bool i_32 = 0; i_32 < 1; i_32 += 1) 
                {
                    {
                        arr_102 [i_32] [i_31] [i_30] [i_28] = ((/* implicit */long long int) ((((/* implicit */int) arr_90 [i_28 - 2] [i_31 - 2])) * (((/* implicit */int) var_12))));
                        arr_103 [11ULL] [i_31 - 2] [i_31 + 1] [i_31] = ((/* implicit */_Bool) var_8);
                    }
                } 
            } 
        } 
    }
    for (_Bool i_33 = 0; i_33 < 1; i_33 += 1) 
    {
        var_50 = arr_40 [i_33] [i_33] [i_33];
        /* LoopNest 2 */
        for (unsigned long long int i_34 = 0; i_34 < 16; i_34 += 1) 
        {
            for (unsigned char i_35 = 0; i_35 < 16; i_35 += 3) 
            {
                {
                    var_51 += ((/* implicit */_Bool) (+(((/* implicit */int) min((var_3), (((/* implicit */signed char) (_Bool)1)))))));
                    arr_110 [i_34] [i_34] = ((/* implicit */unsigned int) (+((~(-2147483622)))));
                    arr_111 [i_34] [(_Bool)1] [i_34] [i_35] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_65 [i_33] [(signed char)5]))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned long long int i_36 = 2; i_36 < 13; i_36 += 4) 
        {
            var_52 = ((/* implicit */unsigned short) min((var_52), (((/* implicit */unsigned short) (+(((/* implicit */int) var_2)))))));
            arr_114 [i_36 + 3] = ((/* implicit */unsigned short) var_0);
        }
        for (unsigned int i_37 = 1; i_37 < 14; i_37 += 1) 
        {
            var_53 = ((/* implicit */unsigned int) var_7);
            var_54 = (-(32768U));
            arr_117 [(_Bool)1] [i_37] [i_37] = ((/* implicit */unsigned long long int) min((((int) arr_62 [i_33] [i_37 + 1] [i_37 + 2])), (((/* implicit */int) ((unsigned short) 2147483629)))));
            arr_118 [(signed char)8] [i_37] = ((/* implicit */short) (+(arr_2 [i_33] [i_37 + 1])));
            var_55 = ((/* implicit */long long int) (~(((/* implicit */int) max((arr_13 [i_37 + 1] [i_37] [i_33] [i_37 + 2] [i_37 - 1] [(short)14]), (arr_13 [i_37 + 1] [i_37 + 1] [4ULL] [i_37 + 1] [i_33] [(unsigned short)9]))))));
        }
        /* LoopSeq 1 */
        for (unsigned char i_38 = 1; i_38 < 15; i_38 += 3) 
        {
            /* LoopSeq 2 */
            for (_Bool i_39 = 0; i_39 < 1; i_39 += 1) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_40 = 2; i_40 < 14; i_40 += 2) 
                {
                    arr_126 [i_40] [i_40] [i_39] [i_38] [13ULL] = ((/* implicit */unsigned int) var_6);
                    var_56 = ((/* implicit */unsigned int) arr_6 [i_33]);
                    arr_127 [i_40] [i_39] [i_33] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_64 [i_40] [(unsigned short)0] [14] [(unsigned short)0]))));
                }
                var_57 -= ((/* implicit */short) arr_2 [(unsigned short)1] [(short)6]);
                arr_128 [i_39] [i_38] = var_12;
            }
            for (unsigned long long int i_41 = 0; i_41 < 16; i_41 += 2) 
            {
                var_58 = ((/* implicit */unsigned char) max((min((((/* implicit */unsigned long long int) 2228712348U)), (arr_31 [i_33] [i_38] [i_41] [15] [i_38 + 1] [i_33]))), (((/* implicit */unsigned long long int) ((arr_31 [i_33] [i_38] [i_41] [i_33] [i_38 + 1] [15]) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))));
                arr_133 [i_33] [i_33] [i_33] = ((/* implicit */unsigned char) var_10);
                var_59 = ((/* implicit */unsigned short) min((var_59), (((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5))))), (min((arr_20 [i_33] [i_38 - 1] [i_33]), (arr_29 [i_33] [(unsigned char)9] [i_33] [i_33] [i_33] [i_33]))))), (((/* implicit */unsigned long long int) max(((+(((/* implicit */int) arr_124 [i_41] [i_38] [i_38 - 1] [i_33])))), (arr_11 [i_38 + 1] [i_38 - 1] [i_38 + 1] [10U] [i_33])))))))));
                var_60 = ((/* implicit */unsigned char) (+(2228712347U)));
            }
            var_61 = ((/* implicit */_Bool) arr_107 [10U] [10U]);
            var_62 = ((/* implicit */signed char) max((var_62), (((/* implicit */signed char) 18446744073709551605ULL))));
            arr_134 [i_38 - 1] [i_38] [i_38] = ((/* implicit */unsigned int) arr_54 [i_33] [i_33]);
        }
    }
}
