/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170006
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
    for (unsigned char i_0 = 2; i_0 < 20; i_0 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 20; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 21; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_3] [i_2] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) & (8152955336148955432ULL)));
                                arr_16 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_3 + 2] [i_2 + 3] [i_2] [i_0 - 2]))) >= (((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_3 + 2] [i_2 + 3] [i_0] [i_0 + 2]))) & (var_3)))));
                                arr_17 [i_3] [i_3] [i_2] [i_1] [i_1] [i_0] [i_3] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_8))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned int i_5 = 0; i_5 < 23; i_5 += 1) 
                    {
                        var_15 = ((/* implicit */unsigned int) ((int) (unsigned short)12));
                        var_16 = ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1))));
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 3) 
                    {
                        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) & (arr_3 [i_0 + 3])))) ? (((((/* implicit */_Bool) arr_3 [i_0 + 2])) ? (arr_3 [i_0 + 2]) : (arr_3 [i_0 - 2]))) : (((unsigned long long int) 8152955336148955432ULL))));
                        var_18 *= ((/* implicit */unsigned short) ((unsigned int) ((int) var_0)));
                    }
                    for (signed char i_7 = 0; i_7 < 23; i_7 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_7] [i_7] [i_2] [i_1] [i_1] [i_0])))))));
                        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_22 [i_0 + 1] [i_0 - 2] [i_0 + 1] [i_0 - 1]), (arr_22 [i_0 + 1] [i_0 - 2] [i_0 + 1] [i_0 - 1])))) || (((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-27)))))));
                    }
                    var_21 = ((/* implicit */unsigned long long int) ((unsigned char) ((signed char) min((((/* implicit */unsigned long long int) arr_25 [(unsigned char)10] [(unsigned char)10] [i_2] [i_2 + 3])), (arr_5 [i_0] [i_1] [i_2])))));
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned char) max(((+(((((/* implicit */int) (unsigned char)252)) & (-1))))), ((~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) <= (5914100708905284578ULL))))))));
    }
    for (unsigned char i_8 = 2; i_8 < 20; i_8 += 2) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned int i_9 = 0; i_9 < 23; i_9 += 3) 
        {
            arr_32 [i_9] [i_9] [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) (-(max((((/* implicit */unsigned int) arr_25 [i_8] [i_8] [i_9] [(_Bool)1])), (3044651609U)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((10293788737560596180ULL) <= (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0))))))))) : (3461019253477263040ULL)));
            /* LoopNest 2 */
            for (unsigned long long int i_10 = 0; i_10 < 23; i_10 += 1) 
            {
                for (long long int i_11 = 0; i_11 < 23; i_11 += 3) 
                {
                    {
                        var_23 = ((/* implicit */long long int) min((((arr_26 [i_8 - 2]) * (((unsigned int) arr_23 [i_11] [i_10] [i_9] [i_8 - 2])))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)11)) / (((/* implicit */int) (_Bool)1)))))));
                        var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) 907215367)) >= (4880467784593913424ULL))))));
                        var_25 = ((/* implicit */signed char) ((((/* implicit */int) arr_10 [i_8])) | (((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_6 [i_8])) && (((/* implicit */_Bool) var_2))))))));
                        arr_38 [i_8] [i_8 - 2] [i_8] [i_9] = ((/* implicit */short) min((((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))))), (((((/* implicit */_Bool) ((unsigned short) var_0))) ? (((((/* implicit */long long int) ((/* implicit */int) (signed char)-27))) | (4050894261523730839LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_8]))) > (17390503334576318398ULL)))))))));
                        var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) (unsigned char)231)) + (134184960))))) ? (-8800271648822772768LL) : (((/* implicit */long long int) ((/* implicit */int) ((3913734621415718145LL) > (-8800271648822772771LL)))))));
                    }
                } 
            } 
            var_27 *= ((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)1))))) & (((unsigned long long int) (((-2147483647 - 1)) > (((/* implicit */int) (signed char)0)))))));
        }
        for (int i_12 = 1; i_12 < 22; i_12 += 1) 
        {
            arr_42 [(unsigned short)15] = ((/* implicit */int) (unsigned char)24);
            arr_43 [i_12] [i_12] [i_8 + 2] &= ((/* implicit */signed char) ((unsigned char) (((~(-8800271648822772768LL))) > (((/* implicit */long long int) -655108876)))));
        }
        for (unsigned char i_13 = 2; i_13 < 21; i_13 += 2) 
        {
            var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) ((((/* implicit */_Bool) 6U)) ? (((unsigned long long int) (+(var_10)))) : (min((((/* implicit */unsigned long long int) (~(8800271648822772768LL)))), ((~(18446744073709551615ULL))))))))));
            /* LoopSeq 2 */
            for (signed char i_14 = 0; i_14 < 23; i_14 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned short i_15 = 0; i_15 < 23; i_15 += 3) 
                {
                    for (int i_16 = 0; i_16 < 23; i_16 += 3) 
                    {
                        {
                            arr_55 [i_8] [i_8 - 1] [i_14] [i_14] [i_15] = ((/* implicit */unsigned short) ((((_Bool) ((signed char) (unsigned char)255))) ? (((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) (signed char)-5))) | (-8800271648822772768LL))) <= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_14)) != (arr_53 [i_8 + 1] [i_13] [i_14] [i_15] [i_16])))))))) : ((-(((/* implicit */int) arr_13 [i_8 + 3] [i_13 - 1] [i_13] [i_13 - 2]))))));
                            arr_56 [i_8 - 1] [i_15] [i_14] [i_15] [i_16] = ((/* implicit */int) min((((/* implicit */long long int) (signed char)14)), (4744377711642208998LL)));
                        }
                    } 
                } 
                var_29 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_14] [i_8 - 2] [i_13 + 2] [i_8 - 2])) ? (((/* implicit */long long int) arr_23 [i_8] [i_8 - 2] [i_8] [i_8 - 2])) : (4744377711642209004LL)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-112)), ((unsigned char)247)))) & (((/* implicit */int) ((signed char) arr_50 [i_8] [i_8] [i_14] [i_13] [i_13 - 1] [i_13 + 2])))))) : (max((min((var_2), (((/* implicit */unsigned int) (unsigned short)63209)))), (((/* implicit */unsigned int) ((arr_3 [i_8]) >= (((/* implicit */unsigned long long int) arr_26 [i_8])))))))));
                arr_57 [i_14] [i_13] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) arr_46 [i_14] [i_8])), (arr_36 [i_14])))) ? (((((/* implicit */_Bool) 4744377711642208997LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-34))) : (arr_1 [i_8]))) : (((/* implicit */long long int) ((/* implicit */int) max((var_13), (var_13)))))))) || (((/* implicit */_Bool) min((arr_37 [i_14] [i_13] [i_8 + 3] [i_13] [i_13 + 2] [i_8]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_41 [i_8] [i_8 + 1]))))))))));
            }
            for (unsigned long long int i_17 = 1; i_17 < 22; i_17 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned short i_18 = 0; i_18 < 23; i_18 += 4) 
                {
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        {
                            var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */int) max((var_5), (var_9)))) ^ (((/* implicit */int) ((2435982505U) < (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))))), (((unsigned long long int) ((((/* implicit */_Bool) 12532643364804267038ULL)) ? (-665360030) : (((/* implicit */int) arr_0 [i_8] [i_13]))))))))));
                            var_31 = ((/* implicit */unsigned long long int) min((var_31), (((unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (2110892437750996384ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_19] [i_18] [i_8 - 1]))))))));
                            var_32 = ((/* implicit */unsigned long long int) min((var_32), ((-(((((/* implicit */_Bool) max((12532643364804267040ULL), (18446744073709551615ULL)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) - (arr_64 [i_13] [i_8]))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-1564)))))))))));
                        }
                    } 
                } 
                var_33 -= ((/* implicit */short) ((((/* implicit */_Bool) (+(((arr_58 [i_8] [i_17]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)118)))))))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)255)) * (((/* implicit */int) arr_21 [i_17 + 1]))))) : (min((((/* implicit */long long int) (signed char)8)), (7051750986647792534LL)))));
            }
            arr_67 [i_8] [i_13 - 1] [i_13 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) (short)-18363))) ? (((((/* implicit */_Bool) 12532643364804267037ULL)) ? (-4744377711642208992LL) : (((/* implicit */long long int) arr_52 [i_13 - 2] [i_8] [i_13 + 2] [i_8 + 1] [i_8 + 2] [i_8] [i_8 + 3])))) : (max((((/* implicit */long long int) (unsigned char)168)), (-4744377711642209005LL)))));
            var_34 = ((/* implicit */unsigned long long int) ((unsigned char) (!(((/* implicit */_Bool) (signed char)-9)))));
            var_35 += ((/* implicit */long long int) min(((+(((/* implicit */int) (unsigned short)65520)))), (((((/* implicit */_Bool) var_4)) ? ((-(((/* implicit */int) arr_46 [i_8] [i_13 + 2])))) : (arr_30 [i_8 - 2] [i_8 + 1] [i_8 - 2])))));
        }
        arr_68 [i_8] [i_8] = ((/* implicit */signed char) (-(2157936904U)));
    }
    for (unsigned char i_20 = 2; i_20 < 20; i_20 += 2) /* same iter space */
    {
        var_36 = ((/* implicit */long long int) ((unsigned short) ((((((/* implicit */_Bool) arr_63 [i_20])) ? (((/* implicit */unsigned long long int) 3280905549U)) : (var_10))) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))));
        var_37 *= ((/* implicit */unsigned short) ((unsigned char) (+(arr_44 [i_20 + 2] [i_20] [i_20 - 1]))));
        arr_71 [i_20] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max(((-(((/* implicit */int) arr_29 [i_20] [i_20] [i_20])))), (((((/* implicit */_Bool) (signed char)113)) ? (arr_18 [i_20] [i_20] [i_20] [4]) : (((/* implicit */int) (unsigned char)188)))))))));
        var_38 = ((/* implicit */int) max((var_38), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_61 [i_20 + 2] [i_20] [i_20 + 3] [i_20 + 3])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (signed char)-25))))) ? (min((((/* implicit */unsigned long long int) (unsigned char)0)), (arr_61 [i_20 + 2] [i_20] [i_20 + 3] [i_20 + 3]))) : (((/* implicit */unsigned long long int) ((unsigned int) (signed char)13))))))));
        arr_72 [i_20] [i_20 + 1] = (_Bool)0;
    }
    /* LoopSeq 1 */
    for (unsigned short i_21 = 4; i_21 < 13; i_21 += 1) 
    {
        var_39 = ((/* implicit */unsigned short) 12532643364804267038ULL);
        var_40 = ((/* implicit */unsigned long long int) 904616881);
        /* LoopNest 2 */
        for (int i_22 = 0; i_22 < 15; i_22 += 4) 
        {
            for (short i_23 = 0; i_23 < 15; i_23 += 3) 
            {
                {
                    var_41 = ((/* implicit */int) ((signed char) min((((((/* implicit */_Bool) arr_65 [i_21 - 2])) ? (9750470750980140952ULL) : (arr_58 [i_22] [i_23]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)229)) + (((/* implicit */int) (_Bool)1))))))));
                    var_42 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_62 [i_21 - 3])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)0))))) + (-4445897376737823376LL)));
                }
            } 
        } 
    }
}
