/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137780
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
    for (long long int i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        var_20 -= ((/* implicit */unsigned int) var_4);
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            arr_4 [i_1] = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(short)9] [i_1]))) <= (var_13)))), (var_19)));
            var_21 = ((/* implicit */unsigned int) min((var_6), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_1])) || (((/* implicit */_Bool) arr_3 [i_1])))))));
            var_22 = ((/* implicit */unsigned short) min((var_22), (var_6)));
        }
        for (unsigned char i_2 = 0; i_2 < 22; i_2 += 1) 
        {
            arr_7 [(unsigned short)7] [i_0] = ((/* implicit */unsigned char) max((3800674621U), (((/* implicit */unsigned int) (signed char)-41))));
            var_23 -= ((/* implicit */unsigned char) min(((-(((long long int) var_8)))), (((/* implicit */long long int) (+(((((/* implicit */_Bool) var_15)) ? (arr_5 [(signed char)19]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [6U]))))))))));
            arr_8 [i_0] = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((var_3) + (((/* implicit */long long int) ((/* implicit */int) (short)-20411)))))) ? (var_13) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)20420))))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_3 [0LL])))))));
        }
        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_18)) + (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) (short)-22073)))))))) ? (((long long int) (~(((/* implicit */int) arr_3 [(signed char)8]))))) : (((/* implicit */long long int) ((/* implicit */int) (((!(((/* implicit */_Bool) var_8)))) && (((/* implicit */_Bool) var_15))))))));
    }
    for (signed char i_3 = 0; i_3 < 24; i_3 += 1) 
    {
        arr_11 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_3]))))) ? (1795371096690473031ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_3])))))) ? (((((/* implicit */_Bool) arr_10 [i_3])) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) (unsigned char)29)))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 494292699U)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)32))) : (36028788429029376LL))))));
        /* LoopSeq 1 */
        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 2) 
        {
            /* LoopSeq 2 */
            for (int i_5 = 0; i_5 < 24; i_5 += 4) 
            {
                /* LoopSeq 3 */
                for (int i_6 = 1; i_6 < 22; i_6 += 4) /* same iter space */
                {
                    var_25 += ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_11))));
                    var_26 = ((/* implicit */unsigned char) (~((+(max((var_3), (var_17)))))));
                    arr_21 [i_3] [i_4] [i_4] [i_6] = ((/* implicit */unsigned long long int) 36028788429029376LL);
                    var_27 = ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((int) (-(36028788429029378LL))))) : ((-(((((/* implicit */_Bool) var_8)) ? (var_10) : (var_16))))));
                }
                for (int i_7 = 1; i_7 < 22; i_7 += 4) /* same iter space */
                {
                    var_28 ^= var_18;
                    var_29 += ((/* implicit */signed char) ((((((/* implicit */_Bool) var_19)) && (((/* implicit */_Bool) max((16651372977019078583ULL), (((/* implicit */unsigned long long int) var_0))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)72)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_19 [i_3] [i_4] [i_7 - 1])), ((unsigned short)65531))))) : (((((/* implicit */_Bool) var_19)) ? (var_17) : (((/* implicit */long long int) 3800674621U)))))) : (((/* implicit */long long int) ((/* implicit */int) var_11)))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (signed char i_8 = 0; i_8 < 24; i_8 += 4) 
                    {
                        var_30 *= ((/* implicit */signed char) ((((/* implicit */int) arr_12 [i_7 + 2])) - (((/* implicit */int) arr_27 [i_3] [i_3] [i_5] [i_7 + 2] [i_7 - 1]))));
                        var_31 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_27 [i_3] [(signed char)10] [i_7 - 1] [i_7] [i_7])) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_15)))));
                        arr_29 [i_8] [(signed char)4] [(signed char)4] [i_8] [10U] [i_8] = ((/* implicit */unsigned int) ((arr_25 [i_7 + 2] [i_7] [(unsigned char)13] [i_7]) >= (arr_25 [i_7 + 2] [i_7] [i_7] [i_7 + 2])));
                        var_32 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? ((~(((/* implicit */int) (unsigned char)11)))) : (-1429925294)));
                    }
                    for (signed char i_9 = 2; i_9 < 23; i_9 += 4) 
                    {
                        var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) var_17))));
                        arr_34 [i_4] [i_4] = ((/* implicit */long long int) ((((unsigned int) -8098868275992994462LL)) << (((max((((/* implicit */unsigned int) (signed char)105)), (4294967295U))) - (4294967286U)))));
                        var_34 = ((/* implicit */long long int) min((var_34), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_9] [i_9] [i_9 + 1] [i_9] [i_9] [i_9])) ? (((/* implicit */int) ((4294967287U) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)115)))))) : (((/* implicit */int) ((short) arr_26 [i_7] [i_7] [(short)23] [i_7] [i_9])))))) ? (((long long int) 1151795604700004352ULL)) : (((/* implicit */long long int) (~(((unsigned int) arr_26 [i_9] [(unsigned char)5] [i_9] [i_9] [i_9])))))))));
                    }
                    for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                    {
                        var_35 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) 4294967295U)), (0LL)))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -36028788429029376LL)) ? ((-(8U))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)31679))))))));
                        arr_37 [i_3] [i_3] [i_3] [(unsigned short)3] [i_3] = ((/* implicit */short) min((((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (var_13)))))), (((((/* implicit */_Bool) ((unsigned int) 4294967287U))) || (((/* implicit */_Bool) var_3))))));
                        arr_38 [i_10] [i_7] [i_5] [i_3] [i_3] [i_3] = ((/* implicit */long long int) ((unsigned long long int) min((((((/* implicit */_Bool) arr_24 [i_7])) ? (-6115603400719897526LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)15))))), (((((/* implicit */_Bool) (signed char)103)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_3] [i_4] [i_7] [i_10] [i_3] [i_5]))))))));
                        var_36 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */unsigned long long int) 17U)) * (18446744073708503040ULL))))) : (((((/* implicit */_Bool) var_12)) ? (((var_16) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_4]))))) : (((/* implicit */unsigned long long int) ((unsigned int) arr_12 [i_7])))))));
                    }
                    for (int i_11 = 3; i_11 < 20; i_11 += 4) 
                    {
                        arr_41 [i_3] [i_4] [i_5] [i_7] [i_7] [i_11] = ((/* implicit */unsigned char) var_9);
                        arr_42 [i_3] [i_3] [4] [i_3] [i_3] = ((/* implicit */signed char) max((36028788429029359LL), (min((((((/* implicit */_Bool) var_15)) ? (var_19) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_3] [i_4] [i_5] [(signed char)20]))))), (((var_5) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned char i_12 = 0; i_12 < 24; i_12 += 3) 
                    {
                        var_37 = ((/* implicit */signed char) max((6115603400719897525LL), (36028788429029359LL)));
                        var_38 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 581443806)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-70))) : (var_14)))) ? (max((((/* implicit */unsigned long long int) var_8)), (var_16))) : (((/* implicit */unsigned long long int) min((4294967294U), (((/* implicit */unsigned int) var_4)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_33 [(short)13] [i_7] [i_7 + 2] [i_7 + 1] [i_7 - 1] [(unsigned char)0])), (arr_30 [i_12] [i_7] [i_7 + 1] [i_7 + 2] [i_7 + 1] [i_4]))))) : (min((max((var_13), (((/* implicit */unsigned long long int) 6115603400719897526LL)))), (((/* implicit */unsigned long long int) arr_9 [i_5]))))));
                    }
                    for (signed char i_13 = 2; i_13 < 23; i_13 += 3) 
                    {
                        var_39 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) arr_40 [i_3] [i_4] [i_5] [(unsigned char)18] [i_13])), (var_9))) % (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_7] [i_13 + 1] [i_13 + 1] [(short)19] [i_13 - 2] [i_13])))))), ((+(((var_13) / (((/* implicit */unsigned long long int) var_14))))))));
                        var_40 = ((/* implicit */short) max(((-(var_9))), (max((8796093022192LL), (-239342318671575174LL)))));
                    }
                    var_41 = ((/* implicit */short) 0ULL);
                }
                /* vectorizable */
                for (int i_14 = 1; i_14 < 22; i_14 += 4) /* same iter space */
                {
                    arr_51 [i_14] [i_3] [6ULL] [(signed char)16] [6ULL] = ((/* implicit */unsigned int) var_11);
                    var_42 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? ((+(((/* implicit */int) var_15)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
                }
                var_43 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) var_6))) ? ((+(((/* implicit */int) arr_30 [(unsigned char)4] [i_4] [i_4] [i_4] [i_3] [i_3])))) : (var_4)));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned long long int i_15 = 0; i_15 < 24; i_15 += 1) /* same iter space */
                {
                    arr_54 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)90)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_48 [i_3]))))) : ((~(var_13)))));
                    var_44 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_47 [i_3] [i_4] [(_Bool)1] [i_15] [i_15] [i_15])) ? (arr_47 [i_15] [i_15] [i_5] [i_15] [i_4] [i_15]) : (((/* implicit */unsigned int) var_4))));
                    arr_55 [i_5] [i_4] [i_15] [i_15] = ((/* implicit */signed char) arr_26 [i_3] [i_3] [i_5] [(short)22] [i_15]);
                }
                /* vectorizable */
                for (unsigned long long int i_16 = 0; i_16 < 24; i_16 += 1) /* same iter space */
                {
                    arr_58 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */_Bool) (+(((((/* implicit */int) var_6)) * (((/* implicit */int) arr_26 [i_3] [i_4] [(unsigned short)11] [5LL] [(signed char)15]))))));
                    var_45 *= ((/* implicit */unsigned char) ((var_9) != (((((/* implicit */_Bool) var_9)) ? (arr_13 [i_3]) : (((/* implicit */long long int) ((/* implicit */int) (short)-1)))))));
                    arr_59 [i_3] [i_16] [i_4] [i_4] [i_3] = ((/* implicit */_Bool) ((var_3) + (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_1))))));
                    arr_60 [i_3] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) 4294967285U)) ? (var_3) : (((/* implicit */long long int) var_0))))));
                }
                for (unsigned long long int i_17 = 0; i_17 < 24; i_17 += 1) /* same iter space */
                {
                    var_46 = ((/* implicit */signed char) max((var_3), (((long long int) ((((/* implicit */int) arr_62 [(_Bool)1] [(unsigned short)14] [i_5] [i_17])) & (((/* implicit */int) var_12)))))));
                    var_47 += ((/* implicit */signed char) var_12);
                }
            }
            for (signed char i_18 = 4; i_18 < 22; i_18 += 1) 
            {
                var_48 = ((/* implicit */signed char) arr_57 [i_18 + 1] [i_18 - 2] [i_18 + 1] [i_18 + 1]);
                arr_65 [i_3] [i_3] [i_18] [i_18] = ((/* implicit */unsigned int) var_5);
            }
            arr_66 [i_3] [i_4] = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((unsigned char) arr_47 [i_4] [i_4] [i_3] [i_3] [1ULL] [i_3]))), (min((((/* implicit */long long int) (signed char)-127)), (((((/* implicit */long long int) ((/* implicit */int) (signed char)34))) / (8796093022212LL)))))));
        }
    }
    for (short i_19 = 0; i_19 < 11; i_19 += 1) 
    {
        arr_70 [i_19] [i_19] = ((/* implicit */unsigned short) max((((/* implicit */long long int) 536869888U)), (((long long int) (unsigned char)141))));
        var_49 = ((/* implicit */short) min((((((arr_13 [(signed char)17]) | (((/* implicit */long long int) ((/* implicit */int) arr_40 [i_19] [i_19] [i_19] [i_19] [i_19]))))) ^ (((/* implicit */long long int) (~(-1442063711)))))), (((arr_15 [i_19] [i_19] [i_19] [i_19]) / (((((/* implicit */_Bool) var_4)) ? (arr_22 [i_19] [i_19] [i_19] [i_19] [i_19]) : (var_3)))))));
        arr_71 [i_19] [i_19] = ((/* implicit */unsigned char) min((((/* implicit */int) arr_49 [i_19] [i_19] [i_19] [i_19] [i_19])), ((~(((int) arr_50 [(unsigned short)14] [i_19] [i_19] [i_19] [i_19] [i_19]))))));
        var_50 = ((/* implicit */unsigned char) min((var_50), (((/* implicit */unsigned char) (-((-(max((((/* implicit */unsigned long long int) arr_39 [i_19] [i_19])), (var_16))))))))));
    }
    var_51 = max((var_9), (var_9));
    var_52 = ((_Bool) ((((((/* implicit */int) var_1)) + (2147483647))) << (((((long long int) 3286193724U)) - (3286193724LL)))));
    var_53 = var_5;
    var_54 = ((/* implicit */_Bool) (((((((-(((/* implicit */int) var_6)))) + (2147483647))) << ((((((-(((/* implicit */int) (signed char)77)))) + (99))) - (22))))) / (((/* implicit */int) var_8))));
}
