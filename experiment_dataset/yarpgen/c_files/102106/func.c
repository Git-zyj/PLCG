/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102106
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
    var_20 *= ((/* implicit */short) var_18);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_21 -= ((/* implicit */_Bool) (short)-2933);
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (short i_2 = 2; i_2 < 24; i_2 += 3) 
            {
                /* LoopSeq 1 */
                for (long long int i_3 = 2; i_3 < 22; i_3 += 2) 
                {
                    arr_10 [i_0] [i_2] [i_3] [i_3 - 1] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_2 - 2])) + (((/* implicit */int) (((+(((/* implicit */int) (_Bool)0)))) == ((~(((/* implicit */int) (unsigned short)22)))))))));
                    arr_11 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) min(((~((~(var_19))))), (((/* implicit */unsigned int) (unsigned short)22))));
                }
                var_22 ^= ((/* implicit */unsigned long long int) ((((4294967291U) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)109))))) != (((/* implicit */unsigned int) (~(0))))));
            }
            var_23 *= ((/* implicit */short) ((((var_7) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)42249))))) ? ((+(((((/* implicit */_Bool) var_4)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))) : (((/* implicit */long long int) min((((/* implicit */int) (unsigned char)17)), (((((/* implicit */_Bool) 1)) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_1] [i_1])) : (((/* implicit */int) (short)-24672)))))))));
            /* LoopSeq 1 */
            for (unsigned char i_4 = 3; i_4 < 22; i_4 += 1) 
            {
                /* LoopSeq 4 */
                for (unsigned int i_5 = 0; i_5 < 25; i_5 += 4) 
                {
                    var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) (+((+(((var_17) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))))));
                    var_25 = ((((/* implicit */_Bool) ((((((/* implicit */int) (short)-16384)) + (2147483647))) >> (((((/* implicit */int) (unsigned short)23287)) - (23280)))))) ? (((arr_13 [i_4 - 1] [i_4 - 3] [i_4 + 2]) << (((var_4) + (3247326031315669857LL))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_4] [i_4] [i_4 - 2] [i_4])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_6 [i_4] [i_4] [i_4 + 1] [i_4 + 1]))))));
                }
                for (unsigned char i_6 = 1; i_6 < 24; i_6 += 2) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        arr_21 [i_0] [i_1] [i_1] [i_1] [i_0] [i_7] = ((/* implicit */unsigned char) min((((/* implicit */long long int) (~(((/* implicit */int) arr_5 [i_6 - 1]))))), (min((-7141423467456092508LL), (((/* implicit */long long int) (unsigned char)236))))));
                        var_26 -= ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)42220)) + (((/* implicit */int) (_Bool)1))));
                    }
                    var_27 = ((/* implicit */unsigned char) (_Bool)1);
                }
                for (unsigned long long int i_8 = 0; i_8 < 25; i_8 += 3) 
                {
                    arr_24 [i_8] [i_4] [i_1] [i_8] = ((/* implicit */unsigned char) ((max((((/* implicit */int) (_Bool)1)), (-370833670))) ^ (((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) arr_3 [i_8] [i_4 + 2] [i_4])))))));
                    var_28 += ((/* implicit */unsigned long long int) arr_1 [i_0]);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 25; i_9 += 4) 
                    {
                        arr_27 [i_0] [i_8] [i_1] [i_1] [i_8] [i_9] [i_1] = ((/* implicit */unsigned short) ((int) ((var_19) + (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_0] [i_8] [i_4 - 3] [i_8] [i_9]))))));
                        arr_28 [i_4] [i_8] = ((/* implicit */unsigned long long int) arr_4 [i_0]);
                        arr_29 [i_4] [i_4] [i_9] [i_8] [i_8] = ((/* implicit */_Bool) ((int) (((_Bool)1) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))));
                    }
                    arr_30 [i_8] [i_4 + 1] [i_1] [i_8] = ((/* implicit */unsigned int) min((max((((/* implicit */unsigned long long int) arr_13 [i_1] [i_1] [i_8])), ((+(var_17))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_17 [i_0] [i_1] [i_4 - 2] [i_8])))))));
                }
                for (unsigned int i_10 = 1; i_10 < 21; i_10 += 2) 
                {
                    arr_34 [i_10] = ((/* implicit */unsigned char) (+((+(((/* implicit */int) ((var_19) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_0] [i_1] [i_4 + 3] [i_10 - 1] [i_10 - 1]))))))))));
                    /* LoopSeq 3 */
                    for (int i_11 = 0; i_11 < 25; i_11 += 3) 
                    {
                        var_29 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) arr_20 [i_4 + 2]))) ? ((+(((/* implicit */int) (short)32767)))) : (((((/* implicit */int) var_6)) << (((/* implicit */int) var_9))))));
                        arr_37 [i_11] [i_11] [i_11] [i_10 + 3] [i_11] = ((/* implicit */_Bool) ((long long int) ((unsigned int) 10452392974697636770ULL)));
                        var_30 = (i_11 % 2 == zero) ? (((/* implicit */signed char) ((((var_17) >> (((((((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_11] [i_4 - 2]))) | (arr_20 [i_0]))) - (184450152U))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_4 - 1] [i_4 - 2] [i_10 - 1])) ? (((/* implicit */int) arr_8 [i_4 - 1] [i_4 - 2] [i_10 - 1])) : (((/* implicit */int) arr_8 [i_4 - 1] [i_4 - 2] [i_10 - 1])))))))) : (((/* implicit */signed char) ((((var_17) >> (((((((((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_11] [i_4 - 2]))) | (arr_20 [i_0]))) - (184450152U))) - (4110517063U))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_4 - 1] [i_4 - 2] [i_10 - 1])) ? (((/* implicit */int) arr_8 [i_4 - 1] [i_4 - 2] [i_10 - 1])) : (((/* implicit */int) arr_8 [i_4 - 1] [i_4 - 2] [i_10 - 1]))))))));
                        arr_38 [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) arr_14 [i_10 + 3] [i_1] [i_10 + 3] [i_4] [i_11]))) ? (min((min((3681398817U), (((/* implicit */unsigned int) var_16)))), (min((var_19), (((/* implicit */unsigned int) arr_35 [i_4 + 2] [i_11] [i_4 + 1] [i_4 - 3] [i_4])))))) : (((/* implicit */unsigned int) min((((/* implicit */int) arr_8 [i_4] [i_4] [i_4 - 1])), (((((/* implicit */_Bool) 7994351099011914821ULL)) ? (((/* implicit */int) (short)32746)) : (((/* implicit */int) (unsigned short)39591)))))))));
                        var_31 += ((/* implicit */unsigned int) (+(min((var_11), (((/* implicit */long long int) ((arr_3 [i_0] [i_0] [i_0]) / (((/* implicit */unsigned int) ((/* implicit */int) (short)-8174))))))))));
                    }
                    for (unsigned long long int i_12 = 1; i_12 < 24; i_12 += 4) 
                    {
                        arr_42 [i_0] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(4095)))) ? (arr_4 [i_4 - 1]) : ((+(((/* implicit */int) (short)-24685))))));
                        arr_43 [i_0] [i_1] [i_4 - 3] [i_4 - 3] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))) * (min((max((var_14), (((/* implicit */unsigned int) 1925460869)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 17U)) ? (((/* implicit */int) var_0)) : (-370833646))))))));
                    }
                    for (long long int i_13 = 0; i_13 < 25; i_13 += 3) 
                    {
                        arr_48 [i_0] [i_1] [i_4] [i_10] [i_4] [i_4 - 3] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_1] [i_1] [i_4 + 3] [i_10 + 2] [i_13]))) != (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_46 [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (short)32767))) : (var_11)))), (min((((/* implicit */unsigned long long int) 0U)), (18446744073709551615ULL)))))));
                        arr_49 [i_0] [i_1] [i_0] [i_10] [i_10] [i_13] [i_13] = ((/* implicit */short) max((((/* implicit */unsigned long long int) min((arr_0 [i_4 - 3]), (arr_0 [i_4 - 1])))), (((((18446744073709551615ULL) * (((/* implicit */unsigned long long int) var_13)))) | (((/* implicit */unsigned long long int) ((var_4) | (var_4))))))));
                    }
                    var_32 -= ((/* implicit */unsigned char) 370833669);
                    var_33 = ((/* implicit */unsigned int) (unsigned short)42220);
                }
                /* LoopSeq 2 */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    arr_52 [i_0] [i_1] [i_4 + 1] [i_14] = ((/* implicit */unsigned char) max(((unsigned short)65535), (((/* implicit */unsigned short) (_Bool)1))));
                    /* LoopSeq 2 */
                    for (unsigned int i_15 = 0; i_15 < 25; i_15 += 3) /* same iter space */
                    {
                        arr_55 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (~(arr_12 [i_4])));
                        arr_56 [i_0] [i_1] [i_4 - 1] [i_14] [i_15] = ((/* implicit */signed char) ((((/* implicit */long long int) (+(1925460862)))) ^ (((((/* implicit */_Bool) 2147483647)) ? (arr_31 [i_4] [i_4 - 3] [i_4 - 1] [i_4 + 3] [i_4 + 2]) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))));
                    }
                    for (unsigned int i_16 = 0; i_16 < 25; i_16 += 3) /* same iter space */
                    {
                        var_34 += ((/* implicit */unsigned char) 4294967292U);
                        var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_44 [i_0] [i_0] [i_4] [i_4] [i_16]))) ? (var_16) : (((/* implicit */int) var_15))))) ? (((unsigned long long int) (short)-32754)) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)2048)))))));
                    }
                    arr_59 [i_0] [i_1] [i_0] [i_14] = ((/* implicit */unsigned long long int) min(((~((~(var_14))))), (((/* implicit */unsigned int) (unsigned short)55760))));
                    arr_60 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) (!((_Bool)1)));
                }
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    arr_63 [i_0] [i_1] [i_4] [i_17] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) arr_22 [i_0] [i_1] [i_1] [i_4] [i_17])) != (((/* implicit */int) (signed char)127)))))))) ? (((unsigned int) ((4271415766U) % (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                    /* LoopSeq 1 */
                    for (unsigned int i_18 = 2; i_18 < 21; i_18 += 4) 
                    {
                        var_36 -= ((/* implicit */unsigned char) arr_13 [i_0] [i_0] [i_18]);
                        var_37 &= ((/* implicit */short) (+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)5460)) : (((/* implicit */int) (signed char)125))))));
                        arr_68 [i_0] [i_18 + 2] [i_4] [i_4] [i_1] [i_0] = ((/* implicit */_Bool) ((((arr_64 [i_0] [i_18 + 4] [i_18] [i_18 + 1] [i_18]) >> (0U))) * (((arr_64 [i_1] [i_18 - 1] [i_18 + 3] [i_18] [i_18 + 2]) ^ (arr_64 [i_4] [i_18 + 2] [i_18 + 2] [i_18] [i_18 - 1])))));
                    }
                }
            }
            arr_69 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((unsigned short) var_8))), (max((((/* implicit */unsigned int) (unsigned char)196)), (var_8)))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)122))))) : ((+(min((((/* implicit */unsigned long long int) (signed char)123)), (var_7)))))));
        }
        arr_70 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) (unsigned short)39586))) ? ((~(arr_16 [i_0]))) : (((((/* implicit */_Bool) (signed char)127)) ? (arr_16 [i_0]) : (arr_16 [i_0])))));
    }
    var_38 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_2)))) : (((unsigned int) var_11))))) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
}
