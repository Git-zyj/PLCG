/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149042
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
    var_20 -= ((((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) 3841756481U)) || (((/* implicit */_Bool) var_18)))))))) ^ (((max((((/* implicit */long long int) var_9)), (72057594037927935LL))) / (((/* implicit */long long int) (-(((/* implicit */int) var_12))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((((/* implicit */_Bool) var_12)) && (((((/* implicit */_Bool) arr_1 [(signed char)2])) || ((_Bool)0))))) ? (min((arr_1 [8ULL]), (((/* implicit */long long int) (!(((/* implicit */_Bool) 3272698719U))))))) : (max((arr_1 [8ULL]), (((/* implicit */long long int) (_Bool)1)))))))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            arr_4 [i_0] [i_0] [i_1] &= ((/* implicit */short) -5808158981528483251LL);
            /* LoopSeq 1 */
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                var_22 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_0]))))) : (min((((/* implicit */long long int) arr_0 [i_2] [i_1])), (arr_1 [i_1])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_7 [i_0] [i_0])))))) : (((arr_2 [i_0] [i_1]) & (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1] [i_2])) ? (((/* implicit */int) (_Bool)0)) : (arr_5 [2U] [i_2] [i_1] [i_0]))))))));
                var_23 += ((/* implicit */short) (+(-1326885398)));
            }
        }
        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_2 [i_0] [i_0]), (((/* implicit */long long int) arr_6 [i_0] [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)0))))))))) : (7052444226448864513ULL))))));
        arr_8 [i_0] = ((/* implicit */short) ((784157670U) - (((/* implicit */unsigned int) ((/* implicit */int) max((arr_6 [i_0] [i_0] [i_0]), (((/* implicit */unsigned short) var_17))))))));
    }
    /* LoopSeq 1 */
    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 1) 
    {
        var_25 = ((/* implicit */short) max((((/* implicit */unsigned int) (unsigned char)244)), (784157670U)));
        /* LoopNest 2 */
        for (short i_4 = 0; i_4 < 11; i_4 += 2) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    var_26 ^= ((/* implicit */unsigned long long int) (+((+(min((((/* implicit */unsigned int) (_Bool)1)), (arr_16 [i_4] [i_4])))))));
                    /* LoopSeq 3 */
                    for (int i_6 = 0; i_6 < 11; i_6 += 1) 
                    {
                        var_27 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_13 [i_4] [i_6])), (arr_16 [i_5] [i_5])))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_13 [i_3] [i_3]), (arr_13 [i_3] [i_4]))))) : (min((((/* implicit */unsigned int) arr_13 [i_3] [i_3])), (arr_16 [i_6] [i_6])))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (signed char i_7 = 0; i_7 < 11; i_7 += 1) 
                        {
                            var_28 *= ((((/* implicit */_Bool) arr_18 [i_3] [1ULL] [i_3])) && (((/* implicit */_Bool) arr_11 [i_4])));
                            var_29 = ((/* implicit */unsigned short) arr_13 [i_5] [i_6]);
                        }
                        for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 4) 
                        {
                            var_30 += ((/* implicit */unsigned char) min((((/* implicit */short) (_Bool)1)), ((short)0)));
                            var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_25 [i_3] [i_4] [i_4] [i_5] [i_6] [i_4])) || (((/* implicit */_Bool) arr_22 [i_5]))))))))));
                        }
                        for (unsigned int i_9 = 0; i_9 < 11; i_9 += 2) 
                        {
                            var_32 ^= ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) min(((short)-2575), (((/* implicit */short) arr_23 [i_3] [i_4] [i_6] [i_6] [i_9] [i_5])))))) ^ (((/* implicit */int) ((((((/* implicit */int) var_0)) == (((/* implicit */int) (unsigned char)0)))) || (((/* implicit */_Bool) (~(((/* implicit */int) arr_12 [i_4]))))))))));
                            var_33 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (23U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))), (((long long int) arr_21 [i_4] [i_4] [i_5] [i_5]))))) ? (((((/* implicit */long long int) ((/* implicit */int) ((_Bool) (_Bool)1)))) & (((0LL) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_9] [i_4] [i_9] [i_9] [i_9])))));
                        }
                        var_34 -= max((max((((/* implicit */long long int) ((((/* implicit */_Bool) 8439626628114762575ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_2)))), (((((/* implicit */_Bool) (unsigned short)13255)) ? (-6030244989167683078LL) : (2645055587896391723LL))))), (((/* implicit */long long int) (_Bool)1)));
                    }
                    for (unsigned short i_10 = 2; i_10 < 9; i_10 += 1) 
                    {
                        var_35 -= ((short) arr_16 [i_10 - 1] [i_10 + 1]);
                        var_36 -= ((/* implicit */signed char) min((((/* implicit */long long int) (short)-1)), (min((arr_14 [i_3] [i_3]), (arr_14 [i_3] [i_10 - 2])))));
                    }
                    for (long long int i_11 = 0; i_11 < 11; i_11 += 2) 
                    {
                        var_37 *= ((/* implicit */unsigned long long int) min(((short)-25729), (((/* implicit */short) (signed char)13))));
                        arr_34 [i_3] [i_4] |= ((/* implicit */signed char) arr_28 [i_4] [i_3] [4ULL] [i_4] [i_5] [i_5] [i_11]);
                    }
                }
            } 
        } 
        var_38 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (2261470283U))), (((((/* implicit */unsigned int) ((/* implicit */int) var_14))) & (214361803U)))))) ? (((((/* implicit */_Bool) var_8)) ? (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned char)156)))) : (((/* implicit */int) arr_18 [i_3] [i_3] [i_3])))) : (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (arr_29 [i_3] [2] [i_3] [i_3] [i_3]))))));
        /* LoopSeq 1 */
        for (unsigned int i_12 = 0; i_12 < 11; i_12 += 2) 
        {
            var_39 *= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_33 [i_12] [i_12] [i_3] [i_3])) << (((((/* implicit */int) arr_23 [i_3] [i_3] [i_3] [i_3] [i_3] [5U])) - (249)))))))))) & (((((/* implicit */_Bool) min((((/* implicit */int) arr_12 [i_3])), (2147483647)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_3] [9LL] [(_Bool)1] [i_3]))) : (arr_10 [i_12])))));
            var_40 ^= ((/* implicit */long long int) max((((arr_37 [i_3] [(unsigned short)3] [i_12]) / (arr_37 [i_12] [i_3] [i_3]))), (((((/* implicit */_Bool) arr_28 [i_12] [i_3] [i_3] [i_12] [i_12] [i_12] [i_12])) ? (arr_10 [i_12]) : (((/* implicit */unsigned long long int) arr_28 [i_12] [i_12] [i_12] [i_3] [i_3] [i_3] [i_12]))))));
        }
    }
}
