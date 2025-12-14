/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157427
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */short) ((((_Bool) (unsigned char)255)) && ((!(((/* implicit */_Bool) (short)-15635))))));
        var_12 = ((/* implicit */signed char) (-(((/* implicit */int) var_7))));
        arr_4 [4ULL] [(signed char)8] = ((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned long long int) ((signed char) max(((short)-15628), ((short)(-32767 - 1)))));
        var_14 -= ((/* implicit */unsigned char) 14067403948898317343ULL);
        arr_8 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_1] [i_1])) >> (((((/* implicit */int) arr_6 [(short)3])) - (141)))))) ? (((/* implicit */int) ((((/* implicit */int) arr_2 [i_1] [i_1])) >= (((/* implicit */int) arr_6 [i_1]))))) : (((/* implicit */int) ((((/* implicit */int) var_10)) < (((/* implicit */int) arr_6 [i_1])))))));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 3; i_2 < 11; i_2 += 4) 
        {
            for (unsigned char i_3 = 2; i_3 < 9; i_3 += 4) 
            {
                {
                    arr_15 [i_1] [i_2] [i_2] [5ULL] = ((/* implicit */unsigned long long int) arr_5 [i_1]);
                    var_15 = (short)12439;
                    /* LoopNest 2 */
                    for (short i_4 = 0; i_4 < 12; i_4 += 1) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                arr_20 [i_5] [i_4] [i_3 + 1] [i_3 + 1] [i_2] [i_2 - 3] [(_Bool)1] = ((/* implicit */short) arr_19 [i_3 + 3] [i_2] [i_4] [i_5] [i_5]);
                                var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)(-32767 - 1))) && (((/* implicit */_Bool) (short)5572))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 1) 
                    {
                        for (unsigned short i_7 = 3; i_7 < 11; i_7 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)13947)) : (((/* implicit */int) (short)-15635))))) ? (((/* implicit */int) (unsigned char)29)) : (((/* implicit */int) ((unsigned char) 288230376151711743ULL)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_1] [(signed char)0] [i_3 - 1] [i_6] [i_7 - 2] [(short)9] [i_2]))))) : ((~(((/* implicit */int) (unsigned char)144))))));
                                arr_26 [i_1] [i_1] [i_1] [7ULL] [(short)3] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)62)) ? (((/* implicit */int) (short)-5546)) : (((/* implicit */int) arr_0 [i_1] [(signed char)10]))));
                                var_18 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (unsigned char)38)) ? (((/* implicit */int) (unsigned char)38)) : (((/* implicit */int) (signed char)107))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_27 [i_1] = ((/* implicit */short) min((((/* implicit */int) (unsigned char)217)), (((((/* implicit */int) (unsigned char)13)) / (((/* implicit */int) (unsigned char)16))))));
    }
    for (short i_8 = 0; i_8 < 20; i_8 += 4) 
    {
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)38)) ? (((((/* implicit */_Bool) (short)-2791)) ? (((/* implicit */int) (short)63)) : (((/* implicit */int) arr_28 [i_8])))) : (((/* implicit */int) arr_28 [i_8]))))) ? (((((/* implicit */_Bool) (unsigned char)243)) ? (((((/* implicit */int) (signed char)-51)) | (((/* implicit */int) (unsigned char)239)))) : (((/* implicit */int) min((((/* implicit */short) arr_29 [i_8])), (var_10)))))) : (((/* implicit */int) arr_28 [i_8]))));
        /* LoopSeq 1 */
        for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 4) 
        {
            var_20 -= ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_8])) ? (((/* implicit */int) arr_29 [i_8])) : (((/* implicit */int) arr_28 [i_9]))))) ? (((/* implicit */int) max((arr_31 [i_8]), (((/* implicit */unsigned short) var_2))))) : (((/* implicit */int) ((((/* implicit */int) arr_31 [i_9])) <= (((/* implicit */int) arr_28 [16ULL]))))))));
            var_21 = ((/* implicit */short) (~(((/* implicit */int) arr_28 [i_8]))));
            /* LoopSeq 2 */
            for (short i_10 = 0; i_10 < 20; i_10 += 3) 
            {
                arr_34 [(_Bool)1] = ((/* implicit */short) min((max(((-(((/* implicit */int) (_Bool)0)))), (((/* implicit */int) var_10)))), (((/* implicit */int) ((unsigned short) min((arr_33 [(unsigned char)16] [i_9] [i_9] [i_10]), (((/* implicit */short) var_1))))))));
                arr_35 [i_8] [i_9] [i_10] = ((/* implicit */_Bool) arr_28 [(unsigned char)10]);
            }
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                var_22 = ((/* implicit */unsigned char) var_0);
                /* LoopNest 2 */
                for (unsigned char i_12 = 0; i_12 < 20; i_12 += 4) 
                {
                    for (short i_13 = 0; i_13 < 20; i_13 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((signed char) max(((unsigned char)243), (((/* implicit */unsigned char) (signed char)3))))))));
                            arr_44 [(_Bool)1] [i_11] [i_11] [i_12] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) arr_41 [i_11] [i_11] [i_13])))), (((/* implicit */int) min(((unsigned char)149), (arr_36 [i_12] [i_11] [13ULL] [i_8]))))))) ? (((/* implicit */int) arr_38 [18ULL] [(unsigned short)8] [(signed char)9] [(short)13] [(unsigned short)9])) : (((((/* implicit */int) (short)(-32767 - 1))) & ((~(((/* implicit */int) (short)15635))))))));
                            arr_45 [i_8] [i_11] [i_11] [i_12] [(unsigned char)0] [i_12] [i_13] = ((/* implicit */unsigned long long int) (short)14686);
                        }
                    } 
                } 
                arr_46 [i_8] [i_9] [i_11] [i_9] = min((((unsigned char) (unsigned char)13)), (((/* implicit */unsigned char) ((((/* implicit */int) arr_32 [i_8] [i_9] [i_11] [(unsigned char)1])) == (((/* implicit */int) arr_32 [i_11] [i_11] [i_9] [i_8]))))));
                var_24 = ((/* implicit */unsigned char) arr_41 [(short)14] [i_11] [i_8]);
            }
            /* LoopNest 2 */
            for (unsigned char i_14 = 0; i_14 < 20; i_14 += 4) 
            {
                for (short i_15 = 0; i_15 < 20; i_15 += 3) 
                {
                    {
                        var_25 *= ((/* implicit */signed char) (-(max((((/* implicit */int) arr_50 [i_9] [(unsigned char)14] [i_9] [i_9] [(_Bool)1])), (((var_9) ? (((/* implicit */int) (short)-32757)) : (((/* implicit */int) var_1))))))));
                        arr_51 [i_15] [i_15] [i_14] [(short)16] [(unsigned short)6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_49 [i_15] [i_14] [(_Bool)1] [i_8]) ? (((/* implicit */int) arr_31 [i_15])) : (((/* implicit */int) (unsigned char)229))))) ? (((/* implicit */int) ((((/* implicit */int) arr_49 [i_15] [i_14] [i_9] [i_8])) != (((/* implicit */int) arr_32 [i_9] [i_14] [i_14] [i_15]))))) : (((/* implicit */int) min((arr_31 [i_14]), (((/* implicit */unsigned short) arr_49 [i_8] [i_9] [i_14] [i_15])))))));
                    }
                } 
            } 
        }
        arr_52 [(signed char)4] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_37 [i_8] [i_8] [i_8] [i_8])) ? (((/* implicit */int) arr_48 [(short)4] [i_8] [i_8])) : (((/* implicit */int) arr_48 [i_8] [i_8] [i_8])))), (((((/* implicit */_Bool) arr_31 [i_8])) ? (((/* implicit */int) arr_49 [i_8] [i_8] [i_8] [i_8])) : (((/* implicit */int) (short)30284))))));
    }
    /* LoopNest 3 */
    for (unsigned short i_16 = 0; i_16 < 22; i_16 += 4) 
    {
        for (short i_17 = 0; i_17 < 22; i_17 += 3) 
        {
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                {
                    arr_60 [i_17] = ((/* implicit */short) ((unsigned char) (short)-13244));
                    arr_61 [i_16] [i_17] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-29937)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)-61))))) ? ((~(arr_56 [i_17] [i_18]))) : (((arr_56 [i_17] [i_17]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
                }
            } 
        } 
    } 
}
