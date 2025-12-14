/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113177
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
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 2; i_2 < 17; i_2 += 4) /* same iter space */
                {
                    var_12 = ((/* implicit */unsigned int) var_7);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 18; i_3 += 4) 
                    {
                        for (signed char i_4 = 2; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_13 = var_8;
                                arr_18 [i_3] [i_3] [i_2] [10U] [i_2] = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2249187664U)) ? (((/* implicit */int) (unsigned short)21917)) : (917504)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) arr_5 [i_0] [i_1]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_1 + 1] [i_2 - 2] [i_3]))))))));
                                var_14 -= ((/* implicit */unsigned short) ((max((((/* implicit */unsigned long long int) var_11)), (arr_7 [i_0] [i_1 + 1]))) <= (max((((/* implicit */unsigned long long int) var_6)), (arr_7 [i_0] [i_1 + 1])))));
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_5 = 2; i_5 < 17; i_5 += 4) /* same iter space */
                {
                    arr_21 [i_1] [i_1] = ((/* implicit */unsigned char) ((signed char) ((signed char) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0]))) : (arr_4 [0LL] [i_1] [9U])))));
                    /* LoopNest 2 */
                    for (long long int i_6 = 4; i_6 < 19; i_6 += 1) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 20; i_7 += 4) 
                        {
                            {
                                var_15 += ((/* implicit */long long int) var_3);
                                var_16 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) 7788808727282848546LL)) ? (((/* implicit */int) arr_26 [i_6] [i_1] [i_1])) : (((/* implicit */int) arr_22 [i_7] [i_7] [i_6] [i_5] [2ULL] [i_0]))))) / (arr_25 [10ULL] [i_6] [i_6 - 1] [2LL]))));
                                var_17 -= ((/* implicit */unsigned short) ((((((/* implicit */int) (short)32767)) < (((/* implicit */int) (short)1670)))) ? (((unsigned int) (short)-21483)) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) -917516)) ? (((/* implicit */int) (unsigned short)8614)) : (((/* implicit */int) (signed char)-51)))))));
                            }
                        } 
                    } 
                }
                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_1])) ? ((+(((((/* implicit */_Bool) (unsigned short)3262)) ? (((/* implicit */int) var_6)) : (arr_16 [i_1 + 1] [1U] [i_0] [i_0] [i_0] [i_0]))))) : (((int) ((((/* implicit */_Bool) -577895318354787823LL)) ? (var_7) : (((/* implicit */unsigned long long int) var_0)))))));
                /* LoopNest 2 */
                for (unsigned char i_8 = 0; i_8 < 20; i_8 += 4) 
                {
                    for (unsigned char i_9 = 2; i_9 < 18; i_9 += 2) 
                    {
                        {
                            var_19 += (+(((((/* implicit */_Bool) max(((unsigned char)238), (arr_17 [i_0] [6U] [i_0] [i_0] [i_0] [(short)0] [i_8])))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) 9223372036854775807LL))))) : (((/* implicit */int) arr_1 [i_1 + 1] [i_9 + 2])))));
                            var_20 ^= ((/* implicit */unsigned char) arr_13 [i_0] [i_1] [i_9]);
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (unsigned char)80)) ? (((/* implicit */int) (short)-31183)) : (((/* implicit */int) (unsigned char)255)))), (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)12))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)56)) ? (((/* implicit */int) arr_13 [i_0] [i_0] [4])) : (arr_16 [i_0] [i_0] [i_0] [(unsigned short)17] [i_1] [i_0])))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (short i_10 = 0; i_10 < 25; i_10 += 1) 
    {
        var_22 = (unsigned char)229;
        arr_34 [i_10] [i_10] = arr_33 [(unsigned short)3];
        /* LoopNest 3 */
        for (unsigned char i_11 = 1; i_11 < 22; i_11 += 4) 
        {
            for (short i_12 = 0; i_12 < 25; i_12 += 1) 
            {
                for (signed char i_13 = 1; i_13 < 24; i_13 += 2) 
                {
                    {
                        arr_43 [18LL] [i_10] [i_12] [18LL] = ((/* implicit */int) var_8);
                        /* LoopSeq 1 */
                        for (short i_14 = 0; i_14 < 25; i_14 += 1) 
                        {
                            var_23 = ((/* implicit */unsigned long long int) ((unsigned char) (unsigned short)32584));
                            var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) (-(8963179481229156378LL))))));
                            arr_46 [i_10] [i_10] [7] [i_13 - 1] [i_14] = ((/* implicit */long long int) (+(var_8)));
                            arr_47 [i_10] = (-(((((((/* implicit */_Bool) arr_35 [i_12])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)51))) : (arr_45 [i_13]))) - (((/* implicit */unsigned int) ((((/* implicit */int) arr_37 [i_10])) + (((/* implicit */int) arr_32 [i_12] [i_11]))))))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned int i_15 = 0; i_15 < 25; i_15 += 2) 
                        {
                            var_25 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) arr_38 [i_15] [(unsigned char)0] [i_11] [16U])) != (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_39 [i_10] [(unsigned short)16] [i_10] [i_10])) ? (((/* implicit */int) arr_44 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10])) : (arr_49 [i_15] [i_12])))), (min((var_8), (((/* implicit */unsigned int) arr_36 [i_12] [(unsigned short)14]))))))));
                            var_26 = min(((~(((/* implicit */int) (unsigned char)27)))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_48 [i_13] [i_13 + 1] [i_13 + 1] [i_13]))) <= (558446353793941504LL)))));
                            var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)1))) | ((~((+(var_8))))))))));
                            var_28 -= ((/* implicit */unsigned int) ((unsigned char) (-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_48 [(short)1] [i_12] [i_13 + 1] [i_15]))) : (1461393765U))))));
                            arr_50 [i_10] [i_11] [i_12] [i_12] [i_10] = ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)59))) < (((((/* implicit */_Bool) 10U)) ? (((/* implicit */unsigned int) -1)) : (630640356U))))) && (((/* implicit */_Bool) (signed char)15))));
                        }
                        for (short i_16 = 4; i_16 < 24; i_16 += 1) 
                        {
                            var_29 = ((/* implicit */unsigned char) (-((-(((/* implicit */int) arr_39 [i_10] [i_11 + 2] [i_12] [i_10]))))));
                            arr_55 [i_10] [i_10] [i_12] = ((/* implicit */unsigned char) arr_54 [i_10] [i_11] [(signed char)15] [i_13 - 1] [(unsigned short)17] [i_13 + 1]);
                        }
                    }
                } 
            } 
        } 
        arr_56 [i_10] = ((/* implicit */unsigned int) arr_37 [i_10]);
        var_30 = ((/* implicit */unsigned char) arr_49 [i_10] [i_10]);
    }
}
