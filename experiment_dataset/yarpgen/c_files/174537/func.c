/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174537
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
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)120)) ? (((/* implicit */int) (unsigned char)146)) : (((/* implicit */int) var_6))))) != (var_5)));
        var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((arr_0 [i_0]) <= (arr_0 [i_0]))))));
        arr_4 [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)134))));
        arr_5 [i_0] = (~(((/* implicit */int) (unsigned char)117)));
    }
    for (unsigned long long int i_1 = 2; i_1 < 23; i_1 += 4) 
    {
        var_20 |= ((/* implicit */short) max((((((var_17) << (((((/* implicit */int) arr_7 [i_1] [i_1])) - (233))))) - (((/* implicit */unsigned long long int) arr_6 [i_1 - 2])))), (((/* implicit */unsigned long long int) arr_6 [8]))));
        arr_8 [i_1] [4LL] = ((unsigned int) var_17);
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_2 = 2; i_2 < 23; i_2 += 2) 
        {
            var_21 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned char)134)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)136)) || (((/* implicit */_Bool) (signed char)74))))) : (var_2)));
            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) 3758096384LL))));
            /* LoopSeq 3 */
            for (signed char i_3 = 2; i_3 < 23; i_3 += 2) 
            {
                arr_13 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [i_3 - 2] [i_2 - 2] [i_3] [i_1 + 1])) ? (arr_11 [i_3 - 2] [i_2 - 2] [23ULL] [i_1 + 1]) : (arr_11 [i_3 - 2] [i_2 - 2] [(unsigned char)1] [i_1 + 1])));
                /* LoopSeq 3 */
                for (int i_4 = 3; i_4 < 22; i_4 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_5 = 0; i_5 < 24; i_5 += 4) 
                    {
                        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_9)) ? (var_2) : (((/* implicit */int) arr_7 [i_1] [10LL])))) : (((/* implicit */int) var_13))));
                        var_24 = ((/* implicit */unsigned long long int) arr_12 [i_1] [1ULL] [1ULL]);
                    }
                    for (short i_6 = 1; i_6 < 23; i_6 += 3) 
                    {
                        var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)255)) ? (-533804929089070670LL) : (((/* implicit */long long int) var_8)))))));
                        arr_23 [i_1 - 2] [i_2] [i_6] [i_1 - 2] [i_4] [i_1] [i_4] = ((/* implicit */signed char) arr_14 [i_6 + 1] [i_2 + 1] [i_1 - 2] [i_1]);
                    }
                    var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_12))) <= (arr_21 [i_4 + 1] [0ULL] [i_4] [i_4] [i_4])));
                    var_27 = ((/* implicit */long long int) var_13);
                }
                for (unsigned int i_7 = 0; i_7 < 24; i_7 += 1) 
                {
                    arr_26 [i_7] [i_2] [i_2] [i_7] = ((/* implicit */signed char) var_13);
                    var_28 = ((/* implicit */unsigned short) var_7);
                    /* LoopSeq 3 */
                    for (unsigned char i_8 = 2; i_8 < 22; i_8 += 1) 
                    {
                        var_29 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((arr_19 [(unsigned short)13] [i_2 + 1] [7] [1]) << (((3758096384LL) - (3758096384LL))))) : (((((/* implicit */int) (unsigned char)80)) / (((/* implicit */int) (unsigned char)197))))));
                        var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) ((arr_10 [i_3 - 1] [i_2 - 1]) ^ (arr_10 [i_3 + 1] [i_2 - 2]))))));
                    }
                    for (unsigned long long int i_9 = 4; i_9 < 23; i_9 += 2) /* same iter space */
                    {
                        var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_0)))))));
                        var_32 = ((/* implicit */signed char) var_10);
                        var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) (-((((_Bool)1) ? (var_1) : (((/* implicit */long long int) var_10)))))))));
                        var_34 -= ((/* implicit */unsigned long long int) ((arr_18 [i_9] [i_7] [4ULL] [i_1] [6ULL] [i_2] [i_1]) << (((arr_18 [i_1] [i_1] [18LL] [i_3] [16LL] [(unsigned char)1] [i_9 - 2]) - (7158914656946463276LL)))));
                    }
                    for (unsigned long long int i_10 = 4; i_10 < 23; i_10 += 2) /* same iter space */
                    {
                        arr_34 [i_1] [i_2] [i_1] [i_7] = ((/* implicit */unsigned int) (unsigned char)46);
                        var_35 = ((/* implicit */unsigned char) var_16);
                        arr_35 [i_1] [i_2] [i_2] [i_7] [i_7] [i_7] = ((/* implicit */_Bool) (-2147483647 - 1));
                        arr_36 [(unsigned char)14] [i_2] [i_2] [i_7] [i_10 - 3] [(unsigned short)9] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(var_0)))) ? (((((/* implicit */_Bool) arr_27 [(unsigned char)2])) ? (1098672311834011266ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)1))))) : (((/* implicit */unsigned long long int) (-(arr_9 [(signed char)8] [i_7]))))));
                    }
                    var_36 = ((/* implicit */unsigned int) min((var_36), (4189426409U)));
                    /* LoopSeq 2 */
                    for (long long int i_11 = 2; i_11 < 22; i_11 += 3) /* same iter space */
                    {
                        arr_39 [i_1] [(_Bool)1] [10ULL] [i_7] [(_Bool)1] [i_3] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_1] [i_1] [i_2] [i_3] [7LL] [13ULL] [i_11])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) 4294967279U)))))));
                        var_37 = ((/* implicit */signed char) (unsigned char)164);
                        var_38 = ((/* implicit */unsigned char) max((var_38), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)72)) ? (arr_22 [i_1 - 2] [i_2 - 1] [i_2 - 1] [i_3 + 1]) : (arr_22 [i_1 - 2] [i_2 - 1] [i_3] [i_3 + 1]))))));
                    }
                    for (long long int i_12 = 2; i_12 < 22; i_12 += 3) /* same iter space */
                    {
                        var_39 = ((unsigned short) ((int) var_17));
                        var_40 = ((/* implicit */long long int) max((var_40), (((/* implicit */long long int) (+(((/* implicit */int) var_3)))))));
                        var_41 = ((/* implicit */_Bool) arr_31 [i_1] [i_7] [i_7] [22ULL] [i_12 - 1]);
                    }
                }
                for (unsigned char i_13 = 0; i_13 < 24; i_13 += 2) 
                {
                    var_42 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_1] [i_3 - 2] [2ULL])) ? ((-(((/* implicit */int) (unsigned char)150)))) : (((/* implicit */int) arr_24 [(signed char)18] [i_3] [i_3] [i_13] [i_3] [i_3]))));
                    /* LoopSeq 2 */
                    for (int i_14 = 0; i_14 < 24; i_14 += 3) 
                    {
                        var_43 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 29360128ULL)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_17) : (((/* implicit */unsigned long long int) 1047552U)))))));
                        arr_47 [i_1] [i_2] [i_14] [i_2] [18ULL] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-29831)) && (((/* implicit */_Bool) 24576U))));
                        var_44 = ((/* implicit */_Bool) min((var_44), (((/* implicit */_Bool) (~(arr_37 [13ULL] [13ULL] [i_2] [i_3 + 1] [i_13] [(short)1] [i_13]))))));
                    }
                    for (unsigned short i_15 = 2; i_15 < 20; i_15 += 3) 
                    {
                        var_45 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_20 [i_15 + 3] [6LL] [i_15 + 1] [i_3 + 1] [i_1] [(unsigned char)4])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -3758096384LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)255))))) : (arr_30 [i_1] [i_3 + 1] [i_3 + 1])));
                        arr_52 [i_15] [i_15] [(short)1] [i_13] [0U] [i_2] [6U] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (256941371) : (var_4)));
                        var_46 |= ((/* implicit */_Bool) var_14);
                        var_47 = ((/* implicit */unsigned char) arr_22 [i_2 - 1] [i_3 - 2] [i_13] [i_15 - 1]);
                        var_48 = ((/* implicit */unsigned int) min((var_48), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_30 [i_13] [i_13] [i_15 + 1])))))));
                    }
                    var_49 = ((/* implicit */_Bool) min((var_49), (((9052322507047419815ULL) <= (((/* implicit */unsigned long long int) -3758096384LL))))));
                    var_50 ^= ((arr_51 [i_1 + 1] [i_1] [i_2 - 1] [i_2 - 1] [i_1]) ? (4294942720U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_51 [i_1 - 2] [20LL] [i_2 + 1] [0LL] [i_2]))));
                    arr_53 [23] [2] [(unsigned char)6] [i_13] |= ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_51 [(unsigned char)15] [23] [i_3] [23] [i_13]))) == (2108547523U))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_51 [i_1 - 1] [i_1 - 1] [i_2] [i_3 - 2] [i_13]))) : (var_10))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-20301))))))));
                }
            }
            for (int i_16 = 0; i_16 < 24; i_16 += 1) /* same iter space */
            {
                var_51 = ((/* implicit */short) ((_Bool) ((unsigned short) 4611685468671574016ULL)));
                var_52 = ((/* implicit */unsigned long long int) ((long long int) arr_9 [i_1 - 2] [i_1 - 2]));
                var_53 = (~(2108547523U));
                arr_56 [i_1] [i_1] [i_1] [i_16] = ((var_0) << (((arr_43 [(_Bool)1]) - (14958867448439277806ULL))));
            }
            for (int i_17 = 0; i_17 < 24; i_17 += 1) /* same iter space */
            {
                var_54 = ((((/* implicit */_Bool) arr_11 [i_1] [18ULL] [i_2 - 2] [i_1 - 2])) ? (((/* implicit */long long int) var_8)) : (arr_33 [i_1] [(short)6] [i_2 - 2] [i_1 + 1] [i_17] [(unsigned short)6]));
                arr_59 [i_2 - 2] [i_17] = ((((/* implicit */_Bool) 4189426391U)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_44 [i_1] [i_2] [i_1] [0U])) < (3102249245483522161ULL))))) : (((((/* implicit */_Bool) arr_33 [(unsigned char)9] [i_1] [(unsigned short)18] [i_1] [i_2] [i_17])) ? (0U) : (var_11))));
            }
        }
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
        {
            var_55 = ((/* implicit */unsigned char) max((var_55), (((/* implicit */unsigned char) (+(((/* implicit */int) min((arr_54 [i_1] [i_1 - 1] [(unsigned char)8] [i_1 - 2]), (arr_54 [3U] [i_1 - 1] [i_1] [i_1 - 2])))))))));
            arr_63 [i_18] = ((/* implicit */unsigned int) ((unsigned long long int) (unsigned char)228));
            var_56 += ((/* implicit */long long int) var_13);
            arr_64 [i_1] [i_1] [i_18] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [(_Bool)1] [i_18] [6] [i_1])) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (arr_32 [i_1] [i_18] [i_1 + 1] [(unsigned char)3] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_14))))) : (((/* implicit */long long int) (-(var_8))))))) ? (var_1) : (((/* implicit */long long int) (-((+(-2108907191))))))));
        }
    }
    for (long long int i_19 = 0; i_19 < 23; i_19 += 2) 
    {
        var_57 = ((((/* implicit */_Bool) var_13)) ? (((((var_9) >= (((/* implicit */int) arr_27 [i_19])))) ? (min((((/* implicit */unsigned long long int) arr_25 [i_19] [i_19] [i_19] [i_19])), (3102249245483522161ULL))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_51 [(unsigned char)12] [(unsigned char)12] [8U] [i_19] [7]))))))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_19] [i_19] [22] [22])) ? (((/* implicit */int) arr_24 [i_19] [i_19] [i_19] [i_19] [(_Bool)1] [i_19])) : (((/* implicit */int) (_Bool)1))))) ^ (min((((/* implicit */unsigned long long int) arr_21 [i_19] [i_19] [i_19] [i_19] [i_19])), (201326592ULL))))));
        var_58 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [1] [4ULL])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (arr_16 [i_19]))) : (((/* implicit */unsigned long long int) arr_48 [i_19] [9ULL] [9LL] [i_19] [i_19]))));
    }
    var_59 -= ((/* implicit */unsigned char) max((min((((/* implicit */unsigned int) var_2)), (var_11))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 254058603U)) ? (((/* implicit */int) var_12)) : (var_4)))) ? (((/* implicit */int) ((signed char) -898165375))) : (var_9))))));
    /* LoopNest 2 */
    for (unsigned char i_20 = 0; i_20 < 21; i_20 += 1) 
    {
        for (short i_21 = 0; i_21 < 21; i_21 += 4) 
        {
            {
                var_60 = ((/* implicit */long long int) ((unsigned char) ((min((var_0), (((/* implicit */unsigned long long int) (unsigned char)16)))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_29 [i_20] [0LL] [(unsigned char)13] [i_20] [i_20] [(unsigned char)13] [10ULL]), ((unsigned char)124))))))));
                arr_72 [10ULL] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) - ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)33))) : (14000472125136328143ULL)))));
                /* LoopNest 3 */
                for (unsigned int i_22 = 0; i_22 < 21; i_22 += 3) 
                {
                    for (unsigned int i_23 = 0; i_23 < 21; i_23 += 3) 
                    {
                        for (unsigned int i_24 = 2; i_24 < 19; i_24 += 4) 
                        {
                            {
                                arr_80 [i_20] [i_22] = ((/* implicit */long long int) var_9);
                                arr_81 [i_21] [i_21] [i_22] [i_23] [i_23] = ((/* implicit */int) ((unsigned char) ((((/* implicit */int) arr_7 [15] [i_23])) - (((/* implicit */int) arr_27 [i_23])))));
                                arr_82 [14ULL] [i_22] [14ULL] = ((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) arr_50 [i_24 - 1])), (((3102249245483522148ULL) << (((((/* implicit */int) arr_66 [i_23])) - (3781))))))), (((/* implicit */unsigned long long int) ((long long int) arr_76 [i_23] [i_22] [i_24 + 2])))));
                                arr_83 [i_20] [i_20] [(_Bool)1] [i_20] [i_22] = max((((/* implicit */unsigned int) var_13)), (((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_6))))) & (((31U) << (((((/* implicit */int) (unsigned char)132)) - (124))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
