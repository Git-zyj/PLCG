/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119872
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
    var_12 = ((/* implicit */int) var_3);
    var_13 |= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 2U))))) : (var_9))), (((/* implicit */int) var_8))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (short i_2 = 2; i_2 < 12; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_14 -= ((/* implicit */short) 2U);
                                var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) 4762570995086916973LL))));
                                var_16 *= ((/* implicit */unsigned short) arr_1 [i_1] [i_2 + 3]);
                                var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((((/* implicit */long long int) (+(((/* implicit */int) arr_11 [i_0] [i_0] [(_Bool)0] [i_3] [10] [i_0] [i_4]))))) > (((var_8) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) : (var_2))))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_8 [i_0] [i_0] [6]))))) & ((~(var_5)))))) : (((((/* implicit */_Bool) (-(var_2)))) ? (((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)65), (arr_1 [i_0] [i_0]))))) : (((((/* implicit */_Bool) (unsigned char)54)) ? (140737488355327LL) : (((/* implicit */long long int) 4294967293U)))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 3; i_5 < 14; i_5 += 2) 
                    {
                        for (int i_6 = 1; i_6 < 12; i_6 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */signed char) max((max((var_2), (((/* implicit */long long int) arr_10 [i_2 + 3] [i_6 + 2] [(signed char)3] [i_5])))), (((((/* implicit */long long int) arr_17 [i_6] [i_6] [i_6] [i_6 + 1] [14U])) ^ (var_3)))));
                                arr_20 [i_6] = ((/* implicit */unsigned int) var_6);
                            }
                        } 
                    } 
                    arr_21 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((657290281), (((/* implicit */int) (short)-29831)))))));
                }
                /* vectorizable */
                for (short i_7 = 0; i_7 < 15; i_7 += 2) 
                {
                    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */_Bool) (~(-171548006484335354LL)))) ? (2218003113U) : (((/* implicit */unsigned int) (~(((/* implicit */int) (short)-1))))))))));
                    /* LoopNest 2 */
                    for (signed char i_8 = 2; i_8 < 12; i_8 += 2) 
                    {
                        for (short i_9 = 1; i_9 < 14; i_9 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) arr_12 [i_8 - 2] [i_9] [i_9] [12] [i_9] [i_9]);
                                arr_30 [i_0] [i_9] [i_7] [i_0] [i_9 + 1] [i_0] [i_7] = ((/* implicit */unsigned char) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [(short)1] [i_0]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_10 = 0; i_10 < 15; i_10 += 2) 
                    {
                        for (short i_11 = 1; i_11 < 14; i_11 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */short) arr_13 [(unsigned char)2] [(unsigned char)2] [(unsigned char)2] [i_10]);
                                arr_38 [(signed char)2] [i_0] [i_0] [6U] [i_0] = ((/* implicit */unsigned char) (((_Bool)1) ? (-286592811) : (((/* implicit */int) (unsigned char)204))));
                                var_22 += ((/* implicit */int) var_10);
                                arr_39 [i_11] [4U] [4U] [(signed char)0] [(signed char)0] = ((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                                var_23 ^= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) var_1)) : (var_9)))));
                            }
                        } 
                    } 
                }
                /* LoopNest 2 */
                for (long long int i_12 = 0; i_12 < 15; i_12 += 4) 
                {
                    for (int i_13 = 0; i_13 < 15; i_13 += 3) 
                    {
                        {
                            var_24 = ((/* implicit */int) max((var_24), ((~(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)15)) ? (((/* implicit */unsigned int) 0)) : (var_5)))) && (((/* implicit */_Bool) (-(((/* implicit */int) (short)14644))))))))))));
                            arr_44 [i_1] [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) ((((((/* implicit */int) arr_27 [i_0])) / (((/* implicit */int) (unsigned short)25692)))) > (min((((/* implicit */int) var_4)), (arr_40 [i_13] [i_12] [i_1] [i_0]))))))));
                        }
                    } 
                } 
                var_25 = ((/* implicit */signed char) ((((((/* implicit */int) (signed char)11)) >> (((/* implicit */int) (_Bool)1)))) | ((~(((/* implicit */int) (_Bool)0))))));
                var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) max((((((/* implicit */int) (_Bool)1)) << ((((+(((/* implicit */int) (unsigned char)34)))) - (10))))), (((/* implicit */int) (unsigned char)252)))))));
                arr_45 [(short)9] = ((/* implicit */long long int) ((max((min((var_2), (var_2))), (((/* implicit */long long int) (-(arr_15 [(unsigned char)7] [(unsigned char)7] [(unsigned char)7])))))) > (((/* implicit */long long int) ((/* implicit */int) ((5414011859639260971ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-21)))))))));
            }
        } 
    } 
    var_27 -= ((/* implicit */short) (+(var_3)));
}
