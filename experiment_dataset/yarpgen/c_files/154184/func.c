/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154184
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
    var_20 = ((/* implicit */unsigned int) (short)-1);
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_21 = ((/* implicit */unsigned int) ((long long int) max((((/* implicit */unsigned long long int) arr_1 [i_0])), (((((/* implicit */unsigned long long int) var_14)) % (1894736078519333544ULL))))));
        arr_3 [i_0] [i_0] = ((4294967295U) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (~(var_11)))))));
        var_22 = ((/* implicit */int) ((unsigned short) min((4294967295U), (3614387755U))));
    }
    for (unsigned short i_1 = 1; i_1 < 20; i_1 += 3) 
    {
        /* LoopSeq 2 */
        for (signed char i_2 = 0; i_2 < 22; i_2 += 2) 
        {
            var_23 |= min((((int) arr_5 [i_1 + 2])), ((~(291266487))));
            arr_9 [i_1] [i_1] = ((/* implicit */unsigned char) max((arr_7 [i_1] [18LL] [i_1]), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned short)65535)), (arr_8 [i_1] [i_2]))))));
            var_24 = ((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned short) arr_8 [(signed char)11] [i_1 + 1])))));
        }
        /* vectorizable */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_25 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)8333)) & (((/* implicit */int) arr_11 [(unsigned short)4] [i_1]))));
            /* LoopSeq 4 */
            for (unsigned short i_4 = 0; i_4 < 22; i_4 += 3) 
            {
                var_26 = 5738860745657269531LL;
                arr_15 [i_1] [i_1] = ((/* implicit */unsigned char) (unsigned short)33694);
                arr_16 [i_4] [i_1] [i_1] [i_1] = ((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_1] [i_1 + 2] [i_1]))) >= (9223372036854775807LL));
                var_27 = ((7556178182255794200LL) + (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_1 + 1] [i_1] [i_1 + 2]))));
            }
            for (unsigned short i_5 = 0; i_5 < 22; i_5 += 3) 
            {
                arr_19 [i_1] [i_3] [i_5] = ((/* implicit */_Bool) arr_4 [i_1] [i_1]);
                var_28 = ((/* implicit */long long int) ((1330344410) >> (((17877717869351406955ULL) - (17877717869351406930ULL)))));
            }
            for (unsigned short i_6 = 2; i_6 < 21; i_6 += 3) 
            {
                var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_6 + 1])) ? (arr_6 [i_6 - 2]) : (arr_6 [i_6 - 2]))))));
                arr_22 [i_1] [i_3] [i_1] = (-(var_17));
                var_30 ^= ((/* implicit */unsigned short) ((arr_14 [i_1] [i_3] [i_3]) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)44732)))));
                var_31 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)29133))));
                var_32 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)42)) ? (((/* implicit */long long int) -15863132)) : (arr_18 [2LL] [i_1 + 1])));
            }
            for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
            {
                var_33 = ((((/* implicit */_Bool) (unsigned short)29132)) ? ((~(arr_17 [i_1] [i_3] [i_7 + 1]))) : (((/* implicit */int) var_6)));
                /* LoopSeq 1 */
                for (short i_8 = 0; i_8 < 22; i_8 += 2) 
                {
                    arr_29 [i_1] [i_3] [i_8] [i_8] &= ((/* implicit */long long int) ((unsigned short) var_5));
                    arr_30 [i_1] [i_1] [i_7] [i_8] = ((/* implicit */int) (+(680579564U)));
                }
            }
            var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) 2110033012035992996LL)) && (((/* implicit */_Bool) var_18))));
            var_35 ^= ((/* implicit */short) (~(((/* implicit */int) ((_Bool) (signed char)103)))));
        }
        /* LoopSeq 1 */
        for (int i_9 = 2; i_9 < 19; i_9 += 2) 
        {
            /* LoopSeq 1 */
            for (int i_10 = 0; i_10 < 22; i_10 += 4) 
            {
                var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? ((~(((/* implicit */int) arr_5 [i_9 - 1])))) : ((~(1086248197)))));
                /* LoopSeq 3 */
                for (long long int i_11 = 0; i_11 < 22; i_11 += 1) 
                {
                    arr_38 [i_1] [i_9] [12] [i_11] [i_1] [i_11] = ((/* implicit */unsigned short) ((max((arr_27 [i_1 + 2]), (((/* implicit */unsigned int) (unsigned short)14597)))) << (((/* implicit */int) ((5925071309148676571LL) != (((/* implicit */long long int) 4294967291U)))))));
                    arr_39 [i_1] [i_9] [i_9] [5] [i_9] [i_9] = (+(max(((~(((/* implicit */int) var_0)))), (min((((/* implicit */int) (_Bool)0)), (var_15))))));
                }
                for (long long int i_12 = 0; i_12 < 22; i_12 += 4) 
                {
                    var_37 = ((/* implicit */int) (+(min((((/* implicit */unsigned int) var_2)), (arr_4 [i_1] [i_9 - 2])))));
                    var_38 = ((/* implicit */short) (~(18446744073709551615ULL)));
                    arr_43 [i_1] [i_1] = ((/* implicit */long long int) (~(((unsigned long long int) arr_27 [i_1 + 1]))));
                }
                /* vectorizable */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_14 = 3; i_14 < 18; i_14 += 1) 
                    {
                        var_39 = (unsigned char)245;
                        arr_48 [i_1] [i_9] [i_9] [i_13] [(short)12] = ((arr_27 [i_9 - 2]) - (var_13));
                    }
                    var_40 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) 3341495832U)) <= (arr_47 [i_1] [10U])))) < (1898266630)));
                }
            }
            /* LoopSeq 1 */
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                var_41 = ((/* implicit */_Bool) max((var_41), (((/* implicit */_Bool) (-(((((/* implicit */long long int) ((/* implicit */int) (unsigned short)50933))) + (arr_25 [i_9] [i_9]))))))));
                var_42 &= ((/* implicit */_Bool) min((((((((/* implicit */_Bool) arr_36 [i_1] [i_1] [i_9] [i_15] [i_15])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_17))) << (((5925071309148676565LL) - (5925071309148676557LL))))), (((/* implicit */long long int) ((((4611686018427387904LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)45696))))) >= (((/* implicit */long long int) -259550821)))))));
                var_43 &= ((/* implicit */unsigned short) -763122337934652240LL);
                var_44 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) min((((/* implicit */int) (unsigned short)19840)), (1782519562)))) * (((unsigned int) ((((/* implicit */long long int) arr_37 [i_9 + 2] [i_1] [i_9 + 2] [i_15])) / (arr_25 [i_15] [i_1]))))));
                var_45 = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((arr_8 [i_1 - 1] [i_1 + 2]) > (arr_8 [i_1 + 2] [i_1 + 1])))), (((((/* implicit */_Bool) arr_52 [i_1 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_52 [i_1 + 1]))) : (var_13)))));
            }
            arr_53 [i_1] [18U] [10LL] = ((/* implicit */unsigned long long int) (unsigned short)44725);
        }
        var_46 *= ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)0))));
    }
    for (long long int i_16 = 3; i_16 < 13; i_16 += 1) 
    {
        var_47 = ((/* implicit */unsigned long long int) max((((((/* implicit */int) ((signed char) arr_21 [(_Bool)1] [i_16] [i_16]))) + (((/* implicit */int) arr_51 [i_16] [i_16] [i_16 + 1])))), (((/* implicit */int) arr_35 [i_16] [i_16] [(short)20]))));
        var_48 = ((/* implicit */long long int) arr_10 [i_16] [(_Bool)1]);
        /* LoopSeq 2 */
        for (unsigned short i_17 = 0; i_17 < 15; i_17 += 1) 
        {
            var_49 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)1))));
            arr_61 [i_17] = ((/* implicit */signed char) var_1);
        }
        for (short i_18 = 0; i_18 < 15; i_18 += 3) 
        {
            var_50 = ((/* implicit */short) max((var_50), (((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) -393388809)) ? (-149628063507361168LL) : (149628063507361168LL)))))));
            arr_66 [i_18] [i_16] [i_16] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_10)) != (arr_41 [i_16] [i_16] [14LL] [(unsigned char)10] [i_18] [i_18]))))) != (min((2655096860761415519ULL), (((/* implicit */unsigned long long int) 829199388U)))))))) & ((~(arr_18 [(unsigned char)0] [(unsigned char)0])))));
            arr_67 [i_16] [(short)9] = ((/* implicit */short) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_33 [i_16] [i_16 - 1]))))), (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_16 - 2] [18LL] [(unsigned char)12]))) - (2655096860761415498ULL))) - (((/* implicit */unsigned long long int) ((arr_34 [i_18] [(unsigned short)21]) + (((/* implicit */long long int) 0)))))))));
            arr_68 [(unsigned char)4] = ((/* implicit */_Bool) 6337859692640744836LL);
        }
    }
}
