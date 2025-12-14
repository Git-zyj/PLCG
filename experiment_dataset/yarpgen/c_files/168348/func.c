/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168348
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
    var_15 = ((/* implicit */unsigned char) (~((((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (var_2))) - (((/* implicit */int) var_0))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            for (long long int i_2 = 3; i_2 < 8; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */short) (-(((/* implicit */int) ((2272679708U) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2 + 1]))))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_3 = 1; i_3 < 10; i_3 += 1) 
                    {
                        var_17 = ((/* implicit */unsigned long long int) (unsigned char)186);
                        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) (~(arr_8 [0] [i_1] [0] [i_1 + 2]))))));
                        /* LoopSeq 4 */
                        for (unsigned char i_4 = 1; i_4 < 9; i_4 += 1) 
                        {
                            arr_15 [2] [i_1] [(unsigned short)9] [i_2] [i_4 + 1] = ((/* implicit */long long int) (signed char)91);
                            var_19 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_0)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)22458)) && (((/* implicit */_Bool) var_13))))) : (((/* implicit */int) arr_10 [i_0] [i_3] [i_2] [i_2 - 3]))));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)61)) ? (((((/* implicit */int) var_9)) % (((/* implicit */int) (unsigned char)70)))) : (((/* implicit */int) arr_12 [i_0] [7U] [i_2] [i_2] [i_2] [i_1] [i_5]))));
                            var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_1] [(unsigned short)0] [i_5])))))));
                            arr_20 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_17 [i_0] [i_1 - 1] [i_1] [i_2] [i_2] [i_3] [i_5]) + (((/* implicit */unsigned int) ((/* implicit */int) (short)1120)))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0 - 1] [i_0])) || (((/* implicit */_Bool) var_9)))))));
                            var_22 = ((/* implicit */short) ((((/* implicit */int) ((var_7) < (((/* implicit */long long int) ((/* implicit */int) var_13)))))) - (((/* implicit */int) arr_19 [(signed char)9] [i_1 - 1] [0U] [6] [i_1 + 2]))));
                        }
                        for (unsigned short i_6 = 0; i_6 < 11; i_6 += 1) 
                        {
                            var_23 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_1] [i_1]))));
                            var_24 -= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) >= (2793696068U)))) == (var_4)));
                            var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) -670447342))));
                            var_26 = ((/* implicit */unsigned short) var_12);
                        }
                        for (unsigned short i_7 = 0; i_7 < 11; i_7 += 1) 
                        {
                            var_27 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_14) % (((/* implicit */int) var_3))))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_18 [i_3 - 1] [i_3 - 1] [i_2 + 1] [i_2 + 3] [i_1 - 1] [i_1 - 1] [i_0 + 1])));
                            var_28 = var_0;
                            var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [i_1 + 1] [9LL] [i_2] [9LL] [(unsigned short)1] [i_7] [i_1])) ? (((/* implicit */int) arr_16 [i_1 + 1] [i_1] [i_2] [i_3] [i_1] [i_0] [i_2])) : (((/* implicit */int) (_Bool)1))));
                        }
                    }
                    for (long long int i_8 = 0; i_8 < 11; i_8 += 1) 
                    {
                        var_30 = ((min((arr_8 [i_2] [i_1 + 1] [i_1] [(short)2]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 47703417064103867LL))))))) >= (((/* implicit */unsigned int) var_2)));
                        /* LoopSeq 1 */
                        for (unsigned short i_9 = 0; i_9 < 11; i_9 += 1) 
                        {
                            var_31 = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 2319212481U)) ? (11894972474160099585ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_2] [i_2])))))) ? (min((((/* implicit */unsigned int) var_11)), (arr_0 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_2] [i_1] [i_1] [i_9] [i_9] [i_2] [i_0]))))), (((/* implicit */unsigned int) (+((-(((/* implicit */int) var_3)))))))));
                            var_32 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */int) ((unsigned short) min((var_7), (((/* implicit */long long int) arr_22 [i_1] [i_1])))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) ((var_10) % (((/* implicit */int) (_Bool)1))))))))));
                            var_33 ^= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) arr_19 [i_2 - 2] [i_2 + 2] [i_1 - 1] [i_0 + 1] [i_0 + 1])) < (((/* implicit */int) var_3))))) >= (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned short)18679)) : (((/* implicit */int) arr_19 [i_2 + 2] [i_2 - 2] [i_1 + 2] [(unsigned char)2] [i_0 + 1]))))));
                        }
                        arr_32 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) max((arr_21 [i_0] [i_1] [i_2 + 3] [i_1] [i_1 - 1] [i_8] [(unsigned short)1]), (((/* implicit */unsigned char) (_Bool)1)))))))) ? (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)64312))))))))));
                    }
                    arr_33 [i_0] [i_1] [i_2] = ((/* implicit */short) max(((+(var_7))), (max((((/* implicit */long long int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (unsigned short)64980)) : (((/* implicit */int) arr_24 [8LL] [i_0] [i_0] [i_2] [i_2]))))), ((~(var_7)))))));
                    var_34 = ((/* implicit */unsigned int) min((max((((/* implicit */unsigned long long int) arr_28 [i_0 - 1])), (14808526958833831608ULL))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) max(((unsigned short)41344), (var_8)))))))));
                }
            } 
        } 
    } 
    var_35 = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_8)) : (var_14)))) ? (((((/* implicit */long long int) var_10)) - (var_7))) : (((var_6) / (((/* implicit */long long int) ((/* implicit */int) var_1))))))) + (9223372036854775807LL))) << (((((var_10) + (1601816401))) - (23)))));
    /* LoopNest 2 */
    for (unsigned long long int i_10 = 0; i_10 < 15; i_10 += 4) 
    {
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            {
                var_36 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)200)))) ? (((unsigned int) arr_34 [i_10] [(_Bool)1])) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)247)))));
                var_37 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((max((var_2), (((/* implicit */int) var_3)))), ((~(((/* implicit */int) var_5)))))))));
                arr_38 [(short)7] [i_11] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_37 [i_11] [i_11]))))) ? (((/* implicit */int) ((unsigned char) arr_37 [i_10] [i_11]))) : ((-(((/* implicit */int) arr_37 [i_11] [i_11]))))));
            }
        } 
    } 
    var_38 = ((/* implicit */short) ((min((min((var_4), (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((signed char) var_14))))) - (((/* implicit */int) min((min((var_9), (var_3))), (var_3))))));
}
