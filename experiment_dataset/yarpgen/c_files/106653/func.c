/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106653
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
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_13 ^= ((/* implicit */unsigned long long int) arr_0 [i_0]);
        arr_2 [i_0] = ((/* implicit */long long int) var_4);
        var_14 = (-(min(((-(((/* implicit */int) (unsigned short)49270)))), (((/* implicit */int) (signed char)3)))));
        var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) arr_1 [14LL] [14LL]))));
        /* LoopSeq 3 */
        for (long long int i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            var_16 = ((/* implicit */unsigned long long int) ((_Bool) (~(((/* implicit */int) arr_3 [i_0] [1] [i_1])))));
            arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_3 [i_0] [i_1] [(short)14]) ? (min((((/* implicit */unsigned long long int) arr_1 [i_0] [4])), (var_9))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_5))))))) ? (((unsigned long long int) arr_3 [i_0] [i_1 + 1] [i_0])) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */int) ((unsigned char) var_10))) : (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) != (((/* implicit */int) arr_3 [i_0] [i_1] [i_1]))))))))));
        }
        for (long long int i_2 = 0; i_2 < 22; i_2 += 1) 
        {
            var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [6U] [i_0] [6U]))) % (arr_8 [i_0] [(unsigned char)18] [i_2])))))));
            var_18 = ((/* implicit */unsigned long long int) min((var_18), ((~(arr_7 [i_0] [16ULL] [i_0])))));
            var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((unsigned short) 2699598125717310243ULL)))));
            arr_9 [i_0] [i_0] = ((/* implicit */int) (~(arr_7 [i_0] [i_2] [i_2])));
            arr_10 [i_0] [i_0] [6LL] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_2]))))));
        }
        for (int i_3 = 0; i_3 < 22; i_3 += 2) 
        {
            var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) arr_4 [i_3] [i_3]))));
            arr_15 [10] [i_3] [i_0] = ((/* implicit */unsigned short) max((((arr_14 [i_3]) - (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_0]))))), (-6731941759175724940LL)));
            /* LoopSeq 2 */
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                arr_18 [i_0] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 7449689016886149379ULL)) ? (((/* implicit */unsigned long long int) (-(3902902321875865512LL)))) : (15470916733078251953ULL)));
                arr_19 [10LL] [i_3] [i_4 - 1] |= ((/* implicit */unsigned short) arr_16 [i_0] [i_0] [i_4]);
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_5 = 1; i_5 < 19; i_5 += 4) 
                {
                    arr_23 [i_0] = ((/* implicit */unsigned short) ((((long long int) var_0)) | (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_5 + 2] [i_0] [i_5 + 3])))));
                    var_21 = ((/* implicit */_Bool) ((int) arr_7 [19] [i_3] [i_4 - 1]));
                    arr_24 [i_0] [i_4] [i_4 - 1] [i_3] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_7)) : (((((var_5) + (2147483647))) >> (((/* implicit */int) var_11))))));
                }
                var_22 = ((/* implicit */int) min((var_22), (var_6)));
            }
            for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 1) 
            {
                var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) ((var_3) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)217))))))) ? (((long long int) arr_7 [i_6] [7LL] [14ULL])) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))))));
                var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~((~(var_5)))))) ? (((/* implicit */int) arr_25 [i_0] [i_3] [9] [i_6])) : (((/* implicit */int) (signed char)61)))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 4) 
                {
                    arr_31 [i_0] [i_0] [i_6] = ((/* implicit */unsigned short) (-(min((arr_16 [i_7] [4] [i_0]), (((/* implicit */unsigned long long int) ((_Bool) arr_6 [i_0] [i_0])))))));
                    var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) (-(((var_1) / (var_10))))))));
                    var_26 = ((/* implicit */int) (signed char)-62);
                    var_27 = ((/* implicit */long long int) arr_16 [i_0] [(unsigned short)8] [i_6]);
                }
                arr_32 [i_3] [i_0] [i_3] = ((/* implicit */unsigned char) arr_16 [i_6] [i_3] [i_0]);
            }
        }
    }
    for (unsigned long long int i_8 = 4; i_8 < 17; i_8 += 1) 
    {
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 20; i_9 += 3) 
        {
            for (int i_10 = 2; i_10 < 18; i_10 += 4) 
            {
                {
                    arr_43 [i_8 - 3] [i_10] [i_8] |= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((((/* implicit */int) arr_30 [i_8 - 2] [i_9] [i_10] [i_8] [i_8])) <= (var_2))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_17 [i_8] [(short)20] [(short)20])) : (((/* implicit */int) (unsigned char)157)))) : (((/* implicit */int) arr_35 [i_9] [i_8 + 1]))))) ^ (-1113693929952231187LL)));
                    arr_44 [i_8 + 1] [i_8] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_20 [i_8] [i_9] [i_8] [i_10 - 2] [(_Bool)1])) ? (17694821619622675431ULL) : (arr_37 [i_10 + 2] [(signed char)7])))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (signed char i_11 = 0; i_11 < 20; i_11 += 3) 
        {
            arr_49 [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(-1113693929952231187LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (((arr_41 [i_11] [i_11] [i_11] [i_8 + 2]) ^ (((/* implicit */int) var_4)))) : ((~(1516935324)))))) : (var_9)));
            var_28 &= ((/* implicit */short) (-(arr_7 [i_8] [8ULL] [i_11])));
            arr_50 [i_8] [11ULL] [11ULL] = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [17ULL] [i_11] [i_11] [(_Bool)1])) ? (var_3) : (((/* implicit */unsigned long long int) arr_20 [i_8] [i_8] [i_11] [i_11] [i_11]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_30 [i_8 + 1] [i_8 + 1] [i_8] [i_11] [i_11])))) : (min((arr_36 [i_11]), (((/* implicit */unsigned long long int) var_12)))))), (((/* implicit */unsigned long long int) arr_38 [i_11] [i_11]))));
        }
        /* vectorizable */
        for (int i_12 = 1; i_12 < 16; i_12 += 2) 
        {
            arr_53 [i_8] [(unsigned short)0] [i_8] |= (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_34 [i_8 - 1]))))));
            /* LoopSeq 3 */
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                arr_56 [i_8] [i_12 + 4] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_52 [i_8 - 2] [i_12 + 2] [(unsigned char)17])) & (((/* implicit */int) arr_52 [i_8 - 4] [i_12 + 2] [(unsigned short)0]))));
                var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_52 [i_8 + 2] [i_13] [i_8 + 2])))))));
                var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) ((int) arr_29 [i_13] [i_12] [7LL] [i_8 - 3] [i_8])))));
            }
            for (unsigned short i_14 = 0; i_14 < 20; i_14 += 2) 
            {
                var_31 = ((/* implicit */unsigned long long int) (+(((long long int) (unsigned char)132))));
                var_32 = ((/* implicit */unsigned long long int) ((_Bool) arr_25 [i_8] [i_12 + 4] [0LL] [3ULL]));
                arr_59 [i_8] [i_12] [12ULL] [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) arr_26 [i_8]))) ? (arr_51 [i_8] [i_12 + 2]) : (arr_47 [i_8] [i_8 - 2] [i_14])));
                var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) ((arr_48 [i_8] [i_12 + 2] [i_14]) >= ((-(arr_39 [i_8 - 2] [i_12] [i_8] [i_8]))))))));
            }
            for (unsigned long long int i_15 = 4; i_15 < 18; i_15 += 2) 
            {
                var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_42 [8ULL] [i_12] [i_12])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_46 [16] [i_12])) ? (var_1) : (((/* implicit */int) arr_12 [i_8] [i_8] [i_8 + 2]))))) : ((+(2116468399661535788LL)))));
                arr_63 [i_8] [i_15] = ((/* implicit */unsigned long long int) arr_4 [i_12] [i_8]);
                var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) (-(arr_20 [i_15] [i_8 - 3] [i_8] [i_8 - 3] [i_8]))))));
                var_36 = ((/* implicit */int) ((short) arr_34 [i_12 + 3]));
                var_37 -= ((/* implicit */unsigned char) ((((/* implicit */int) arr_21 [i_15])) / (var_5)));
            }
            arr_64 [i_8] [i_12 + 2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_22 [i_12 + 4] [i_12 - 1] [i_8 + 2] [i_8 - 2] [i_8 - 1])) * (((/* implicit */int) arr_22 [i_12 + 2] [i_12 + 2] [i_8 - 1] [i_8 - 1] [i_8 - 1]))));
        }
    }
    for (unsigned short i_16 = 0; i_16 < 22; i_16 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_17 = 2; i_17 < 21; i_17 += 1) /* same iter space */
        {
            arr_69 [i_17] [i_16] = ((unsigned long long int) var_1);
            var_38 = ((/* implicit */long long int) var_7);
            arr_70 [i_17] [i_16] = ((/* implicit */unsigned long long int) arr_25 [i_16] [i_16] [(_Bool)1] [i_16]);
        }
        for (unsigned char i_18 = 2; i_18 < 21; i_18 += 1) /* same iter space */
        {
            arr_74 [20ULL] [i_16] [i_16] |= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((arr_3 [8ULL] [i_18 - 1] [20ULL]) && (arr_3 [(signed char)4] [i_18 - 2] [i_16])))) % (((((/* implicit */_Bool) min((arr_21 [0]), (((/* implicit */unsigned short) (_Bool)0))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_17 [(unsigned short)18] [i_18] [i_18])) : (((/* implicit */int) arr_68 [i_16] [i_18] [i_18])))) : (((/* implicit */int) ((signed char) arr_67 [i_16] [i_18] [i_18])))))));
            /* LoopNest 3 */
            for (unsigned long long int i_19 = 0; i_19 < 22; i_19 += 2) 
            {
                for (unsigned short i_20 = 1; i_20 < 21; i_20 += 1) 
                {
                    for (unsigned char i_21 = 0; i_21 < 22; i_21 += 3) 
                    {
                        {
                            arr_83 [2] [i_18] [i_20 - 1] [i_20 + 1] [i_19] [i_18] [i_16] = (i_18 % 2 == zero) ? (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_18 - 2] [i_18])) << (((((var_0) + (139910958))) - (17)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_18 - 1] [i_18])) ? (((/* implicit */int) arr_4 [i_18 - 2] [i_18])) : (((/* implicit */int) arr_4 [i_18 - 2] [i_18]))))) : (((long long int) arr_4 [i_18 + 1] [i_18]))))) : (((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_4 [i_18 - 2] [i_18])) + (2147483647))) << (((((((var_0) + (139910958))) - (17))) - (6)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_18 - 1] [i_18])) ? (((/* implicit */int) arr_4 [i_18 - 2] [i_18])) : (((/* implicit */int) arr_4 [i_18 - 2] [i_18]))))) : (((long long int) arr_4 [i_18 + 1] [i_18])))));
                            arr_84 [i_21] [i_18] [i_19] [i_18] [i_18] [i_16] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) min((var_4), (((/* implicit */short) ((unsigned char) (unsigned short)41590))))))));
                        }
                    } 
                } 
            } 
        }
        arr_85 [i_16] [i_16] = ((/* implicit */signed char) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_7))))), (var_7)));
    }
    var_39 = ((/* implicit */signed char) var_0);
    var_40 ^= ((/* implicit */unsigned int) var_7);
}
