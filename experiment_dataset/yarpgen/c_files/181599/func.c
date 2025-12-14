/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181599
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
    var_11 |= ((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned char)4)) - (((/* implicit */int) (unsigned char)6)))) & (((/* implicit */int) ((((/* implicit */_Bool) max((var_10), (var_10)))) || (((/* implicit */_Bool) (unsigned char)249)))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            /* LoopSeq 3 */
            for (signed char i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                arr_8 [i_0] [i_0] = ((/* implicit */unsigned short) arr_6 [i_2] [i_1] [17U]);
                /* LoopSeq 2 */
                for (signed char i_3 = 0; i_3 < 20; i_3 += 3) 
                {
                    var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) ((((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_1] [i_3] [i_0] [i_3])))) && (((/* implicit */_Bool) var_3)))))));
                    arr_12 [i_0] [i_0] [i_0] [i_3] = min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0])) <= (arr_2 [i_1] [i_1])))), (min((((/* implicit */unsigned long long int) ((var_1) + (((/* implicit */int) arr_7 [i_0]))))), (((((/* implicit */_Bool) var_2)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)242))))))));
                }
                /* vectorizable */
                for (signed char i_4 = 1; i_4 < 17; i_4 += 4) 
                {
                    var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) var_3))));
                    var_14 = arr_11 [i_0] [i_0] [i_2] [0U] [(signed char)3];
                    arr_15 [4ULL] [i_1] [i_4] [i_2] [(_Bool)1] = ((/* implicit */int) arr_5 [i_4 + 3] [i_4 + 1] [i_4 + 3]);
                }
                arr_16 [i_0] [10] [10] [i_2] = ((/* implicit */short) max((min((arr_11 [(signed char)10] [17] [18LL] [i_1] [i_1]), (arr_9 [2] [6ULL] [i_2] [i_2] [i_1] [i_0]))), (((int) var_6))));
            }
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
            {
                var_15 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) min((((/* implicit */int) (signed char)-51)), (-1727521722)))) / (var_8)))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((unsigned char) (unsigned char)21))));
                arr_21 [i_0] [i_5] = ((/* implicit */short) ((unsigned short) ((int) max((((/* implicit */unsigned int) var_5)), (4242737882U)))));
            }
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
            {
                var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((min((((/* implicit */int) var_2)), (arr_3 [i_0]))) < (((/* implicit */int) ((unsigned short) arr_3 [i_1]))))))));
                arr_24 [i_0] [i_1] [i_0] [i_1] = var_10;
            }
            /* LoopNest 2 */
            for (signed char i_7 = 0; i_7 < 20; i_7 += 4) 
            {
                for (long long int i_8 = 0; i_8 < 20; i_8 += 2) 
                {
                    {
                        var_17 *= ((/* implicit */unsigned long long int) (((((~(((/* implicit */int) (_Bool)1)))) + (2147483647))) >> ((((~(((((/* implicit */int) var_7)) >> (((((/* implicit */int) var_5)) + (33))))))) + (13)))));
                        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) min((arr_29 [i_0] [i_1] [i_7] [i_8]), (((/* implicit */unsigned int) ((signed char) 883916893U))))))));
                    }
                } 
            } 
        }
        var_19 = ((/* implicit */int) min((var_19), ((-(((((/* implicit */_Bool) arr_27 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_2))))))));
        arr_30 [i_0] [i_0] = ((/* implicit */int) (((~(4242737876U))) & (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */unsigned int) arr_11 [i_0] [i_0] [i_0] [2ULL] [i_0])) & (883916898U))) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_0] [(_Bool)1] [i_0] [(_Bool)1])))))))));
    }
    for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned char i_10 = 0; i_10 < 20; i_10 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            for (long long int i_11 = 1; i_11 < 18; i_11 += 2) 
            {
                arr_39 [i_11] = min((((((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_11] [i_11 + 2] [i_11 - 1] [(signed char)18]))) - (((((/* implicit */_Bool) arr_38 [i_9] [(unsigned char)9] [i_11])) ? (3411050402U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_9] [i_10]))))))), (((((/* implicit */_Bool) arr_17 [i_11] [i_11] [(unsigned char)8])) ? (((/* implicit */unsigned int) (+(arr_31 [(unsigned short)11] [i_10])))) : ((~(arr_10 [(unsigned short)7] [i_9] [(unsigned short)7] [(unsigned short)7] [7]))))));
                arr_40 [i_9] [i_10] [i_11] = ((/* implicit */unsigned int) (-((+(((/* implicit */int) var_6))))));
                /* LoopSeq 4 */
                for (unsigned long long int i_12 = 4; i_12 < 19; i_12 += 2) 
                {
                    arr_45 [i_10] [i_10] [(unsigned char)10] [i_10] [i_11] [i_10] |= ((/* implicit */_Bool) (((((~(((/* implicit */int) arr_36 [i_9] [i_11 + 1])))) + (2147483647))) << (((((/* implicit */int) ((((/* implicit */int) arr_36 [i_9] [i_11 - 1])) <= (((/* implicit */int) arr_36 [9LL] [(signed char)4]))))) - (1)))));
                    var_20 = ((/* implicit */unsigned char) max((var_20), (arr_7 [i_10])));
                }
                for (unsigned int i_13 = 0; i_13 < 20; i_13 += 3) 
                {
                    /* LoopSeq 4 */
                    for (unsigned char i_14 = 0; i_14 < 20; i_14 += 2) /* same iter space */
                    {
                        var_21 = ((((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) -2091759413783144103LL))))), ((short)-30379)))) | (((/* implicit */int) (unsigned short)9611)));
                        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) var_8))));
                    }
                    for (unsigned char i_15 = 0; i_15 < 20; i_15 += 2) /* same iter space */
                    {
                        var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) max((((int) (signed char)12)), (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) * (var_10)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) arr_19 [i_9]))))) : (((/* implicit */int) var_4)))))))));
                        var_24 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_6 [i_11] [i_11 + 2] [i_11 + 2])) ? (((/* implicit */int) arr_51 [i_9] [i_11] [i_11 + 1] [i_11] [i_11 + 2])) : (((/* implicit */int) arr_6 [i_10] [i_10] [i_11 - 1])))), (((/* implicit */int) arr_6 [5] [5] [i_11 + 2]))));
                        arr_54 [i_9] [i_10] [i_11] [i_9] = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) ((unsigned char) var_10))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 3411050403U)) ? (var_1) : (((/* implicit */int) (unsigned short)25239))))) : (6851833554537774299LL))));
                    }
                    for (unsigned char i_16 = 0; i_16 < 20; i_16 += 2) /* same iter space */
                    {
                        var_25 = ((/* implicit */unsigned int) ((180246698) >> (((1209802277U) - (1209802266U)))));
                        var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) ((((/* implicit */long long int) (~(((/* implicit */int) arr_14 [i_11] [i_11] [i_11] [i_11 + 2]))))) & (((((((/* implicit */_Bool) var_2)) ? (-6851833554537774299LL) : (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_10] [i_10]))))) / (((/* implicit */long long int) (-(4242737882U)))))))))));
                    }
                    for (unsigned char i_17 = 0; i_17 < 20; i_17 += 2) /* same iter space */
                    {
                        var_27 |= ((/* implicit */int) (((~(min((((/* implicit */unsigned long long int) var_10)), (var_8))))) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_0) : (-13)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (short)962)))) : (var_8))) - (914ULL)))));
                        var_28 -= ((/* implicit */_Bool) var_9);
                    }
                    arr_59 [i_11] = ((/* implicit */_Bool) ((((((/* implicit */int) var_4)) - (((/* implicit */int) arr_5 [i_11] [i_10] [i_11])))) - (((/* implicit */int) min((((/* implicit */unsigned char) var_5)), (arr_5 [i_9] [i_9] [i_11 - 1]))))));
                }
                for (unsigned short i_18 = 0; i_18 < 20; i_18 += 2) /* same iter space */
                {
                    var_29 = ((/* implicit */unsigned long long int) arr_5 [i_11] [i_11] [i_11 + 2]);
                    var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) (-((-(((((/* implicit */_Bool) arr_55 [(short)0] [16U] [i_10] [i_11 + 2] [i_11 + 2] [i_11] [i_10])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_9)))))))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_19 = 0; i_19 < 20; i_19 += 2) 
                    {
                        var_31 -= (+(((/* implicit */int) (!(((/* implicit */_Bool) 52229395U))))));
                        arr_66 [(signed char)18] [(signed char)18] [i_11] [i_19] = ((/* implicit */int) ((max((((var_10) ^ (52229395U))), (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) * (((/* implicit */int) var_9))))))) > (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-9)))))))))));
                        arr_67 [i_9] [i_10] [i_11 - 1] [i_10] [i_11] [i_19] = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_26 [i_11 + 1]))))) ? (max((((/* implicit */int) var_4)), (180246703))) : (((/* implicit */int) min((((/* implicit */unsigned char) arr_36 [i_9] [i_11 + 2])), (arr_7 [i_11 - 1])))));
                    }
                }
                for (unsigned short i_20 = 0; i_20 < 20; i_20 += 2) /* same iter space */
                {
                    arr_70 [i_9] [i_11] [i_11] = ((/* implicit */signed char) (-(((/* implicit */int) ((short) arr_46 [i_9] [i_20] [i_11 + 2] [i_20] [i_20] [i_11])))));
                    var_32 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned long long int) arr_28 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]))))) && (((/* implicit */_Bool) var_10)))))));
                    var_33 -= max((((/* implicit */long long int) (unsigned char)56)), (-6851833554537774299LL));
                }
                /* LoopNest 2 */
                for (signed char i_21 = 1; i_21 < 16; i_21 += 4) 
                {
                    for (unsigned int i_22 = 3; i_22 < 19; i_22 += 4) 
                    {
                        {
                            var_34 |= ((/* implicit */short) ((((/* implicit */_Bool) ((int) (+(-1))))) ? (((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_33 [i_9])) ? (var_8) : (((/* implicit */unsigned long long int) 866761488)))))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned int) var_0)) - (883916872U)))) ? (-1) : (((/* implicit */int) arr_53 [i_21 - 1] [i_22] [i_22] [i_22 - 3] [i_22]))))));
                            var_35 = ((/* implicit */int) min((var_35), ((-(var_1)))));
                        }
                    } 
                } 
            }
            arr_75 [(unsigned char)5] [(unsigned char)5] [i_9] = ((int) min((((((/* implicit */_Bool) 929325283)) ? (var_0) : (-130864139))), (((/* implicit */int) var_9))));
            arr_76 [i_9] [i_10] = ((/* implicit */unsigned long long int) ((unsigned short) ((((var_0) >> (((arr_55 [i_9] [i_9] [14ULL] [i_9] [i_9] [i_9] [i_9]) - (1901079255))))) & (((((/* implicit */_Bool) (unsigned short)55938)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_2)))))));
            var_36 = ((/* implicit */long long int) ((((/* implicit */int) var_5)) & (((/* implicit */int) arr_43 [i_10] [i_9] [(short)14] [i_10] [i_10]))));
        }
        /* vectorizable */
        for (unsigned char i_23 = 0; i_23 < 20; i_23 += 4) /* same iter space */
        {
            arr_80 [i_23] = ((/* implicit */int) arr_77 [i_23]);
            arr_81 [(signed char)19] [(signed char)19] = ((/* implicit */signed char) ((unsigned int) arr_57 [i_9] [i_9] [i_9] [i_23] [8U]));
        }
        arr_82 [i_9] [i_9] = max((var_2), (var_5));
    }
    for (unsigned long long int i_24 = 0; i_24 < 20; i_24 += 2) /* same iter space */
    {
        arr_85 [i_24] = ((/* implicit */signed char) ((((/* implicit */_Bool) 1770558064U)) && (((/* implicit */_Bool) (-(((/* implicit */int) arr_64 [i_24] [i_24] [10] [i_24] [i_24])))))));
        arr_86 [(_Bool)1] = ((/* implicit */unsigned int) ((unsigned long long int) max((((/* implicit */int) arr_53 [i_24] [(unsigned short)12] [i_24] [i_24] [i_24])), ((+(((/* implicit */int) var_7)))))));
    }
}
