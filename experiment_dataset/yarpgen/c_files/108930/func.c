/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108930
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
    var_10 = ((/* implicit */signed char) var_1);
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_2))))))) ? ((+(((((/* implicit */int) var_9)) << (((((/* implicit */int) var_9)) - (92))))))) : (((/* implicit */int) var_2))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 2; i_3 < 10; i_3 += 2) 
                    {
                        var_12 *= (+(((/* implicit */int) arr_7 [i_3] [i_3 + 1] [i_3 - 2] [i_3 + 2] [i_3 + 1] [i_3])));
                        var_13 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((arr_3 [i_1 + 2] [i_0]) + (((/* implicit */int) arr_7 [i_0] [i_1 + 1] [i_2] [i_2] [i_3 + 1] [i_3])))))));
                    }
                    for (unsigned int i_4 = 1; i_4 < 9; i_4 += 2) 
                    {
                        var_14 = ((/* implicit */unsigned char) ((int) ((_Bool) ((unsigned short) arr_9 [i_0] [i_1 + 1] [i_2] [i_4 + 3]))));
                        var_15 = ((/* implicit */unsigned int) arr_1 [i_0]);
                    }
                    var_16 += ((/* implicit */unsigned int) (-((+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_1 + 1] [i_2] [i_2] [(unsigned char)2])) : (((/* implicit */int) var_4))))))));
                }
            } 
        } 
        var_17 = max((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-1794))) : (3266856984U))))), ((~(((/* implicit */int) arr_5 [i_0] [i_0] [i_0])))));
        var_18 = max((min((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0]))))), (((((/* implicit */_Bool) (short)1800)) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_0])) : (arr_4 [i_0]))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -232565750))))) : (((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0])) ? (var_3) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))));
        var_19 = (((((-(((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0])))) + (2147483647))) >> (((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_0])) : (arr_4 [i_0]))) >= ((+(6)))))));
        /* LoopSeq 3 */
        for (unsigned char i_5 = 0; i_5 < 12; i_5 += 1) 
        {
            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)1796)) ? (((/* implicit */int) arr_10 [i_5] [i_5] [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_5]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_5] [i_5]))))) : (((((/* implicit */int) var_4)) * (((/* implicit */int) arr_10 [i_5] [i_5] [i_0] [i_0]))))));
            var_21 |= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-114))))) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_0])) : (((((/* implicit */_Bool) arr_0 [i_5])) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_5])) : (var_3)))))));
            var_22 = ((/* implicit */unsigned int) (((+(arr_4 [i_0]))) + (((/* implicit */int) min((arr_7 [i_0] [i_0] [i_0] [i_5] [i_5] [i_0]), (arr_7 [i_0] [i_5] [i_5] [i_0] [i_0] [i_0]))))));
            /* LoopNest 2 */
            for (unsigned int i_6 = 2; i_6 < 10; i_6 += 4) 
            {
                for (unsigned char i_7 = 0; i_7 < 12; i_7 += 2) 
                {
                    {
                        var_23 = ((/* implicit */signed char) (-((+(((/* implicit */int) (short)-1794))))));
                        var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) (short)20081))));
                        var_25 |= ((/* implicit */int) 3266856984U);
                    }
                } 
            } 
        }
        for (unsigned char i_8 = 1; i_8 < 11; i_8 += 2) 
        {
            var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((unsigned int) arr_17 [i_0] [i_0] [i_0] [i_8 - 1])), (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) <= (1174781083))))))) ? (max((max((arr_3 [i_0] [i_8 - 1]), (((/* implicit */int) arr_5 [i_8 - 1] [i_0] [i_0])))), (((/* implicit */int) arr_15 [i_8 + 1] [i_8 - 1] [i_0] [i_8 - 1])))) : ((-(((/* implicit */int) min((arr_2 [i_0] [i_8 - 1]), (((/* implicit */unsigned char) arr_7 [i_0] [i_0] [i_0] [i_8 - 1] [i_8 + 1] [i_0])))))))));
            var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) arr_2 [i_0] [i_8 - 1]))));
        }
        for (signed char i_9 = 0; i_9 < 12; i_9 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned short i_10 = 2; i_10 < 11; i_10 += 2) 
            {
                for (unsigned char i_11 = 0; i_11 < 12; i_11 += 3) 
                {
                    {
                        var_28 = ((/* implicit */unsigned short) (-(((/* implicit */int) max((arr_11 [i_10 + 1] [i_10 - 1] [i_10 + 1]), (((/* implicit */unsigned short) arr_9 [i_10 - 1] [i_10 - 1] [i_10 + 1] [i_10 - 1])))))));
                        /* LoopSeq 1 */
                        for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
                        {
                            var_29 = ((/* implicit */unsigned long long int) min((min((min((355731594), (0))), (((((/* implicit */_Bool) arr_18 [i_0] [i_9] [i_10 - 1] [i_11] [i_11] [i_12 + 1])) ? (((/* implicit */int) arr_10 [i_12 + 1] [i_10 - 2] [i_9] [i_0])) : (((/* implicit */int) arr_29 [i_0] [i_9] [i_10 + 1] [i_12 + 1])))))), ((((~(((/* implicit */int) arr_29 [i_0] [i_9] [i_10 + 1] [i_11])))) - (((/* implicit */int) (short)-31351))))));
                            var_30 |= ((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) var_9)), (max((arr_19 [i_10] [i_9]), (((/* implicit */long long int) arr_11 [i_12 + 1] [i_0] [i_10 + 1])))))) >= (((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_2 [i_9] [i_10 - 1])) ? (((/* implicit */int) arr_12 [i_0] [i_9] [i_12 + 1])) : (((/* implicit */int) arr_21 [i_10 - 2] [i_12 + 1])))))))));
                        }
                    }
                } 
            } 
            var_31 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) var_4)), (((((/* implicit */_Bool) arr_29 [i_0] [i_9] [i_0] [i_0])) ? (arr_4 [i_0]) : (((/* implicit */int) arr_12 [i_0] [i_0] [i_0]))))))) ? (((((/* implicit */_Bool) ((arr_21 [i_9] [i_0]) ? (((/* implicit */int) (signed char)-8)) : (((/* implicit */int) (signed char)-1))))) ? ((-(((/* implicit */int) arr_12 [i_0] [i_9] [i_9])))) : (((((/* implicit */_Bool) arr_5 [i_9] [i_9] [i_0])) ? (((/* implicit */int) (unsigned char)232)) : (((/* implicit */int) (unsigned char)210)))))) : ((-(((/* implicit */int) arr_27 [i_0] [i_9] [i_0]))))));
            /* LoopSeq 3 */
            for (int i_13 = 0; i_13 < 12; i_13 += 3) 
            {
                var_32 = ((/* implicit */int) ((unsigned int) (+(((((/* implicit */_Bool) (unsigned char)252)) ? (arr_20 [i_9] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_0] [i_9]))))))));
                var_33 = (signed char)118;
            }
            for (int i_14 = 4; i_14 < 8; i_14 += 3) 
            {
                var_34 = ((/* implicit */unsigned long long int) max((var_34), (((/* implicit */unsigned long long int) arr_12 [i_14 - 4] [i_14 - 4] [i_14 - 4]))));
                var_35 = ((/* implicit */unsigned char) max((((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_37 [i_0])) : (((/* implicit */int) var_7)))) + ((-(126976))))), (((((/* implicit */_Bool) ((22557534) / (((/* implicit */int) arr_10 [i_0] [i_0] [i_9] [i_14 + 2]))))) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : ((-(((/* implicit */int) arr_1 [i_0]))))))));
                /* LoopNest 2 */
                for (signed char i_15 = 0; i_15 < 12; i_15 += 1) 
                {
                    for (int i_16 = 0; i_16 < 12; i_16 += 1) 
                    {
                        {
                            var_36 = ((/* implicit */unsigned char) (~((+(((/* implicit */int) max(((unsigned char)235), (((/* implicit */unsigned char) arr_21 [i_0] [i_9])))))))));
                            arr_45 [i_0] [i_9] [i_14 + 1] [i_15] [i_0] = ((/* implicit */unsigned short) arr_17 [i_0] [i_0] [i_0] [i_0]);
                            var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_35 [i_14 + 1] [i_14 + 1] [i_14 + 4] [i_16]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((short) (unsigned char)108)))))) : (((/* implicit */int) (short)-1789))));
                        }
                    } 
                } 
            }
            for (unsigned long long int i_17 = 1; i_17 < 9; i_17 += 2) 
            {
                var_38 = ((/* implicit */int) min((var_38), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_19 [i_9] [i_9])), (((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (arr_43 [i_17 + 2] [i_9]) : (((/* implicit */unsigned long long int) arr_38 [i_0] [i_0] [i_0] [i_0]))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((var_8), (var_8)))))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    arr_51 [i_0] [i_0] [i_17 + 2] [i_17 + 2] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_46 [i_17 + 1] [i_17 - 1] [i_17 + 3] [i_17 + 3]))));
                    var_39 = ((/* implicit */unsigned int) arr_26 [i_9] [i_17 + 2] [i_0]);
                }
                /* vectorizable */
                for (unsigned short i_19 = 0; i_19 < 12; i_19 += 4) 
                {
                    var_40 = ((/* implicit */signed char) min((var_40), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)10)) ? (((/* implicit */int) arr_55 [i_17 + 3] [i_19] [i_17 + 3] [i_17 + 3])) : ((-(var_6))))))));
                    var_41 = ((/* implicit */short) max((var_41), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_17 - 1]))) >= (((arr_43 [i_0] [i_9]) * (((/* implicit */unsigned long long int) 2097148)))))))));
                }
                var_42 = ((/* implicit */unsigned char) max((var_42), (((/* implicit */unsigned char) arr_50 [i_17 + 3] [i_9] [i_9] [i_9] [i_0]))));
                /* LoopNest 2 */
                for (signed char i_20 = 1; i_20 < 11; i_20 += 1) 
                {
                    for (signed char i_21 = 0; i_21 < 12; i_21 += 1) 
                    {
                        {
                            var_43 += ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_53 [i_20 - 1] [i_20 - 1] [i_20 + 1] [i_20 - 1])) ? (max((arr_3 [i_17 + 3] [i_21]), (((/* implicit */int) arr_30 [i_0] [i_9] [i_17 + 1] [i_9] [i_21])))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-10952)))))))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-1)), (var_0))))) : (max((((((/* implicit */_Bool) 33554431ULL)) ? (arr_33 [i_0] [i_9] [i_9] [i_21]) : (((/* implicit */long long int) ((/* implicit */int) var_5))))), (((/* implicit */long long int) (~(((/* implicit */int) arr_6 [i_0] [i_20 - 1] [i_9])))))))));
                            var_44 = ((/* implicit */unsigned int) arr_59 [i_0] [i_0] [i_9] [i_17 + 3] [i_20 + 1] [i_21]);
                            var_45 += ((/* implicit */signed char) (((((~(264905262U))) - (3266856979U))) >> (((((/* implicit */int) arr_40 [i_17 + 3] [i_17 + 2] [i_17 + 3] [i_17 + 1])) - (31218)))));
                            var_46 += ((/* implicit */signed char) ((((((int) arr_5 [i_21] [i_17 + 1] [i_9])) >= (((((/* implicit */_Bool) arr_31 [i_0] [i_9] [i_17 + 3] [i_17 + 3] [i_20 + 1] [i_9] [i_21])) ? (((/* implicit */int) (signed char)-4)) : (((/* implicit */int) arr_26 [i_0] [i_9] [i_9])))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_1 [i_9])), (max((2569524183U), (((/* implicit */unsigned int) 22557517))))))) : (min((((/* implicit */unsigned long long int) arr_14 [i_17 + 2] [i_9] [i_0] [i_0])), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) arr_50 [i_0] [i_9] [i_17 + 3] [i_20 + 1] [i_21])) : (arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] [i_9] [i_0])))))));
                            var_47 *= ((((/* implicit */_Bool) ((((((/* implicit */int) arr_8 [i_0] [i_0] [i_0])) > (((/* implicit */int) var_0)))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)0)) : (-22557534))) : (((/* implicit */int) arr_1 [i_9]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-93))) : (2569524183U));
                        }
                    } 
                } 
            }
        }
    }
    for (unsigned int i_22 = 0; i_22 < 10; i_22 += 4) 
    {
        var_48 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_59 [i_22] [i_22] [i_22] [i_22] [i_22] [i_22])) ? (max((((/* implicit */int) (!(((/* implicit */_Bool) arr_33 [i_22] [i_22] [i_22] [i_22]))))), (((((/* implicit */int) arr_47 [i_22] [i_22] [i_22] [i_22])) / (((/* implicit */int) arr_29 [i_22] [i_22] [i_22] [i_22])))))) : (min((((/* implicit */int) arr_42 [i_22] [i_22] [i_22] [i_22] [i_22])), (((((/* implicit */_Bool) arr_32 [i_22] [i_22] [i_22] [i_22])) ? (((/* implicit */int) arr_9 [i_22] [i_22] [i_22] [i_22])) : (((/* implicit */int) var_7))))))));
        var_49 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_41 [i_22] [i_22] [i_22] [i_22] [i_22])))) ? (arr_33 [i_22] [i_22] [i_22] [i_22]) : ((+(arr_33 [i_22] [i_22] [i_22] [i_22])))));
    }
}
