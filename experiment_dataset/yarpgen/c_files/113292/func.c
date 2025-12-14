/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113292
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
    var_12 ^= ((/* implicit */unsigned int) var_6);
    var_13 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_5))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_6 [i_1] [i_1] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (-(1159017025)))), ((+(arr_0 [(_Bool)1] [i_1])))));
            var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) (((-(-1159017019))) == (((/* implicit */int) (!(((/* implicit */_Bool) ((int) (signed char)-77)))))))))));
        }
        /* LoopSeq 2 */
        for (long long int i_2 = 0; i_2 < 22; i_2 += 4) /* same iter space */
        {
            var_15 -= ((/* implicit */unsigned short) (~(max((((/* implicit */unsigned long long int) (unsigned short)60)), (10826471943819358468ULL)))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned char i_3 = 0; i_3 < 22; i_3 += 4) 
            {
                var_16 += ((/* implicit */signed char) (~((~(1159017025)))));
                var_17 = ((/* implicit */short) var_9);
                var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) arr_3 [i_0] [i_3]))));
                arr_14 [i_0] [i_2] [i_0] = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */int) arr_9 [i_0] [i_0] [i_3])) ^ (((/* implicit */int) (unsigned short)65463)))));
                arr_15 [i_0] [16LL] [(unsigned short)12] [i_3] = ((/* implicit */unsigned int) (!((_Bool)1)));
            }
            for (unsigned int i_4 = 0; i_4 < 22; i_4 += 4) 
            {
                var_19 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) max((1159017020), (-1159017047)))) ? (1545042937) : (((/* implicit */int) (signed char)121)))), ((+(((/* implicit */int) (!(((/* implicit */_Bool) -1159017028)))))))));
                var_20 += ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) max((((/* implicit */unsigned short) var_5)), (var_1)))), ((-(((/* implicit */int) var_1)))))))));
            }
            /* vectorizable */
            for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 4) 
            {
                /* LoopSeq 1 */
                for (signed char i_6 = 2; i_6 < 21; i_6 += 2) 
                {
                    var_21 += ((/* implicit */unsigned char) var_0);
                    arr_23 [i_2] [i_2] = ((/* implicit */long long int) (~((~(((/* implicit */int) var_5))))));
                    /* LoopSeq 3 */
                    for (unsigned short i_7 = 0; i_7 < 22; i_7 += 1) /* same iter space */
                    {
                        arr_28 [i_0] [i_2] [(unsigned short)18] [i_6] [i_7] = ((/* implicit */unsigned short) ((unsigned char) ((signed char) (_Bool)1)));
                        var_22 = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)46143))));
                        arr_29 [i_7] [i_2] [i_5] = ((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_2]))));
                        arr_30 [i_0] [i_0] [i_6] [i_6] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)19393))));
                    }
                    for (unsigned short i_8 = 0; i_8 < 22; i_8 += 1) /* same iter space */
                    {
                        var_23 = ((/* implicit */long long int) ((_Bool) 576460752303423480LL));
                        var_24 |= ((/* implicit */signed char) (short)31402);
                        var_25 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_0]))) / (7680881669889419959LL))))));
                    }
                    for (unsigned short i_9 = 0; i_9 < 22; i_9 += 1) /* same iter space */
                    {
                        arr_35 [i_0] [i_0] = (-(arr_0 [i_6 - 1] [i_2]));
                        var_26 = ((/* implicit */int) max((var_26), (((((/* implicit */_Bool) (short)31407)) ? (((/* implicit */int) arr_18 [i_5] [i_9] [i_5] [i_2])) : (((/* implicit */int) arr_13 [i_6 + 1] [i_6 - 1]))))));
                        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) var_3))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
                    }
                }
                arr_36 [i_0] [(short)8] = ((/* implicit */unsigned short) ((arr_31 [i_5] [i_2] [(unsigned char)11]) ? (arr_21 [i_5]) : (16857493556494937500ULL)));
                var_28 *= ((/* implicit */unsigned short) (-(arr_21 [i_0])));
                var_29 = ((/* implicit */unsigned short) (((!(var_10))) ? (((unsigned int) 344232281)) : ((-(4114010606U)))));
                /* LoopSeq 4 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    var_30 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_10])) | (((/* implicit */int) arr_5 [i_5]))));
                    var_31 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 8073155126407711786ULL))));
                    /* LoopSeq 2 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) (-(((/* implicit */int) arr_8 [i_0] [i_2] [i_11])))))));
                        var_33 = ((/* implicit */short) (unsigned char)87);
                    }
                    for (int i_12 = 0; i_12 < 22; i_12 += 4) 
                    {
                        var_34 = ((/* implicit */signed char) ((1159017031) | (1159017007)));
                        var_35 = ((/* implicit */_Bool) max((var_35), ((!((_Bool)0)))));
                        arr_45 [i_12] [(short)18] [(unsigned short)11] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned long long int) (signed char)77);
                        var_36 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((arr_12 [i_0] [20ULL]) != (((/* implicit */int) (unsigned short)4088)))))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned int i_13 = 0; i_13 < 22; i_13 += 4) /* same iter space */
                    {
                        arr_50 [i_0] [(signed char)4] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_39 [i_2] [i_2]))));
                        var_37 -= ((/* implicit */unsigned short) (+(4055478392U)));
                        var_38 = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)127))));
                        var_39 -= ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) (unsigned short)22770))))));
                    }
                    for (unsigned int i_14 = 0; i_14 < 22; i_14 += 4) /* same iter space */
                    {
                        var_40 = ((/* implicit */_Bool) ((arr_12 [i_0] [i_2]) / (((/* implicit */int) (unsigned char)97))));
                        arr_53 [i_0] [i_10] [i_10] [(unsigned short)12] = ((/* implicit */unsigned char) (!(((((/* implicit */unsigned long long int) var_11)) != (arr_32 [i_0] [i_2] [i_5] [i_5] [i_14])))));
                    }
                    arr_54 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((_Bool) (signed char)(-127 - 1)));
                }
                for (unsigned char i_15 = 1; i_15 < 21; i_15 += 4) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        var_41 = ((/* implicit */_Bool) (short)-11562);
                        arr_62 [i_16] [i_15 + 1] [i_15] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) arr_49 [i_15] [i_15 - 1] [i_15] [i_15 - 1] [i_15 - 1])) >= (arr_47 [i_16] [i_16] [i_16] [i_16])));
                    }
                    for (int i_17 = 0; i_17 < 22; i_17 += 3) 
                    {
                        var_42 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_5] [i_15])) ? (((/* implicit */int) (unsigned char)23)) : (((((/* implicit */int) arr_41 [14ULL] [(signed char)18] [i_2] [i_5] [9] [i_17])) | (((/* implicit */int) arr_1 [7U]))))));
                        arr_65 [i_0] [i_15] [i_5] [i_15] [i_17] = ((/* implicit */unsigned char) (((_Bool)0) ? (1159017041) : (((/* implicit */int) (unsigned char)23))));
                    }
                    var_43 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [(signed char)18] [i_15 + 1] [i_15 + 1] [i_15 + 1] [(signed char)18])) ? (((/* implicit */int) (short)-11569)) : (((/* implicit */int) (_Bool)0))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_18 = 0; i_18 < 22; i_18 += 4) 
                    {
                        arr_68 [i_15] [i_15] [(unsigned short)6] [i_15 + 1] [i_18] = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) arr_48 [i_5] [i_5] [i_5] [i_5] [5] [i_5]))) - ((-(((/* implicit */int) (_Bool)1))))));
                        var_44 = ((/* implicit */int) min((var_44), (((((/* implicit */_Bool) (unsigned char)254)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)4088))))));
                        arr_69 [i_15] [i_2] [i_5] [i_15] [i_18] = (~((+(((/* implicit */int) (_Bool)0)))));
                        var_45 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_46 [i_0] [i_15 - 1] [i_15] [i_18] [i_18] [9ULL] [i_18])) == (((/* implicit */int) (_Bool)1))));
                        var_46 = ((((/* implicit */_Bool) arr_66 [16LL] [i_15 + 1] [(unsigned short)4] [i_18] [i_18] [i_18] [i_18])) ? (((((/* implicit */_Bool) (unsigned char)187)) ? (((/* implicit */int) (signed char)113)) : (((/* implicit */int) (unsigned short)43424)))) : (((/* implicit */int) ((unsigned short) arr_9 [i_2] [i_2] [i_2]))));
                    }
                    for (signed char i_19 = 1; i_19 < 20; i_19 += 2) 
                    {
                        arr_72 [i_0] [i_0] [i_2] [i_5] [(unsigned char)21] [i_15] [i_19] = (+(((/* implicit */int) arr_18 [i_19] [i_15 - 1] [i_15 - 1] [i_15 - 1])));
                        var_47 = ((/* implicit */unsigned short) ((arr_64 [i_2] [i_2] [i_19 + 2] [10ULL] [12U] [i_19] [i_19 + 1]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)163)))));
                        var_48 = arr_66 [i_2] [11] [i_15 + 1] [i_15] [i_19 + 1] [i_19 + 2] [i_19];
                        var_49 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [(unsigned short)5] [8U] [i_5] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (268435456U))))));
                    }
                    var_50 &= ((/* implicit */unsigned char) (-(arr_37 [i_15 - 1] [i_15] [i_15 - 1] [i_15])));
                    var_51 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_41 [i_2] [i_2] [i_5] [i_15 - 1] [i_2] [i_2])) ? (((/* implicit */int) (short)-11586)) : (((/* implicit */int) arr_67 [i_15] [i_15 - 1] [i_15 + 1] [i_15] [i_15 - 1]))));
                }
                for (unsigned char i_20 = 2; i_20 < 21; i_20 += 3) 
                {
                    var_52 = ((/* implicit */long long int) (-(((/* implicit */int) arr_27 [0ULL] [i_2] [0ULL] [i_2] [i_20 - 2]))));
                    arr_75 [i_0] [(_Bool)1] [(_Bool)1] [(_Bool)1] = ((/* implicit */_Bool) ((unsigned long long int) (-(4026531825U))));
                    var_53 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (unsigned short)16879)) ? (((/* implicit */int) (short)-7949)) : (((/* implicit */int) arr_67 [i_5] [i_2] [i_5] [i_5] [i_5]))))));
                    arr_76 [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) -5959571699912970238LL)) * (((unsigned long long int) arr_47 [i_0] [i_2] [i_5] [(unsigned short)7]))));
                }
                for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                {
                    var_54 = ((/* implicit */signed char) max((var_54), (((/* implicit */signed char) (-(((268435448) * (((/* implicit */int) (_Bool)1)))))))));
                    arr_79 [i_0] [i_2] [i_5] [i_21] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)255))));
                }
            }
        }
        for (long long int i_22 = 0; i_22 < 22; i_22 += 4) /* same iter space */
        {
            var_55 = (+(((/* implicit */int) (unsigned char)194)));
            arr_82 [i_0] [i_22] = min((((/* implicit */unsigned short) (signed char)32)), ((unsigned short)35402));
            arr_83 [i_22] &= ((/* implicit */unsigned long long int) min((((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)9))))) - (((/* implicit */int) max(((short)-91), (((/* implicit */short) (_Bool)1))))))), (((/* implicit */int) min((min((((/* implicit */short) (unsigned char)28)), ((short)-9432))), (((/* implicit */short) ((((/* implicit */int) var_4)) < (((/* implicit */int) (short)-9432))))))))));
            arr_84 [i_0] [(unsigned char)4] [4ULL] = ((/* implicit */unsigned long long int) (short)-91);
        }
    }
}
