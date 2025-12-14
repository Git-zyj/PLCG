/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113873
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
    var_11 -= ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2))));
    var_12 = ((/* implicit */int) (~(((((/* implicit */_Bool) min((var_8), (((/* implicit */long long int) var_5))))) ? (var_1) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_3)))))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            arr_4 [(unsigned char)8] [i_1] = ((/* implicit */long long int) (!((_Bool)1)));
            var_13 ^= ((/* implicit */unsigned char) ((short) (_Bool)1));
            var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) && ((_Bool)1)));
            var_15 -= ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
        }
        arr_5 [i_0] [i_0] |= ((/* implicit */unsigned char) arr_2 [i_0]);
        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) arr_0 [i_0]))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)44)) ? (arr_0 [i_0]) : (arr_0 [i_0])))) : (min((((/* implicit */long long int) (signed char)-14)), (var_10)))));
    }
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
    {
        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) var_3))))))) ? (((((/* implicit */_Bool) arr_0 [i_2 + 1])) ? (arr_0 [i_2 + 1]) : (((/* implicit */unsigned int) 1767852950)))) : (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_7 [i_2] [i_2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)111)))))))));
        var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) arr_1 [i_2] [i_2]))));
        /* LoopSeq 3 */
        for (unsigned char i_3 = 0; i_3 < 15; i_3 += 4) 
        {
            arr_10 [i_3] [i_2] [i_3] = ((((/* implicit */_Bool) 3045706023547572093LL)) ? (((/* implicit */int) (short)-512)) : (((/* implicit */int) (signed char)-127)));
            /* LoopSeq 2 */
            for (int i_4 = 0; i_4 < 15; i_4 += 3) /* same iter space */
            {
                arr_14 [i_2] [i_3] [i_4] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_8 [i_2] [i_3] [i_2])) ? (((/* implicit */int) arr_8 [i_2 + 1] [i_3] [i_2])) : (((/* implicit */int) (unsigned short)65535)))), (((((/* implicit */_Bool) arr_8 [i_2] [i_3] [i_2])) ? (((/* implicit */int) arr_8 [i_2] [i_2 + 1] [i_2])) : (((/* implicit */int) arr_8 [i_2] [i_3] [i_2]))))));
                var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) (~(var_9))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (max((arr_3 [i_2 + 1] [i_4]), (((/* implicit */int) arr_1 [i_2 + 1] [i_3])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))) : ((~(-7741476089408223203LL))))))));
            }
            /* vectorizable */
            for (int i_5 = 0; i_5 < 15; i_5 += 3) /* same iter space */
            {
                arr_19 [i_3] [i_2] [i_5] = ((((/* implicit */_Bool) -5928007066526497215LL)) ? (((/* implicit */int) (short)4429)) : (((/* implicit */int) arr_8 [i_2 + 1] [i_2 + 1] [i_2])));
                var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_2 + 1] [i_2 + 1])) ? (1106808591U) : (var_9)));
                var_21 += ((/* implicit */signed char) ((((/* implicit */int) (short)-17607)) <= (((/* implicit */int) (_Bool)0))));
            }
        }
        /* vectorizable */
        for (unsigned char i_6 = 0; i_6 < 15; i_6 += 2) /* same iter space */
        {
            var_22 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2 + 1] [i_2 + 1])) ? (((/* implicit */int) ((var_0) == (((/* implicit */int) (unsigned char)206))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 1958135721U)))))));
            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) + (4611685743549480960LL)));
            arr_22 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_2] [i_2] [i_2 + 1] [i_6])) ? (((/* implicit */long long int) arr_12 [i_2] [i_2 + 1])) : (((((/* implicit */_Bool) (unsigned char)0)) ? (var_8) : (-1LL)))));
            arr_23 [i_2] [i_6] = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) -4611685743549480976LL)) ? (((/* implicit */unsigned int) arr_7 [i_2] [i_2])) : (4294967273U))));
            /* LoopSeq 3 */
            for (signed char i_7 = 0; i_7 < 15; i_7 += 2) 
            {
                arr_26 [i_2] [i_7] = ((/* implicit */unsigned char) (+(((var_5) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
                var_24 |= ((/* implicit */unsigned long long int) ((-4611685743549480977LL) * (((((/* implicit */long long int) ((/* implicit */int) arr_21 [i_2] [i_6] [i_7]))) & (4611685743549480960LL)))));
                var_25 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_2 + 1] [i_2 + 1] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_11 [i_6] [i_2 + 1] [i_2 + 1])));
            }
            for (unsigned short i_8 = 4; i_8 < 14; i_8 += 3) 
            {
                /* LoopSeq 4 */
                for (unsigned char i_9 = 2; i_9 < 13; i_9 += 3) 
                {
                    var_26 *= ((/* implicit */unsigned long long int) ((3618929434375365924LL) ^ (((/* implicit */long long int) ((int) var_8)))));
                    arr_32 [i_2] = ((((/* implicit */_Bool) arr_12 [i_2 + 1] [i_8 - 1])) && (((/* implicit */_Bool) -16LL)));
                }
                for (long long int i_10 = 0; i_10 < 15; i_10 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_11 = 0; i_11 < 15; i_11 += 4) 
                    {
                        arr_38 [i_6] [(_Bool)1] [7ULL] [i_2] = ((/* implicit */signed char) (+(((/* implicit */int) var_2))));
                        var_27 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)224))));
                        var_28 *= (~(((((/* implicit */_Bool) arr_37 [i_11] [i_11] [(_Bool)1] [i_10] [i_11])) ? (((/* implicit */int) arr_13 [i_11] [i_6])) : (((/* implicit */int) (unsigned short)7)))));
                    }
                    var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) ((((/* implicit */_Bool) -1)) ? (((/* implicit */unsigned long long int) arr_3 [i_2] [i_10])) : (arr_30 [i_6] [i_6] [i_8] [i_8] [i_2 + 1]))))));
                    arr_39 [i_2] [i_2] = ((/* implicit */long long int) (~(1106808591U)));
                    arr_40 [i_2] [i_6] [i_2] = ((/* implicit */int) ((arr_9 [i_8 - 4] [i_6]) & (((/* implicit */unsigned long long int) ((int) (_Bool)1)))));
                    var_30 = var_3;
                }
                for (signed char i_12 = 0; i_12 < 15; i_12 += 2) 
                {
                    var_31 = (((_Bool)0) ? (((/* implicit */unsigned long long int) var_9)) : (var_1));
                    var_32 |= ((/* implicit */_Bool) ((short) ((var_2) ? (((/* implicit */int) arr_8 [i_6] [(signed char)6] [i_12])) : (arr_24 [i_2 + 1] [i_6] [i_8 - 4] [i_12]))));
                    var_33 -= ((/* implicit */short) (((_Bool)1) ? (17679452451229316464ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 4294967244U)) <= (999087645932496357ULL)))))));
                }
                for (unsigned int i_13 = 0; i_13 < 15; i_13 += 3) 
                {
                    arr_46 [i_2] [i_8 + 1] [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (-4611685743549480968LL) : (((/* implicit */long long int) 1106808583U))))) ? (((var_2) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (3188158704U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)6609)) ? (var_0) : (((/* implicit */int) (short)6622)))))));
                    var_34 = ((/* implicit */unsigned char) ((((/* implicit */int) ((var_1) < (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) >= (((/* implicit */int) (_Bool)1))));
                    var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_25 [i_2 + 1] [i_2] [i_8 + 1] [i_8 - 2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_29 [i_2 + 1] [i_2] [i_8 + 1]))));
                }
                var_36 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((var_5) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (7114798788841003536ULL)))) ? (((var_5) ? (((/* implicit */long long int) 3488069652U)) : (-3LL))) : (((/* implicit */long long int) arr_24 [i_2 + 1] [i_2] [i_6] [i_8 - 3]))));
            }
            for (unsigned char i_14 = 0; i_14 < 15; i_14 += 1) 
            {
                /* LoopSeq 1 */
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    arr_51 [i_2] [(_Bool)1] [i_15] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_48 [i_2] [i_6] [i_2] [i_15])) ? (((((/* implicit */_Bool) var_10)) ? (var_10) : (((/* implicit */long long int) var_9)))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)34)))));
                    var_37 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -5173724092185520097LL)) ? (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_7))));
                    arr_52 [i_6] [i_6] |= ((/* implicit */long long int) 127);
                }
                var_38 |= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)253))) : (260553404U)))));
            }
        }
        /* vectorizable */
        for (unsigned char i_16 = 0; i_16 < 15; i_16 += 2) /* same iter space */
        {
            arr_55 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_2] [i_16] [i_2])) && ((_Bool)1)));
            var_39 += ((/* implicit */_Bool) (unsigned short)29211);
            var_40 &= ((/* implicit */int) arr_11 [i_16] [i_2] [i_2 + 1]);
            /* LoopNest 3 */
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    for (unsigned long long int i_19 = 0; i_19 < 15; i_19 += 1) 
                    {
                        {
                            var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_15 [i_17] [i_17] [i_2 + 1])) | (((/* implicit */int) arr_15 [i_19] [i_18] [i_2 + 1]))));
                            var_42 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_41 [i_2 + 1] [i_2] [i_2] [i_2] [i_2 + 1] [i_18])));
                        }
                    } 
                } 
            } 
        }
    }
    for (long long int i_20 = 0; i_20 < 10; i_20 += 3) 
    {
        var_43 = ((/* implicit */int) max((var_43), (((/* implicit */int) (+(min((arr_44 [i_20] [(signed char)4] [i_20] [i_20] [i_20] [i_20]), (arr_44 [13U] [i_20] [i_20] [i_20] [i_20] [i_20]))))))));
        var_44 = ((/* implicit */long long int) max((var_44), (((((/* implicit */_Bool) arr_20 [i_20] [i_20] [i_20])) ? (((((/* implicit */_Bool) min((((/* implicit */long long int) arr_31 [i_20] [i_20] [i_20] [(signed char)12] [i_20] [(signed char)8])), (var_8)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_62 [i_20] [i_20] [i_20]))) : (((var_7) ? (arr_41 [(unsigned char)8] [i_20] [i_20] [i_20] [(unsigned char)8] [i_20]) : (((/* implicit */long long int) ((/* implicit */int) (short)-17607))))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
    }
}
