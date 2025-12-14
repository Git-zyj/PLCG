/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137125
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 24; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        {
                            var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) arr_9 [i_0]))) ? (((/* implicit */int) (short)-12490)) : (((((/* implicit */_Bool) (signed char)-32)) ? (((/* implicit */int) (signed char)-32)) : (((/* implicit */int) (signed char)21))))))) ? (((/* implicit */int) arr_6 [i_2 - 1] [i_2 - 1] [i_2 - 4] [i_2 - 2])) : (var_8)));
                            var_13 = ((/* implicit */unsigned char) (-(min((2147483647), ((~(((/* implicit */int) var_4))))))));
                            /* LoopSeq 3 */
                            for (unsigned int i_4 = 2; i_4 < 22; i_4 += 4) /* same iter space */
                            {
                                var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_4] [i_4 + 1] [i_4 + 1] [i_4 - 1] [i_4 + 2]))) : (var_9)))) ? (max((arr_3 [i_1] [i_1] [i_2 + 1]), (((/* implicit */unsigned long long int) (signed char)21)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_4 - 1] [(short)12] [(short)12])))))))))));
                                var_15 += ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0]))))) % (((int) arr_9 [i_2]))))), (13598418193719534741ULL)));
                            }
                            for (unsigned int i_5 = 2; i_5 < 22; i_5 += 4) /* same iter space */
                            {
                                var_16 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~((-(var_9)))))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) -5991944222330974533LL)))) | (((((/* implicit */_Bool) 699734867U)) ? (((/* implicit */unsigned int) var_5)) : (4060626499U)))))) : (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_2] [i_2] [i_0] [i_0]))) / (var_2)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)30772))) : (((long long int) arr_7 [i_2 - 3] [i_5 + 1]))))));
                                var_17 |= ((/* implicit */long long int) ((int) (short)-26763));
                            }
                            for (unsigned int i_6 = 2; i_6 < 22; i_6 += 4) /* same iter space */
                            {
                                var_18 ^= ((((/* implicit */_Bool) min((-5991944222330974533LL), (6017587740622897635LL)))) ? ((~(((/* implicit */int) (signed char)22)))) : (((/* implicit */int) arr_6 [i_2 - 2] [22] [i_2] [i_2 - 2])));
                                var_19 += ((/* implicit */short) ((int) ((((arr_15 [i_0] [i_1] [(unsigned char)20] [i_3] [i_6]) != (((/* implicit */int) arr_12 [i_0] [i_1] [i_3] [i_6])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_2 - 3] [(signed char)2]))) : (((var_4) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_1] [i_3] [i_6]))))))));
                                var_20 *= ((/* implicit */unsigned short) ((((((((/* implicit */long long int) ((/* implicit */int) (signed char)48))) - (1152921503533105152LL))) - (((/* implicit */long long int) min((((/* implicit */int) (_Bool)1)), (var_5)))))) != (((((/* implicit */_Bool) (~(4060626499U)))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_6 [(_Bool)1] [i_2 - 3] [i_3] [i_2 - 3]), ((signed char)-21))))) : (((long long int) var_0))))));
                                var_21 = ((/* implicit */long long int) ((unsigned int) 2100885745U));
                                var_22 = ((/* implicit */int) max((((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_6])) ? ((~(arr_14 [i_6] [i_1] [i_6] [i_6] [i_6] [i_0]))) : (-2737850998553209880LL))), (((((/* implicit */_Bool) arr_2 [i_2 - 4])) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_17 [i_3])))) : (((long long int) (signed char)84))))));
                            }
                            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_3])) <= (((/* implicit */int) ((signed char) ((signed char) var_8))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned int i_7 = 0; i_7 < 25; i_7 += 4) 
                {
                    arr_20 [i_0] [i_0] [i_1] [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) <= (549755813887LL)))), (((unsigned int) 234340796U))))) ? (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)22)) : (1411336010)))) ? (max((((/* implicit */unsigned int) (unsigned short)42144)), (var_9))) : (min((arr_9 [i_7]), (arr_9 [i_1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 6111282900117789402LL))))))));
                    /* LoopSeq 2 */
                    for (short i_8 = 3; i_8 < 21; i_8 += 4) 
                    {
                        var_24 = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) 3295349883U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (234340797U))));
                        /* LoopSeq 1 */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            arr_27 [i_0] [i_0] [(_Bool)1] [3] [i_0] [i_9] = ((/* implicit */short) ((long long int) ((int) (~(((/* implicit */int) (unsigned short)8338))))));
                            var_25 += ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_11 [i_0] [i_8 + 1] [i_7] [i_8] [i_7])) ? (((/* implicit */long long int) 4060626499U)) : (arr_24 [(_Bool)1] [i_8 - 3] [(_Bool)1] [i_0] [i_8 - 3])))));
                            var_26 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) ((var_4) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)21))) : (arr_23 [i_9] [i_8] [(signed char)2] [i_0] [i_1] [i_0]))))))) ^ (((((/* implicit */_Bool) ((((/* implicit */int) var_11)) ^ (((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) arr_11 [i_0] [i_0] [(_Bool)1] [i_0] [i_0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_1 [i_1])))) : (((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_0]))))));
                            var_27 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [15ULL] [15ULL]))) != (((((/* implicit */unsigned long long int) 0U)) - (4326604302100389406ULL))))) || (((/* implicit */_Bool) arr_19 [i_8] [i_8 - 3] [i_8] [i_8]))));
                            var_28 = ((/* implicit */short) (!(((/* implicit */_Bool) (((_Bool)0) ? (((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [i_8] [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_9))) : (max((arr_9 [i_9]), (((/* implicit */unsigned int) (short)549)))))))));
                        }
                    }
                    for (unsigned char i_10 = 0; i_10 < 25; i_10 += 4) 
                    {
                        /* LoopSeq 4 */
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                        {
                            var_29 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_11))) < (arr_29 [i_10] [i_10] [(short)3] [(short)3] [i_0])));
                            var_30 -= ((/* implicit */int) max((arr_17 [i_10]), (((/* implicit */short) ((unsigned char) var_1)))));
                            var_31 ^= ((/* implicit */signed char) min((((/* implicit */unsigned short) ((_Bool) arr_13 [i_0] [i_10]))), ((unsigned short)65504)));
                        }
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                        {
                            arr_37 [i_12] = ((/* implicit */_Bool) (unsigned char)67);
                            arr_38 [i_7] [16U] [i_7] [i_7] = ((/* implicit */unsigned long long int) (unsigned char)236);
                        }
                        for (unsigned int i_13 = 0; i_13 < 25; i_13 += 4) 
                        {
                            var_32 = ((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_1))))) != (arr_35 [i_0] [i_0] [i_7] [i_10] [i_13])))) : (((var_4) ? ((+(((/* implicit */int) var_3)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)5738)))))))));
                            var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? (((((/* implicit */_Bool) arr_10 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)12))) : (arr_28 [i_0]))) : (((/* implicit */unsigned int) max((778341106), (((/* implicit */int) var_6)))))))) ? (((var_5) - (((/* implicit */int) ((unsigned short) 0LL))))) : (((((int) var_4)) + (((((/* implicit */int) (unsigned char)128)) + (((/* implicit */int) var_0))))))));
                            var_34 = ((/* implicit */unsigned int) (~(min((min((((/* implicit */long long int) var_10)), (-4124197193835598914LL))), (((/* implicit */long long int) ((signed char) var_5)))))));
                        }
                        for (signed char i_14 = 0; i_14 < 25; i_14 += 4) 
                        {
                            var_35 = ((/* implicit */int) ((((/* implicit */_Bool) ((int) var_3))) ? (max((-1714318777454869342LL), (arr_32 [i_0]))) : (((/* implicit */long long int) ((int) max((((/* implicit */signed char) arr_8 [(short)9] [17LL] [(signed char)22] [i_14])), (arr_6 [i_0] [9] [i_0] [i_0])))))));
                            var_36 ^= ((/* implicit */unsigned long long int) (+(min((((((arr_32 [i_1]) + (9223372036854775807LL))) << (((((var_8) + (983049415))) - (21))))), (((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_0] [13U] [i_10] [i_14])) == (-371323083))))))));
                            var_37 = ((/* implicit */_Bool) min((var_37), (((/* implicit */_Bool) arr_44 [i_14] [i_1] [i_1] [i_1] [i_1] [i_10] [i_14]))));
                        }
                        /* LoopSeq 2 */
                        for (int i_15 = 0; i_15 < 25; i_15 += 4) 
                        {
                            var_38 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? ((((_Bool)1) ? (-371323083) : (arr_43 [i_0] [12] [i_7] [i_10] [i_7]))) : ((+(((/* implicit */int) (short)19230))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (~(arr_29 [i_15] [i_10] [i_7] [i_1] [i_0])))))) : (((arr_44 [i_10] [2U] [i_10] [i_10] [i_10] [i_7] [i_1]) * (((/* implicit */unsigned long long int) max((-371323066), (((/* implicit */int) (_Bool)0)))))))));
                            arr_49 [i_0] [i_1] [i_7] [i_10] [i_15] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */short) arr_8 [i_0] [i_0] [i_0] [i_0])), (var_10)))) ? (((((/* implicit */_Bool) arr_10 [i_0] [i_10])) ? (2040288510) : (((/* implicit */int) arr_8 [i_10] [i_1] [i_7] [i_1])))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_6))))));
                        }
                        for (short i_16 = 0; i_16 < 25; i_16 += 4) 
                        {
                            var_39 = ((/* implicit */_Bool) min((var_39), (((/* implicit */_Bool) max((3291972924U), (((((/* implicit */_Bool) ((arr_8 [i_10] [i_1] [i_1] [i_10]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_44 [i_0] [i_0] [i_1] [i_0] [i_1] [13] [i_16])))) ? (364497504U) : (((/* implicit */unsigned int) (-(((/* implicit */int) (short)-5277))))))))))));
                            var_40 = ((/* implicit */int) max((var_40), (((int) arr_30 [i_0] [i_0] [i_0]))));
                            var_41 += ((/* implicit */_Bool) ((signed char) ((int) arr_7 [i_1] [i_16])));
                            var_42 = ((/* implicit */unsigned short) (!(((_Bool) arr_9 [i_0]))));
                        }
                        var_43 &= ((/* implicit */_Bool) ((signed char) -5991944222330974533LL));
                        var_44 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)32))))) ? (((/* implicit */int) max((arr_12 [i_10] [i_7] [i_0] [i_0]), (((/* implicit */unsigned char) arr_13 [i_10] [i_10]))))) : (arr_33 [i_0] [i_0] [i_1] [i_0] [i_1] [i_7] [i_1])));
                        /* LoopSeq 1 */
                        for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
                        {
                            var_45 *= ((/* implicit */unsigned short) arr_9 [i_0]);
                            var_46 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_7] [i_10] [i_7])) ? (((int) arr_15 [i_0] [i_0] [i_7] [i_0] [(short)24])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_46 [i_17 - 1] [i_10])) || (((/* implicit */_Bool) arr_32 [i_1])))))))));
                            var_47 = ((/* implicit */int) (!(((/* implicit */_Bool) max((arr_42 [i_17] [i_17 - 1] [0U]), (((/* implicit */long long int) (signed char)-12)))))));
                        }
                    }
                    var_48 -= ((/* implicit */unsigned char) arr_33 [(signed char)2] [i_1] [(signed char)5] [i_1] [(signed char)2] [i_7] [i_7]);
                    var_49 = ((/* implicit */short) (~(min((((((/* implicit */long long int) var_9)) ^ (arr_32 [15]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_44 [i_0] [i_1] [i_7] [i_1] [i_0] [i_1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_7] [i_7] [i_1] [(signed char)8]))) : (arr_9 [(_Bool)1]))))))));
                }
                var_50 = ((((/* implicit */_Bool) (unsigned short)17)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)27))) : (8229680883738969565ULL));
            }
        } 
    } 
    var_51 ^= ((/* implicit */signed char) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) 2305807824841605120LL))));
    var_52 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)-32)) : (((/* implicit */int) var_6)))))))) % (((/* implicit */int) ((unsigned short) var_3)))));
    var_53 = ((/* implicit */int) max((var_53), (((/* implicit */int) var_10))));
}
