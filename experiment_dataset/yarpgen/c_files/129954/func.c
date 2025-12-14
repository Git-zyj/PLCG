/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129954
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
    var_12 = ((/* implicit */unsigned char) min(((+(var_9))), (((/* implicit */long long int) var_10))));
    var_13 = ((/* implicit */_Bool) (-((-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)-30368)) : (((/* implicit */int) var_11))))))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 2; i_0 < 9; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            arr_6 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)-30368))) + (var_9)))) ? (var_9) : (((/* implicit */long long int) (+(((/* implicit */int) (short)-30368)))))));
            var_14 -= ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_4))))) ^ (arr_2 [i_0]))) / (((/* implicit */unsigned long long int) ((/* implicit */int) max((min((((/* implicit */unsigned short) (short)30393)), ((unsigned short)2883))), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) (unsigned char)206)))))))))));
            /* LoopSeq 1 */
            for (long long int i_2 = 1; i_2 < 10; i_2 += 3) 
            {
                /* LoopSeq 2 */
                for (int i_3 = 3; i_3 < 9; i_3 += 4) /* same iter space */
                {
                    arr_14 [2ULL] [i_2] [i_2] [i_0 - 1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) -31380440)) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (((/* implicit */int) (((_Bool)1) && ((_Bool)1)))) : (((((/* implicit */_Bool) (unsigned char)116)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)17580))))))));
                    var_15 += ((/* implicit */unsigned short) arr_13 [8U] [8U]);
                    arr_15 [i_2] [i_1 - 2] [i_2] [1ULL] [(short)8] = (~(max((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)35)))), (((int) arr_4 [i_0] [i_1] [i_2 + 1])))));
                }
                for (int i_4 = 3; i_4 < 9; i_4 += 4) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (long long int i_5 = 0; i_5 < 11; i_5 += 4) 
                    {
                        arr_20 [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_0] [i_1] [i_1] [i_4] [i_1 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_6)))) : (min((((/* implicit */unsigned long long int) (!(var_8)))), (((unsigned long long int) var_4))))));
                        arr_21 [9U] [i_2] [(signed char)4] [2U] = ((/* implicit */unsigned short) (((-(((/* implicit */int) (_Bool)1)))) % ((+(((-339469727) % (((/* implicit */int) (short)-30368))))))));
                    }
                    for (unsigned char i_6 = 0; i_6 < 11; i_6 += 4) 
                    {
                        arr_24 [i_6] [i_2] [i_2] [i_0] = ((((/* implicit */_Bool) min((((/* implicit */long long int) max((((/* implicit */unsigned char) arr_7 [i_0 + 1] [i_4] [i_2] [i_2])), ((unsigned char)254)))), (((((/* implicit */_Bool) var_11)) ? (13LL) : (((/* implicit */long long int) -31380441))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_9) : (((/* implicit */long long int) 1444619940))))) && (((/* implicit */_Bool) (-(var_9)))))))) : (((long long int) ((((/* implicit */int) (unsigned char)35)) / (var_7)))));
                        arr_25 [i_0] [i_2] [i_2] [i_2] [i_2] [i_4] [i_6] = ((/* implicit */unsigned long long int) (~(max((((/* implicit */unsigned int) min((var_7), (-31380447)))), (arr_4 [i_2] [i_4] [3ULL])))));
                        var_16 = ((/* implicit */_Bool) min((var_16), (((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) (unsigned char)2))) ? (((((/* implicit */_Bool) var_2)) ? (arr_19 [i_0] [i_1 - 1] [i_6] [i_4 - 3] [i_6] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 0LL))))))))) || (((/* implicit */_Bool) var_5))))));
                        arr_26 [i_0] [0U] [i_2] [i_1] [i_1] = (-(((((/* implicit */_Bool) 13LL)) ? (((/* implicit */unsigned long long int) arr_4 [i_4 - 2] [i_2 + 1] [i_2 + 1])) : (var_6))));
                    }
                    var_17 *= ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_3 [(unsigned char)4]), (((/* implicit */int) var_8))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_4))));
                    arr_27 [i_0] [i_2 - 1] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)75))))) & (max((var_5), (((/* implicit */unsigned long long int) (unsigned short)463))))))) ? (((((/* implicit */_Bool) 9267313465294765626ULL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)12339)))) : (((/* implicit */int) ((var_0) > (((/* implicit */long long int) ((/* implicit */int) (unsigned char)88))))))));
                    var_18 = ((/* implicit */int) var_10);
                }
                var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (13LL) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))) || ((_Bool)1)));
                arr_28 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) (_Bool)1)), (var_5))), (((/* implicit */unsigned long long int) (unsigned char)155))))) ? (((((/* implicit */_Bool) arr_22 [1LL] [1LL] [i_2 - 1] [i_2 + 1] [2U])) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) == (8590444068387181324LL)))) : ((+(((/* implicit */int) var_4)))))) : (arr_1 [i_0] [(signed char)9])));
                arr_29 [i_2] [i_1 + 2] [i_2] = ((/* implicit */long long int) var_2);
            }
            var_20 ^= ((/* implicit */short) ((((/* implicit */int) arr_18 [i_0 + 2] [i_0] [i_0 + 2] [i_0 + 2] [i_1 - 1])) <= (((((((/* implicit */int) var_11)) - (((/* implicit */int) var_10)))) & (-63573843)))));
            arr_30 [i_0] [i_0] [(_Bool)1] = ((/* implicit */unsigned char) var_0);
        }
        var_21 = ((((/* implicit */_Bool) ((long long int) var_7))) ? (max((((/* implicit */unsigned long long int) arr_22 [i_0 + 1] [i_0 + 2] [i_0 - 1] [i_0] [i_0])), (((var_6) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_0] [i_0 + 1] [i_0] [i_0 + 2] [i_0]))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))) - (1952440126U)))));
    }
    for (unsigned long long int i_7 = 2; i_7 < 9; i_7 += 3) /* same iter space */
    {
        arr_35 [i_7] &= ((/* implicit */unsigned short) ((long long int) ((signed char) 13154384369343340445ULL)));
        var_22 += ((/* implicit */_Bool) 1354589520);
        var_23 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (((_Bool)1) ? (var_0) : (var_9)))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) >= (var_2)))) : (1291533717)))));
    }
    for (unsigned int i_8 = 0; i_8 < 20; i_8 += 3) 
    {
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 20; i_9 += 4) 
        {
            for (unsigned short i_10 = 2; i_10 < 18; i_10 += 3) 
            {
                for (unsigned short i_11 = 0; i_11 < 20; i_11 += 3) 
                {
                    {
                        var_24 = ((/* implicit */int) var_5);
                        var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) max((arr_39 [i_8] [13U]), (((/* implicit */long long int) (unsigned char)88)))))));
                        /* LoopSeq 1 */
                        for (signed char i_12 = 1; i_12 < 19; i_12 += 1) 
                        {
                            var_26 = ((/* implicit */unsigned long long int) max((((long long int) arr_47 [i_12] [i_11] [i_10] [i_9] [i_9] [(_Bool)1] [i_8])), (((/* implicit */long long int) var_7))));
                            var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_11), (((/* implicit */short) min((((/* implicit */signed char) arr_41 [i_11] [i_10] [i_8])), ((signed char)16))))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_47 [i_12 - 1] [i_12 - 1] [i_12 - 1] [16U] [i_12] [i_12] [i_12]))))) : (min((max((((/* implicit */unsigned long long int) var_3)), (9267313465294765626ULL))), (((/* implicit */unsigned long long int) (_Bool)1))))));
                            var_28 = ((/* implicit */unsigned char) arr_40 [i_8]);
                        }
                    }
                } 
            } 
        } 
        var_29 = min((max((var_4), (((/* implicit */unsigned short) (signed char)113)))), (arr_42 [i_8] [i_8] [i_8]));
    }
    for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_14 = 1; i_14 < 12; i_14 += 3) 
        {
            for (unsigned short i_15 = 1; i_15 < 12; i_15 += 1) 
            {
                {
                    arr_54 [(unsigned char)8] [i_14] [i_14] [(signed char)11] = ((/* implicit */long long int) ((unsigned short) (((+(((/* implicit */int) (_Bool)1)))) / (((((/* implicit */_Bool) arr_43 [i_14] [i_14] [i_15])) ? (-1812436958) : (((/* implicit */int) var_8)))))));
                    arr_55 [i_13 - 1] [i_13] [i_14] [i_14] = ((((/* implicit */unsigned long long int) (-(arr_39 [i_14 + 1] [i_15 - 1])))) / ((-(max((((/* implicit */unsigned long long int) arr_38 [i_15 + 1] [i_15])), (17163887775938883879ULL))))));
                }
            } 
        } 
        var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)50)) & (1291533729)))) + (((((/* implicit */_Bool) (unsigned char)207)) ? (4270421924U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_46 [i_13] [i_13] [i_13] [(short)17] [i_13] [i_13])) ? (((/* implicit */unsigned long long int) var_3)) : (var_6)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_44 [i_13] [i_13] [i_13] [i_13 - 1])) && (((/* implicit */_Bool) var_3)))))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) 1368122545)) : (var_5))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_13 - 1] [i_13] [i_13 - 1])))));
        var_31 = ((/* implicit */unsigned char) max((((/* implicit */int) min((((/* implicit */unsigned short) var_11)), ((unsigned short)49915)))), (((((/* implicit */_Bool) arr_51 [i_13 - 1] [i_13])) ? (((/* implicit */int) var_10)) : (arr_51 [i_13 - 1] [i_13 - 1])))));
    }
    var_32 = ((/* implicit */unsigned long long int) var_7);
}
