/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102255
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
    var_11 = ((/* implicit */unsigned short) (-(max((((/* implicit */unsigned int) max((((/* implicit */unsigned short) (_Bool)1)), (var_2)))), ((~(var_3)))))));
    var_12 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)58307)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)116))))) ? (((((/* implicit */_Bool) var_9)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) : (((/* implicit */long long int) 18U))))));
    var_13 = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 4294967277U)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_4)))));
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) (~(((((/* implicit */_Bool) (unsigned short)58307)) ? (((/* implicit */int) (unsigned char)116)) : (((/* implicit */int) (unsigned char)111))))))) : (var_0)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (short i_2 = 4; i_2 < 11; i_2 += 2) 
                {
                    arr_7 [i_0] |= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)136)), (var_10)))) || (((/* implicit */_Bool) var_10)))))) & ((-(max((4294967277U), (((/* implicit */unsigned int) var_9))))))));
                    arr_8 [i_0] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_7), (var_1)))) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-22314)) && (((/* implicit */_Bool) arr_5 [i_0] [5U] [i_2] [i_2 - 4]))))))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [7ULL]))) < (((((/* implicit */_Bool) 4294967277U)) ? (19U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)16383)))))))) : (((/* implicit */int) (((+(((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))) != (((/* implicit */int) max((var_8), (((/* implicit */unsigned short) (unsigned char)124))))))))));
                    var_15 = ((/* implicit */unsigned long long int) ((max((((((/* implicit */_Bool) var_4)) ? (18U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32757))))), (((/* implicit */unsigned int) min((var_5), (((/* implicit */unsigned short) var_4))))))) | (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (unsigned char)142)) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-1001))))))))));
                    var_16 += ((/* implicit */_Bool) 1679171417668822262LL);
                    arr_9 [i_2 - 2] [i_0 + 1] [i_0 + 1] [i_0] |= ((/* implicit */short) min((((/* implicit */int) min(((unsigned char)1), (arr_4 [i_0] [i_0 - 2] [i_0])))), ((+(((/* implicit */int) (unsigned char)144))))));
                }
                for (unsigned char i_3 = 0; i_3 < 13; i_3 += 4) 
                {
                    var_17 = ((/* implicit */unsigned int) arr_10 [i_0] [i_1] [i_3]);
                    var_18 ^= ((/* implicit */_Bool) (-(((((unsigned long long int) 4294967292U)) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_1] [i_3])))))));
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 13; i_4 += 2) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 13; i_5 += 3) 
                        {
                            {
                                arr_18 [i_0 - 1] [i_1] [i_0 - 1] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) (~((~(var_6)))))) ? (min((((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (short)448))) != (var_0)))), (4294967290U))) : (((/* implicit */unsigned int) ((int) max(((short)-32758), (arr_5 [i_0] [i_3] [i_4] [i_5])))))));
                                var_19 *= ((/* implicit */short) ((arr_10 [i_0] [i_0] [i_0]) ? (max((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)14699)) & (((/* implicit */int) var_1))))), ((~(-1679171417668822279LL))))) : (((/* implicit */long long int) (~(arr_1 [i_0 + 3]))))));
                            }
                        } 
                    } 
                }
                for (short i_6 = 0; i_6 < 13; i_6 += 4) 
                {
                    arr_21 [(signed char)2] [i_1] [(signed char)2] [i_1] &= min((((arr_16 [i_0 - 2]) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)118)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_4))))) : ((~(arr_1 [i_6]))))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_19 [i_6] [i_1] [i_0]))))));
                    var_20 = ((/* implicit */_Bool) min(((~(((/* implicit */int) max((((/* implicit */unsigned char) arr_16 [i_0 + 2])), (arr_4 [i_0] [i_0] [i_0])))))), (((/* implicit */int) ((((/* implicit */int) arr_12 [i_0 + 1])) > (((/* implicit */int) (unsigned short)17959)))))));
                }
                /* LoopNest 2 */
                for (short i_7 = 4; i_7 < 12; i_7 += 1) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 4) 
                    {
                        {
                            arr_28 [i_0] [i_0] [i_7] [i_0] = ((/* implicit */signed char) ((unsigned short) (-(4294967277U))));
                            /* LoopSeq 2 */
                            for (unsigned short i_9 = 0; i_9 < 13; i_9 += 4) 
                            {
                                var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (unsigned short)17959))));
                                var_22 &= ((/* implicit */unsigned short) ((unsigned char) ((unsigned long long int) arr_31 [i_0] [i_0] [i_0 - 1] [i_0] [i_7 + 1])));
                            }
                            for (long long int i_10 = 0; i_10 < 13; i_10 += 3) 
                            {
                                var_23 &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [i_0 - 1] [i_0 + 4])) ? (((((/* implicit */_Bool) (+(0U)))) ? (arr_23 [i_0 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32760))))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (short)5)), (arr_26 [i_7 - 3] [i_7 - 3] [i_7] [i_7] [i_7] [i_7 - 4])))))));
                                arr_36 [i_10] [3LL] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */_Bool) min((466270516), (((/* implicit */int) (signed char)-70))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)131)) - (((/* implicit */int) arr_30 [i_0 - 2] [i_1] [i_7] [i_1] [i_8] [(short)0] [i_10]))))) : (max((1920U), (((/* implicit */unsigned int) (unsigned short)47576))))))), (1679171417668822262LL)));
                            }
                            var_24 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((arr_11 [i_8] [i_0] [i_0]) + (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) arr_26 [i_7] [i_7 + 1] [i_7 + 1] [(unsigned short)6] [i_7 - 3] [i_7 - 4]))))) && (((/* implicit */_Bool) min((max((4294967277U), (arr_22 [i_0] [i_1] [i_7]))), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)98))))))))));
                        }
                    } 
                } 
                var_25 = ((/* implicit */unsigned int) min((var_25), (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)47555)) ? (((/* implicit */int) arr_20 [i_0] [i_1])) : (((/* implicit */int) (unsigned char)144))))), (min((((/* implicit */unsigned int) arr_10 [i_0 + 1] [(signed char)1] [i_0])), (max((4294967278U), (((/* implicit */unsigned int) var_2))))))))));
            }
        } 
    } 
}
