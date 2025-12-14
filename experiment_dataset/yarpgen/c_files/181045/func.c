/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181045
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
    var_16 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) >= (((((/* implicit */_Bool) ((unsigned short) var_8))) ? (((/* implicit */long long int) ((/* implicit */int) max((var_7), (var_7))))) : (((long long int) var_9))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    var_17 -= ((/* implicit */unsigned long long int) max(((~(4533119243864311095LL))), ((+(arr_1 [i_0 + 1])))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */int) arr_4 [i_0 + 2] [i_0 + 2])) + (((/* implicit */int) ((signed char) var_6))))));
                                arr_12 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1] [i_4])) ? (((/* implicit */int) ((unsigned short) 7849224612421394195ULL))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)42)))))))));
                                var_19 ^= ((/* implicit */long long int) max((((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)162)) ? (((/* implicit */int) arr_2 [i_4] [i_2] [i_1])) : (((/* implicit */int) var_2)))) < (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [(unsigned char)0] [i_1] [i_1])) || (((/* implicit */_Bool) (signed char)38)))))))), (var_5)));
                                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((3889074147149681835ULL), (((/* implicit */unsigned long long int) var_14))))) ? (((((/* implicit */_Bool) arr_0 [i_0 - 2] [i_0 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_12)) >= (((/* implicit */int) arr_4 [i_0] [i_1])))))) : ((+(var_1))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((var_4), ((unsigned char)162))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 1) 
        {
            var_21 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) << ((((-(var_11))) - (5920396259350928214ULL)))));
            var_22 = ((/* implicit */signed char) min((max((((/* implicit */unsigned long long int) arr_0 [i_0 - 1] [i_0 - 1])), (var_13))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0 + 2] [i_0 + 2])) ? (((/* implicit */int) arr_0 [i_0 - 2] [i_0])) : (((/* implicit */int) arr_11 [i_5] [i_5] [i_5] [i_0 + 2] [(signed char)22])))))));
            arr_15 [i_0 + 1] = ((/* implicit */unsigned char) ((unsigned short) ((unsigned long long int) 5481554545019091596LL)));
            var_23 = ((/* implicit */signed char) ((unsigned short) min((((/* implicit */long long int) arr_3 [i_0 - 2] [i_0])), (((5481554545019091596LL) >> (((arr_1 [i_5]) - (3056287518230590842LL))))))));
        }
        for (signed char i_6 = 1; i_6 < 23; i_6 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned char i_7 = 1; i_7 < 20; i_7 += 2) 
            {
                for (unsigned char i_8 = 0; i_8 < 24; i_8 += 4) 
                {
                    {
                        var_24 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])) * (((/* implicit */int) arr_5 [i_8] [i_0] [i_0] [i_0]))))), ((-(arr_7 [i_7] [i_7] [i_7] [i_8])))))), ((+(var_9)))));
                        arr_25 [i_0 + 2] [i_0] [i_0] [i_0] &= ((/* implicit */unsigned char) var_15);
                        var_25 = var_15;
                        arr_26 [i_6] [i_6] [i_6] [(unsigned short)1] [i_6] = ((/* implicit */unsigned short) arr_1 [i_0]);
                    }
                } 
            } 
            arr_27 [i_0] [i_6] [i_6] = min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [i_6 - 1] [i_6] [i_6] [i_0 - 2])) ? (((/* implicit */int) ((((/* implicit */int) (signed char)127)) >= (((/* implicit */int) (unsigned char)180))))) : (((/* implicit */int) ((((/* implicit */int) arr_9 [i_0] [i_6] [i_6] [i_0] [(signed char)11])) >= (((/* implicit */int) arr_13 [i_0])))))))), (max((-3351051193829975792LL), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-39)) ? (((/* implicit */int) (signed char)-107)) : (((/* implicit */int) var_5))))))));
            var_26 = max((2788479639837610328LL), (((/* implicit */long long int) ((((/* implicit */_Bool) max((var_5), (arr_22 [i_0] [i_6])))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_6 [i_0 + 2] [i_0 + 1] [i_0 + 2] [i_0 - 2] [i_6 - 1] [i_6 + 1]))))));
            arr_28 [i_6] [i_0 + 2] [i_6] = ((/* implicit */unsigned short) ((long long int) min((((/* implicit */long long int) ((((/* implicit */int) arr_19 [i_6] [i_0] [i_0])) / (((/* implicit */int) (unsigned char)240))))), (((((/* implicit */_Bool) arr_5 [i_0] [i_0 - 2] [i_0 - 2] [(unsigned char)0])) ? (5595911607831383318LL) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))));
        }
        for (unsigned char i_9 = 1; i_9 < 22; i_9 += 4) 
        {
            var_27 = ((((long long int) 17095070260265974804ULL)) ^ (((/* implicit */long long int) ((/* implicit */int) (!(((((/* implicit */_Bool) arr_21 [i_9] [i_9] [i_0])) && (((/* implicit */_Bool) arr_18 [i_9] [i_0])))))))));
            arr_33 [i_0] [1ULL] = ((/* implicit */unsigned long long int) arr_7 [i_0] [(unsigned char)7] [(unsigned short)23] [i_9]);
            var_28 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)162)) ? (((/* implicit */int) arr_21 [i_0] [i_0] [i_0])) : (((/* implicit */int) var_12))))) ? (arr_7 [i_0 + 2] [i_9] [i_9 - 1] [i_9 + 1]) : (((/* implicit */long long int) ((/* implicit */int) var_4))))) == (((arr_1 [i_9]) ^ (arr_1 [i_0 + 2])))));
            var_29 = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)91)))))));
            var_30 = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)56083))) - (var_9)))) ? (var_1) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_29 [i_0] [i_9])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)229))))))));
        }
        var_31 = ((/* implicit */unsigned char) (~((+(((/* implicit */int) arr_0 [i_0 - 2] [i_0 + 1]))))));
    }
    /* LoopSeq 2 */
    for (unsigned char i_10 = 0; i_10 < 13; i_10 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_11 = 0; i_11 < 13; i_11 += 1) 
        {
            for (unsigned long long int i_12 = 0; i_12 < 13; i_12 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_13 = 2; i_13 < 12; i_13 += 4) 
                    {
                        var_32 ^= ((/* implicit */signed char) ((unsigned char) ((signed char) arr_36 [i_12] [i_11])));
                        var_33 ^= ((/* implicit */unsigned short) ((((((/* implicit */int) arr_20 [i_13 + 1] [i_13] [i_13 - 2] [i_13 - 1])) < (((/* implicit */int) arr_11 [i_13 + 1] [i_13 + 1] [i_13 - 1] [i_13 - 1] [i_13 - 1])))) ? (min((((/* implicit */long long int) arr_11 [i_13 - 2] [i_13 + 1] [i_13 - 1] [i_13 - 2] [i_13 - 2])), (arr_7 [i_13 - 1] [i_13 - 1] [i_13 + 1] [i_13 - 2]))) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_13 - 1] [i_13] [i_13 - 1] [i_13 - 1])))));
                        var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_22 [i_10] [i_13 - 1])) * (((/* implicit */int) arr_22 [i_10] [i_13 - 2]))))) ? (((/* implicit */int) min(((unsigned char)16), (arr_22 [i_10] [i_13 + 1])))) : (((((/* implicit */_Bool) (unsigned char)222)) ? (((/* implicit */int) (unsigned char)75)) : (((/* implicit */int) arr_22 [i_10] [i_13 + 1]))))));
                        arr_46 [(unsigned short)4] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */int) var_14)) < (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) < (((((/* implicit */_Bool) (unsigned char)219)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-103))) : (arr_34 [i_10]))))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_14 = 0; i_14 < 13; i_14 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_15 = 2; i_15 < 10; i_15 += 2) 
                        {
                            arr_53 [i_10] [i_11] [(unsigned char)12] [(signed char)10] [4LL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)92)) && (((/* implicit */_Bool) (signed char)-39))));
                            arr_54 [i_12] [(signed char)8] [i_12] [i_12] [i_12] [0ULL] = ((/* implicit */unsigned short) ((long long int) (!(((/* implicit */_Bool) (unsigned char)15)))));
                            arr_55 [i_10] [i_11] [i_11] [i_12] [(unsigned short)5] [i_15] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)122)) + (((/* implicit */int) arr_49 [i_15 + 2] [10ULL] [i_15 + 2] [i_15 + 2] [i_15 + 3]))));
                        }
                        for (unsigned char i_16 = 0; i_16 < 13; i_16 += 2) 
                        {
                            var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) 0LL)) ? (arr_37 [i_10] [i_11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 6016538381258194774LL)) || (((/* implicit */_Bool) arr_3 [i_14] [i_16]))))))));
                            var_36 = ((/* implicit */unsigned long long int) ((long long int) (+(((/* implicit */int) (signed char)-61)))));
                        }
                        var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_48 [i_10] [i_11] [i_12] [i_14])) ? (arr_48 [i_14] [i_11] [i_11] [i_10]) : (arr_48 [i_14] [i_12] [i_10] [i_10])));
                    }
                    var_38 += ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_9 [i_10] [i_11] [i_12] [i_10] [i_10]))));
                    arr_59 [i_10] [i_11] [i_10] &= ((/* implicit */unsigned short) ((long long int) arr_51 [i_10] [i_10] [i_11] [i_12]));
                }
            } 
        } 
        arr_60 [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_13), (arr_47 [i_10] [(unsigned char)9] [i_10] [i_10] [i_10])))) ? (((unsigned long long int) (unsigned char)95)) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) % (((/* implicit */int) ((((/* implicit */_Bool) (signed char)61)) && (((/* implicit */_Bool) var_11)))))))) : (min((arr_16 [i_10] [(unsigned char)0]), (arr_16 [i_10] [10ULL])))));
        /* LoopSeq 1 */
        for (unsigned short i_17 = 0; i_17 < 13; i_17 += 3) 
        {
            arr_63 [i_10] [i_10] [i_10] = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_30 [i_10] [i_17])) ? (2975561059250306950ULL) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-62))) + (var_9))))), (((/* implicit */unsigned long long int) arr_36 [i_10] [i_10]))));
            /* LoopNest 2 */
            for (unsigned char i_18 = 2; i_18 < 10; i_18 += 3) 
            {
                for (long long int i_19 = 1; i_19 < 12; i_19 += 3) 
                {
                    {
                        var_39 &= ((/* implicit */long long int) min((((/* implicit */unsigned char) var_6)), (max((arr_29 [i_18 + 3] [i_19 - 1]), (((/* implicit */unsigned char) arr_62 [i_18 - 1] [i_18 + 1] [i_19 + 1]))))));
                        var_40 = ((/* implicit */unsigned long long int) max((var_40), (((/* implicit */unsigned long long int) var_0))));
                    }
                } 
            } 
        }
    }
    /* vectorizable */
    for (long long int i_20 = 0; i_20 < 18; i_20 += 4) 
    {
        arr_73 [i_20] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_71 [i_20])) ^ (((/* implicit */int) arr_71 [i_20]))));
        var_41 = ((/* implicit */long long int) (unsigned char)176);
        arr_74 [i_20] [i_20] = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */int) arr_9 [i_20] [i_20] [i_20] [i_20] [i_20])) / (((/* implicit */int) var_14)))));
        /* LoopNest 2 */
        for (unsigned char i_21 = 2; i_21 < 17; i_21 += 1) 
        {
            for (long long int i_22 = 0; i_22 < 18; i_22 += 4) 
            {
                {
                    var_42 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) arr_31 [i_22] [i_21] [i_20]))) ? (((((/* implicit */_Bool) (unsigned char)27)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)29906)))) : (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (signed char)-39)) : (((/* implicit */int) (unsigned short)15813))))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_23 = 0; i_23 < 18; i_23 += 1) 
                    {
                        var_43 = ((/* implicit */unsigned long long int) ((-4706916242569587368LL) > (((((/* implicit */_Bool) (signed char)-38)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_24 [i_20] [i_22] [i_21])))));
                        var_44 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)127))));
                        var_45 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_6))));
                        var_46 -= ((/* implicit */long long int) (!(((((/* implicit */_Bool) (signed char)-61)) || (((/* implicit */_Bool) (signed char)62))))));
                    }
                    for (long long int i_24 = 2; i_24 < 16; i_24 += 1) 
                    {
                        var_47 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) var_3))) ? (((/* implicit */int) arr_29 [i_21 - 1] [i_22])) : (((/* implicit */int) ((((/* implicit */int) (signed char)86)) >= (((/* implicit */int) arr_81 [i_20] [i_20] [i_20] [i_20])))))));
                        /* LoopSeq 2 */
                        for (signed char i_25 = 0; i_25 < 18; i_25 += 4) /* same iter space */
                        {
                            var_48 &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) (unsigned char)162))));
                            arr_88 [i_21] [i_21] [i_24] [i_24] [i_25] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_21 - 1] [i_21 - 2] [i_24 - 2])) ? (((/* implicit */int) arr_2 [i_21 - 2] [i_21 - 1] [i_24 + 2])) : (((/* implicit */int) arr_2 [i_21 + 1] [i_21 - 1] [i_24 - 1]))));
                            var_49 = ((/* implicit */unsigned char) arr_0 [i_20] [i_21 - 1]);
                            var_50 = ((unsigned char) (unsigned char)208);
                        }
                        for (signed char i_26 = 0; i_26 < 18; i_26 += 4) /* same iter space */
                        {
                            arr_92 [i_21] [i_26] [i_24] [i_22] [i_21] [i_21] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_17 [i_21 + 1] [i_21 - 2])) ? (((/* implicit */unsigned long long int) -2741436466396963012LL)) : (arr_17 [i_21 - 1] [i_21 - 2])));
                            arr_93 [i_20] [i_21] [i_22] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_82 [i_24 - 2] [i_24] [i_21] [i_24])) ? (arr_89 [i_24] [i_24] [i_24 + 1] [(unsigned short)1] [i_24 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
                        }
                    }
                    for (unsigned short i_27 = 0; i_27 < 18; i_27 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_28 = 0; i_28 < 18; i_28 += 1) 
                        {
                            arr_101 [i_21] [i_21] [i_21] [i_21] [i_21] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_22] [i_20] [i_20])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) : (-5481554545019091597LL)))) ? (((/* implicit */int) ((signed char) 8922561866889539311ULL))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_20] [i_20] [i_21])) || (((/* implicit */_Bool) arr_99 [i_21] [10ULL] [i_21] [i_27] [i_28])))))));
                            var_51 = ((/* implicit */long long int) var_5);
                            var_52 = ((/* implicit */long long int) ((((/* implicit */int) var_6)) >= (((/* implicit */int) arr_8 [i_20] [i_20] [i_20] [i_20]))));
                            var_53 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_24 [i_21] [i_21 - 2] [i_21])) ? (arr_32 [i_20]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)162)))));
                        }
                        var_54 = ((/* implicit */signed char) ((((((/* implicit */int) arr_5 [i_20] [i_20] [i_20] [i_20])) >= (((/* implicit */int) var_8)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_31 [i_20] [12LL] [12LL])) || (((/* implicit */_Bool) var_9))))) : (((/* implicit */int) ((((/* implicit */int) var_5)) <= (((/* implicit */int) (signed char)82)))))));
                        arr_102 [i_21] [(unsigned short)14] [i_21] [(unsigned short)16] [i_21] = ((/* implicit */long long int) arr_85 [i_21] [i_21 - 1] [i_21 - 2] [i_21]);
                        var_55 = ((/* implicit */long long int) var_6);
                    }
                    var_56 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) arr_84 [i_20] [i_21] [i_21] [i_21] [i_22] [i_21])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_5)))));
                }
            } 
        } 
    }
    var_57 = min((var_5), (((/* implicit */unsigned char) var_6)));
}
