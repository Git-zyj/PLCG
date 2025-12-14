/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124659
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
    var_13 = ((/* implicit */long long int) var_10);
    var_14 = ((/* implicit */short) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : ((-(var_7))))) != (((/* implicit */long long int) ((/* implicit */int) var_2)))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) (+(min((((unsigned int) var_2)), (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0])) < (((/* implicit */int) arr_2 [i_0])))))))));
        var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((/* implicit */int) arr_1 [i_0])) < ((-(((/* implicit */int) (signed char)-1)))))))));
        var_16 &= ((/* implicit */unsigned char) (~(min((((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) == (((/* implicit */int) (signed char)-83))))), (((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */int) (signed char)6)) : (((/* implicit */int) var_9))))))));
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            var_17 ^= ((/* implicit */unsigned char) ((signed char) (signed char)127));
            /* LoopNest 3 */
            for (long long int i_2 = 1; i_2 < 22; i_2 += 1) 
            {
                for (long long int i_3 = 2; i_3 < 22; i_3 += 2) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            arr_17 [i_1] = ((/* implicit */signed char) (~(((((/* implicit */int) arr_14 [i_2 + 1] [i_1] [i_3 + 1])) + (((/* implicit */int) arr_14 [i_2 + 1] [i_1] [i_3 - 2]))))));
                            var_18 = ((/* implicit */short) max((((((/* implicit */int) ((_Bool) (short)8835))) ^ (((/* implicit */int) (short)-8836)))), (((/* implicit */int) arr_13 [i_0] [i_1] [i_1] [i_3] [i_3] [i_3] [i_4]))));
                        }
                    } 
                } 
            } 
            var_19 = ((/* implicit */signed char) min((((/* implicit */int) max((arr_5 [i_1]), (arr_5 [i_0])))), ((-(((/* implicit */int) arr_5 [i_1]))))));
        }
        for (short i_5 = 0; i_5 < 23; i_5 += 2) 
        {
            var_20 -= ((unsigned long long int) var_1);
            arr_21 [i_0] [i_0] [i_0] = min((max((((long long int) var_4)), (((/* implicit */long long int) arr_9 [i_5])))), (((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (signed char)78)), ((unsigned char)205))))) % (-6805576071151294940LL))));
            var_21 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_0] [i_0] [i_0])) * (((/* implicit */int) arr_7 [i_5] [i_5] [i_0]))))) ? (((/* implicit */int) arr_7 [i_0] [i_5] [i_5])) : (var_8)));
            var_22 = ((/* implicit */_Bool) min(((+(((/* implicit */int) (signed char)1)))), (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)33))))) ? (((/* implicit */int) (short)-21320)) : (((/* implicit */int) min(((_Bool)1), ((_Bool)1))))))));
        }
        /* vectorizable */
        for (signed char i_6 = 4; i_6 < 22; i_6 += 1) 
        {
            /* LoopSeq 3 */
            for (int i_7 = 3; i_7 < 22; i_7 += 2) /* same iter space */
            {
                var_23 = ((/* implicit */int) min((var_23), ((~(((/* implicit */int) (signed char)1))))));
                /* LoopNest 2 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    for (unsigned short i_9 = 3; i_9 < 19; i_9 += 2) 
                    {
                        {
                            var_24 &= ((/* implicit */long long int) (~(((/* implicit */int) arr_13 [i_0] [i_0] [(unsigned short)22] [i_7 - 2] [i_8] [i_8] [i_8]))));
                            var_25 &= var_9;
                            arr_37 [i_0] [i_0] [i_0] [i_0] [i_6] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_6 [i_7 - 1])) : (((/* implicit */int) arr_6 [i_7 + 1]))));
                            var_26 = ((/* implicit */long long int) arr_8 [i_0] [i_6] [i_8] [i_9]);
                        }
                    } 
                } 
            }
            for (int i_10 = 3; i_10 < 22; i_10 += 2) /* same iter space */
            {
                var_27 = ((/* implicit */_Bool) ((unsigned short) ((unsigned int) arr_35 [i_0] [i_0])));
                var_28 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_6] [i_10 - 2] [i_10]))));
            }
            for (unsigned short i_11 = 0; i_11 < 23; i_11 += 2) 
            {
                /* LoopNest 2 */
                for (int i_12 = 1; i_12 < 19; i_12 += 1) 
                {
                    for (signed char i_13 = 2; i_13 < 22; i_13 += 2) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned short) ((short) var_10));
                            arr_50 [i_13] &= ((/* implicit */_Bool) ((short) var_9));
                        }
                    } 
                } 
                arr_51 [i_0] [i_6] [i_11] = arr_48 [i_0] [i_6] [i_11] [i_11];
            }
            /* LoopSeq 2 */
            for (signed char i_14 = 3; i_14 < 22; i_14 += 4) 
            {
                var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_34 [i_6] [i_14 - 2] [i_14]))))));
                var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) arr_11 [i_14] [i_14] [i_14] [i_14 - 3] [i_6 - 2]))));
                /* LoopNest 2 */
                for (signed char i_15 = 0; i_15 < 23; i_15 += 1) 
                {
                    for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
                    {
                        {
                            var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)8835)) && ((_Bool)1)));
                            arr_60 [i_16] [i_15] [i_6] [i_6] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_0))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (signed char i_17 = 0; i_17 < 23; i_17 += 3) 
                {
                    var_33 = ((/* implicit */short) ((arr_19 [i_6 - 2] [i_14 - 2] [i_14]) << (((arr_19 [i_6 - 2] [i_14 - 2] [i_14]) - (2416451971847652832ULL)))));
                    /* LoopSeq 4 */
                    for (short i_18 = 0; i_18 < 23; i_18 += 1) 
                    {
                        arr_65 [i_0] [i_6] [i_6] [i_17] [i_17] [i_18] [i_18] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_6 - 2] [i_14 + 1] [i_6] [i_18]))) | (arr_52 [i_6 - 2] [i_14 + 1] [i_6] [i_17])));
                        var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) arr_62 [i_0] [i_6] [i_14] [i_17]))));
                    }
                    for (unsigned int i_19 = 0; i_19 < 23; i_19 += 1) /* same iter space */
                    {
                        var_35 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)222))) < (1LL)));
                        var_36 = ((/* implicit */signed char) (-(((/* implicit */int) arr_48 [i_14] [i_14] [i_14 - 1] [i_14]))));
                        var_37 *= ((/* implicit */short) arr_14 [i_0] [(signed char)18] [i_14 - 2]);
                    }
                    for (unsigned int i_20 = 0; i_20 < 23; i_20 += 1) /* same iter space */
                    {
                        var_38 = ((/* implicit */_Bool) arr_30 [i_6] [i_6]);
                        var_39 ^= ((/* implicit */_Bool) (((+(((/* implicit */int) (_Bool)0)))) + (((/* implicit */int) arr_27 [i_6] [(unsigned short)4]))));
                        var_40 = ((/* implicit */_Bool) ((((/* implicit */int) arr_41 [i_0] [i_14 - 3] [i_17] [i_20])) - (((/* implicit */int) arr_41 [i_0] [i_6 - 3] [i_14 - 3] [i_17]))));
                    }
                    for (unsigned int i_21 = 0; i_21 < 23; i_21 += 1) /* same iter space */
                    {
                        var_41 *= ((/* implicit */short) ((((/* implicit */int) arr_13 [i_0] [i_6] [(signed char)4] [i_14] [i_21] [i_6 - 4] [i_14])) << (((((/* implicit */int) arr_13 [i_0] [i_6] [(signed char)0] [i_17] [i_21] [i_6 - 4] [i_17])) - (37)))));
                        var_42 = ((/* implicit */int) (((+(((/* implicit */int) var_4)))) < (((/* implicit */int) arr_72 [i_21] [i_21] [i_21] [i_14] [i_6 - 1] [i_6] [i_6]))));
                        arr_74 [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) var_12))))) ? (arr_58 [i_6] [i_6] [i_6] [i_6] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) arr_45 [i_6] [i_14 + 1] [i_6 - 4] [i_6])))));
                        var_43 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_64 [i_14] [i_0] [i_14 - 2] [i_17] [i_6 - 3])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_64 [i_0] [i_6] [i_14 - 1] [i_21] [i_6 + 1]))));
                        var_44 = ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1))));
                    }
                    arr_75 [i_0] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))));
                    var_45 = ((/* implicit */signed char) max((var_45), (((/* implicit */signed char) arr_54 [i_6] [i_6] [i_6] [i_6] [(unsigned char)12] [i_6]))));
                    var_46 = ((/* implicit */long long int) ((((arr_35 [i_0] [i_6]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_46 [i_14] [i_0]))))) != (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
                }
                for (signed char i_22 = 1; i_22 < 21; i_22 += 1) 
                {
                    var_47 = ((/* implicit */int) min((var_47), ((+(((/* implicit */int) (unsigned char)223))))));
                    var_48 = ((/* implicit */_Bool) ((((/* implicit */int) var_11)) * (((/* implicit */int) arr_67 [i_0] [i_6] [i_14] [i_14 - 2] [i_22 + 1] [i_22]))));
                }
            }
            for (unsigned short i_23 = 3; i_23 < 19; i_23 += 2) 
            {
                var_49 = ((/* implicit */signed char) min((var_49), (((/* implicit */signed char) (-(((/* implicit */int) ((signed char) arr_11 [i_0] [i_6] [i_6] [i_23] [i_23]))))))));
                var_50 = ((/* implicit */unsigned char) ((_Bool) var_12));
                var_51 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_23] [i_23] [i_6] [i_6] [i_0] [i_0])) ? (((/* implicit */int) arr_69 [i_23] [i_23] [i_6] [i_6] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_16 [i_0] [i_0] [i_6] [i_23] [i_23] [i_23]))))) ? (((/* implicit */int) arr_10 [i_23 + 2] [i_6 - 1] [i_6 + 1])) : (((/* implicit */int) arr_54 [i_6] [i_6] [i_6 + 1] [i_6 - 1] [i_6] [i_23]))));
                arr_80 [i_0] [i_6] [i_0] = ((/* implicit */short) (+(((/* implicit */int) arr_29 [i_6] [i_6] [i_23] [i_23]))));
                var_52 = ((/* implicit */long long int) max((var_52), (((/* implicit */long long int) ((((((/* implicit */int) (unsigned char)120)) - (((/* implicit */int) (_Bool)1)))) == (((/* implicit */int) arr_29 [0ULL] [i_6] [i_6] [0ULL])))))));
            }
            var_53 = ((/* implicit */unsigned int) min((var_53), (((/* implicit */unsigned int) ((((/* implicit */int) arr_41 [i_0] [i_6] [i_6 - 4] [i_0])) ^ (((/* implicit */int) arr_41 [i_6] [i_6] [i_6 - 1] [i_0])))))));
            var_54 = ((/* implicit */short) min((var_54), (((/* implicit */short) ((((((/* implicit */_Bool) var_11)) && (arr_22 [i_0] [i_6]))) && ((!(((/* implicit */_Bool) arr_67 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))))));
        }
    }
}
