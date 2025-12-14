/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133982
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
    var_13 = ((/* implicit */long long int) max((((/* implicit */unsigned int) var_9)), (var_10)));
    var_14 = ((/* implicit */long long int) var_6);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    arr_7 [i_2] = ((/* implicit */short) (~(var_9)));
                    arr_8 [i_2] [i_2] [i_2] [i_0] = 1040187392;
                    var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) (!(((/* implicit */_Bool) max((min((17027667386291390275ULL), (var_12))), ((~(var_2)))))))))));
                }
                /* vectorizable */
                for (unsigned long long int i_3 = 1; i_3 < 9; i_3 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 1) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 4) 
                        {
                            {
                                arr_21 [i_0] [i_4] [i_0] [i_4] [(short)0] [i_3] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (1419076687418161340ULL) : (var_12)));
                                arr_22 [i_0] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) 5475836727514307965ULL))));
                                var_16 &= ((/* implicit */long long int) ((var_12) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1)))))));
                                var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) var_5))));
                            }
                        } 
                    } 
                    arr_23 [6ULL] [i_0] |= ((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)1)) <= (var_0))) ? (((long long int) (_Bool)1)) : (((/* implicit */long long int) 10))));
                    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_0) : (((/* implicit */int) var_7))));
                    arr_24 [i_3] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7))));
                }
                for (long long int i_6 = 3; i_6 < 11; i_6 += 1) 
                {
                    var_19 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -11)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((var_11), (((/* implicit */long long int) var_10))))) && (((/* implicit */_Bool) min((var_0), (3)))))))) : (min((1099510579200LL), (((/* implicit */long long int) var_0))))));
                    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((/* implicit */long long int) -10)) | (8523110042545364123LL))))));
                    var_21 += ((/* implicit */unsigned int) min((min((((/* implicit */unsigned long long int) (short)32767)), (((((/* implicit */_Bool) -1314365808)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_9)) <= (var_5)))), ((((_Bool)0) ? (-5477091774934104488LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
                }
                var_22 = ((/* implicit */_Bool) (-((+(((/* implicit */int) (unsigned char)0))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (short i_7 = 2; i_7 < 22; i_7 += 4) 
    {
        /* LoopNest 3 */
        for (int i_8 = 3; i_8 < 22; i_8 += 4) 
        {
            for (long long int i_9 = 0; i_9 < 24; i_9 += 1) 
            {
                for (short i_10 = 2; i_10 < 22; i_10 += 4) 
                {
                    {
                        arr_42 [i_7] [i_8] [i_8] [i_10] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)167))));
                        /* LoopSeq 3 */
                        for (unsigned int i_11 = 0; i_11 < 24; i_11 += 2) 
                        {
                            var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((/* implicit */_Bool) (-(var_6)))) ? (min((((/* implicit */unsigned long long int) (-(var_8)))), (1010376233437860261ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)223))))))));
                            arr_45 [14LL] [i_8] = ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))));
                        }
                        for (long long int i_12 = 2; i_12 < 22; i_12 += 1) /* same iter space */
                        {
                            var_24 -= min((((/* implicit */unsigned long long int) min((((/* implicit */int) var_4)), (((((/* implicit */_Bool) var_4)) ? (var_0) : (((/* implicit */int) (short)-24012))))))), (((((/* implicit */_Bool) (~(var_6)))) ? ((+(var_12))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))));
                            var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (((_Bool)1) ? (2558593142892162007ULL) : (((/* implicit */unsigned long long int) var_11))))))))));
                            arr_49 [i_7] [9ULL] [i_9] [i_7] [i_12] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (unsigned char)253)), ((((_Bool)1) ? (1153786234U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)24035)))))));
                            arr_50 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_7)), (var_2)))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) var_4)), (var_6)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (var_2))))), (var_3)));
                            var_26 -= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */short) max(((unsigned char)226), ((unsigned char)223)))), ((short)24047)))) ? (min((((/* implicit */int) var_4)), (((((/* implicit */_Bool) 7475891893026118639ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)24063)))))) : ((~(((/* implicit */int) (unsigned char)33))))));
                        }
                        for (long long int i_13 = 2; i_13 < 22; i_13 += 1) /* same iter space */
                        {
                            arr_53 [i_7] [i_9] [i_13] [i_10] [i_13] [i_7] = ((/* implicit */unsigned int) max(((-(10970852180683432976ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-23983))) <= (7560647147953331899ULL)))), (6U))))));
                            arr_54 [i_7] [2ULL] [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) (short)23983)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)64))));
                        }
                        /* LoopSeq 3 */
                        for (unsigned char i_14 = 0; i_14 < 24; i_14 += 4) 
                        {
                            arr_59 [i_7 + 2] [16U] = ((/* implicit */_Bool) ((unsigned char) var_0));
                            var_27 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (~(1242149590U)))), (max((((/* implicit */unsigned long long int) (_Bool)1)), (var_12)))));
                        }
                        for (short i_15 = 3; i_15 < 22; i_15 += 4) 
                        {
                            arr_63 [i_15] [i_10] [i_15] = 20U;
                            arr_64 [i_7 + 2] [i_10 + 2] [i_7 + 2] [i_7 + 2] [i_10 + 2] [i_15] [i_7 + 2] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 1301761927)) || (((/* implicit */_Bool) (short)0)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : (((/* implicit */int) min((var_7), (((/* implicit */short) (unsigned char)33)))))));
                            var_28 += ((/* implicit */_Bool) var_1);
                            arr_65 [i_15] [i_8] = ((/* implicit */short) ((((/* implicit */int) (short)24039)) % (((/* implicit */int) ((short) (_Bool)1)))));
                            arr_66 [i_7] [i_7] [i_7] [i_10] [i_15] &= ((/* implicit */int) ((unsigned char) min((((/* implicit */unsigned long long int) var_10)), (var_3))));
                        }
                        for (unsigned int i_16 = 0; i_16 < 24; i_16 += 2) 
                        {
                            arr_69 [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned char) var_7);
                            arr_70 [i_7] [i_10] [i_7] [i_10] = ((/* implicit */short) (+(((182519561U) - (((/* implicit */unsigned int) var_9))))));
                            arr_71 [i_8] [i_7] &= ((/* implicit */unsigned long long int) 4LL);
                        }
                    }
                } 
            } 
        } 
        arr_72 [i_7] = ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(var_9)))))))) * (((((/* implicit */_Bool) (short)-24012)) ? (12077766970187757123ULL) : (((/* implicit */unsigned long long int) 1618747939)))));
    }
    for (unsigned long long int i_17 = 0; i_17 < 22; i_17 += 3) 
    {
        /* LoopSeq 1 */
        for (long long int i_18 = 0; i_18 < 22; i_18 += 1) 
        {
            var_29 = 4819279701142840441LL;
            arr_77 [i_18] [i_17] [i_18] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) min((var_4), (var_4))))));
        }
        var_30 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) max((min((var_9), (((/* implicit */int) (short)17453)))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-30896))) != (var_2))))))), (((((/* implicit */_Bool) 1618747939)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-23983))) : (min((((/* implicit */unsigned long long int) (_Bool)1)), (14593111292191548774ULL)))))));
    }
}
