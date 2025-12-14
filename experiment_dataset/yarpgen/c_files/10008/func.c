/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10008
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
    /* LoopSeq 4 */
    for (unsigned short i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((((/* implicit */int) ((short) (+(arr_1 [i_0]))))) - ((+(((/* implicit */int) arr_0 [i_0])))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) (((-(max((arr_9 [(short)0] [i_1] [i_1]), (((/* implicit */int) (short)-2452)))))) / (arr_6 [i_0] [i_0 - 1])));
                    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) (~(min((((/* implicit */int) (unsigned short)0)), (-619678486))))))));
                    /* LoopSeq 3 */
                    for (int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        var_19 = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((int) arr_9 [i_0] [i_0] [i_0]))))))));
                        arr_13 [(_Bool)1] [i_0] [i_0] [i_0] = ((/* implicit */long long int) min(((~(((/* implicit */int) ((unsigned char) arr_12 [(short)8] [(unsigned char)4] [i_0] [i_0]))))), (((/* implicit */int) ((short) arr_5 [i_0])))));
                        arr_14 [i_0] = ((/* implicit */signed char) ((_Bool) ((unsigned short) arr_7 [11LL] [i_2 - 1] [i_1])));
                    }
                    for (unsigned int i_4 = 0; i_4 < 23; i_4 += 1) 
                    {
                        arr_19 [6] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)173))));
                        arr_20 [i_0] [i_0] [i_2] [i_1] = ((/* implicit */int) arr_0 [i_4]);
                        var_20 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) arr_17 [i_0 + 1] [i_0 - 1] [i_0] [i_0] [i_0 - 1] [i_0])))))));
                    }
                    for (unsigned int i_5 = 0; i_5 < 23; i_5 += 1) 
                    {
                        var_21 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */int) arr_0 [(_Bool)1])) >= (((/* implicit */int) arr_0 [i_0])))))))) * ((-((~(3416300888U)))))));
                        arr_23 [i_1] [i_1] [i_2] [i_2 - 1] [i_1] [i_2] &= ((/* implicit */int) min((878666398U), (((/* implicit */unsigned int) arr_22 [i_0 - 1] [i_0 - 1] [i_0 - 1] [(unsigned char)14] [(signed char)11] [i_0 - 1]))));
                    }
                }
            } 
        } 
        arr_24 [i_0 + 1] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */int) ((_Bool) arr_17 [i_0 - 1] [i_0 + 1] [i_0] [i_0 - 1] [i_0 + 1] [i_0 - 1]))), (min(((~(var_10))), ((+(((/* implicit */int) (_Bool)1))))))));
        var_22 &= ((/* implicit */unsigned short) ((unsigned int) min((arr_3 [(_Bool)0] [i_0 + 1] [(_Bool)0]), (arr_11 [(short)9] [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]))));
        /* LoopNest 2 */
        for (short i_6 = 2; i_6 < 22; i_6 += 1) 
        {
            for (signed char i_7 = 1; i_7 < 19; i_7 += 3) 
            {
                {
                    arr_29 [i_0] [i_0 + 1] [(short)12] [i_0 - 1] &= ((/* implicit */unsigned short) arr_0 [22LL]);
                    arr_30 [i_0] = ((/* implicit */unsigned short) arr_9 [9] [i_6] [9]);
                    var_23 = (~((~(arr_7 [i_7 + 3] [i_7 - 1] [i_7 + 2]))));
                }
            } 
        } 
    }
    for (short i_8 = 0; i_8 < 23; i_8 += 3) 
    {
        var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 878666435U)) ? (-619678486) : (((/* implicit */int) (short)-5952))))), (var_14)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_0 [i_8]), (((/* implicit */unsigned char) (signed char)-122)))))) : ((-(arr_32 [i_8])))));
        arr_34 [i_8] = ((/* implicit */unsigned short) min(((((!(((/* implicit */_Bool) arr_6 [i_8] [i_8])))) ? (((/* implicit */int) arr_25 [i_8] [i_8] [i_8])) : (((/* implicit */int) ((unsigned char) arr_11 [i_8] [i_8] [i_8] [i_8] [17U] [i_8]))))), ((+(((/* implicit */int) ((arr_9 [i_8] [i_8] [i_8]) >= (((/* implicit */int) arr_12 [i_8] [2U] [i_8] [i_8])))))))));
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
    {
        var_25 = ((/* implicit */short) (~(var_14)));
        var_26 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_35 [i_9] [i_9])) || (((/* implicit */_Bool) arr_35 [i_9] [i_9])))) || (((/* implicit */_Bool) ((unsigned char) arr_35 [i_9] [i_9])))));
        /* LoopNest 2 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            for (unsigned long long int i_11 = 1; i_11 < 22; i_11 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_12 = 0; i_12 < 24; i_12 += 4) 
                    {
                        for (unsigned int i_13 = 1; i_13 < 21; i_13 += 3) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 8885480605256711051LL))))) : (((((/* implicit */_Bool) (short)-4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_47 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])))))))));
                                arr_49 [i_9] [i_9] [i_9] = ((/* implicit */int) ((arr_44 [i_9] [i_9] [i_10] [i_9]) >> ((((~(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)120))) & (0U))))) - (4294967247U)))));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */short) arr_36 [i_9] [i_10])), ((short)-9335)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)239))) : (((arr_45 [(unsigned short)3] [(short)7] [(unsigned short)3] [3U] [i_11]) ? (arr_48 [(unsigned short)9] [i_9] [i_9] [i_9] [i_9] [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))) / ((-(min((arr_44 [i_9] [i_9] [i_11] [i_9]), (((/* implicit */long long int) 878666408U))))))));
                    arr_50 [i_9] [i_9] = ((/* implicit */long long int) (((((~(min((var_10), (((/* implicit */int) arr_39 [i_9])))))) + (2147483647))) >> ((((~(((/* implicit */int) (_Bool)1)))) + (26)))));
                    var_29 = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */int) arr_47 [i_11] [i_11] [i_11] [i_11] [15U] [i_11 + 2])) <= ((~(((/* implicit */int) (_Bool)1)))))))));
                }
            } 
        } 
        var_30 = ((/* implicit */int) arr_36 [i_9] [i_9]);
    }
    /* vectorizable */
    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
    {
        arr_55 [i_14] = ((/* implicit */signed char) (((-(arr_37 [i_14]))) >= (((/* implicit */long long int) -286069156))));
        arr_56 [i_14] [(short)23] = (!(((/* implicit */_Bool) arr_43 [i_14] [i_14] [(short)6] [i_14])));
    }
    var_31 = ((/* implicit */short) max(((~(((((/* implicit */int) var_16)) + (((/* implicit */int) var_15)))))), (var_11)));
    var_32 += ((/* implicit */short) (!(((/* implicit */_Bool) var_14))));
    /* LoopSeq 2 */
    for (short i_15 = 0; i_15 < 10; i_15 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_16 = 0; i_16 < 10; i_16 += 2) 
        {
            var_33 = ((/* implicit */signed char) ((int) arr_8 [i_15] [i_15]));
            var_34 = ((/* implicit */unsigned short) arr_58 [(short)4]);
            arr_63 [i_15] [i_15] = ((/* implicit */short) max((((/* implicit */int) ((_Bool) arr_21 [9U]))), (arr_46 [i_15] [i_15] [i_15] [i_15] [i_16])));
        }
        for (long long int i_17 = 0; i_17 < 10; i_17 += 3) 
        {
            var_35 = (-(max((arr_27 [i_17]), (((/* implicit */unsigned int) var_11)))));
            var_36 += ((/* implicit */_Bool) (short)5951);
            arr_68 [i_17] = ((/* implicit */short) (((((~(((/* implicit */int) (unsigned char)173)))) ^ (((/* implicit */int) arr_5 [i_15])))) | ((~(((((/* implicit */int) arr_25 [i_15] [i_17] [i_15])) | (((/* implicit */int) (unsigned short)54991))))))));
            var_37 = ((/* implicit */unsigned short) (~((~(((/* implicit */int) arr_35 [i_15] [i_15]))))));
            /* LoopNest 2 */
            for (short i_18 = 0; i_18 < 10; i_18 += 3) 
            {
                for (short i_19 = 2; i_19 < 9; i_19 += 4) 
                {
                    {
                        arr_73 [i_15] [i_15] [(_Bool)1] = ((/* implicit */int) arr_39 [i_17]);
                        arr_74 [i_18] [i_17] [i_17] = ((/* implicit */unsigned short) min((((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_53 [i_17] [i_15])))))))), (min((((/* implicit */int) min((arr_62 [i_15] [i_15] [i_15]), (((/* implicit */short) arr_45 [12] [6U] [i_18] [i_15] [i_15]))))), (min((((/* implicit */int) (_Bool)1)), (arr_26 [i_17] [i_17])))))));
                        var_38 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_64 [i_15] [i_15]))))))) >> ((((~(((/* implicit */int) ((signed char) -617751018))))) + (42)))));
                        var_39 = ((/* implicit */_Bool) max((var_39), ((!((!((_Bool)1)))))));
                        var_40 = min(((+(((/* implicit */int) (unsigned char)173)))), (-1377217199));
                    }
                } 
            } 
        }
        var_41 = ((/* implicit */_Bool) min((((int) (~(((/* implicit */int) arr_5 [i_15]))))), (min((((((/* implicit */int) arr_54 [i_15] [i_15])) >> (((((/* implicit */int) (short)-17055)) + (17058))))), ((~(((/* implicit */int) arr_72 [2] [2] [0U] [i_15]))))))));
        var_42 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) (!(((/* implicit */_Bool) (signed char)124)))))) && (((/* implicit */_Bool) ((arr_69 [i_15] [i_15] [3] [i_15]) & (arr_17 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15]))))));
    }
    for (long long int i_20 = 0; i_20 < 24; i_20 += 2) 
    {
        arr_77 [11LL] = ((/* implicit */int) ((((((/* implicit */int) arr_36 [i_20] [i_20])) / ((-(((/* implicit */int) arr_54 [i_20] [i_20])))))) == (((/* implicit */int) ((unsigned short) ((unsigned int) (short)24576))))));
        var_43 -= ((/* implicit */short) ((((/* implicit */_Bool) 2776837057U)) && (((((/* implicit */long long int) (~(var_7)))) == ((((_Bool)1) ? (arr_44 [i_20] [i_20] [i_20] [i_20]) : (arr_41 [i_20] [i_20] [i_20])))))));
    }
}
