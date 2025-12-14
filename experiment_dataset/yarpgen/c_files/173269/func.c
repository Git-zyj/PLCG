/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173269
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
    var_20 = ((/* implicit */_Bool) var_10);
    var_21 += ((/* implicit */long long int) ((7750177917707834113LL) > (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) 3537217747U)) : (((((/* implicit */_Bool) (unsigned short)37120)) ? (min((var_7), (var_5))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) (short)19756)), (var_12))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_2 [i_0])) ^ (18446744073709551615ULL)))) ? (((((/* implicit */int) (short)20296)) / (((/* implicit */int) var_4)))) : ((+(((/* implicit */int) (unsigned short)37120))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8170273135054064806ULL)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)117)))));
    }
    for (unsigned int i_1 = 1; i_1 < 24; i_1 += 1) /* same iter space */
    {
        var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_1])) + (((/* implicit */int) arr_4 [i_1] [i_1])))))));
        var_25 = ((/* implicit */_Bool) ((((((((/* implicit */unsigned int) var_12)) <= (3380079874U))) && (((/* implicit */_Bool) ((long long int) (unsigned char)125))))) ? (((/* implicit */int) ((((/* implicit */int) arr_4 [i_1] [i_1 - 1])) != (((/* implicit */int) arr_4 [i_1] [i_1 + 1]))))) : (max((((/* implicit */int) (signed char)69)), (777474237)))));
        var_26 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_1]))) % (((((/* implicit */_Bool) 3582723143U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)82))) : (14439258571419458168ULL)))));
    }
    /* vectorizable */
    for (unsigned int i_2 = 1; i_2 < 24; i_2 += 1) /* same iter space */
    {
        arr_8 [i_2] = ((/* implicit */_Bool) (+((~(var_15)))));
        /* LoopSeq 2 */
        for (long long int i_3 = 0; i_3 < 25; i_3 += 4) /* same iter space */
        {
            arr_12 [i_2] [i_2] [(short)18] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) / (((/* implicit */int) (_Bool)1))));
            arr_13 [9] [9] = ((/* implicit */short) 712244152U);
            var_27 = ((/* implicit */unsigned int) ((-4573867229179480567LL) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
        }
        for (long long int i_4 = 0; i_4 < 25; i_4 += 4) /* same iter space */
        {
            var_28 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) >= (((((/* implicit */_Bool) 10276470938655486809ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (3582723143U)))));
            /* LoopSeq 4 */
            for (unsigned short i_5 = 1; i_5 < 21; i_5 += 3) 
            {
                arr_18 [i_2] [i_4] [i_5 + 3] [i_2] = ((((/* implicit */_Bool) arr_5 [i_2 - 1])) ? ((((_Bool)0) ? (((/* implicit */int) var_0)) : (arr_10 [i_4]))) : (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) arr_7 [i_2 + 1] [i_2 - 1]))))));
                var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) (short)-5020)) ? (((/* implicit */int) arr_14 [i_2 + 1] [i_2 + 1] [16U])) : (((/* implicit */int) (_Bool)0)))) : ((~(((/* implicit */int) arr_5 [i_2 - 1]))))));
                /* LoopSeq 1 */
                for (int i_6 = 3; i_6 < 22; i_6 += 4) 
                {
                    var_30 ^= ((/* implicit */int) ((unsigned char) ((arr_20 [i_6] [i_6] [i_5] [16LL] [i_2 - 1]) ? (((/* implicit */int) var_11)) : (var_14))));
                    var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(712244152U)))) ? (arr_6 [i_4] [i_6 - 1]) : (((1684073711556637942ULL) | (((/* implicit */unsigned long long int) 614887387547680384LL))))));
                    arr_21 [i_2] [i_4] [i_5] [i_6] [i_5] [10ULL] = ((/* implicit */unsigned char) ((unsigned int) (_Bool)1));
                }
            }
            for (unsigned int i_7 = 0; i_7 < 25; i_7 += 3) 
            {
                var_32 = var_4;
                var_33 ^= ((/* implicit */unsigned int) ((unsigned long long int) (_Bool)1));
                var_34 ^= ((/* implicit */long long int) arr_22 [i_2] [i_2] [16] [i_2]);
            }
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                var_35 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 33554176)) ? (((/* implicit */int) (short)14950)) : (((/* implicit */int) (_Bool)1))));
                arr_28 [i_4] [i_2] = ((/* implicit */short) (-(1086075108U)));
                var_36 += (_Bool)1;
            }
            for (unsigned long long int i_9 = 0; i_9 < 25; i_9 += 3) 
            {
                var_37 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) var_6)) << (((((/* implicit */int) (short)32705)) - (32687))))))));
                var_38 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((((/* implicit */_Bool) arr_11 [i_2])) ? (((/* implicit */int) arr_23 [i_4])) : (((/* implicit */int) (short)24330)))) : (((((/* implicit */_Bool) 3564327697U)) ? (((/* implicit */int) var_6)) : (var_12)))));
                var_39 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-8416)) ? (3736103616513763354ULL) : (((/* implicit */unsigned long long int) 0))));
                arr_32 [i_2] [i_4] = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) (short)-25325)) : (-536870912)));
            }
            /* LoopSeq 2 */
            for (long long int i_10 = 1; i_10 < 22; i_10 += 3) 
            {
                var_40 ^= ((/* implicit */unsigned char) (short)-21937);
                var_41 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (_Bool)0)) : ((-2147483647 - 1))));
                arr_35 [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4379910614311686668ULL)) ? (((/* implicit */int) arr_20 [3] [(short)10] [(short)10] [(short)10] [i_10])) : (((/* implicit */int) arr_24 [i_2] [i_4] [i_10 + 3]))))) * (211106232532992ULL)));
                /* LoopNest 2 */
                for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                {
                    for (unsigned int i_12 = 3; i_12 < 22; i_12 += 2) 
                    {
                        {
                            var_42 += ((/* implicit */_Bool) (((((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-25325))) : (5414036021388542497ULL))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_2 + 1])) ? (var_19) : (((/* implicit */int) arr_11 [i_10 + 3])))))));
                            var_43 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [i_2])) << ((((-(((/* implicit */int) (unsigned short)48774)))) + (48793)))));
                            var_44 = ((/* implicit */signed char) (~(((((/* implicit */int) var_6)) | (((/* implicit */int) (signed char)11))))));
                        }
                    } 
                } 
                arr_40 [i_2] [22U] [i_2] [(_Bool)1] = ((/* implicit */unsigned int) ((long long int) (!(((/* implicit */_Bool) (short)-25324)))));
            }
            for (unsigned int i_13 = 0; i_13 < 25; i_13 += 3) 
            {
                var_45 = ((/* implicit */int) arr_22 [1LL] [i_4] [5] [i_4]);
                var_46 = ((/* implicit */signed char) (+(((/* implicit */int) (_Bool)1))));
            }
        }
        var_47 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [(signed char)3])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)25324)) / (((/* implicit */int) var_0))))) : (((((/* implicit */_Bool) -3946379654184454751LL)) ? (arr_27 [i_2] [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
        var_48 = ((/* implicit */unsigned char) arr_10 [i_2]);
        arr_45 [i_2] [i_2] = ((((/* implicit */_Bool) (short)-731)) && (((/* implicit */_Bool) (-9223372036854775807LL - 1LL))));
    }
}
