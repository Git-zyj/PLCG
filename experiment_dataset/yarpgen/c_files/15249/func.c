/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15249
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_18 ^= ((/* implicit */short) ((((/* implicit */_Bool) min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))) || (((/* implicit */_Bool) (-(107807368))))));
        var_19 = ((/* implicit */unsigned char) -107807369);
    }
    for (unsigned int i_1 = 0; i_1 < 25; i_1 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 3) 
        {
            arr_7 [i_2] [i_2] [i_2] = ((/* implicit */int) arr_6 [i_2] [(unsigned char)12] [i_1]);
            /* LoopNest 2 */
            for (unsigned char i_3 = 1; i_3 < 22; i_3 += 2) 
            {
                for (unsigned long long int i_4 = 4; i_4 < 24; i_4 += 3) 
                {
                    {
                        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((((/* implicit */_Bool) arr_6 [i_3] [i_4 + 1] [i_3 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-1))) : (arr_6 [i_3] [i_4 - 1] [i_3 + 2]))) : (((535025128U) & (arr_6 [i_1] [i_4 - 3] [i_3 + 3]))))))));
                        var_21 ^= ((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_4 - 1] [i_2] [i_3 + 2])) + (((/* implicit */int) arr_10 [i_4 - 2] [i_2] [i_3 + 1]))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [i_4 - 3] [i_2] [i_3 + 2])) | (((/* implicit */int) (unsigned short)19944))))) : (max((var_13), (((/* implicit */unsigned int) arr_10 [i_4 + 1] [i_3 - 1] [i_3 + 2])))));
                        var_22 = ((/* implicit */signed char) arr_5 [i_4 - 4]);
                    }
                } 
            } 
            arr_12 [i_1] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1]))) : (210392890U))), (((/* implicit */unsigned int) var_1))));
            arr_13 [i_1] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) min(((short)739), ((short)-740)))), (max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) -8388608))))), (max((((/* implicit */unsigned int) var_11)), (1U)))))));
        }
        var_23 = ((/* implicit */_Bool) max((((/* implicit */int) ((max((-107807369), (701175010))) == (((/* implicit */int) ((short) (unsigned short)65529)))))), ((-(107807336)))));
        /* LoopSeq 4 */
        for (signed char i_5 = 1; i_5 < 22; i_5 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned char i_6 = 0; i_6 < 25; i_6 += 1) 
            {
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                {
                    {
                        arr_23 [i_1] [i_1] [i_1] [i_1] [i_1] [i_7 - 1] = ((/* implicit */short) var_8);
                        var_24 ^= ((/* implicit */unsigned short) 4294967295U);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            arr_26 [i_6] [i_7 - 1] [i_7 - 1] [i_7] [i_6] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)47582)) ? (((/* implicit */unsigned long long int) -1990469805)) : (3184940331138853602ULL)));
                            var_25 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_19 [i_7 - 1] [i_5 + 2] [i_7 - 1] [i_5 + 2] [i_5 + 1]))));
                            arr_27 [i_7] [i_7] [i_5] [i_1] [i_8] = ((/* implicit */signed char) (~(arr_8 [i_5 + 1] [i_5 + 3])));
                            var_26 = ((/* implicit */unsigned char) var_13);
                        }
                        var_27 = ((/* implicit */unsigned int) max((((arr_11 [i_1]) / ((-(((/* implicit */int) arr_15 [i_5] [i_5 + 2] [i_5 - 1])))))), (((int) max((210392890U), (((/* implicit */unsigned int) (short)735)))))));
                    }
                } 
            } 
            var_28 = ((/* implicit */long long int) max((var_28), (min((((((/* implicit */_Bool) arr_14 [i_1] [(unsigned char)5])) ? (((((/* implicit */long long int) 290772300)) % (var_5))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)102))))), (((/* implicit */long long int) arr_6 [i_1] [(signed char)8] [i_5]))))));
        }
        for (unsigned short i_9 = 0; i_9 < 25; i_9 += 1) 
        {
            arr_30 [i_1] [i_9] [i_9] = ((/* implicit */long long int) ((((arr_3 [i_9]) || (arr_3 [i_9]))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)6)) || (arr_3 [i_9])))) : (((arr_3 [i_9]) ? (((/* implicit */int) arr_3 [i_9])) : (((/* implicit */int) arr_3 [i_1]))))));
            var_29 = ((/* implicit */unsigned short) ((unsigned int) arr_3 [3U]));
            /* LoopNest 3 */
            for (signed char i_10 = 3; i_10 < 24; i_10 += 1) 
            {
                for (unsigned short i_11 = 0; i_11 < 25; i_11 += 1) 
                {
                    for (unsigned long long int i_12 = 0; i_12 < 25; i_12 += 1) 
                    {
                        {
                            var_30 = ((/* implicit */unsigned long long int) arr_25 [i_1] [i_9] [i_1] [i_9] [i_9] [0U]);
                            var_31 = ((/* implicit */long long int) arr_19 [i_12] [i_12] [i_12] [i_12] [i_12]);
                        }
                    } 
                } 
            } 
        }
        for (unsigned int i_13 = 0; i_13 < 25; i_13 += 1) 
        {
            /* LoopNest 3 */
            for (long long int i_14 = 0; i_14 < 25; i_14 += 2) 
            {
                for (signed char i_15 = 3; i_15 < 22; i_15 += 1) 
                {
                    for (long long int i_16 = 1; i_16 < 21; i_16 += 3) 
                    {
                        {
                            var_32 ^= ((/* implicit */long long int) max(((short)-760), (((/* implicit */short) (unsigned char)111))));
                            var_33 ^= arr_34 [i_1] [i_13] [i_14] [i_15] [i_13];
                            var_34 = ((/* implicit */unsigned char) ((int) ((unsigned int) arr_44 [i_16] [i_16] [i_16 + 1] [i_15] [i_16])));
                        }
                    } 
                } 
            } 
            var_35 ^= ((long long int) -107807369);
        }
        for (unsigned short i_17 = 0; i_17 < 25; i_17 += 4) 
        {
            arr_52 [5U] [i_17] [i_17] = ((/* implicit */unsigned int) (!(arr_3 [i_1])));
            var_36 = ((/* implicit */unsigned int) ((long long int) max((((/* implicit */unsigned long long int) 0U)), (min((3184940331138853602ULL), (((/* implicit */unsigned long long int) 0U)))))));
            var_37 = ((/* implicit */unsigned int) ((short) max((4294967292U), (((/* implicit */unsigned int) (unsigned short)5794)))));
        }
    }
    for (long long int i_18 = 4; i_18 < 21; i_18 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_19 = 0; i_19 < 24; i_19 += 2) 
        {
            for (unsigned long long int i_20 = 2; i_20 < 23; i_20 += 1) 
            {
                {
                    var_38 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((3308778392U), (((/* implicit */unsigned int) 314413495))))) ? (max((892341421U), (((/* implicit */unsigned int) (short)-11016)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) min((((/* implicit */unsigned int) (_Bool)1)), (33521664U))))))));
                    var_39 = ((/* implicit */unsigned short) min((((/* implicit */int) ((_Bool) ((signed char) (short)-26281)))), ((+(((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_18])) || (arr_34 [i_19] [i_19] [i_20] [i_18] [i_20]))))))));
                    /* LoopSeq 1 */
                    for (int i_21 = 0; i_21 < 24; i_21 += 1) 
                    {
                        arr_64 [i_20] [i_20] [i_21] = ((/* implicit */unsigned char) var_4);
                        /* LoopSeq 1 */
                        for (signed char i_22 = 1; i_22 < 21; i_22 += 4) 
                        {
                            var_40 = ((/* implicit */int) min((((/* implicit */signed char) arr_58 [i_18 + 2] [i_22 + 3])), (max((arr_14 [i_22 - 1] [i_20 - 1]), (arr_14 [i_22 + 3] [i_20 - 1])))));
                            arr_67 [i_21] [22ULL] [i_21] [i_21] [22ULL] [i_21] [i_21] = ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) arr_40 [i_18] [(signed char)14] [i_18 - 1]))) >= (arr_9 [i_18] [i_18] [i_18 - 4]))) ? (((/* implicit */int) ((signed char) 3147504290U))) : (((/* implicit */int) arr_40 [i_18 - 2] [i_18 - 4] [i_18 + 2]))));
                            var_41 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((unsigned short) arr_44 [i_18 - 4] [i_18 - 2] [i_20 - 2] [i_21] [i_22 + 2]))), (max((arr_21 [i_18 - 1]), (((/* implicit */unsigned long long int) (unsigned char)170))))));
                        }
                    }
                    var_42 = ((/* implicit */unsigned short) max((var_9), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_19 [i_18] [i_18] [i_19] [i_19] [i_18])))), (((((/* implicit */_Bool) 192245115U)) ? (((/* implicit */int) arr_39 [i_18])) : (((/* implicit */int) (unsigned char)159)))))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_23 = 1; i_23 < 23; i_23 += 1) 
                    {
                        var_43 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_20 - 1] [i_23 + 1])) ? (((/* implicit */int) arr_14 [i_20 - 2] [i_23 - 1])) : (((/* implicit */int) arr_14 [i_20 - 1] [i_23 + 1]))));
                        var_44 ^= ((/* implicit */signed char) ((unsigned char) ((_Bool) (unsigned char)169)));
                    }
                    /* vectorizable */
                    for (unsigned short i_24 = 0; i_24 < 24; i_24 += 3) 
                    {
                        var_45 = ((/* implicit */signed char) ((unsigned int) ((unsigned int) 15261803742570698016ULL)));
                        var_46 = ((/* implicit */unsigned short) ((unsigned int) arr_65 [i_18 + 3] [i_20 - 1] [i_24] [i_24] [i_18 - 1] [i_20 + 1]));
                        var_47 = ((/* implicit */long long int) 3147504289U);
                        arr_72 [i_18 - 4] [i_18 - 4] [i_20] [i_24] = ((/* implicit */unsigned short) (~(3184940331138853580ULL)));
                        arr_73 [i_18 - 4] [i_19] [i_20 - 1] [i_24] = ((/* implicit */unsigned int) ((_Bool) arr_66 [i_19] [i_19] [i_19] [i_19] [i_19]));
                    }
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_25 = 0; i_25 < 24; i_25 += 2) 
        {
            for (signed char i_26 = 0; i_26 < 24; i_26 += 1) 
            {
                {
                    var_48 = ((/* implicit */signed char) max((var_48), (((/* implicit */signed char) 210392878U))));
                    var_49 ^= ((/* implicit */signed char) ((((((/* implicit */int) arr_58 [i_18] [i_18 - 1])) & ((-2147483647 - 1)))) << ((((~(((/* implicit */int) arr_58 [i_18 + 2] [i_18 - 1])))) + (10)))));
                }
            } 
        } 
        arr_78 [i_18] [i_18] = ((/* implicit */unsigned short) ((short) (~(((/* implicit */int) arr_28 [i_18 + 3])))));
    }
    for (unsigned char i_27 = 3; i_27 < 10; i_27 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned short i_28 = 0; i_28 < 12; i_28 += 3) 
        {
            for (unsigned char i_29 = 3; i_29 < 10; i_29 += 4) 
            {
                for (short i_30 = 1; i_30 < 10; i_30 += 3) 
                {
                    {
                        arr_90 [i_27] [i_28] [i_28] [(signed char)7] [i_29 + 2] = ((/* implicit */signed char) min((((((/* implicit */_Bool) min(((short)-11288), (((/* implicit */short) var_14))))) ? (950932076U) : (max((4084574418U), (3344035220U))))), (((/* implicit */unsigned int) ((signed char) arr_28 [i_29])))));
                        var_50 = ((/* implicit */unsigned int) (+(min((arr_56 [i_27] [i_27] [i_30 - 1]), (((/* implicit */long long int) max((arr_81 [i_30] [i_28] [i_30]), (((/* implicit */int) arr_80 [i_27])))))))));
                    }
                } 
            } 
        } 
        var_51 = ((unsigned char) max((arr_62 [i_27] [i_27 - 2] [i_27 - 2] [i_27] [i_27 - 1] [13]), (((/* implicit */unsigned int) var_4))));
    }
    var_52 = ((/* implicit */short) (unsigned char)153);
    /* LoopNest 2 */
    for (long long int i_31 = 0; i_31 < 18; i_31 += 4) 
    {
        for (int i_32 = 3; i_32 < 16; i_32 += 4) 
        {
            {
                arr_96 [(short)8] = ((/* implicit */unsigned char) max((arr_35 [i_31] [i_31] [i_31] [i_31] [i_32 - 1] [i_31]), (min((arr_35 [i_32] [i_32] [i_32] [i_32] [i_32 + 2] [i_31]), (arr_35 [i_31] [(_Bool)1] [i_32] [i_32 - 1] [i_32 + 1] [(_Bool)1])))));
                var_53 ^= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_63 [i_32] [i_32 + 2] [i_31])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)104))) : (arr_55 [i_32 - 1]))), (((/* implicit */long long int) arr_28 [i_31]))));
                var_54 = ((/* implicit */unsigned long long int) 4084574403U);
                /* LoopSeq 1 */
                for (unsigned long long int i_33 = 0; i_33 < 18; i_33 += 3) 
                {
                    arr_99 [i_31] [i_32] [i_31] = ((/* implicit */unsigned int) max((((/* implicit */signed char) arr_51 [i_31] [i_32] [i_33])), (var_10)));
                    var_55 = ((/* implicit */int) min((var_55), (((/* implicit */int) (unsigned char)153))));
                }
                var_56 = ((/* implicit */unsigned short) max((min((((long long int) (_Bool)1)), (((/* implicit */long long int) (unsigned char)153)))), (((/* implicit */long long int) arr_46 [i_31] [i_32]))));
            }
        } 
    } 
    var_57 = ((/* implicit */unsigned char) var_11);
}
