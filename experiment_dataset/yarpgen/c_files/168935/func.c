/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168935
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
    var_19 = ((/* implicit */unsigned short) min(((signed char)91), (((/* implicit */signed char) (_Bool)1))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_20 = ((/* implicit */_Bool) ((signed char) arr_2 [i_0]));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            var_21 = ((/* implicit */signed char) (!(((arr_3 [(signed char)18]) > (((/* implicit */int) (unsigned char)216))))));
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 24; i_3 += 4) 
                {
                    {
                        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((-1320833581) % (((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [10]))))) ? (((/* implicit */int) ((((/* implicit */int) var_0)) > (((/* implicit */int) var_18))))) : ((+(arr_13 [i_0] [i_0])))));
                        arr_14 [i_0] [i_1] [i_2] [i_3] [(signed char)5] [(signed char)5] = ((/* implicit */unsigned char) ((arr_8 [i_3] [i_2] [i_1]) / (arr_8 [i_3] [i_1] [i_0])));
                    }
                } 
            } 
        }
        for (signed char i_4 = 2; i_4 < 22; i_4 += 4) 
        {
            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1320833581)) ? (((/* implicit */int) var_6)) : (-1320833581)))) ? (((((/* implicit */_Bool) var_1)) ? (arr_4 [16]) : (((/* implicit */int) var_2)))) : (((/* implicit */int) arr_5 [i_0] [i_4]))));
            var_24 = ((/* implicit */int) var_7);
            var_25 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) -1320833588)) ? (-709914727) : (((/* implicit */int) (signed char)30))))));
        }
        /* LoopSeq 3 */
        for (signed char i_5 = 0; i_5 < 24; i_5 += 3) 
        {
            arr_19 [(signed char)15] [(signed char)15] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-112))));
            arr_20 [i_0] [i_5] = ((/* implicit */signed char) (+(((/* implicit */int) arr_6 [i_5]))));
            /* LoopSeq 3 */
            for (unsigned int i_6 = 1; i_6 < 20; i_6 += 3) 
            {
                var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (arr_12 [i_6 + 4]) : (((/* implicit */unsigned int) ((/* implicit */int) var_15)))));
                var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) (+(-93110269))))));
            }
            for (signed char i_7 = 3; i_7 < 21; i_7 += 1) 
            {
                arr_26 [i_0] [i_0] [i_7 + 2] &= ((/* implicit */signed char) arr_15 [i_7] [i_0]);
                var_28 += ((/* implicit */short) arr_18 [i_0] [i_0] [i_7]);
            }
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_27 [i_0] [i_8] [i_0] [i_0])) / (arr_23 [i_5])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (arr_4 [17]) : (((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) arr_12 [i_5])) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) arr_4 [i_5]))))));
                /* LoopNest 2 */
                for (signed char i_9 = 3; i_9 < 22; i_9 += 1) 
                {
                    for (signed char i_10 = 0; i_10 < 24; i_10 += 4) 
                    {
                        {
                            arr_35 [i_0] [i_8] [i_8] [i_10] = ((/* implicit */int) (unsigned char)15);
                            var_30 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_27 [i_9 - 1] [i_8] [i_9 - 3] [i_9 + 1]))));
                            var_31 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_5] [i_8]))));
                        }
                    } 
                } 
                var_32 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1320833585)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 685648132)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_16 [i_0] [i_5] [i_8])))))));
                /* LoopSeq 4 */
                for (signed char i_11 = 0; i_11 < 24; i_11 += 1) 
                {
                    arr_38 [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)119))))) || (((/* implicit */_Bool) var_6))));
                    arr_39 [i_11] [(unsigned short)17] [i_11] [i_8] [i_11] = ((/* implicit */unsigned char) (-(((arr_34 [i_0] [3LL] [i_8] [(signed char)0] [(_Bool)1]) * (((/* implicit */unsigned int) arr_0 [i_0] [i_8]))))));
                    var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) var_3)) : (-614574277)));
                }
                for (signed char i_12 = 0; i_12 < 24; i_12 += 3) 
                {
                    arr_43 [i_0] [(unsigned short)2] |= ((((/* implicit */_Bool) arr_37 [i_12] [(signed char)16] [(signed char)16] [i_0])) ? (((/* implicit */int) var_3)) : (arr_37 [i_0] [(unsigned short)12] [i_8] [i_12]));
                    var_34 = arr_6 [i_12];
                    arr_44 [i_0] [i_5] [i_8] [i_8] [i_12] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(-1987057569))))));
                }
                for (unsigned char i_13 = 0; i_13 < 24; i_13 += 3) 
                {
                    var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) arr_5 [i_13] [i_5])) ? (((/* implicit */int) (unsigned short)65513)) : (((/* implicit */int) var_14)))) : (((/* implicit */int) (signed char)64))));
                    var_36 = ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-3575))))) ? (((/* implicit */int) (short)-3575)) : ((+(((/* implicit */int) var_12)))));
                }
                for (unsigned short i_14 = 0; i_14 < 24; i_14 += 1) 
                {
                    arr_49 [i_0] [i_0] [i_8] [i_8] = ((/* implicit */signed char) (((~(arr_0 [i_0] [i_5]))) < (((/* implicit */int) ((signed char) var_10)))));
                    var_37 |= ((/* implicit */signed char) arr_31 [i_0] [i_5]);
                    var_38 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-1)))))));
                    /* LoopSeq 2 */
                    for (signed char i_15 = 0; i_15 < 24; i_15 += 1) 
                    {
                        arr_53 [i_8] [i_5] [i_5] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_1 [i_14]))));
                        var_39 = ((/* implicit */unsigned char) min((var_39), (((/* implicit */unsigned char) (!(arr_32 [i_0] [i_0]))))));
                    }
                    for (unsigned char i_16 = 1; i_16 < 22; i_16 += 2) 
                    {
                        arr_58 [i_0] [i_16] [i_5] [i_14] [i_8] [i_16] [9] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_13))));
                        var_40 = ((/* implicit */signed char) ((((((/* implicit */int) (short)(-32767 - 1))) != (arr_0 [i_8] [i_8]))) || (((/* implicit */_Bool) var_14))));
                        arr_59 [i_0] [i_0] [(unsigned char)16] [i_8] [i_14] [i_16] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [16])) ? (((/* implicit */int) ((((/* implicit */int) var_18)) != (((/* implicit */int) arr_11 [i_0]))))) : ((~(((/* implicit */int) (unsigned char)77))))));
                    }
                }
            }
            var_41 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_15)))));
        }
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
        {
            var_42 = ((/* implicit */unsigned short) min((var_42), (((/* implicit */unsigned short) arr_22 [i_0] [i_0] [i_17]))));
            var_43 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 127LL)) ? (0) : (((/* implicit */int) (signed char)102))));
            var_44 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)127)) | (((/* implicit */int) (signed char)113))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_10 [i_0] [i_17] [i_17] [i_17])) : (((/* implicit */int) arr_33 [i_0] [i_0] [i_0] [i_0] [8])))))));
        }
        for (int i_18 = 0; i_18 < 24; i_18 += 1) 
        {
            arr_65 [i_0] [i_18] [i_18] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_25 [i_0] [i_18])) ? (((/* implicit */int) arr_25 [i_0] [i_0])) : (((/* implicit */int) var_4))));
            /* LoopSeq 2 */
            for (signed char i_19 = 1; i_19 < 22; i_19 += 4) 
            {
                var_45 = ((/* implicit */short) (+(((/* implicit */int) arr_11 [i_19 - 1]))));
                arr_68 [i_19] = ((/* implicit */unsigned short) (signed char)-30);
                var_46 ^= ((signed char) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) arr_62 [i_18]))));
            }
            for (int i_20 = 0; i_20 < 24; i_20 += 4) 
            {
                var_47 = ((/* implicit */long long int) ((((/* implicit */int) (signed char)-20)) ^ (4194303)));
                arr_72 [i_0] [i_0] [i_0] = var_15;
                var_48 = ((/* implicit */int) (signed char)127);
            }
        }
        arr_73 [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) arr_5 [i_0] [i_0]))));
    }
    /* vectorizable */
    for (int i_21 = 2; i_21 < 14; i_21 += 2) 
    {
        var_49 = ((/* implicit */signed char) var_18);
        arr_77 [i_21] [i_21] = ((/* implicit */short) var_7);
    }
    var_50 = ((/* implicit */unsigned short) var_7);
    var_51 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((var_11) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_12))))))) ? (((((/* implicit */int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) (unsigned short)65522))))) + (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)46437)) : (((/* implicit */int) var_6)))))) : (((/* implicit */int) min((((((/* implicit */_Bool) -1320833581)) || (((/* implicit */_Bool) var_10)))), ((!(var_11))))))));
}
