/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182379
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
    var_13 ^= var_9;
    var_14 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-58))))) : (max((((/* implicit */unsigned long long int) var_10)), (var_3))))));
    /* LoopSeq 2 */
    for (short i_0 = 3; i_0 < 18; i_0 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    var_15 = ((unsigned long long int) (_Bool)0);
                    var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+((-(9ULL)))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_1])) ? (((/* implicit */int) (unsigned short)2322)) : (((/* implicit */int) var_4)))) < (((/* implicit */int) arr_0 [i_0 - 2]))))) : (((/* implicit */int) ((((long long int) arr_5 [(signed char)10] [i_1] [i_0])) != (var_9)))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 19; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 18; i_4 += 4) 
                        {
                            {
                                arr_15 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_1);
                                var_17 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((6249265639523400404ULL) - (12197478434186151211ULL))), (6249265639523400408ULL)))) ? (((((/* implicit */int) var_10)) + (((/* implicit */int) arr_8 [i_2])))) : (((/* implicit */int) arr_0 [i_3 + 1]))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 3 */
        for (short i_5 = 0; i_5 < 20; i_5 += 1) 
        {
            var_18 = ((/* implicit */unsigned long long int) min((((long long int) var_2)), ((~(var_7)))));
            arr_19 [i_0] [i_0] [i_0] = ((unsigned short) var_3);
            arr_20 [i_0] [i_0] = ((/* implicit */unsigned int) max((min(((~(var_9))), (((/* implicit */long long int) min((((/* implicit */int) var_1)), (409634970)))))), (((/* implicit */long long int) (!(var_0))))));
        }
        for (short i_6 = 0; i_6 < 20; i_6 += 3) /* same iter space */
        {
            var_19 *= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((_Bool) arr_4 [i_0 + 1] [4ULL]))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_1 [i_0] [(unsigned short)18])) : (((/* implicit */int) (signed char)(-127 - 1)))))))) | (max((((((/* implicit */_Bool) arr_2 [6ULL] [6ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (var_6))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_10)))))))));
            arr_23 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((unsigned long long int) arr_11 [i_0 - 3] [i_6] [i_6] [(_Bool)0])) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)33772), (((/* implicit */unsigned short) (_Bool)1))))))))) ? (arr_12 [i_0]) : (((/* implicit */unsigned long long int) ((unsigned int) var_9)))));
            var_20 = 6249265639523400414ULL;
            arr_24 [i_0] [i_0 - 3] [i_6] = ((/* implicit */signed char) ((9738336970223138233ULL) / (((/* implicit */unsigned long long int) ((unsigned int) (~(arr_11 [i_0] [8LL] [i_0] [i_0])))))));
        }
        for (short i_7 = 0; i_7 < 20; i_7 += 3) /* same iter space */
        {
            var_21 *= ((/* implicit */unsigned int) max((((/* implicit */short) (signed char)-15)), ((short)-27761)));
            var_22 += ((/* implicit */unsigned long long int) 2147483647);
            /* LoopNest 2 */
            for (unsigned short i_8 = 0; i_8 < 20; i_8 += 3) 
            {
                for (short i_9 = 0; i_9 < 20; i_9 += 4) 
                {
                    {
                        arr_34 [i_0 + 2] [i_7] [i_0] [i_9] [i_0 + 2] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) 819221366)) ? (217521706) : (((/* implicit */int) (short)32767))))));
                        var_23 = ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0]))) + (arr_21 [i_0]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((min((4047787619U), (((/* implicit */unsigned int) (signed char)85)))) > (min((((/* implicit */unsigned int) arr_8 [i_0])), (3487646067U))))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_10 = 0; i_10 < 20; i_10 += 1) 
                        {
                            var_24 += ((/* implicit */signed char) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_31 [i_0 - 3] [i_0] [i_0 + 2] [i_0 - 3]))) / (var_7))));
                            arr_37 [i_7] [i_0] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (-(var_7)))) ? (((/* implicit */int) ((short) var_9))) : (((/* implicit */int) var_4))))));
                            var_25 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_0 - 2])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((signed char) var_8)))));
                        }
                        arr_38 [i_0] [i_0] [i_0] [i_9] [i_8] = ((/* implicit */unsigned int) ((((unsigned long long int) (short)8666)) + (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)33772)))))));
                    }
                } 
            } 
        }
        arr_39 [i_0] = ((/* implicit */signed char) ((((arr_13 [i_0 - 2] [i_0] [i_0 - 3] [i_0 - 2] [i_0] [i_0 - 3] [i_0 - 3]) < (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-69))))) ? (min((arr_13 [i_0 + 1] [(short)13] [i_0 - 1] [(signed char)0] [i_0 + 1] [i_0 + 1] [i_0]), (((/* implicit */unsigned int) (short)8666)))) : (max((arr_13 [i_0] [(short)9] [(short)9] [i_0] [i_0 - 3] [i_0 - 1] [i_0]), (arr_13 [i_0] [i_0] [i_0 - 1] [i_0 - 1] [(signed char)6] [4ULL] [i_0])))));
        /* LoopSeq 1 */
        for (int i_11 = 2; i_11 < 18; i_11 += 1) 
        {
            arr_42 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (arr_13 [i_0 + 2] [i_0] [i_0] [i_0] [i_0] [i_0] [1ULL]) : (((/* implicit */unsigned int) var_12))))) == (max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (signed char)-116)))))));
            var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-116))))) ^ (((((/* implicit */unsigned long long int) 9223372036854775807LL)) + (6249265639523400404ULL))))))));
        }
    }
    for (short i_12 = 3; i_12 < 18; i_12 += 3) /* same iter space */
    {
        var_27 = arr_6 [i_12] [i_12 - 2] [i_12];
        /* LoopNest 2 */
        for (short i_13 = 0; i_13 < 20; i_13 += 3) 
        {
            for (int i_14 = 0; i_14 < 20; i_14 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_15 = 0; i_15 < 20; i_15 += 1) 
                    {
                        for (unsigned char i_16 = 0; i_16 < 20; i_16 += 1) 
                        {
                            {
                                arr_55 [i_12] [i_12] = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)0))))) - (2719765326U)))), (((var_2) >> (((((/* implicit */int) var_11)) + (24351)))))));
                                arr_56 [(unsigned short)8] [i_16] [(unsigned short)8] [i_12] [i_14] [i_13] [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((long long int) arr_30 [16ULL] [i_15])) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-27761)) ? (3433300622U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)8666))))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) var_7))) ? (((((/* implicit */_Bool) var_11)) ? (arr_44 [i_12] [i_12]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_43 [i_12] [i_12])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (-3935226453452294138LL)))))))));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) (-(((((/* implicit */_Bool) var_1)) ? (12737256299364949616ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_51 [16U] [i_12] [16U]))))))))));
                    /* LoopNest 2 */
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        for (unsigned int i_18 = 0; i_18 < 20; i_18 += 4) 
                        {
                            {
                                var_29 = ((/* implicit */unsigned short) var_6);
                                var_30 *= ((/* implicit */unsigned long long int) arr_29 [i_18] [i_13] [i_18]);
                                var_31 ^= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (~(max((var_7), (((/* implicit */long long int) (short)8669))))))) | (18446744073709551615ULL)));
                                arr_62 [i_12] [i_13] [i_14] [(unsigned char)4] = ((/* implicit */long long int) ((unsigned short) var_5));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        arr_65 [i_12] [i_14] [i_12 - 2] [i_12 - 2] [i_12] = ((/* implicit */unsigned int) ((unsigned long long int) min((((/* implicit */unsigned long long int) ((unsigned int) var_0))), (arr_21 [i_12]))));
                        var_32 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_26 [i_12 + 1] [4ULL] [i_12 - 1]))))) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) arr_49 [i_12] [i_12] [i_14] [i_19])))))) ? (((unsigned long long int) (unsigned short)1)) : (((/* implicit */unsigned long long int) min((arr_60 [i_12] [i_12]), (var_12))))))));
                        arr_66 [i_14] [i_12] [i_12] = ((/* implicit */long long int) (signed char)127);
                    }
                    for (long long int i_20 = 0; i_20 < 20; i_20 += 3) 
                    {
                        var_33 = ((((/* implicit */_Bool) ((arr_48 [i_12 - 2] [i_12 - 1] [i_12 - 3]) & (arr_48 [i_12 + 2] [i_12 + 1] [i_12 - 2])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (short)13982))))) : (14081486303778561830ULL));
                        arr_69 [i_20] [12ULL] [12ULL] [i_12] |= ((/* implicit */long long int) ((((unsigned long long int) arr_3 [i_12 - 2] [i_12] [i_12 - 3])) == (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_68 [i_13] [i_12 + 1]))))))));
                        arr_70 [i_12] [i_12] [i_12] [i_20] = ((/* implicit */signed char) (!((_Bool)1)));
                        var_34 = ((/* implicit */unsigned char) ((int) var_0));
                        var_35 = ((/* implicit */long long int) arr_7 [i_12 - 3] [i_12 + 1] [i_12 + 2]);
                    }
                    for (unsigned int i_21 = 0; i_21 < 20; i_21 += 1) 
                    {
                        var_36 ^= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */int) (signed char)122)) << (0ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_6)))) : (min((var_6), (((/* implicit */unsigned long long int) var_9)))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((arr_41 [i_13] [i_12]) | (var_2)))) >= (arr_21 [(signed char)12])))))));
                        var_37 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((_Bool) arr_48 [i_12 - 1] [i_13] [i_13]))))) / (((/* implicit */int) var_4))));
                        var_38 = ((/* implicit */short) arr_12 [i_12]);
                        var_39 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) min((var_12), (((/* implicit */int) arr_40 [i_12 - 3])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_35 [i_21] [i_12] [i_12 - 2] [i_14] [i_13] [i_12] [i_12 - 2]) > (var_3))))) : ((+(0U)))));
                    }
                    for (_Bool i_22 = 0; i_22 < 0; i_22 += 1) 
                    {
                        var_40 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) arr_27 [i_12] [(unsigned short)12] [i_22])))))) : ((-(((/* implicit */int) (short)27767))))));
                        var_41 = ((/* implicit */_Bool) ((var_6) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_4))))) == (((unsigned long long int) arr_32 [i_12]))))))));
                        var_42 = ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) arr_28 [i_12] [i_12 - 2] [i_12 - 1] [i_13]))))));
                        var_43 &= ((/* implicit */long long int) (+(2147483634)));
                        arr_75 [(signed char)16] [(signed char)16] |= ((/* implicit */short) var_12);
                    }
                }
            } 
        } 
    }
    var_44 = ((/* implicit */_Bool) min((((int) (!(((/* implicit */_Bool) var_10))))), (((/* implicit */int) var_10))));
    var_45 &= ((/* implicit */unsigned int) var_12);
}
