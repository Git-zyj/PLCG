/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172406
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
    for (short i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) var_14)) : (arr_1 [i_0] [i_1 - 1]))), (((/* implicit */unsigned long long int) var_17))))) ? ((-(var_0))) : (((/* implicit */long long int) (~(((/* implicit */int) min((arr_5 [i_0] [i_0]), (((/* implicit */short) var_7))))))))));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) > (((var_5) ? (arr_1 [i_0] [i_1 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_9 [i_2] [18] = ((/* implicit */unsigned char) var_17);
        arr_10 [i_2] = ((/* implicit */int) ((_Bool) ((signed char) var_1)));
        arr_11 [i_2] [i_2] = ((/* implicit */long long int) (((-(var_8))) > (((/* implicit */unsigned long long int) arr_8 [i_2]))));
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 4; i_3 < 17; i_3 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_4 = 2; i_4 < 16; i_4 += 4) 
        {
            arr_16 [i_3] [0U] [i_4 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) arr_15 [i_4] [i_4] [i_3 - 2])) ? (arr_8 [i_3]) : (((/* implicit */int) var_5)))) : (var_4)));
            var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) arr_12 [7]))));
        }
        for (unsigned int i_5 = 0; i_5 < 20; i_5 += 1) 
        {
            var_21 ^= ((/* implicit */signed char) var_15);
            /* LoopSeq 1 */
            for (int i_6 = 0; i_6 < 20; i_6 += 3) 
            {
                var_22 = ((/* implicit */int) arr_15 [i_6] [i_5] [i_3]);
                var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_21 [i_3] [i_5] [(unsigned short)6]))))))))));
            }
            arr_23 [i_5] = ((/* implicit */long long int) (-(((unsigned int) arr_20 [i_3]))));
            arr_24 [i_3] [(_Bool)1] [i_5] = ((/* implicit */unsigned char) (-(var_6)));
        }
        for (int i_7 = 1; i_7 < 19; i_7 += 3) 
        {
            arr_28 [i_7] = ((/* implicit */_Bool) arr_22 [i_3] [i_7]);
            var_24 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_22 [i_7 + 1] [i_3 - 2]))));
        }
        arr_29 [i_3] [i_3] = ((/* implicit */_Bool) arr_15 [(_Bool)1] [(_Bool)1] [i_3]);
        arr_30 [i_3] = ((/* implicit */unsigned int) var_12);
    }
    for (unsigned short i_8 = 3; i_8 < 13; i_8 += 4) 
    {
        var_25 *= ((/* implicit */_Bool) min((arr_22 [i_8] [i_8]), (((/* implicit */signed char) var_2))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (int i_9 = 0; i_9 < 14; i_9 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_10 = 0; i_10 < 14; i_10 += 2) 
            {
                var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) arr_18 [i_10]))));
                arr_39 [i_9] [i_9] [i_8] = ((/* implicit */long long int) ((unsigned char) var_3));
                var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) var_4))));
            }
            var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) ((unsigned long long int) (~(((/* implicit */int) arr_27 [8] [8] [8]))))))));
            /* LoopNest 2 */
            for (unsigned int i_11 = 0; i_11 < 14; i_11 += 4) 
            {
                for (int i_12 = 0; i_12 < 14; i_12 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (long long int i_13 = 2; i_13 < 12; i_13 += 3) 
                        {
                            var_29 = arr_33 [i_8] [i_12];
                            var_30 = ((/* implicit */_Bool) arr_42 [i_8]);
                        }
                        arr_48 [i_9] = arr_33 [i_9] [(unsigned char)6];
                    }
                } 
            } 
        }
        for (int i_14 = 0; i_14 < 14; i_14 += 1) /* same iter space */
        {
            var_31 = ((/* implicit */short) max((((/* implicit */unsigned long long int) var_7)), ((-(((unsigned long long int) arr_21 [i_8] [i_14] [i_14]))))));
            arr_51 [i_14] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(var_10)))) ? (((((((/* implicit */_Bool) arr_13 [i_8] [i_8])) ? (arr_19 [i_8] [i_8]) : (((/* implicit */int) arr_41 [i_8] [i_8] [i_14] [13])))) / (min((arr_40 [i_8] [i_14] [i_8]), (((/* implicit */int) arr_31 [i_14] [i_8])))))) : (((/* implicit */int) var_1))));
            arr_52 [i_14] = ((/* implicit */_Bool) ((unsigned int) arr_49 [i_8] [(unsigned char)7] [i_8]));
        }
        /* vectorizable */
        for (long long int i_15 = 3; i_15 < 12; i_15 += 3) 
        {
            /* LoopSeq 1 */
            for (signed char i_16 = 0; i_16 < 14; i_16 += 2) 
            {
                arr_58 [i_8 - 2] [i_15] [i_16] = ((/* implicit */unsigned int) ((signed char) (+(((/* implicit */int) arr_20 [i_8 - 3])))));
                var_32 ^= ((/* implicit */unsigned long long int) arr_47 [i_8] [i_15 + 1] [i_16]);
                arr_59 [i_16] [i_15] [i_8] |= ((/* implicit */unsigned short) var_6);
            }
            /* LoopNest 3 */
            for (short i_17 = 0; i_17 < 14; i_17 += 2) 
            {
                for (unsigned char i_18 = 0; i_18 < 14; i_18 += 3) 
                {
                    for (unsigned short i_19 = 0; i_19 < 14; i_19 += 2) 
                    {
                        {
                            arr_67 [i_18] = ((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_8])) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) arr_41 [i_8] [i_8] [i_17] [i_18])))));
                            var_33 *= ((/* implicit */_Bool) ((unsigned long long int) ((unsigned long long int) arr_19 [i_8 - 3] [i_19])));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned short i_20 = 0; i_20 < 14; i_20 += 4) 
            {
                for (long long int i_21 = 0; i_21 < 14; i_21 += 3) 
                {
                    {
                        arr_74 [i_21] [(_Bool)1] [i_15 - 1] [i_8] = ((/* implicit */unsigned long long int) arr_65 [i_20] [i_15] [i_15] [i_15 - 3] [i_15] [i_15 - 2]);
                        arr_75 [i_8] [(signed char)10] [i_8] [i_8] = ((/* implicit */int) var_12);
                    }
                } 
            } 
            var_34 -= ((/* implicit */unsigned char) (~((-(arr_45 [i_8] [i_8] [i_15 + 1] [i_15])))));
            var_35 = ((/* implicit */_Bool) arr_46 [i_8] [(unsigned char)6] [i_8]);
        }
        for (unsigned short i_22 = 3; i_22 < 13; i_22 += 3) 
        {
            arr_80 [i_8] [i_8] [i_22] = ((/* implicit */unsigned short) min((max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9))))), (var_6))), (((((/* implicit */_Bool) min((arr_40 [i_8 + 1] [3] [i_8 + 1]), (((/* implicit */int) arr_64 [i_8] [i_22] [(_Bool)1] [i_22]))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_35 [i_22]))))) : (arr_45 [i_8 - 3] [i_8 - 3] [i_8 - 3] [12])))));
            /* LoopNest 2 */
            for (long long int i_23 = 3; i_23 < 12; i_23 += 1) 
            {
                for (long long int i_24 = 0; i_24 < 14; i_24 += 2) 
                {
                    {
                        arr_87 [(unsigned char)8] [i_22] [i_22] [i_8] = ((/* implicit */long long int) ((int) var_14));
                        arr_88 [i_24] [i_22] [i_22] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_26 [i_22] [i_22])) & (((/* implicit */int) var_15))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) var_1)), (var_7))))) : (((((/* implicit */_Bool) arr_69 [i_24] [i_23] [i_8 - 3] [i_8 - 3])) ? (arr_54 [i_22]) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))))) ? (((/* implicit */unsigned long long int) (~(arr_69 [i_24] [i_22] [6U] [6U])))) : (max((((((/* implicit */_Bool) var_16)) ? (arr_45 [i_8] [i_8] [i_23] [i_24]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_83 [(signed char)4] [i_8] [i_8]))))), (((/* implicit */unsigned long long int) var_11))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_25 = 1; i_25 < 13; i_25 += 4) 
                        {
                            arr_91 [i_8 - 2] [(unsigned char)1] [i_22] [i_23] [i_23] [i_24] [i_24] = ((/* implicit */int) (~(((var_2) ? (var_18) : (arr_55 [i_23 + 1] [i_22 - 3] [i_23])))));
                            arr_92 [i_8 - 2] [i_22] [i_8 + 1] [i_8] [i_8] [i_8 + 1] [i_22] = ((/* implicit */signed char) ((unsigned long long int) (!(((/* implicit */_Bool) arr_20 [i_8 - 2])))));
                        }
                    }
                } 
            } 
            arr_93 [i_8] [i_22] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_69 [i_8] [i_8] [i_22] [i_22])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : ((+(arr_42 [i_8])))));
        }
    }
    var_36 = ((/* implicit */int) var_3);
    var_37 = ((/* implicit */unsigned char) ((_Bool) var_12));
}
