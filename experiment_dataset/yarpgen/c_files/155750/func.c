/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155750
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
    var_17 = ((/* implicit */unsigned char) (-((+(((/* implicit */int) (_Bool)1))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) max((((min((((/* implicit */unsigned int) var_13)), (var_0))) + (((/* implicit */unsigned int) var_4)))), (var_14)));
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned int) ((arr_3 [i_0] [i_1]) + (((/* implicit */int) var_5))));
                        arr_10 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((int) (_Bool)1))) && (((/* implicit */_Bool) arr_6 [i_1] [i_3]))));
                        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((-1) * (((/* implicit */int) var_6)))))));
                    }
                    for (unsigned int i_4 = 1; i_4 < 20; i_4 += 2) 
                    {
                        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((unsigned short) ((unsigned char) var_14))))));
                        arr_13 [i_4] [i_2] [i_0] [i_0] = ((/* implicit */unsigned short) ((arr_11 [i_1]) | (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0))))))));
                        var_21 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_7 [i_1] [i_1] [i_4])) : (((/* implicit */int) var_10))))));
                        arr_14 [i_0] [i_0] [i_1] [(_Bool)1] [i_1] [i_4] = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) arr_11 [i_0])) ? (0) : (arr_1 [i_4]))));
                        var_22 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) -804625640)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1] [i_4 + 1] [i_4 + 1] [i_4] [i_4] [i_4 - 1]))) : (var_16)));
                    }
                    for (int i_5 = 2; i_5 < 19; i_5 += 4) 
                    {
                        arr_18 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) arr_3 [i_5 + 1] [i_5 + 2]);
                        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_9 [(unsigned char)5] [i_2] [i_5] [i_5 - 1] [i_5] [(unsigned short)15])) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_1] [i_5 - 1] [i_5 + 2] [i_5])))))));
                    }
                    var_24 = (+(((/* implicit */int) ((short) var_6))));
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 21; i_6 += 3) 
                {
                    var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((var_15) / (((/* implicit */unsigned int) var_12)))) : (((/* implicit */unsigned int) arr_0 [i_0]))));
                    arr_22 [i_0] [i_6] [i_0] = (!(((/* implicit */_Bool) arr_11 [i_1])));
                    arr_23 [i_0] [i_6] = ((/* implicit */short) (((!(((/* implicit */_Bool) (unsigned short)16833)))) ? (((/* implicit */int) arr_8 [i_0] [i_1] [i_6] [i_6])) : (((/* implicit */int) arr_6 [i_6] [i_0]))));
                    arr_24 [i_0] [i_0] [i_6] = ((arr_3 [i_0] [i_6]) ^ (arr_3 [i_6] [i_0]));
                }
                var_26 = ((/* implicit */signed char) min((((((((/* implicit */unsigned int) 1200016918)) & (var_0))) ^ (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) ^ (((/* implicit */int) arr_2 [i_1] [i_0] [i_0]))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 13)) ? (((/* implicit */int) ((signed char) var_3))) : (((/* implicit */int) max((var_13), (arr_7 [i_0] [i_1] [i_1])))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_7 = 2; i_7 < 13; i_7 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_8 = 2; i_8 < 12; i_8 += 4) 
        {
            for (unsigned char i_9 = 1; i_9 < 13; i_9 += 4) 
            {
                {
                    var_27 ^= ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((var_12) / (((/* implicit */int) arr_31 [i_8]))))), (((var_16) * (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [(unsigned short)4] [i_7])))))))) ? (((/* implicit */unsigned int) ((((int) var_0)) / (arr_1 [i_7 - 1])))) : (((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)10)) / (((/* implicit */int) (_Bool)1))))) * (max((((/* implicit */unsigned int) -2147483626)), (arr_11 [i_8])))))));
                    var_28 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)125)) ? (((/* implicit */unsigned int) min((var_11), (((((/* implicit */_Bool) var_10)) ? (-804625640) : (((/* implicit */int) (signed char)-39))))))) : (min((((((/* implicit */_Bool) arr_9 [i_9] [i_9 - 1] [i_8 + 1] [i_7] [i_7] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_7]))) : (var_16))), (arr_29 [i_7 + 1] [i_8 + 2] [i_9 + 1])))));
                    arr_32 [i_8] [i_8] = ((/* implicit */_Bool) arr_3 [i_7 - 2] [5]);
                }
            } 
        } 
        /* LoopSeq 2 */
        for (short i_10 = 1; i_10 < 13; i_10 += 2) 
        {
            var_29 = ((/* implicit */unsigned int) ((short) arr_16 [i_7] [i_10]));
            /* LoopSeq 1 */
            for (unsigned short i_11 = 2; i_11 < 13; i_11 += 4) 
            {
                var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) ((((/* implicit */_Bool) max((max((var_15), (((/* implicit */unsigned int) var_3)))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 180651571)))))))) ? (((/* implicit */unsigned int) min(((-(((/* implicit */int) (short)-2091)))), (max((var_7), (((/* implicit */int) arr_9 [i_7] [i_10] [i_7] [i_10] [i_7] [i_7]))))))) : (min((var_14), (((((/* implicit */_Bool) arr_15 [i_7] [i_7] [i_10] [i_11] [i_11])) ? (var_0) : (((/* implicit */unsigned int) var_11)))))))))));
                /* LoopSeq 1 */
                for (unsigned int i_12 = 0; i_12 < 14; i_12 += 3) 
                {
                    arr_44 [i_7] [i_12] [i_11] [i_12] = ((/* implicit */int) var_15);
                    var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_20 [i_10 + 1] [i_10 + 1] [i_12])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */int) (unsigned char)124)) == (((/* implicit */int) arr_8 [i_7] [3U] [i_11 - 1] [i_12])))) || (((/* implicit */_Bool) ((528482304U) + (((/* implicit */unsigned int) -725166028))))))))) : (min((((/* implicit */unsigned int) var_11)), (var_0)))));
                }
                arr_45 [i_7] [i_7] [i_7] [(unsigned short)9] = ((/* implicit */unsigned int) ((arr_11 [17U]) >= (((/* implicit */unsigned int) (~(arr_1 [i_7 - 2]))))));
            }
        }
        /* vectorizable */
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            arr_48 [i_7 - 2] [i_7] [i_7 - 1] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) (signed char)15))))) < (((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))));
            var_32 = (-(((/* implicit */int) var_2)));
            var_33 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_7) : (var_11)))) || (((/* implicit */_Bool) var_10)));
        }
        var_34 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)3653)), (((((/* implicit */unsigned int) ((/* implicit */int) var_1))) * (2354547027U)))))) ? (((((/* implicit */int) var_1)) + (((/* implicit */int) arr_39 [i_7] [i_7] [(_Bool)1])))) : (((/* implicit */int) var_5))));
    }
    for (unsigned int i_14 = 2; i_14 < 13; i_14 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_15 = 3; i_15 < 12; i_15 += 2) 
        {
            for (unsigned short i_16 = 0; i_16 < 14; i_16 += 1) 
            {
                {
                    var_35 = ((/* implicit */_Bool) var_4);
                    var_36 = ((/* implicit */unsigned short) min((var_36), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_35 [i_14] [i_14 + 1] [i_14 - 1])) && (((/* implicit */_Bool) arr_35 [i_16] [(signed char)11] [i_14])))) ? (arr_35 [i_14] [i_15 - 1] [i_16]) : (-5))))));
                }
            } 
        } 
        arr_55 [i_14] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)65535)) | ((-(((((/* implicit */_Bool) 804625639)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_15 [i_14] [i_14] [i_14] [i_14] [i_14]))))))));
    }
    /* LoopNest 2 */
    for (unsigned char i_17 = 2; i_17 < 21; i_17 += 3) 
    {
        for (unsigned char i_18 = 4; i_18 < 22; i_18 += 2) 
        {
            {
                var_37 = ((/* implicit */unsigned char) ((max((4094U), (((/* implicit */unsigned int) ((arr_56 [i_18]) / (var_4)))))) <= (((/* implicit */unsigned int) ((var_7) % ((+(((/* implicit */int) var_5)))))))));
                /* LoopNest 3 */
                for (unsigned int i_19 = 1; i_19 < 22; i_19 += 1) 
                {
                    for (unsigned char i_20 = 4; i_20 < 21; i_20 += 4) 
                    {
                        for (int i_21 = 1; i_21 < 22; i_21 += 1) 
                        {
                            {
                                var_38 = ((/* implicit */signed char) ((((((/* implicit */int) max((arr_66 [i_18 - 1] [i_18 - 1] [i_20 - 3] [i_21]), (((/* implicit */unsigned short) var_1))))) + (((/* implicit */int) max((((/* implicit */unsigned short) arr_59 [i_17] [i_18])), (arr_64 [i_17] [0] [i_17] [i_17])))))) - (((/* implicit */int) ((unsigned char) var_11)))));
                                arr_69 [1] [i_17] [i_17] [i_20] [i_21 - 1] = min((((/* implicit */unsigned int) arr_61 [i_17] [i_17] [i_17])), (((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)17))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_57 [i_18] [i_18 + 1])) + (1405715433)))) : (((((/* implicit */unsigned int) 1048575)) | (var_15))))));
                                var_39 = ((/* implicit */int) arr_59 [i_17] [i_17]);
                            }
                        } 
                    } 
                } 
                var_40 ^= arr_64 [i_17 + 2] [i_18 - 4] [i_18 - 4] [i_18 - 2];
            }
        } 
    } 
}
