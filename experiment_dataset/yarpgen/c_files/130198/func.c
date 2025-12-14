/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130198
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
    var_14 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_7)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (491263887U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (min((((/* implicit */unsigned long long int) var_9)), (10302275572995291421ULL)))))));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_15 = ((/* implicit */_Bool) (unsigned char)31);
        /* LoopNest 3 */
        for (unsigned int i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 3; i_3 < 17; i_3 += 4) 
                {
                    {
                        var_16 &= ((/* implicit */_Bool) (~(arr_5 [(short)8] [i_1 + 1] [i_1] [i_1 + 2])));
                        var_17 = ((/* implicit */_Bool) (~(min(((~(arr_4 [i_1] [i_1] [i_3]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) (short)-26238)))))))));
                        var_18 = ((/* implicit */short) arr_8 [i_0] [i_3 + 1] [i_1 + 2] [i_2]);
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_4 = 4; i_4 < 21; i_4 += 1) /* same iter space */
    {
        var_19 *= ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)38))))) < (max((arr_13 [i_4]), (((/* implicit */long long int) arr_14 [i_4]))))))) % (((/* implicit */int) ((((/* implicit */int) ((16036834101825675166ULL) >= (16036834101825675166ULL)))) < (((((/* implicit */_Bool) 1866945208U)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11)))))))));
        arr_15 [i_4 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)1086)) ? (((/* implicit */int) (signed char)-121)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)153))) + (arr_13 [i_4 - 4]))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_14 [i_4 - 2])))))));
        var_20 = ((/* implicit */_Bool) ((min(((+(1975139503))), (((/* implicit */int) max(((unsigned short)2938), (((/* implicit */unsigned short) (_Bool)1))))))) >> (((((/* implicit */_Bool) (((_Bool)1) ? (7073355525261795976LL) : (((/* implicit */long long int) ((/* implicit */int) (short)32210)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) 4849880306194140157LL)) : (10959932654135265299ULL)))))));
        arr_16 [19ULL] [i_4 + 1] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_13)) ? (arr_13 [i_4 - 4]) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))));
    }
    for (unsigned long long int i_5 = 4; i_5 < 21; i_5 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */signed char) var_6);
        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 31361924U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62589))) : (2327194365U)))) ? (((((/* implicit */long long int) ((/* implicit */int) var_11))) | (((((/* implicit */_Bool) 4263605368U)) ? (arr_13 [2ULL]) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))) : (((((/* implicit */long long int) ((/* implicit */int) min((arr_17 [(unsigned short)2]), (((/* implicit */short) (signed char)-57)))))) | (((3442672285749433746LL) | (((/* implicit */long long int) ((/* implicit */int) var_6)))))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 1) /* same iter space */
        {
            arr_21 [i_6] = ((/* implicit */short) arr_14 [i_5]);
            var_23 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_13))))) | (arr_19 [i_5 - 2])));
            var_24 = ((/* implicit */short) 17987716527265068317ULL);
        }
        /* vectorizable */
        for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned int i_8 = 1; i_8 < 21; i_8 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned char i_9 = 0; i_9 < 22; i_9 += 1) 
                {
                    for (int i_10 = 0; i_10 < 22; i_10 += 3) 
                    {
                        {
                            arr_34 [8] [i_7] [i_7] [8] [i_7] = ((254127310U) >= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))));
                            var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) (~(1762500512900257731LL))))));
                            arr_35 [0ULL] [3U] [i_8] [i_9] [i_10] [i_5] [i_9] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)40766))) != (var_8))))));
                        }
                    } 
                } 
                var_26 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-83))) % (arr_13 [i_8])));
            }
            for (unsigned int i_11 = 1; i_11 < 21; i_11 += 1) /* same iter space */
            {
                arr_39 [i_5 - 4] [i_5 - 4] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_12))))) ? (((((/* implicit */int) arr_17 [i_5 - 4])) + (((/* implicit */int) (unsigned char)50)))) : (((/* implicit */int) arr_29 [(unsigned short)15] [i_5] [i_7] [i_11 - 1] [i_11] [i_11]))));
                /* LoopSeq 2 */
                for (signed char i_12 = 0; i_12 < 22; i_12 += 1) 
                {
                    var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((((/* implicit */_Bool) -3442672285749433747LL)) ? (arr_13 [i_11 - 1]) : (arr_13 [i_11 + 1]))))));
                    arr_42 [i_5] [i_5] = ((/* implicit */long long int) (unsigned short)34678);
                }
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    var_28 = ((/* implicit */int) min((var_28), (arr_30 [i_5] [i_5] [i_11] [i_11] [i_11] [i_5])));
                    var_29 = ((/* implicit */unsigned int) (-(arr_40 [i_11 + 1] [i_5] [i_5] [i_5 - 2] [i_5])));
                }
                arr_45 [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 10090469318314340844ULL)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_5] [i_7] [i_7] [i_7] [i_11] [i_5] [(unsigned char)15])))))) ? (((/* implicit */int) arr_32 [i_5] [i_5] [i_5] [i_5] [i_7] [i_7] [i_7])) : (((/* implicit */int) arr_24 [i_5 - 3]))));
            }
            arr_46 [(unsigned short)4] [(unsigned short)4] |= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (short)-26231)) ? (var_3) : (((/* implicit */unsigned long long int) 2428022088U))))));
            var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((-3527510853746011179LL) | (((/* implicit */long long int) 3878656920U))))) ? (((5277346695839751674LL) % (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32663))))) : (((/* implicit */long long int) ((3878656920U) * (1866945208U))))));
            arr_47 [i_5] [(signed char)12] [i_7] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_17 [i_5 - 4])) + (((/* implicit */int) var_9))))) ? (-3442672285749433762LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_40 [i_5] [i_5] [4LL] [i_5] [i_7])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_37 [i_5 - 3] [i_7]))))));
        }
        for (unsigned long long int i_14 = 0; i_14 < 22; i_14 += 1) /* same iter space */
        {
            arr_50 [2LL] [i_14] [i_14] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_37 [i_5] [i_14]))));
            var_31 &= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_14 [i_5 + 1])) ? (((/* implicit */int) arr_14 [i_5 - 1])) : (((/* implicit */int) arr_14 [i_5 + 1])))), (((/* implicit */int) ((max((14759725425716630659ULL), (arr_40 [i_5 - 1] [i_14] [i_14] [i_14] [i_5]))) != (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) var_10)), (arr_17 [i_5]))))))))));
        }
        var_32 = ((/* implicit */signed char) var_4);
    }
    /* vectorizable */
    for (unsigned long long int i_15 = 4; i_15 < 21; i_15 += 1) /* same iter space */
    {
        arr_53 [i_15] [i_15] = ((/* implicit */unsigned short) (signed char)-111);
        arr_54 [13U] [i_15 - 1] = ((/* implicit */_Bool) (unsigned short)32486);
    }
    var_33 = ((/* implicit */int) var_2);
    var_34 = ((/* implicit */unsigned char) ((unsigned long long int) var_0));
    var_35 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) | (((((/* implicit */_Bool) var_3)) ? (((1048860409304905943ULL) * (((/* implicit */unsigned long long int) -3442672285749433747LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))));
}
