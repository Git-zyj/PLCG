/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144771
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopSeq 4 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    arr_10 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_1 - 2] [3LL] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-9)))))) : (((unsigned long long int) arr_2 [i_0]))));
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 15; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_13 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)15))) : (10392950599480568532ULL)))) ? (((unsigned int) 17592186042368LL)) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-107)))));
                                var_14 = ((/* implicit */signed char) arr_12 [i_1] [7] [i_3 + 1] [i_4]);
                                arr_16 [i_0] [i_3] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)16383)) / (((/* implicit */int) (unsigned short)27562))));
                                var_15 = ((/* implicit */unsigned char) ((_Bool) (unsigned char)151));
                            }
                        } 
                    } 
                    var_16 = ((unsigned long long int) 7639854281924957192ULL);
                    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (unsigned short)8191))));
                    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((arr_14 [i_1 + 2] [i_1] [i_1 - 2] [i_1 - 2] [i_2] [3ULL]) || (arr_14 [i_1 + 2] [i_2] [i_2] [i_2] [i_2] [i_2]))))));
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    arr_20 [i_1] [i_0] &= ((/* implicit */unsigned long long int) arr_15 [i_5]);
                    var_19 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (short)12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-4))) : (807841028137682243ULL))) <= (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)245)) / (((/* implicit */int) (unsigned short)31073)))))));
                    var_20 = ((/* implicit */_Bool) max((min((min((((/* implicit */unsigned long long int) arr_19 [i_5])), (1328769819702411326ULL))), (((/* implicit */unsigned long long int) min((arr_18 [i_5] [i_1 + 2] [i_0]), (arr_18 [i_5] [i_1 - 1] [i_0])))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) arr_3 [i_1 - 1] [i_1 + 2])), (min((arr_12 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned char) (_Bool)1)))))))));
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 18; i_6 += 4) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 18; i_7 += 2) 
                        {
                            {
                                arr_26 [i_0] [i_1] [4LL] [i_5] [i_6] [i_7] [i_7] = ((/* implicit */long long int) ((unsigned char) (unsigned char)255));
                                arr_27 [i_5] [i_5] = ((/* implicit */long long int) max((10246034766166254961ULL), (((/* implicit */unsigned long long int) ((long long int) arr_9 [i_1 + 1] [i_1 - 1] [i_0])))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned long long int i_8 = 4; i_8 < 16; i_8 += 3) 
                {
                    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-9397)) ? (((/* implicit */int) (unsigned short)20474)) : (((/* implicit */int) (signed char)-9))))) ? (((/* implicit */int) arr_18 [i_0] [i_1 - 1] [i_8])) : (((/* implicit */int) arr_11 [i_1] [i_1] [i_1 + 2]))));
                    var_22 = ((/* implicit */int) ((unsigned int) arr_6 [i_8 - 4] [i_8] [i_8 - 1] [i_8 - 4]));
                    arr_32 [i_0] [i_1] [i_0] [i_8] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)176))) >= (((9290317447032226606ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_1 + 1] [i_8] [i_0])))))));
                    /* LoopNest 2 */
                    for (unsigned char i_9 = 3; i_9 < 15; i_9 += 3) 
                    {
                        for (unsigned char i_10 = 0; i_10 < 18; i_10 += 2) 
                        {
                            {
                                arr_40 [i_0] [i_1] [i_8 + 1] [i_9 - 2] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_0])) ? (((/* implicit */int) arr_12 [i_0] [i_1] [(_Bool)1] [i_10])) : (((/* implicit */int) arr_18 [i_1 - 1] [i_8] [i_9]))))) ? (arr_35 [i_1 + 2] [i_8 - 1] [i_9 + 3] [i_9 - 2]) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_1)))))));
                                var_23 = ((/* implicit */signed char) arr_11 [i_8 - 1] [i_9 - 1] [i_9 - 1]);
                                var_24 &= ((((/* implicit */int) (unsigned char)32)) | (12582912));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */signed char) ((17592186044415ULL) * (((/* implicit */unsigned long long int) arr_35 [i_1] [i_8 - 1] [i_8] [i_8]))));
                }
                for (unsigned short i_11 = 3; i_11 < 16; i_11 += 1) 
                {
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 18; i_12 += 4) 
                    {
                        for (long long int i_13 = 3; i_13 < 16; i_13 += 4) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) (-(max((((/* implicit */int) (signed char)-10)), (268419072))))))));
                                var_27 = ((/* implicit */short) ((((((/* implicit */unsigned int) arr_28 [i_0] [i_1 + 2] [i_11 + 1] [i_13 - 3])) != (arr_13 [i_0] [i_1] [i_13 + 2] [i_0]))) ? (((/* implicit */int) ((short) arr_41 [i_1 - 1] [i_1 - 2] [i_1 + 1]))) : (((/* implicit */int) arr_21 [i_0]))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                    {
                        var_28 *= ((/* implicit */unsigned long long int) ((arr_7 [i_14] [7U] [i_1 - 1]) != (((/* implicit */int) arr_4 [i_11] [(unsigned char)11] [i_11 + 2]))));
                        arr_51 [i_14] = ((/* implicit */signed char) ((unsigned long long int) arr_22 [i_1] [i_1 + 2] [i_1 - 1]));
                        var_29 ^= ((/* implicit */unsigned short) ((((/* implicit */int) arr_24 [i_14 - 1] [i_0] [12ULL] [i_0] [(unsigned short)0])) & (((/* implicit */int) var_10))));
                        arr_52 [i_0] [i_1] [i_1] [i_14] [i_14] [i_14] = ((/* implicit */unsigned short) ((long long int) 72057594037927932ULL));
                    }
                    var_30 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_9 [i_1 + 2] [i_1] [i_1 + 2])) ? (((/* implicit */int) arr_25 [i_11 + 2] [2ULL] [i_11 - 1] [i_11 + 2] [i_11] [i_11 - 1] [i_11 + 1])) : (((/* implicit */int) ((short) arr_13 [i_0] [i_0] [i_0] [i_11]))))), (((((/* implicit */int) ((signed char) var_7))) / (((/* implicit */int) arr_18 [i_11] [(signed char)1] [i_0]))))));
                    /* LoopNest 2 */
                    for (long long int i_15 = 0; i_15 < 18; i_15 += 3) 
                    {
                        for (short i_16 = 0; i_16 < 18; i_16 += 2) 
                        {
                            {
                                var_31 *= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((arr_35 [i_16] [i_15] [(unsigned short)14] [i_0]) ^ (((/* implicit */long long int) arr_30 [i_0] [i_1 - 2] [13LL]))))) ? (max((arr_28 [i_1 + 1] [i_1 + 1] [i_15] [i_16]), (((/* implicit */int) arr_43 [8ULL])))) : (((/* implicit */int) arr_21 [i_15]))))));
                                var_32 *= ((/* implicit */signed char) 5044923943103687832ULL);
                                arr_60 [i_0] [i_0] [i_1 + 1] [i_15] [i_15] [i_16] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) min(((_Bool)0), (arr_4 [i_1 - 1] [i_1] [i_1 + 2]))))) | (((((/* implicit */_Bool) ((arr_13 [i_16] [i_15] [i_0] [i_0]) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_35 [i_16] [i_11] [i_1] [i_0])))) : (((var_5) & (((/* implicit */unsigned int) arr_31 [i_0] [i_1] [i_1] [i_16]))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_17 = 1; i_17 < 14; i_17 += 4) 
                    {
                        for (int i_18 = 1; i_18 < 14; i_18 += 2) 
                        {
                            {
                                arr_65 [14LL] [i_17] [i_17] [i_0] [i_18] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)99)))))));
                                var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_61 [i_18 + 3] [i_11] [i_1 + 1])) ? (((/* implicit */int) arr_61 [i_18 + 4] [i_17] [i_1 - 1])) : (((/* implicit */int) (signed char)-7))))) ? (2370176327U) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_54 [i_0])))))));
                                var_34 = ((/* implicit */unsigned long long int) (short)-27873);
                                arr_66 [i_11] [i_1] [i_11] [i_11] [i_18] [i_17 - 1] [i_11] &= ((/* implicit */_Bool) arr_48 [i_0] [i_0]);
                                var_35 = ((/* implicit */short) min((var_35), (((/* implicit */short) (-(min((((/* implicit */long long int) arr_28 [i_18 + 2] [i_11 - 3] [i_1 + 1] [i_1])), (arr_58 [i_0] [i_17 + 4]))))))));
                            }
                        } 
                    } 
                }
                var_36 = ((/* implicit */unsigned long long int) min((var_36), ((-(arr_55 [(signed char)10] [i_1] [i_1] [i_1] [i_0] [i_1])))));
                var_37 &= ((/* implicit */int) ((unsigned char) ((_Bool) ((var_0) != (((/* implicit */unsigned long long int) 4294967282U))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
    {
        for (long long int i_20 = 1; i_20 < 11; i_20 += 3) 
        {
            {
                var_38 ^= ((/* implicit */signed char) arr_13 [i_20] [15LL] [i_19] [i_19]);
                var_39 = ((/* implicit */signed char) ((int) ((unsigned long long int) 1343976965U)));
            }
        } 
    } 
    var_40 = ((/* implicit */unsigned long long int) var_12);
}
