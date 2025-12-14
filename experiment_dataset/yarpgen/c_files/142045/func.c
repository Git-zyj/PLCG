/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142045
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
    var_20 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) ((signed char) var_6))) ? (((/* implicit */int) var_15)) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1)))))));
    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) var_1))));
    var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) & ((~(3609492923U)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (~(((/* implicit */int) var_15))))))) : (max((((unsigned long long int) var_18)), (((/* implicit */unsigned long long int) ((short) var_14)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_23 = ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)94))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (unsigned char)71)))) : (5055666211601281742LL));
                var_24 = ((((/* implicit */_Bool) min((max((((/* implicit */unsigned int) 178550330)), (var_4))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_15)))))))) ? (((/* implicit */int) var_6)) : (max((arr_3 [i_0] [i_1] [i_0]), (arr_3 [i_1] [i_0] [i_0]))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_1] [i_2] [i_3] [i_3] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_3])) ? (arr_5 [i_0]) : (291033089U)));
                                var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((((/* implicit */_Bool) (short)-6307)) ? (-178550325) : (((/* implicit */int) (signed char)-9)))))));
                                var_26 |= ((/* implicit */short) (_Bool)1);
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_2] [i_2] [i_1] = ((/* implicit */short) (~(((/* implicit */int) (_Bool)1))));
                }
                for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 1) 
                {
                    var_27 = ((/* implicit */_Bool) ((long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_10 [i_0])))))));
                    var_28 = ((/* implicit */signed char) (((((+(((/* implicit */int) (_Bool)1)))) >= (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)19585))) >= (arr_10 [i_5])))))) ? (((/* implicit */int) ((((/* implicit */int) var_7)) >= (((/* implicit */int) arr_0 [i_1]))))) : (((/* implicit */int) ((((/* implicit */int) (short)-1938)) >= (((/* implicit */int) (signed char)100)))))));
                }
                for (unsigned char i_6 = 0; i_6 < 25; i_6 += 2) 
                {
                    arr_21 [i_0] [i_6] = ((/* implicit */long long int) max((min((((/* implicit */unsigned int) arr_0 [i_1])), (var_17))), (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_1] [i_1] [i_1] [i_1] [i_6]))) >= (var_19)))) == (((/* implicit */int) (unsigned char)60)))))));
                    var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((+(((/* implicit */int) var_1)))), (((/* implicit */int) arr_17 [i_0] [i_1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)0) ? (1023U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_0] [i_0])))))))))) : (((((10705445845645697360ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned char)51)) : (((/* implicit */int) (signed char)112))))) : (max((((/* implicit */unsigned long long int) 5005666222768829691LL)), (arr_1 [i_1] [i_6]))))))))));
                    var_30 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_17 [i_0] [i_6])) == (((/* implicit */int) arr_17 [i_1] [i_6])))) ? (((((/* implicit */_Bool) ((unsigned int) var_4))) ? (var_2) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-101)) ? (((/* implicit */int) (unsigned char)173)) : (((/* implicit */int) (short)1897))))))) : (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) -7LL)) ? (((/* implicit */int) var_9)) : (32512))))))));
                }
                for (unsigned int i_7 = 1; i_7 < 24; i_7 += 1) 
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned short i_8 = 0; i_8 < 25; i_8 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_9 = 0; i_9 < 25; i_9 += 4) 
                        {
                            arr_30 [i_8] [i_7] [i_1] [i_0] = ((/* implicit */unsigned int) arr_29 [i_9] [i_8] [i_8] [i_7] [i_7 - 1] [i_1] [i_0]);
                            var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) ((((/* implicit */_Bool) ((var_15) ? (arr_20 [i_0]) : (((/* implicit */int) arr_16 [i_8] [i_7] [i_1]))))) ? (((8388592U) ^ (var_18))) : (((/* implicit */unsigned int) arr_28 [i_8] [i_1] [i_7] [i_8] [i_9])))))));
                        }
                        var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -32512)) ? (((/* implicit */unsigned long long int) -5005666222768829683LL)) : (((((/* implicit */_Bool) (short)-1955)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (4594358889258244937ULL)))));
                        /* LoopSeq 1 */
                        for (unsigned int i_10 = 4; i_10 < 23; i_10 += 2) 
                        {
                            var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) (-((~(((/* implicit */int) var_14)))))))));
                            var_34 = ((/* implicit */_Bool) min((var_34), (((((/* implicit */int) var_8)) >= (((/* implicit */int) var_0))))));
                        }
                    }
                    for (unsigned int i_11 = 1; i_11 < 22; i_11 += 4) 
                    {
                        var_35 = ((/* implicit */short) ((arr_27 [i_11] [i_7 + 1] [i_7] [i_11 - 1]) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) min((arr_2 [i_0] [i_1]), (((/* implicit */long long int) (unsigned short)32196))))) >= (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */unsigned long long int) arr_27 [i_0] [i_1] [i_7] [i_11])) : (arr_11 [i_0] [i_0] [i_1] [i_7] [i_11])))))))));
                        arr_37 [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((_Bool) ((((/* implicit */int) arr_0 [i_7])) >= (((/* implicit */int) (unsigned short)11536))))))));
                        var_36 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-76))) == (((((/* implicit */_Bool) (short)2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)200))) : (10705445845645697361ULL))))))));
                    }
                    for (unsigned char i_12 = 0; i_12 < 25; i_12 += 2) 
                    {
                        var_37 = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) arr_25 [i_7 - 1] [i_7 + 1] [i_7 + 1] [i_12] [i_12] [i_12])) ? (arr_25 [i_7 - 1] [i_7 + 1] [i_7 + 1] [i_12] [i_12] [i_12]) : (arr_25 [i_7 + 1] [i_7 - 1] [i_7 + 1] [i_12] [i_12] [i_12]))));
                        var_38 = ((/* implicit */long long int) var_2);
                        var_39 = ((/* implicit */short) max((var_39), (((/* implicit */short) ((((/* implicit */int) ((arr_31 [i_7 - 1] [i_7 - 1] [i_7] [i_12] [i_12]) == (((/* implicit */int) arr_8 [i_7 + 1] [i_7 - 1]))))) == (((/* implicit */int) ((_Bool) (unsigned char)237))))))));
                    }
                    for (signed char i_13 = 1; i_13 < 21; i_13 += 4) 
                    {
                        var_40 = ((/* implicit */unsigned int) ((unsigned short) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_32 [i_0] [i_0] [i_1] [i_7] [i_13]))))), (var_4))));
                        var_41 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-107))))) ? (min((((/* implicit */unsigned int) (_Bool)1)), (arr_22 [i_13 + 2] [i_1] [i_7 + 1] [i_13]))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0)))));
                    }
                    arr_43 [i_0] [i_1] [i_7] &= ((/* implicit */signed char) (unsigned short)42015);
                    arr_44 [i_7] = ((/* implicit */short) (+(arr_10 [i_1])));
                    arr_45 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) arr_9 [i_0] [i_0] [i_1] [i_7]);
                }
                /* LoopNest 2 */
                for (int i_14 = 1; i_14 < 22; i_14 += 4) 
                {
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        {
                            var_42 *= ((/* implicit */short) (+(2800697195U)));
                            var_43 = ((/* implicit */long long int) max((var_43), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((max((arr_27 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) arr_24 [i_15] [i_15] [i_15] [i_15])))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_40 [i_15] [i_14] [i_1] [i_0])) == (((/* implicit */int) (signed char)113)))))))))) >= (((((/* implicit */_Bool) (short)-20477)) ? (((/* implicit */unsigned int) 2147483647)) : (1073733632U))))))));
                            arr_50 [i_0] [i_0] [i_1] [i_14] [i_15] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) 5005666222768829691LL)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) arr_49 [i_0] [i_1] [i_1] [i_14] [i_15]))))) ? (((/* implicit */int) (signed char)-72)) : (((((/* implicit */_Bool) (signed char)-18)) ? (((/* implicit */int) arr_39 [i_0] [i_1] [i_14 + 1] [i_15])) : (920782660)))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
