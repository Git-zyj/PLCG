/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104020
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
    var_17 -= ((/* implicit */_Bool) (+(((/* implicit */int) var_10))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_18 ^= ((/* implicit */unsigned char) max((-6271019204889210449LL), (((/* implicit */long long int) 291384438))));
        var_19 = ((/* implicit */_Bool) min((arr_3 [8ULL] [9ULL]), ((-(arr_0 [i_0])))));
        var_20 = ((/* implicit */long long int) min((arr_1 [i_0]), (arr_1 [i_0])));
        arr_4 [i_0] = ((/* implicit */unsigned int) arr_3 [i_0] [i_0]);
    }
    /* LoopNest 2 */
    for (long long int i_1 = 4; i_1 < 18; i_1 += 1) 
    {
        for (unsigned char i_2 = 1; i_2 < 19; i_2 += 3) 
        {
            {
                var_21 = ((/* implicit */int) min((var_21), (((((/* implicit */_Bool) arr_6 [i_1] [i_2])) ? (((/* implicit */int) (_Bool)1)) : ((~(((((/* implicit */_Bool) 4748075591894464761ULL)) ? (arr_7 [i_2 - 1] [i_1 - 3]) : (((/* implicit */int) (signed char)-112))))))))));
                /* LoopNest 2 */
                for (unsigned char i_3 = 3; i_3 < 20; i_3 += 1) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            var_22 = arr_11 [i_1];
                            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-126)) ? (max(((-(-8861157080747469604LL))), (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)206))) : (2361408776U)))))) : (-4243615649891640618LL))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned int i_5 = 2; i_5 < 20; i_5 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_6 = 0; i_6 < 21; i_6 += 4) 
                    {
                        var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_12 [i_1 - 3] [i_2] [i_5 + 1] [i_6]), (((/* implicit */unsigned int) (unsigned char)61))))) ? (((((/* implicit */_Bool) (unsigned char)178)) ? (arr_12 [i_1] [i_2] [i_5] [i_6]) : (arr_12 [i_1 - 4] [i_1 - 4] [i_5 - 2] [i_6]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_6] [i_2] [i_2] [i_1 + 1])))))))))));
                        var_25 = ((/* implicit */unsigned char) (signed char)19);
                    }
                    var_26 = ((/* implicit */int) max((((/* implicit */unsigned long long int) 2072901118U)), ((+(arr_8 [i_2 + 1] [i_2])))));
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 0; i_7 < 21; i_7 += 3) 
                    {
                        for (unsigned int i_8 = 3; i_8 < 20; i_8 += 4) 
                        {
                            {
                                var_27 += ((/* implicit */int) arr_6 [i_8 - 2] [i_1 - 1]);
                                var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(10456500740024403633ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)234)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)19))) : (4713113232914541684LL)))) : (arr_20 [i_1] [(signed char)2] [i_1] [i_1 + 3])))) ? (((((/* implicit */_Bool) (unsigned char)228)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_1 - 1] [i_1 + 1] [i_5 - 1]))) : (arr_20 [i_2 + 1] [i_2 + 2] [i_2 + 2] [i_2 - 1]))) : ((-(3999294348935881789ULL)))));
                                arr_26 [i_1] [i_7] [i_5] = ((/* implicit */int) (signed char)119);
                            }
                        } 
                    } 
                }
                /* LoopSeq 4 */
                for (unsigned long long int i_9 = 1; i_9 < 17; i_9 += 1) 
                {
                    /* LoopNest 2 */
                    for (long long int i_10 = 0; i_10 < 21; i_10 += 4) 
                    {
                        for (long long int i_11 = 1; i_11 < 18; i_11 += 1) 
                        {
                            {
                                var_29 = ((/* implicit */_Bool) -3191541984284337000LL);
                                var_30 = ((/* implicit */int) arr_20 [i_1 + 3] [i_10] [i_1 + 3] [i_10]);
                                arr_35 [i_1] [i_1 - 1] [i_1 - 1] [i_9 + 1] [i_10] [i_11 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_14 [i_1 - 2] [i_2] [i_1 - 2] [i_10]), (((/* implicit */unsigned int) arr_21 [i_1] [i_2] [i_1]))))) ? (((((/* implicit */_Bool) arr_20 [i_1] [i_2] [i_9] [i_10])) ? (((/* implicit */unsigned long long int) 3804448619U)) : (((((/* implicit */_Bool) arr_23 [i_10] [(signed char)2])) ? (((/* implicit */unsigned long long int) arr_19 [i_1 + 2] [i_2 + 1] [i_10] [i_10])) : (arr_23 [i_1 + 3] [i_2]))))) : (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_27 [i_2 + 1] [i_2 + 1] [i_1])) ? (((/* implicit */int) (unsigned char)233)) : (((/* implicit */int) (signed char)125)))))))));
                            }
                        } 
                    } 
                    var_31 = ((/* implicit */int) -4243615649891640597LL);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_12 = 3; i_12 < 20; i_12 += 2) 
                    {
                        arr_38 [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_28 [i_1 + 3] [(unsigned char)0] [(unsigned char)0])) ? (arr_13 [i_2] [i_2] [i_2] [i_1]) : (((/* implicit */unsigned int) arr_10 [i_9 + 3] [i_9 + 3] [i_9 + 3]))));
                        var_32 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6759078375766909023LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)83))) : (-8861157080747469603LL)));
                        var_33 -= ((/* implicit */unsigned int) arr_21 [i_2 + 1] [i_2 + 1] [i_2 + 1]);
                    }
                    for (long long int i_13 = 1; i_13 < 18; i_13 += 2) 
                    {
                        var_34 = ((/* implicit */int) max((((/* implicit */unsigned long long int) 4243615649891640597LL)), (((((/* implicit */_Bool) (unsigned char)252)) ? (max((((/* implicit */unsigned long long int) 3100415780176814578LL)), (13475875140032227948ULL))) : (((/* implicit */unsigned long long int) 246453755819711556LL))))));
                        arr_43 [i_9 + 3] [i_2 + 1] [i_1] = ((/* implicit */int) min((((/* implicit */unsigned long long int) max((arr_9 [i_1] [i_2] [9ULL]), (((/* implicit */unsigned int) (unsigned char)3))))), ((~(arr_23 [(unsigned char)16] [i_1])))));
                        var_35 *= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)156)), (arr_24 [i_1] [(signed char)2] [(signed char)2] [i_13] [i_13] [i_9 + 1] [i_1])))) ? (((/* implicit */long long int) (~(arr_19 [i_1] [i_1] [i_1] [i_1])))) : (max((3384139495431420567LL), (max((8285640011051109373LL), (9053888500696617851LL)))))));
                        var_36 = ((/* implicit */short) arr_19 [i_1] [16LL] [(_Bool)1] [i_1]);
                    }
                    var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (short)63)), (-2551077498183511023LL)))) ? (((((/* implicit */_Bool) arr_11 [i_1 + 1])) ? (arr_11 [i_1 + 2]) : (arr_11 [i_1 + 2]))) : (min((arr_11 [i_1 - 2]), (arr_11 [i_1 - 3])))));
                }
                for (unsigned int i_14 = 4; i_14 < 19; i_14 += 3) 
                {
                    /* LoopNest 2 */
                    for (long long int i_15 = 1; i_15 < 20; i_15 += 1) 
                    {
                        for (long long int i_16 = 3; i_16 < 19; i_16 += 2) 
                        {
                            {
                                var_38 &= ((/* implicit */unsigned long long int) (-(((arr_45 [3] [i_2 + 1] [i_14 - 3] [i_15 + 1]) ? (((/* implicit */int) arr_45 [i_1 - 1] [i_2 - 1] [i_1 - 1] [i_15])) : (((/* implicit */int) arr_45 [i_1] [i_1] [i_1] [8ULL]))))));
                                arr_53 [i_14] [5] [i_16 - 2] = ((/* implicit */_Bool) 6759078375766909045LL);
                                arr_54 [i_14] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) 3358403029U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)227))) : (5011342853363236495LL)))));
                                var_39 = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_5 [i_2])) ? (((((/* implicit */_Bool) arr_10 [i_1 + 1] [i_1 + 1] [i_14])) ? (arr_27 [i_15] [i_2] [i_2]) : (((/* implicit */unsigned long long int) -6759078375766909002LL)))) : (min((((/* implicit */unsigned long long int) arr_19 [i_1] [i_1] [i_1] [i_1])), (arr_51 [i_14 - 1] [i_14] [i_14 - 1] [i_2 + 2] [i_14] [i_1])))))));
                            }
                        } 
                    } 
                    arr_55 [i_14] [i_2 + 2] [10U] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4243615649891640614LL)) ? (3U) : (2793209992U)))), (max((((/* implicit */unsigned long long int) -8861157080747469604LL)), (arr_36 [14] [i_2] [i_2] [i_2] [i_2] [i_2])))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_1 - 2] [i_2 + 2] [i_1 - 2])) ? (6759078375766909036LL) : (((/* implicit */long long int) arr_49 [i_1] [i_1] [i_14] [i_14] [i_14 - 3]))))) ? (((/* implicit */int) arr_17 [i_1 + 2] [i_1 - 3] [i_1 + 2] [i_14])) : (((((/* implicit */_Bool) arr_19 [i_14] [i_14] [i_14 - 1] [i_2])) ? (((/* implicit */int) arr_32 [i_2 + 2] [i_1])) : (((/* implicit */int) (short)32765))))))) : (arr_16 [i_1] [i_2] [i_14 - 2] [i_14] [i_14] [i_14])));
                    var_40 *= ((/* implicit */unsigned long long int) arr_44 [i_1]);
                }
                /* vectorizable */
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    arr_59 [i_1] [i_1] [i_17] [i_2] = ((/* implicit */unsigned long long int) arr_52 [i_2] [10] [10] [i_2]);
                    arr_60 [10U] [10U] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967292U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_1] [i_17] [i_1] [i_1 - 2] [i_1 + 2] [i_17]))) : (962818945U)));
                    arr_61 [i_1] [i_1 + 2] [(unsigned char)18] [i_1 + 2] = ((/* implicit */_Bool) arr_13 [i_1] [i_1 - 2] [i_1 - 2] [i_1 - 4]);
                    /* LoopSeq 2 */
                    for (short i_18 = 2; i_18 < 18; i_18 += 3) 
                    {
                        var_41 = ((/* implicit */unsigned char) arr_20 [i_1] [i_1] [i_17] [i_1]);
                        var_42 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_39 [(unsigned char)11] [i_1 - 2] [i_2 + 2] [i_2] [i_18 - 1])) ? (arr_39 [3LL] [i_1 - 2] [i_2 + 2] [i_18 - 2] [i_18 - 1]) : (arr_39 [i_1 + 2] [i_1 - 2] [i_2 + 2] [i_18] [i_18 - 1])));
                    }
                    for (long long int i_19 = 3; i_19 < 18; i_19 += 3) 
                    {
                        var_43 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_41 [i_1] [i_1] [i_2 - 1])) ? (arr_41 [i_1] [14LL] [i_2 + 2]) : (arr_41 [4ULL] [i_2] [i_2 + 2])));
                        var_44 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_46 [i_19] [i_19] [i_19] [i_1 - 4])) ? (-9053888500696617858LL) : (((/* implicit */long long int) ((/* implicit */int) arr_46 [i_19] [i_19] [i_19] [i_1 - 4])))));
                        arr_66 [i_19] [i_2] [i_2] [i_17] [i_19 + 2] = ((/* implicit */short) -4243615649891640586LL);
                        arr_67 [i_19] [i_19] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 8331541149926119009ULL)) ? (((/* implicit */long long int) arr_10 [i_2 - 1] [i_2] [i_1 - 3])) : (((((/* implicit */_Bool) -9053888500696617852LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)60))) : (4243615649891640602LL)))));
                    }
                    arr_68 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (unsigned char)233);
                }
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    /* LoopNest 2 */
                    for (short i_21 = 3; i_21 < 19; i_21 += 1) 
                    {
                        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                        {
                            {
                                var_45 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_47 [18LL] [i_21 - 1] [18LL] [(_Bool)0])) ? (arr_47 [i_1] [i_21 + 2] [i_20] [18ULL]) : (((/* implicit */unsigned long long int) arr_52 [i_1] [i_21 + 2] [0LL] [i_2 + 2])))))));
                                var_46 *= ((/* implicit */unsigned char) arr_21 [i_2 + 2] [2] [i_22]);
                            }
                        } 
                    } 
                    var_47 = ((/* implicit */unsigned int) (~(arr_64 [i_1] [i_1 - 1] [i_20])));
                    var_48 -= ((/* implicit */unsigned int) (-(max((min((arr_11 [i_1]), (((/* implicit */long long int) 3123481899U)))), ((~(5325707757454515338LL)))))));
                }
            }
        } 
    } 
    var_49 = ((/* implicit */unsigned long long int) var_6);
}
