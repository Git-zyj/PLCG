/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131556
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */unsigned int) (~(arr_3 [i_1] [i_0] [i_0])));
                var_12 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_1])) : (arr_1 [i_1] [i_1])))) : (arr_0 [i_1])))));
                var_13 &= ((/* implicit */unsigned short) ((((((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) - (((/* implicit */int) var_10)))) + ((+(((/* implicit */int) (unsigned short)18511))))));
                var_14 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) arr_6 [i_0])), (((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_1])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_6 [i_1]))))))) ? (arr_3 [i_0] [i_0] [i_0]) : (arr_1 [i_0] [i_0])));
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    var_15 = ((/* implicit */long long int) ((((/* implicit */int) max((((short) var_5)), (((/* implicit */short) arr_6 [i_1]))))) <= (((/* implicit */int) var_10))));
                    var_16 = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) arr_0 [i_0])) ? (var_8) : (var_3))) / (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0]))))) - (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
                }
            }
        } 
    } 
    var_17 += ((/* implicit */unsigned char) var_2);
    /* LoopNest 2 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (signed char i_4 = 0; i_4 < 14; i_4 += 1) 
        {
            {
                var_18 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)50870)) ? (arr_0 [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_4] [i_4] [i_3])))))) ? (((/* implicit */int) arr_8 [i_4])) : ((+(((/* implicit */int) arr_14 [i_3] [i_3] [i_3])))))))));
                /* LoopNest 2 */
                for (unsigned short i_5 = 0; i_5 < 14; i_5 += 3) 
                {
                    for (int i_6 = 0; i_6 < 14; i_6 += 4) 
                    {
                        {
                            /* LoopSeq 4 */
                            for (unsigned int i_7 = 2; i_7 < 11; i_7 += 4) 
                            {
                                var_19 = ((/* implicit */long long int) var_0);
                                arr_23 [i_3] [i_4] [i_5] [i_6] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */long long int) (~(((/* implicit */int) arr_21 [i_7 + 2] [i_7] [i_7 - 2] [i_7 - 2] [i_7 + 2] [i_7 - 2]))))) - (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_4] [i_4]))) ^ (2543144040U)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_8 [i_4])))) : (((((/* implicit */long long int) ((/* implicit */int) var_1))) + (arr_2 [i_3])))))));
                                var_20 = ((/* implicit */long long int) ((unsigned int) arr_19 [i_3] [i_5] [i_7 + 2] [i_7 - 2] [i_7 + 2] [i_7]));
                                var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) var_10))));
                            }
                            for (signed char i_8 = 0; i_8 < 14; i_8 += 2) 
                            {
                                arr_26 [i_3] [i_3] [i_3] [i_3] |= ((/* implicit */signed char) (((-(270006400))) > (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_3])) || (((/* implicit */_Bool) arr_2 [i_6])))))));
                                var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) arr_0 [i_3]))));
                                var_23 *= ((/* implicit */unsigned char) var_5);
                            }
                            for (unsigned short i_9 = 0; i_9 < 14; i_9 += 3) /* same iter space */
                            {
                                var_24 = ((/* implicit */unsigned short) max((arr_11 [i_9]), (((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_5])))))));
                                var_25 = ((/* implicit */unsigned short) ((min((((/* implicit */int) ((unsigned short) arr_11 [i_5]))), ((+(((/* implicit */int) var_10)))))) * (((/* implicit */int) arr_6 [i_6]))));
                                var_26 &= ((/* implicit */unsigned char) var_4);
                                var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) ((_Bool) 2684876348U)))));
                                var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) (~((-(max((((/* implicit */int) (unsigned short)50870)), (arr_3 [i_5] [i_5] [i_5]))))))))));
                            }
                            for (unsigned short i_10 = 0; i_10 < 14; i_10 += 3) /* same iter space */
                            {
                                arr_32 [i_10] [i_10] [i_4] [i_4] [i_5] [i_4] [i_3] = ((/* implicit */unsigned short) ((int) (~(((/* implicit */int) arr_18 [i_10])))));
                                var_29 = ((/* implicit */int) max((var_29), ((~(((/* implicit */int) min((arr_10 [i_3] [i_3]), (arr_10 [i_6] [i_5]))))))));
                            }
                            arr_33 [i_3] [i_3] [i_4] [i_5] [i_6] |= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((arr_16 [i_3] [i_4] [i_5]) + (((/* implicit */int) arr_4 [i_3] [i_3]))))) > (((((/* implicit */_Bool) (unsigned short)14665)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_6])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)0))))) : ((~(arr_7 [i_3] [i_3] [i_5] [i_3])))))));
                        }
                    } 
                } 
                arr_34 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_20 [i_3] [i_4] [i_3] [i_3])) ? (((/* implicit */int) arr_30 [i_4] [i_3])) : (((/* implicit */int) arr_20 [i_3] [i_4] [i_3] [i_3]))));
            }
        } 
    } 
    var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)50871)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_5)) ? (var_8) : (((/* implicit */unsigned int) var_7)))))))));
}
