/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14727
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
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) 2780051572938588875LL))))) * (((/* implicit */int) var_1))));
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) var_0)), (((var_16) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_8))))))) ? (2843931705040880286ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) max((((2780051572938588875LL) <= (((/* implicit */long long int) ((((/* implicit */_Bool) -5383139120091623183LL)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_3))))))), ((!(((/* implicit */_Bool) arr_0 [i_0]))))));
        var_20 = ((/* implicit */unsigned short) (!((!((_Bool)1)))));
        var_21 = (i_0 % 2 == zero) ? (((/* implicit */unsigned short) ((((((/* implicit */int) arr_0 [i_0])) ^ (((/* implicit */int) arr_0 [i_0])))) << ((((~(((/* implicit */int) arr_0 [i_0])))) + (138)))))) : (((/* implicit */unsigned short) ((((((/* implicit */int) arr_0 [i_0])) ^ (((/* implicit */int) arr_0 [i_0])))) << ((((((~(((/* implicit */int) arr_0 [i_0])))) + (138))) + (134))))));
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            var_22 -= ((/* implicit */unsigned char) ((unsigned short) (~(((/* implicit */int) var_17)))));
            var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) -2780051572938588876LL)) ? ((~(min((((/* implicit */unsigned long long int) (signed char)85)), (1670516963163565940ULL))))) : (min((((((/* implicit */_Bool) 9496680934085991027ULL)) ? (arr_3 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0]))))), (arr_3 [i_0])))));
        }
        for (unsigned char i_2 = 0; i_2 < 24; i_2 += 2) /* same iter space */
        {
            var_24 = ((((/* implicit */_Bool) -2780051572938588876LL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2780051572938588866LL)))))) : ((~(7550253937374394848LL)))))) : (((unsigned long long int) (+(2780051572938588866LL)))));
            arr_7 [i_0] = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) (unsigned short)46839)) || (((/* implicit */_Bool) min((arr_3 [i_0]), (((/* implicit */unsigned long long int) arr_0 [i_0]))))))));
            /* LoopNest 2 */
            for (long long int i_3 = 0; i_3 < 24; i_3 += 2) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_25 = ((/* implicit */unsigned char) max((((/* implicit */long long int) min((arr_5 [i_0]), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_4] [i_0] [i_0])) || (arr_13 [i_0] [i_2] [i_0]))))))), ((~(-2780051572938588876LL)))));
                        var_26 ^= ((/* implicit */unsigned short) (+(min((((((/* implicit */int) arr_0 [i_2])) * (((/* implicit */int) (unsigned char)248)))), (((((/* implicit */_Bool) 2780051572938588861LL)) ? (((/* implicit */int) arr_5 [i_2])) : (((/* implicit */int) arr_1 [i_2]))))))));
                        var_27 = ((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (var_5) : (((/* implicit */unsigned int) var_14))))))));
                        arr_15 [i_0] [i_2] [i_2] [i_2] = ((/* implicit */signed char) var_11);
                    }
                } 
            } 
            arr_16 [i_0] [i_0] = ((int) min((arr_9 [i_0] [i_2]), (arr_9 [i_0] [i_2])));
            /* LoopNest 2 */
            for (unsigned short i_5 = 0; i_5 < 24; i_5 += 4) 
            {
                for (unsigned short i_6 = 0; i_6 < 24; i_6 += 2) 
                {
                    {
                        var_28 = ((/* implicit */long long int) max(((+(min((var_14), (arr_12 [i_0] [i_2] [i_5] [i_5]))))), (((/* implicit */int) max((arr_4 [i_5]), (var_2))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_7 = 2; i_7 < 22; i_7 += 2) 
                        {
                            var_29 = ((/* implicit */int) (_Bool)1);
                            arr_26 [i_0] [i_2] [i_5] [i_0] [i_7 - 2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-16)) ? (((/* implicit */int) (short)-28762)) : (((/* implicit */int) var_8)))))));
                            var_30 ^= ((/* implicit */short) (-(arr_12 [i_0] [i_5] [i_6] [i_7])));
                            arr_27 [i_0] [i_0] [i_5] [i_6] = ((/* implicit */long long int) arr_11 [i_0] [i_0] [i_0] [i_6]);
                        }
                        for (unsigned long long int i_8 = 3; i_8 < 23; i_8 += 2) 
                        {
                            var_31 = ((/* implicit */_Bool) min(((-(((/* implicit */int) var_3)))), (((((/* implicit */_Bool) arr_25 [i_8 + 1] [i_0] [i_5] [i_0] [14] [i_0])) ? (((/* implicit */int) arr_25 [i_8 - 3] [i_2] [i_5] [i_0] [i_8] [i_8])) : (((/* implicit */int) var_3))))));
                            arr_31 [i_2] [i_6] [i_0] = arr_9 [i_0] [i_5];
                            var_32 = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned int) arr_17 [i_5] [i_0] [i_5])))));
                            var_33 += ((/* implicit */unsigned char) ((((/* implicit */int) var_0)) >> (((max(((+(845087478152641844ULL))), (((/* implicit */unsigned long long int) arr_6 [i_0] [i_5] [i_5])))) - (16051075235771931709ULL)))));
                        }
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned char i_9 = 0; i_9 < 24; i_9 += 2) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned short i_10 = 0; i_10 < 24; i_10 += 4) 
            {
                var_34 = ((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_0] [i_9])) ^ (((/* implicit */int) arr_21 [i_0] [i_10] [i_9] [i_0]))));
                var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_21 [i_0] [i_9] [i_9] [i_0])) ? (((/* implicit */unsigned long long int) arr_32 [i_0])) : ((-(arr_3 [i_0])))));
                var_36 = ((/* implicit */signed char) ((unsigned short) -2780051572938588887LL));
            }
            for (unsigned short i_11 = 2; i_11 < 22; i_11 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned char i_12 = 0; i_12 < 24; i_12 += 2) 
                {
                    for (long long int i_13 = 0; i_13 < 24; i_13 += 1) 
                    {
                        {
                            arr_46 [i_9] [i_9] [(unsigned char)9] [i_0] = ((((/* implicit */int) ((((/* implicit */int) arr_4 [i_0])) >= (((/* implicit */int) arr_5 [i_0]))))) >= (((/* implicit */int) arr_4 [i_0])));
                            arr_47 [i_11] [i_11] [i_11] &= ((/* implicit */signed char) (-(arr_20 [14] [i_11] [i_11] [i_13])));
                        }
                    } 
                } 
                arr_48 [14U] [i_0] [14U] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) arr_29 [8] [i_11 - 2] [i_11] [i_0] [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_9))));
                /* LoopSeq 2 */
                for (unsigned long long int i_14 = 1; i_14 < 23; i_14 += 1) /* same iter space */
                {
                    var_37 += ((/* implicit */short) ((arr_19 [i_9]) / (((/* implicit */int) ((unsigned char) -2780051572938588867LL)))));
                    arr_52 [i_11] [i_9] [i_11] [2] |= (((((~(((/* implicit */int) var_0)))) + (2147483647))) >> (((((/* implicit */int) var_12)) - (39))));
                    var_38 = ((/* implicit */short) (-(((/* implicit */int) (unsigned char)87))));
                    var_39 = ((arr_36 [i_11] [i_11] [i_14]) & (((/* implicit */int) arr_14 [i_9] [i_11 - 2] [i_9] [i_14 - 1])));
                    var_40 ^= ((/* implicit */unsigned int) var_16);
                }
                for (unsigned long long int i_15 = 1; i_15 < 23; i_15 += 1) /* same iter space */
                {
                    var_41 = (((!(((/* implicit */_Bool) arr_45 [i_0] [i_0] [i_11] [i_11 - 2] [i_15])))) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (short)(-32767 - 1))));
                    arr_55 [i_11] [i_0] = ((/* implicit */unsigned short) arr_44 [i_0] [i_0] [20ULL] [i_9] [i_9] [i_9] [i_9]);
                    arr_56 [i_9] [i_9] [i_9] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) var_16))));
                    arr_57 [i_0] = ((/* implicit */unsigned short) (!(arr_9 [i_0] [i_9])));
                }
            }
            /* LoopNest 3 */
            for (unsigned char i_16 = 1; i_16 < 22; i_16 += 1) 
            {
                for (signed char i_17 = 0; i_17 < 24; i_17 += 4) 
                {
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        {
                            var_42 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1717821738U)));
                            arr_66 [i_0] [i_9] [i_9] = (!(((/* implicit */_Bool) arr_51 [i_0] [i_0] [i_0] [i_9])));
                            arr_67 [i_0] [15] = ((/* implicit */_Bool) ((unsigned int) arr_8 [i_9] [i_9] [i_16 + 2] [i_0]));
                        }
                    } 
                } 
            } 
        }
        /* LoopNest 3 */
        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
        {
            for (unsigned int i_20 = 0; i_20 < 24; i_20 += 2) 
            {
                for (signed char i_21 = 0; i_21 < 24; i_21 += 4) 
                {
                    {
                        var_43 = ((/* implicit */unsigned int) max((((((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0]))))) * (((/* implicit */int) ((short) arr_42 [i_21] [i_0] [i_19]))))), (((/* implicit */int) (((-(((/* implicit */int) var_0)))) >= (((/* implicit */int) ((((/* implicit */int) arr_14 [17U] [i_19] [i_0] [i_19])) <= (arr_28 [i_0] [i_20] [i_0] [i_0])))))))));
                        var_44 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3734279929U)) ? (8739246841267633744ULL) : (((/* implicit */unsigned long long int) -2780051572938588867LL))))) ? (((/* implicit */int) arr_43 [i_0] [i_0] [i_20] [i_19] [i_0] [i_0])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_43 [i_0] [i_0] [i_19] [i_20] [i_21] [i_21])) || (((/* implicit */_Bool) var_9)))))));
                        arr_75 [i_0] [i_0] = ((/* implicit */unsigned short) arr_54 [i_0] [i_0] [i_20] [i_0] [i_20] [i_19]);
                        arr_76 [i_0] [i_0] [i_0] [i_21] = ((/* implicit */unsigned short) arr_53 [i_21] [i_20] [i_0] [i_19] [i_0]);
                    }
                } 
            } 
        } 
    }
}
