/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137747
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
    /* LoopSeq 3 */
    for (short i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        var_18 -= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [7ULL] [11]))) == (6ULL)))) + (((/* implicit */int) (signed char)97))))), (min((((/* implicit */unsigned long long int) (unsigned char)240)), ((-(1152921487426977792ULL)))))));
        var_19 = ((/* implicit */int) 18446744073709551615ULL);
        arr_2 [i_0] [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))))) ? (min((((/* implicit */long long int) (short)-17914)), (var_3))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) <= (((/* implicit */int) arr_0 [i_0])))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 2) 
    {
        var_20 *= ((/* implicit */unsigned char) arr_6 [i_1]);
        /* LoopSeq 3 */
        for (int i_2 = 4; i_2 < 17; i_2 += 2) 
        {
            var_21 &= ((/* implicit */unsigned char) (~((-(((/* implicit */int) arr_7 [i_2 - 4] [i_2 + 1] [i_2 - 3]))))));
            var_22 = ((/* implicit */int) max((var_10), (((/* implicit */unsigned char) ((signed char) ((arr_7 [i_1] [i_1] [i_1]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [i_1]))) : (1178366262U)))))));
        }
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            /* LoopNest 3 */
            for (short i_4 = 4; i_4 < 17; i_4 += 3) 
            {
                for (int i_5 = 0; i_5 < 18; i_5 += 3) 
                {
                    for (short i_6 = 1; i_6 < 15; i_6 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((arr_7 [i_1] [i_3 - 1] [i_4]) ? (((/* implicit */int) (unsigned short)7627)) : (((/* implicit */int) arr_17 [i_5] [i_3] [i_4] [i_5] [i_6] [i_4] [i_3]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_15 [i_1] [i_3] [i_6])) / (((/* implicit */int) arr_14 [i_1] [i_1] [i_4 - 2] [i_1] [(signed char)0]))))) : (((((/* implicit */_Bool) var_15)) ? (3484249916071531594ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1]))))))))))));
                            arr_19 [i_1] [i_1] [i_1] [i_5] [i_3] [i_6] [i_1] = arr_17 [(unsigned short)1] [(unsigned short)1] [(signed char)11] [i_5] [i_6] [i_1] [(unsigned short)1];
                        }
                    } 
                } 
            } 
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned char i_7 = 0; i_7 < 18; i_7 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                {
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_8] [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [(short)3] [i_3] [(short)3]))) : (var_7)));
                            var_25 = ((/* implicit */_Bool) var_4);
                        }
                    } 
                } 
                var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) var_11))));
                var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) ((arr_29 [i_1] [i_3] [i_3 - 1] [i_3] [i_3 - 1] [i_3 - 1] [i_3 - 1]) + (arr_8 [i_3 - 1] [i_3 - 1]))))));
            }
            for (unsigned short i_10 = 1; i_10 < 16; i_10 += 4) 
            {
                var_28 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((((/* implicit */_Bool) 9299468230098727396ULL)) ? (9036168356661310529ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1] [i_3] [i_10]))))) == (((/* implicit */unsigned long long int) 2147483647))))) > (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (signed char)85)) : (((/* implicit */int) (signed char)-118))))))))));
                /* LoopNest 2 */
                for (unsigned char i_11 = 0; i_11 < 18; i_11 += 1) 
                {
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        {
                            arr_40 [i_1] [i_1] [(signed char)16] [i_1] [(unsigned char)10] |= ((/* implicit */unsigned char) 486037607);
                            var_29 = ((/* implicit */_Bool) var_17);
                            var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_1] [i_3 - 1] [i_10 + 1])) ? (((/* implicit */int) arr_33 [i_1] [i_3 - 1] [i_10 - 1])) : (((/* implicit */int) arr_20 [i_3 - 1] [5ULL] [i_10 - 1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_3 - 1] [i_3] [i_10 + 2]))) : (arr_29 [i_3] [(unsigned short)4] [(unsigned short)4] [i_10 + 1] [i_12] [(_Bool)1] [i_12])));
                        }
                    } 
                } 
            }
            for (short i_13 = 0; i_13 < 18; i_13 += 3) 
            {
                var_31 = ((/* implicit */int) ((unsigned long long int) ((signed char) max((((/* implicit */unsigned long long int) arr_6 [i_1])), (17503740785639909315ULL)))));
                var_32 = ((/* implicit */unsigned short) 5687390278350449141ULL);
                /* LoopNest 2 */
                for (unsigned short i_14 = 0; i_14 < 18; i_14 += 3) 
                {
                    for (long long int i_15 = 0; i_15 < 18; i_15 += 4) 
                    {
                        {
                            var_33 = ((/* implicit */unsigned char) max((var_33), (min((((/* implicit */unsigned char) min((((((/* implicit */_Bool) 1152921487426977795ULL)) || (((/* implicit */_Bool) arr_22 [i_1] [i_1] [i_14] [i_15])))), (((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) arr_26 [i_3] [i_3] [7] [i_14]))))))), (var_14)))));
                            var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) arr_22 [i_1] [i_15] [i_1] [i_14]))));
                            var_35 = ((/* implicit */short) min((var_35), (((/* implicit */short) min((((((/* implicit */_Bool) arr_28 [(unsigned char)16] [i_3] [(unsigned char)16] [i_3] [i_15] [i_3] [i_14])) ? ((+(((/* implicit */int) (unsigned char)143)))) : (((/* implicit */int) var_13)))), (((/* implicit */int) arr_3 [i_1])))))));
                        }
                    } 
                } 
            }
            var_36 = ((/* implicit */_Bool) max((var_36), (((/* implicit */_Bool) var_5))));
            var_37 += ((/* implicit */_Bool) var_8);
        }
        for (short i_16 = 0; i_16 < 18; i_16 += 2) 
        {
            var_38 = ((/* implicit */int) (unsigned char)254);
            var_39 = ((/* implicit */short) max((var_39), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)6)) ? (1803179094) : (((/* implicit */int) (unsigned short)44620)))))));
            /* LoopSeq 4 */
            for (unsigned long long int i_17 = 1; i_17 < 17; i_17 += 2) 
            {
                var_40 *= ((/* implicit */short) min((max((((unsigned int) var_3)), (((/* implicit */unsigned int) -1196350873)))), (((/* implicit */unsigned int) (unsigned char)15))));
                arr_53 [i_1] [i_17] [i_1] [i_1] = ((/* implicit */unsigned char) arr_25 [i_17 + 1] [i_16] [(short)12] [i_1]);
                var_41 *= var_15;
                var_42 ^= ((/* implicit */int) arr_39 [i_1] [i_1] [i_1] [i_16] [(unsigned char)4] [i_17]);
            }
            /* vectorizable */
            for (signed char i_18 = 3; i_18 < 14; i_18 += 4) 
            {
                arr_56 [i_1] |= ((/* implicit */int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_16] [i_18 + 3] [i_1] [i_18 + 3]))) : (var_8)));
                var_43 -= ((/* implicit */short) ((((((/* implicit */_Bool) var_0)) ? (var_8) : (((/* implicit */unsigned long long int) arr_55 [i_1] [i_1] [i_18])))) << (((((/* implicit */int) var_10)) - (98)))));
                var_44 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_2)))) ? (((((/* implicit */int) arr_7 [(_Bool)1] [i_16] [(_Bool)1])) + (((/* implicit */int) var_6)))) : (((/* implicit */int) arr_11 [(_Bool)1] [i_16]))));
                /* LoopNest 2 */
                for (short i_19 = 0; i_19 < 18; i_19 += 1) 
                {
                    for (_Bool i_20 = 0; i_20 < 0; i_20 += 1) 
                    {
                        {
                            var_45 ^= ((((/* implicit */int) arr_43 [i_18 + 4] [i_20] [i_1] [i_20])) % (((/* implicit */int) arr_43 [i_18 + 4] [6] [i_16] [i_18 + 4])));
                            var_46 = ((/* implicit */signed char) min((var_46), (((/* implicit */signed char) arr_8 [i_18] [16]))));
                        }
                    } 
                } 
                var_47 = ((/* implicit */long long int) ((unsigned short) ((arr_16 [i_1] [i_1] [i_1]) + (((/* implicit */int) arr_46 [i_18] [(unsigned char)8])))));
            }
            /* vectorizable */
            for (int i_21 = 1; i_21 < 16; i_21 += 3) 
            {
                var_48 = ((/* implicit */int) ((((/* implicit */_Bool) arr_35 [i_1] [i_1] [i_21] [i_16])) ? (((((/* implicit */_Bool) arr_30 [i_21] [i_16] [i_1] [i_1])) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_1] [i_16] [i_21] [i_1] [4LL] [(unsigned char)2] [i_21]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_21 + 2] [i_21 + 1] [i_21] [i_21 + 2])))));
                var_49 *= ((/* implicit */signed char) ((int) (+(((/* implicit */int) var_4)))));
            }
            /* vectorizable */
            for (unsigned short i_22 = 1; i_22 < 17; i_22 += 3) 
            {
                arr_69 [i_1] [i_22] [i_22] = ((/* implicit */long long int) (-(((/* implicit */int) arr_14 [(unsigned short)17] [i_22] [i_22] [i_22] [(unsigned short)17]))));
                var_50 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_43 [i_22 - 1] [i_16] [i_16] [i_22])) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_22 - 1]))) : (-1886002158105520394LL)));
            }
            var_51 = ((/* implicit */_Bool) (signed char)111);
            var_52 |= ((/* implicit */short) (unsigned short)35495);
        }
        arr_70 [(short)11] = ((((/* implicit */_Bool) arr_33 [i_1] [i_1] [i_1])) ? (min((((/* implicit */unsigned int) max((1196506423), (var_5)))), (((((/* implicit */_Bool) arr_43 [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)254))) : (arr_28 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))))) : (((/* implicit */unsigned int) var_17)));
    }
    for (signed char i_23 = 0; i_23 < 22; i_23 += 3) 
    {
        arr_74 [i_23] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)93)) ? (((/* implicit */unsigned long long int) var_0)) : (max(((-(var_15))), (((/* implicit */unsigned long long int) (unsigned char)101))))));
        var_53 -= ((/* implicit */unsigned char) ((max((var_11), (((/* implicit */unsigned long long int) (unsigned char)66)))) + (((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)159)), (2147483638)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)118))) : (max((((/* implicit */unsigned long long int) (short)2861)), (15506830014792941083ULL)))))));
        var_54 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (unsigned short)31704)) : (((/* implicit */int) (signed char)-1)))), (max((((/* implicit */int) (unsigned char)43)), (-638643246)))))) ? (((((/* implicit */_Bool) var_17)) ? (var_17) : ((-(((/* implicit */int) var_16)))))) : (((/* implicit */int) ((((/* implicit */int) var_14)) >= (((/* implicit */int) var_14)))))));
        /* LoopNest 2 */
        for (unsigned short i_24 = 0; i_24 < 22; i_24 += 2) 
        {
            for (int i_25 = 0; i_25 < 22; i_25 += 4) 
            {
                {
                    var_55 *= ((/* implicit */unsigned int) (((~(((((/* implicit */_Bool) arr_73 [i_23])) ? (18446744073709551609ULL) : (((/* implicit */unsigned long long int) arr_71 [i_23])))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_72 [i_23])) | ((~(arr_75 [i_24]))))))));
                    var_56 = ((/* implicit */signed char) min((var_56), (((/* implicit */signed char) ((4935520886222884910LL) | (-4935520886222884908LL))))));
                    arr_79 [i_25] [i_24] [i_23] [i_25] = ((/* implicit */unsigned char) (-(max((((/* implicit */unsigned long long int) arr_77 [i_23] [i_24] [i_25])), (var_12)))));
                }
            } 
        } 
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_26 = 0; i_26 < 13; i_26 += 2) 
    {
        var_57 = ((/* implicit */short) ((arr_41 [i_26] [i_26] [i_26]) ? (((/* implicit */long long int) (~(((/* implicit */int) var_6))))) : (((arr_50 [i_26] [(signed char)2]) + (((/* implicit */long long int) ((/* implicit */int) var_6)))))));
        var_58 |= 17481119434643593605ULL;
        var_59 = ((/* implicit */int) ((((/* implicit */_Bool) 3278026610U)) ? (((((/* implicit */_Bool) var_1)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_4))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_42 [i_26] [i_26] [i_26])) <= (((/* implicit */int) arr_38 [i_26] [i_26] [i_26] [13ULL] [i_26]))))))));
    }
    for (unsigned int i_27 = 0; i_27 < 13; i_27 += 2) 
    {
        arr_86 [i_27] [(_Bool)0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_75 [i_27])) ? (arr_71 [i_27]) : (((/* implicit */long long int) ((/* implicit */int) var_13))))), (((/* implicit */long long int) arr_45 [i_27] [i_27] [i_27] [i_27]))))) ? (((/* implicit */int) ((arr_22 [i_27] [i_27] [(signed char)8] [i_27]) >= (((/* implicit */unsigned long long int) (+(arr_55 [(short)17] [16] [i_27]))))))) : (((((/* implicit */int) (unsigned short)51651)) / (arr_23 [(_Bool)1] [i_27] [14ULL])))));
        /* LoopNest 3 */
        for (int i_28 = 1; i_28 < 10; i_28 += 2) 
        {
            for (signed char i_29 = 1; i_29 < 11; i_29 += 3) 
            {
                for (unsigned short i_30 = 0; i_30 < 13; i_30 += 4) 
                {
                    {
                        arr_95 [i_28] [i_29] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_93 [i_27] [i_27] [i_29] [i_28])), (-4935520886222884917LL)))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_4)) : (2097024))) : (((/* implicit */int) arr_59 [(signed char)0] [i_28] [i_28]))));
                        var_60 = ((/* implicit */unsigned long long int) -7085535008170216102LL);
                        arr_96 [i_27] [i_27] [i_27] [i_28] [i_27] [i_27] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? ((~(arr_29 [15ULL] [i_28] [i_28] [i_28 + 3] [15ULL] [i_29 - 1] [i_30]))) : (max((max((arr_92 [i_28] [i_28] [i_28] [i_27] [i_27]), (((/* implicit */unsigned long long int) var_14)))), (arr_92 [i_27] [i_28] [i_27] [0LL] [(signed char)12])))));
                    }
                } 
            } 
        } 
    }
    var_61 -= ((/* implicit */unsigned short) var_14);
    var_62 = (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_11) : (var_15)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-9))) : (min((13ULL), (((/* implicit */unsigned long long int) 1690462700)))))));
}
