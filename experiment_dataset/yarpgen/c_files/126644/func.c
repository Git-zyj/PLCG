/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126644
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
    var_12 = ((((/* implicit */int) var_10)) >= (var_7));
    var_13 = ((/* implicit */unsigned short) var_11);
    var_14 |= ((/* implicit */unsigned short) var_4);
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */short) (-(((/* implicit */int) arr_1 [i_0] [(_Bool)1]))));
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            /* LoopSeq 4 */
            for (unsigned int i_2 = 2; i_2 < 18; i_2 += 4) 
            {
                arr_11 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */short) arr_8 [i_2] [(_Bool)1] [i_2 - 2] [i_2 + 1]);
                arr_12 [i_2] [(_Bool)1] [(_Bool)1] [i_0] = ((arr_4 [i_1] [i_1 - 1]) ? (arr_2 [(_Bool)1] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 - 2] [i_0 + 3]))));
            }
            for (int i_3 = 3; i_3 < 17; i_3 += 4) 
            {
                arr_16 [i_3] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_3] [i_3] [i_1 - 1] [i_1 - 1])) ? (arr_13 [(_Bool)1] [i_1] [i_1] [i_1 + 1]) : (arr_13 [2] [i_3] [i_3] [i_1 - 1])));
                arr_17 [i_0 + 1] [i_1] [i_3] = ((/* implicit */signed char) ((int) ((arr_15 [i_3 - 2] [i_3 + 2] [(_Bool)1]) ? (((/* implicit */int) arr_7 [i_0])) : (arr_8 [i_0 + 4] [i_0 + 4] [i_3] [i_3]))));
            }
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) arr_19 [i_0]))));
                var_16 = ((/* implicit */signed char) arr_8 [i_1 + 1] [i_1] [17] [14]);
                arr_20 [14] [i_1] [i_4] [i_4] = ((/* implicit */unsigned int) arr_8 [i_0 - 1] [i_1] [i_1 - 1] [i_1 - 1]);
            }
            for (unsigned short i_5 = 1; i_5 < 16; i_5 += 4) 
            {
                var_17 = ((/* implicit */signed char) 140737488355327ULL);
                var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((arr_7 [i_5 + 3]) ? (((/* implicit */int) arr_7 [i_5 - 1])) : (((/* implicit */int) arr_7 [i_5 + 3])))))));
            }
            arr_24 [i_0 + 2] [i_1 + 1] = ((/* implicit */signed char) arr_7 [i_0 + 4]);
            /* LoopSeq 1 */
            for (unsigned int i_6 = 2; i_6 < 18; i_6 += 1) 
            {
                var_19 = ((/* implicit */_Bool) ((arr_7 [i_6 + 1]) ? (((/* implicit */int) arr_7 [i_6 + 1])) : (((/* implicit */int) arr_7 [i_6 - 1]))));
                arr_28 [i_6] = ((/* implicit */_Bool) arr_22 [i_6 + 1] [i_1 + 1] [i_0 + 2]);
                /* LoopNest 2 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (signed char i_8 = 1; i_8 < 18; i_8 += 4) 
                    {
                        {
                            arr_34 [i_0 - 2] [i_1 + 1] [i_6 - 1] [i_7] [i_6] = ((/* implicit */signed char) ((((/* implicit */int) arr_19 [i_0 - 2])) >> (((/* implicit */int) (signed char)0))));
                            var_20 = ((((/* implicit */_Bool) (+(140737488355327ULL)))) ? (((/* implicit */int) ((140737488355327ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-33)))))) : (((/* implicit */int) (signed char)33)));
                            var_21 = ((/* implicit */short) arr_10 [(_Bool)1]);
                            var_22 = ((/* implicit */signed char) (+(((/* implicit */int) arr_19 [i_8 - 1]))));
                            var_23 = (-(1637522360));
                        }
                    } 
                } 
            }
            arr_35 [i_1] [(unsigned short)5] [i_0] = ((/* implicit */_Bool) arr_1 [i_0 - 1] [i_1 + 1]);
            arr_36 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) arr_26 [i_0 + 1])) < (((/* implicit */int) (signed char)33))))) > (((int) arr_7 [i_1 + 1]))));
        }
        for (unsigned long long int i_9 = 1; i_9 < 17; i_9 += 4) 
        {
            arr_41 [i_0] [i_9] [i_0] = ((/* implicit */_Bool) arr_18 [i_9 + 1] [i_9 - 1] [i_9]);
            var_24 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_22 [i_0] [i_0 - 2] [i_9 + 1]))));
            /* LoopNest 2 */
            for (unsigned int i_10 = 2; i_10 < 17; i_10 += 4) 
            {
                for (unsigned long long int i_11 = 1; i_11 < 16; i_11 += 1) 
                {
                    {
                        arr_48 [18] [18] [i_0] [i_11] &= ((/* implicit */int) ((arr_30 [i_11 + 3] [(short)4] [i_10] [i_9 + 2] [i_9]) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1637522354)) ? (((/* implicit */int) (signed char)33)) : (((/* implicit */int) (_Bool)0)))))));
                        var_25 = ((/* implicit */signed char) (~(((/* implicit */int) arr_7 [i_10 - 1]))));
                        var_26 = ((/* implicit */short) (-(((/* implicit */int) ((arr_43 [i_0] [i_9] [i_10] [i_11]) > (((/* implicit */unsigned long long int) arr_40 [(signed char)16] [(_Bool)1] [i_9])))))));
                        arr_49 [(_Bool)1] [(_Bool)1] [i_10] [i_0] [i_9] [i_10] = ((((/* implicit */int) arr_6 [i_11] [i_11 + 1])) <= (((/* implicit */int) arr_5 [i_0 - 1] [i_10 + 1])));
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (int i_12 = 1; i_12 < 18; i_12 += 2) 
            {
                /* LoopSeq 2 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    arr_55 [i_0] [i_13] [i_12] [i_9] = arr_37 [i_9];
                    arr_56 [i_0] [(signed char)18] [(signed char)18] [i_9] = arr_18 [(_Bool)1] [(_Bool)1] [i_9];
                    /* LoopSeq 1 */
                    for (int i_14 = 1; i_14 < 15; i_14 += 3) 
                    {
                        var_27 = ((/* implicit */short) ((arr_2 [i_0 - 1] [i_14 + 2]) << (((/* implicit */int) arr_33 [i_14] [i_13] [i_12 - 1] [i_9] [i_0]))));
                        var_28 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) -607767776)) ? (18446603336221196289ULL) : (arr_51 [i_0] [i_0] [i_9 - 1] [i_9 + 2])));
                    }
                    arr_59 [i_9] [(unsigned short)17] [i_12] [i_0 + 1] [i_9] [i_9] = ((/* implicit */_Bool) (signed char)32);
                }
                for (signed char i_15 = 4; i_15 < 17; i_15 += 4) 
                {
                    var_29 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) 18446603336221196305ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_0]))) : (((arr_51 [i_15] [6] [i_15] [i_15]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                    arr_62 [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_9])) ? (((/* implicit */int) arr_39 [i_9])) : (((/* implicit */int) arr_39 [i_9]))));
                }
                arr_63 [i_9] [i_9] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_52 [i_12 - 1])) & (((/* implicit */int) arr_52 [i_12 + 1]))));
                var_30 ^= ((/* implicit */signed char) ((((/* implicit */int) arr_27 [i_0] [i_12] [i_12 + 1])) | (((/* implicit */int) arr_27 [(_Bool)1] [(_Bool)1] [i_12 - 1]))));
            }
            for (int i_16 = 2; i_16 < 18; i_16 += 3) /* same iter space */
            {
                arr_66 [i_0] [i_9] [i_16] = ((/* implicit */_Bool) ((unsigned int) arr_4 [i_0 + 1] [i_9 + 2]));
                var_31 = (!(((/* implicit */_Bool) arr_30 [i_9 + 2] [i_16 + 1] [i_9] [i_9 + 2] [13])));
                var_32 *= ((/* implicit */signed char) ((_Bool) arr_57 [i_9] [i_9] [i_9 + 1] [(_Bool)1] [i_9 + 1]));
            }
            for (int i_17 = 2; i_17 < 18; i_17 += 3) /* same iter space */
            {
                arr_71 [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_9 - 1])) ? (((/* implicit */int) arr_50 [i_0 + 2] [i_0 - 1] [i_9])) : (arr_60 [i_0 - 2] [(unsigned short)9] [i_17 - 1] [i_0])));
                var_33 += ((/* implicit */signed char) -607767776);
            }
            var_34 += ((/* implicit */unsigned int) (+(((/* implicit */int) arr_65 [i_0] [i_9 - 1] [i_0] [i_0]))));
        }
        for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
        {
            arr_75 [i_18] [i_18] = ((/* implicit */int) ((arr_69 [i_0 + 3]) * (arr_69 [i_0 + 2])));
            var_35 -= ((((/* implicit */_Bool) arr_23 [i_0 - 2] [i_0 - 2] [i_18 - 1] [i_18 - 1])) ? (((/* implicit */int) (_Bool)1)) : (arr_23 [i_0 - 2] [i_18 - 1] [i_18 - 1] [i_18 - 1]));
            var_36 = ((/* implicit */short) min((var_36), (((/* implicit */short) arr_15 [i_18 - 1] [i_18] [i_18 - 1]))));
        }
    }
    var_37 &= ((/* implicit */_Bool) min((var_0), ((((-(18446603336221196289ULL))) >> (((min((var_7), (((/* implicit */int) var_8)))) + (1182256283)))))));
}
