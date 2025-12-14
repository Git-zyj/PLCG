/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148572
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_13 = max((((/* implicit */int) ((491388915U) < (((/* implicit */unsigned int) -1957389439))))), ((~((+(((/* implicit */int) arr_0 [i_0] [i_0])))))));
        var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) max((((/* implicit */int) max((((/* implicit */unsigned char) var_2)), (var_3)))), (var_5))))));
        var_15 *= ((unsigned char) (-(max((arr_1 [i_0] [(signed char)13]), (((/* implicit */unsigned int) var_5))))));
    }
    var_16 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((int) max((var_10), (((/* implicit */unsigned short) var_2))))))));
    /* LoopSeq 1 */
    for (short i_1 = 0; i_1 < 12; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 12; i_2 += 3) 
        {
            for (unsigned int i_3 = 0; i_3 < 12; i_3 += 4) 
            {
                {
                    arr_10 [i_2] [i_3] [(unsigned short)3] [i_2] = var_3;
                    var_17 |= max((max((((/* implicit */long long int) (unsigned char)20)), (min((8812098141936762030LL), (((/* implicit */long long int) var_8)))))), (((/* implicit */long long int) ((unsigned short) (unsigned short)45424))));
                }
            } 
        } 
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned int i_4 = 0; i_4 < 12; i_4 += 3) 
        {
            arr_13 [i_4] [i_4] [i_4] = ((/* implicit */unsigned int) var_11);
            var_18 += ((/* implicit */signed char) (unsigned char)20);
        }
        for (unsigned int i_5 = 0; i_5 < 12; i_5 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 4) 
            {
                var_19 = ((/* implicit */unsigned int) (-((((+(8812098141936762030LL))) / (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)13)))))))));
                var_20 = ((/* implicit */short) ((((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_2))) ^ (arr_1 [i_5] [i_6]))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (unsigned char)20))))))) | (min(((-(((/* implicit */int) var_3)))), (((((/* implicit */int) var_12)) / (((/* implicit */int) var_1))))))));
                var_21 = ((/* implicit */int) ((((/* implicit */unsigned long long int) -8812098141936762013LL)) == (144115188071661568ULL)));
            }
            for (signed char i_7 = 0; i_7 < 12; i_7 += 4) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_8 = 0; i_8 < 12; i_8 += 4) 
                {
                    var_22 -= ((/* implicit */unsigned int) var_1);
                    var_23 = ((/* implicit */short) (!(((/* implicit */_Bool) var_11))));
                }
                var_24 = ((/* implicit */short) max((var_24), (((short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_7] [4U]))) <= ((+(var_6))))))));
                var_25 = ((/* implicit */short) (!(((/* implicit */_Bool) min((((-8812098141936762030LL) * (((/* implicit */long long int) ((/* implicit */int) (signed char)0))))), (max((((/* implicit */long long int) var_1)), (arr_15 [(_Bool)1] [(unsigned short)10] [(_Bool)1]))))))));
            }
            arr_24 [i_1] [i_5] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_6 [i_1] [10U] [i_5]))));
        }
        for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 4) 
            {
                for (unsigned short i_11 = 0; i_11 < 12; i_11 += 3) 
                {
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        {
                            arr_33 [2U] [i_9] [i_10] [i_11] [7U] = ((/* implicit */unsigned short) var_4);
                            arr_34 [i_12] [i_11] [(unsigned char)9] [i_1] [i_1] = ((/* implicit */long long int) ((min((arr_16 [(unsigned short)0] [(unsigned short)0]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1916825656)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))))) * (((max((144115188071661568ULL), (((/* implicit */unsigned long long int) (unsigned short)6962)))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8812098141936762030LL)) ? (((/* implicit */int) (signed char)-3)) : (((/* implicit */int) arr_26 [i_1] [i_1] [i_11])))))))));
                            arr_35 [i_1] [i_1] [i_9] [2] [3ULL] [i_12] [i_12] = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((((/* implicit */int) arr_17 [i_1] [i_1] [1])) >= (((/* implicit */int) arr_14 [i_1] [i_1]))))) : (((((/* implicit */int) var_11)) / (((/* implicit */int) var_1)))))));
                        }
                    } 
                } 
            } 
            var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) ((var_2) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_0 [9] [9])))))) << ((((~(((/* implicit */int) var_4)))) + (160))))))));
        }
        for (unsigned short i_13 = 0; i_13 < 12; i_13 += 4) 
        {
            var_27 ^= ((/* implicit */signed char) (-((~(arr_32 [i_1] [8U] [i_1])))));
            var_28 = ((/* implicit */short) (-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 1957389439)))) : (((((/* implicit */_Bool) arr_25 [i_1] [i_13])) ? (arr_16 [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))))));
            var_29 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_27 [i_13] [3U] [i_1]), (var_4)))))))) >= (max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)20)) * (((/* implicit */int) arr_14 [i_1] [i_1]))))), (max((((/* implicit */unsigned long long int) (signed char)91)), (18166053059859386898ULL)))))));
            /* LoopSeq 4 */
            /* vectorizable */
            for (int i_14 = 0; i_14 < 12; i_14 += 4) 
            {
                var_30 *= (!(((/* implicit */_Bool) (signed char)-27)));
                var_31 = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) (signed char)0)) <= (((/* implicit */int) var_2)))))));
                arr_42 [2] = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)20))) == (var_6))));
            }
            for (unsigned short i_15 = 0; i_15 < 12; i_15 += 4) 
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_16 = 0; i_16 < 12; i_16 += 3) 
                {
                    var_32 = ((/* implicit */unsigned int) var_5);
                    arr_48 [11U] [i_13] [i_15] [i_15] [6U] &= ((/* implicit */signed char) (-(((/* implicit */int) var_11))));
                }
                for (short i_17 = 0; i_17 < 12; i_17 += 2) 
                {
                    arr_51 [i_1] [i_1] [i_1] [4U] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_12 [i_1])) / (((/* implicit */int) (signed char)-7)))) == (((((/* implicit */_Bool) ((((/* implicit */int) arr_37 [(short)9])) >> (((((/* implicit */int) var_11)) + (44)))))) ? (((((/* implicit */int) (unsigned char)236)) << (((((/* implicit */int) var_1)) - (50723))))) : (((/* implicit */int) arr_26 [i_1] [i_13] [i_17]))))));
                    arr_52 [i_15] = ((((/* implicit */_Bool) ((unsigned short) (signed char)-27))) ? (((/* implicit */int) arr_31 [i_1] [i_1] [i_1] [i_17] [i_1])) : ((~(((/* implicit */int) (_Bool)1)))));
                }
                arr_53 [i_1] [i_13] [(_Bool)1] [i_15] = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */int) arr_21 [i_1] [i_1] [(_Bool)1])) * (((/* implicit */int) var_11)))));
            }
            for (unsigned short i_18 = 0; i_18 < 12; i_18 += 4) 
            {
                var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (((((/* implicit */_Bool) min((var_9), (var_9)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1957389412)))))) : (arr_16 [i_13] [i_13]))))))));
                var_34 = ((/* implicit */_Bool) arr_23 [i_1] [i_1] [i_13] [i_18] [i_13] [i_13]);
                arr_57 [i_1] [(unsigned short)0] [i_18] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) ((arr_29 [(unsigned short)7]) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)47008)))))) << (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_49 [i_1] [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) (signed char)57))));
            }
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
            {
                arr_61 [0ULL] [i_13] = ((/* implicit */unsigned char) max((((/* implicit */int) (unsigned char)242)), (((((/* implicit */int) ((((/* implicit */int) (unsigned char)23)) == (((/* implicit */int) var_8))))) << (((arr_6 [i_1] [i_1] [i_13]) - (14571230644250386682ULL)))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_20 = 0; i_20 < 12; i_20 += 2) 
                {
                    arr_64 [i_1] [i_13] [i_20] [i_20] = ((/* implicit */int) ((max((arr_6 [i_1] [i_13] [i_13]), (arr_6 [i_13] [i_19] [i_1]))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_6 [i_1] [i_13] [i_1]) > (arr_6 [i_1] [i_1] [i_20])))))));
                    var_35 = ((/* implicit */unsigned int) var_0);
                    var_36 = ((unsigned int) arr_58 [(signed char)10] [i_13] [i_1]);
                }
                arr_65 [(unsigned char)5] [(unsigned char)2] = ((/* implicit */short) ((1957389421) != (max((((var_5) / (var_5))), ((-(((/* implicit */int) var_2))))))));
                arr_66 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_19] [i_19] [i_19] [i_1] [i_1] [i_1])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_50 [i_19] [(unsigned char)10] [(unsigned char)10] [i_1])) ? (-1569402351) : (((/* implicit */int) (unsigned short)18535))))) ? (((/* implicit */unsigned int) var_5)) : (min((((/* implicit */unsigned int) (unsigned short)46991)), (arr_40 [i_1] [i_13] [i_19]))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
            }
        }
    }
}
