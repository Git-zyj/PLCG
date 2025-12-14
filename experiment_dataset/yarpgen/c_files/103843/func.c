/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103843
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_17 &= ((/* implicit */unsigned short) (((-(((((/* implicit */_Bool) arr_3 [i_1])) ? (2921763888U) : (((/* implicit */unsigned int) ((/* implicit */int) var_16))))))) - (((/* implicit */unsigned int) (~(((/* implicit */int) ((arr_2 [i_1] [i_0]) > (((/* implicit */int) var_2))))))))));
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        for (signed char i_4 = 2; i_4 < 12; i_4 += 4) 
                        {
                            {
                                var_18 ^= ((/* implicit */_Bool) ((unsigned short) (+(((/* implicit */int) arr_11 [i_4 + 1] [i_0] [i_2] [i_2] [i_1] [i_0] [i_0])))));
                                arr_12 [i_2] [i_2] [i_2] [i_3] [i_4] [i_0] [i_0] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_4 [i_4 - 2] [i_2] [i_2] [i_4 + 1])) ? ((((_Bool)0) ? (var_11) : (arr_4 [0] [i_2] [i_3] [i_4]))) : (arr_2 [(signed char)9] [i_1])))));
                                arr_13 [i_4 - 2] [i_0] [i_2] [i_2] [i_0] [i_0] = ((/* implicit */signed char) ((unsigned int) (-(((/* implicit */int) var_7)))));
                                var_19 = ((/* implicit */signed char) ((short) (~(((/* implicit */int) arr_1 [i_0] [i_4 + 1])))));
                            }
                        } 
                    } 
                } 
                arr_14 [(_Bool)1] &= (-((+(((/* implicit */int) arr_6 [i_0] [i_1] [i_1])))));
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_1))));
    /* LoopNest 2 */
    for (unsigned short i_5 = 0; i_5 < 23; i_5 += 3) 
    {
        for (signed char i_6 = 0; i_6 < 23; i_6 += 1) 
        {
            {
                var_21 = ((/* implicit */short) (+(((var_12) ? (((((/* implicit */_Bool) arr_15 [i_5] [i_6])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_17 [i_5] [i_5])))) : (((/* implicit */int) ((unsigned short) arr_17 [i_5] [i_6])))))));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 23; i_7 += 1) 
                {
                    for (signed char i_8 = 0; i_8 < 23; i_8 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned long long int i_9 = 4; i_9 < 21; i_9 += 1) 
                            {
                                arr_29 [i_9] [6] [i_7] [i_5] [i_9] [i_5] = ((signed char) (-(arr_26 [i_5] [i_9 - 4] [i_7] [i_5] [(signed char)1] [(unsigned short)16])));
                                var_22 *= ((/* implicit */_Bool) max((((((_Bool) (signed char)-10)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_4)))) : (arr_26 [i_5] [i_6] [i_5] [16LL] [i_5] [i_9 - 2]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_18 [i_5] [i_7]), (((/* implicit */signed char) var_5))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) : (((/* implicit */int) var_7)))))));
                                var_23 = ((/* implicit */_Bool) ((arr_25 [i_9 + 2] [i_5] [i_9 - 3] [i_9 - 2]) % ((-(((/* implicit */int) arr_16 [i_9 - 3] [i_9 + 2]))))));
                            }
                            /* LoopSeq 2 */
                            for (signed char i_10 = 0; i_10 < 23; i_10 += 1) 
                            {
                                arr_32 [i_5] [i_6] [i_7] = var_0;
                                var_24 = ((/* implicit */short) (_Bool)0);
                                var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? ((+((+(((/* implicit */int) var_5)))))) : ((+(((/* implicit */int) arr_20 [i_6] [i_6] [i_8] [i_10]))))));
                                arr_33 [i_5] [i_6] [i_7] [i_8] [i_6] = ((/* implicit */unsigned short) (~(((arr_26 [i_5] [i_6] [i_8] [i_8] [i_10] [(_Bool)1]) - (arr_26 [i_5] [i_6] [i_6] [i_8] [i_8] [i_10])))));
                            }
                            for (signed char i_11 = 2; i_11 < 22; i_11 += 4) 
                            {
                                var_26 = ((/* implicit */_Bool) min((var_26), (((((((/* implicit */_Bool) (+(var_11)))) ? ((~(((/* implicit */int) var_7)))) : (((((/* implicit */_Bool) arr_22 [i_5] [i_6] [i_7] [i_8])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)(-127 - 1))))))) > (((/* implicit */int) var_1))))));
                                arr_36 [i_5] [i_6] [12LL] [i_11 - 2] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned char) var_13)))));
                                arr_37 [i_5] [i_5] [i_7] [i_8] [i_11 - 2] = ((unsigned long long int) (!(((/* implicit */_Bool) arr_28 [i_5] [i_6] [i_7] [i_7] [i_11] [i_11 - 2]))));
                            }
                            var_27 *= ((/* implicit */int) (((!(((/* implicit */_Bool) arr_18 [i_5] [i_5])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [(_Bool)1]))) : (min((((/* implicit */unsigned int) arr_24 [16U])), (var_3)))));
                        }
                    } 
                } 
                var_28 *= ((/* implicit */unsigned int) min((((/* implicit */int) min((arr_22 [i_5] [i_5] [i_5] [(unsigned short)22]), (arr_22 [(_Bool)1] [i_6] [i_6] [i_5])))), ((+(((/* implicit */int) ((signed char) arr_28 [i_5] [i_6] [i_6] [i_6] [i_6] [i_6])))))));
                arr_38 [i_5] [i_5] = ((/* implicit */short) ((signed char) (!(((/* implicit */_Bool) arr_34 [i_5] [i_6] [i_6] [i_5] [i_6] [i_6] [i_6])))));
            }
        } 
    } 
    var_29 |= ((/* implicit */signed char) var_2);
}
