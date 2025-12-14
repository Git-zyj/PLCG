/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174522
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 4 */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                for (unsigned int i_3 = 0; i_3 < 12; i_3 += 3) 
                {
                    {
                        var_16 = ((/* implicit */_Bool) max((17206407457374073321ULL), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)28509)))))));
                        var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) (unsigned short)16383))));
                    }
                } 
            } 
            var_18 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_13)), (max((var_14), (min((var_14), (((/* implicit */unsigned long long int) arr_2 [i_1] [i_0]))))))));
            var_19 = ((/* implicit */unsigned short) (_Bool)0);
        }
        for (unsigned int i_4 = 0; i_4 < 12; i_4 += 2) 
        {
            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_10)), (((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))) ^ (-6002426620560817566LL)))))) ? (((/* implicit */int) ((1240336616335478300ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((var_5), (4309711279426233231LL)))))))));
            /* LoopNest 3 */
            for (long long int i_5 = 0; i_5 < 12; i_5 += 1) 
            {
                for (unsigned short i_6 = 0; i_6 < 12; i_6 += 3) 
                {
                    for (long long int i_7 = 0; i_7 < 12; i_7 += 2) 
                    {
                        {
                            arr_20 [i_0] [i_4] [i_5] [i_6] [i_6] = (!(((/* implicit */_Bool) (unsigned short)56584)));
                            var_21 = ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)28509))))) ^ (((((/* implicit */_Bool) var_8)) ? (arr_19 [i_0] [i_0] [i_4] [i_5] [i_6] [i_7] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_5] [i_6]))))));
                        }
                    } 
                } 
            } 
            var_22 = ((/* implicit */long long int) arr_14 [i_0] [i_0] [i_0]);
            arr_21 [i_4] [i_0] = ((/* implicit */signed char) (+(min((((/* implicit */unsigned int) max((arr_11 [i_4]), (arr_17 [i_4] [i_4])))), (arr_15 [i_0] [i_0] [i_4] [i_4] [i_4])))));
            /* LoopSeq 2 */
            for (unsigned short i_8 = 0; i_8 < 12; i_8 += 2) 
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_9 = 0; i_9 < 12; i_9 += 4) /* same iter space */
                {
                    var_23 = ((/* implicit */_Bool) ((var_3) / (var_3)));
                    var_24 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -4309711279426233220LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_7)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 6002426620560817565LL)) ? (var_2) : (((/* implicit */unsigned long long int) var_8)))))));
                }
                /* vectorizable */
                for (unsigned int i_10 = 0; i_10 < 12; i_10 += 4) /* same iter space */
                {
                    var_25 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1240336616335478295ULL)) ? (arr_5 [0LL] [i_4] [i_4] [i_10]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)28509)))))) ? (((/* implicit */unsigned long long int) ((var_3) ^ (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_4] [i_10])))))) : (arr_25 [i_0] [i_4] [i_8] [i_4] [i_10] [i_4])));
                    arr_30 [i_0] [i_4] [i_8] [i_4] [i_8] [(_Bool)1] = ((/* implicit */_Bool) (~(12759102127622898232ULL)));
                    arr_31 [i_0] [i_0] [i_4] [i_8] [i_4] &= (signed char)(-127 - 1);
                }
                /* LoopNest 2 */
                for (unsigned short i_11 = 0; i_11 < 12; i_11 += 1) 
                {
                    for (unsigned int i_12 = 0; i_12 < 12; i_12 += 1) 
                    {
                        {
                            var_26 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) 6002426620560817565LL)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) 4309711279426233231LL))) ? ((-(((/* implicit */int) (signed char)-119)))) : (((/* implicit */int) min(((unsigned short)56584), (((/* implicit */unsigned short) arr_0 [i_0] [i_0])))))))) : ((~((+(-6002426620560817566LL)))))));
                            var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-24)) ? (17206407457374073321ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)58)))));
                        }
                    } 
                } 
            }
            for (signed char i_13 = 0; i_13 < 12; i_13 += 2) 
            {
                arr_40 [i_13] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) max(((~(((/* implicit */int) (signed char)38)))), (((((/* implicit */int) var_1)) << (((((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_4] [i_13])) - (8419)))))))), (arr_36 [i_0] [5U] [i_13])));
                /* LoopNest 2 */
                for (long long int i_14 = 0; i_14 < 12; i_14 += 3) 
                {
                    for (long long int i_15 = 0; i_15 < 12; i_15 += 2) 
                    {
                        {
                            var_28 = ((/* implicit */long long int) var_6);
                            arr_46 [i_0] [i_4] [i_13] [i_14] [(signed char)4] [i_14] = ((/* implicit */unsigned int) (-(max((((/* implicit */int) arr_37 [i_4] [i_0] [i_4] [i_4] [i_0])), (((((/* implicit */int) (signed char)-49)) ^ (((/* implicit */int) arr_18 [i_14]))))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_16 = 0; i_16 < 12; i_16 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_17 = 0; i_17 < 12; i_17 += 2) 
                    {
                        arr_53 [i_0] [i_4] [i_13] [(signed char)8] [i_17] = ((/* implicit */_Bool) 281709756U);
                        var_29 = ((/* implicit */long long int) (((-(5742970325472683967LL))) < (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_19 [8LL] [8LL] [i_4] [i_16] [i_4] [4LL] [i_0]))))));
                        var_30 += ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_19 [2LL] [i_16] [i_17] [i_13] [i_17] [i_4] [i_0])))) & (3893100284U));
                        var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) 4U)) || (((/* implicit */_Bool) arr_36 [i_17] [i_13] [i_0]))));
                    }
                    for (unsigned int i_18 = 0; i_18 < 12; i_18 += 1) 
                    {
                        var_32 = ((/* implicit */_Bool) (unsigned short)56584);
                        var_33 = ((/* implicit */long long int) var_13);
                    }
                    arr_57 [i_16] [i_13] [i_4] [i_0] &= ((/* implicit */signed char) ((arr_19 [i_16] [i_16] [i_13] [i_16] [i_13] [10U] [i_0]) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_44 [i_4] [i_0])))));
                }
                var_34 = ((/* implicit */unsigned short) var_13);
            }
        }
        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_20 = 0; i_20 < 12; i_20 += 3) 
            {
                for (unsigned int i_21 = 0; i_21 < 12; i_21 += 2) 
                {
                    {
                        var_35 -= ((long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_62 [i_21] [i_20] [i_20] [i_0] [i_0])) : (((/* implicit */int) var_12))))) != (min((7627814295973359487ULL), (((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_20] [i_21] [i_20] [i_21]))))));
                        var_36 = ((/* implicit */signed char) arr_48 [i_0] [(signed char)4] [i_20] [(signed char)10] [i_21]);
                    }
                } 
            } 
            var_37 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) ((signed char) var_1)))) || (((/* implicit */_Bool) max(((signed char)-42), (((/* implicit */signed char) (!(((/* implicit */_Bool) 4309711279426233231LL))))))))));
        }
        for (long long int i_22 = 0; i_22 < 12; i_22 += 3) 
        {
            var_38 = ((/* implicit */long long int) ((unsigned short) arr_54 [i_0] [i_0] [i_0] [i_0] [i_0]));
            /* LoopSeq 2 */
            for (unsigned long long int i_23 = 0; i_23 < 12; i_23 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_24 = 0; i_24 < 12; i_24 += 3) 
                {
                    for (signed char i_25 = 0; i_25 < 12; i_25 += 4) 
                    {
                        {
                            arr_74 [i_0] [6U] [i_23] [i_0] [i_0] |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 16777208U))));
                            arr_75 [i_22] [i_22] [i_22] [i_22] = ((/* implicit */unsigned int) (unsigned short)8951);
                            var_39 = ((/* implicit */signed char) var_7);
                            var_40 = ((/* implicit */signed char) arr_50 [i_0] [i_22] [i_23] [i_23] [i_24] [i_25]);
                        }
                    } 
                } 
                arr_76 [i_22] = ((/* implicit */unsigned long long int) var_1);
            }
            /* vectorizable */
            for (unsigned short i_26 = 0; i_26 < 12; i_26 += 3) 
            {
                var_41 = ((/* implicit */_Bool) (unsigned short)37008);
                var_42 += ((unsigned int) var_3);
                arr_81 [i_0] [i_22] [i_26] [i_26] &= ((/* implicit */_Bool) (+(((/* implicit */int) arr_63 [i_0] [i_26]))));
            }
            var_43 += ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)29))));
        }
        /* LoopNest 2 */
        for (long long int i_27 = 0; i_27 < 12; i_27 += 3) 
        {
            for (signed char i_28 = 0; i_28 < 12; i_28 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_29 = 0; i_29 < 12; i_29 += 2) 
                    {
                        for (signed char i_30 = 0; i_30 < 12; i_30 += 2) 
                        {
                            {
                                var_44 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_32 [i_0] [i_27] [i_28] [i_28]), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) 16777208U)) != (arr_64 [i_28]))))))) ? (arr_50 [(signed char)10] [i_28] [i_28] [i_28] [i_27] [i_0]) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_78 [i_0] [i_28] [i_30])))))));
                                arr_91 [i_27] [i_27] = ((/* implicit */unsigned short) max((((/* implicit */int) min((((((/* implicit */int) (signed char)119)) < (((/* implicit */int) (_Bool)1)))), (arr_28 [i_0] [i_29] [i_0] [i_0])))), ((+(((((/* implicit */int) arr_14 [i_27] [i_27] [i_30])) >> (((((/* implicit */int) (unsigned short)28509)) - (28493)))))))));
                            }
                        } 
                    } 
                    var_45 = ((/* implicit */unsigned long long int) min((var_45), (((/* implicit */unsigned long long int) arr_78 [i_0] [i_27] [i_28]))));
                    var_46 &= ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) (unsigned short)18759)))));
                }
            } 
        } 
    }
    for (unsigned long long int i_31 = 0; i_31 < 12; i_31 += 2) /* same iter space */
    {
        arr_96 [(signed char)3] = ((/* implicit */long long int) min((((((/* implicit */_Bool) max((arr_48 [i_31] [i_31] [i_31] [i_31] [i_31]), (((/* implicit */unsigned short) var_9))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */int) (signed char)21)) : (((/* implicit */int) var_9))))) : (((((/* implicit */_Bool) arr_85 [i_31])) ? (((/* implicit */unsigned long long int) var_7)) : (1240336616335478305ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_15)), (7434494520113715713ULL)))) ? (922565676796998862LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_31])))))))))));
        /* LoopSeq 1 */
        for (signed char i_32 = 0; i_32 < 12; i_32 += 2) 
        {
            var_47 = ((/* implicit */unsigned long long int) arr_13 [i_31] [(signed char)5] [i_32] [i_31]);
            var_48 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-2)) ^ (((/* implicit */int) arr_77 [i_32])))) << (((((((/* implicit */_Bool) (unsigned short)56584)) ? (((/* implicit */int) (unsigned short)28509)) : (((/* implicit */int) var_12)))) - (28500))))))));
        }
        var_49 = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)8951)) >= (((/* implicit */int) (unsigned short)30734))))), (min((1240336616335478299ULL), (((/* implicit */unsigned long long int) -4309711279426233232LL)))))) | (max((arr_49 [i_31] [i_31] [5ULL]), (((/* implicit */unsigned long long int) ((_Bool) var_13)))))));
    }
    var_50 |= ((/* implicit */unsigned short) var_4);
}
