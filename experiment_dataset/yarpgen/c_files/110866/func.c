/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110866
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
    var_19 = (_Bool)1;
    /* LoopNest 3 */
    for (signed char i_0 = 4; i_0 < 16; i_0 += 3) 
    {
        for (unsigned int i_1 = 3; i_1 < 15; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) arr_4 [i_0] [i_0]);
                    var_21 = ((/* implicit */_Bool) (-((~(((/* implicit */int) (unsigned char)149))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 3; i_3 < 15; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                arr_16 [i_0] [i_2] [i_2] [i_3] [i_3 - 3] [10U] [i_4] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((+(8388576U))), (((/* implicit */unsigned int) (+(((/* implicit */int) (short)259)))))))) ? ((-(((/* implicit */int) min(((short)259), ((short)-16487)))))) : (((((/* implicit */_Bool) var_17)) ? (((((/* implicit */_Bool) arr_0 [(unsigned short)5])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_6 [i_4] [i_2] [i_0] [i_0])))) : (((/* implicit */int) (short)259))))));
                                var_22 |= ((/* implicit */unsigned char) (((+(((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)-253)))))) * (((/* implicit */int) max((((/* implicit */unsigned short) arr_0 [i_0 + 1])), ((unsigned short)23651))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 10; i_5 += 2) 
    {
        for (unsigned int i_6 = 0; i_6 < 10; i_6 += 3) 
        {
            {
                arr_24 [i_5] [i_5] [i_5] |= ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) arr_5 [5U] [(unsigned short)3] [i_6])) ? (((((/* implicit */int) arr_23 [i_5] [i_6])) % (((/* implicit */int) arr_7 [i_5] [i_5] [i_5])))) : (((/* implicit */int) max((arr_4 [i_5] [i_5]), (((/* implicit */short) var_1))))))));
                /* LoopNest 3 */
                for (unsigned char i_7 = 0; i_7 < 10; i_7 += 3) 
                {
                    for (unsigned int i_8 = 3; i_8 < 7; i_8 += 4) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 33678295U)) ? (((/* implicit */int) (short)-2894)) : (((/* implicit */int) (signed char)120))));
                                var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((unsigned short) -548834900))) : ((-(((/* implicit */int) arr_15 [6] [i_8 + 3] [(unsigned short)1]))))));
                                arr_32 [i_9] [i_6] [i_7] [i_8] [i_9] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) << (0U)))), (min((2985024346U), (((/* implicit */unsigned int) arr_10 [i_8] [i_8] [i_8] [i_8] [i_8 - 3]))))));
                            }
                        } 
                    } 
                } 
                arr_33 [i_6] = ((/* implicit */unsigned short) ((min((((var_9) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_5] [i_5] [i_6] [i_6] [i_6]))))), (((/* implicit */unsigned int) ((_Bool) arr_31 [i_5] [i_6]))))) & ((~(((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_5]))) : (var_4)))))));
                /* LoopNest 2 */
                for (short i_10 = 0; i_10 < 10; i_10 += 4) 
                {
                    for (unsigned int i_11 = 0; i_11 < 10; i_11 += 4) 
                    {
                        {
                            var_25 = ((/* implicit */int) var_4);
                            /* LoopSeq 2 */
                            for (unsigned long long int i_12 = 0; i_12 < 10; i_12 += 3) 
                            {
                                arr_41 [i_11] [i_11] [(short)1] [(short)5] [(short)1] [(short)1] = ((((((/* implicit */int) (unsigned short)14031)) + (((/* implicit */int) var_8)))) < (((((/* implicit */int) max((((/* implicit */short) (signed char)-1)), ((short)2883)))) >> (((((/* implicit */int) arr_27 [i_12] [i_10] [i_11] [i_10] [(_Bool)1] [i_5])) - (41263))))));
                                var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_5 [i_11] [i_10] [i_6])) ? (-5610320237589802696LL) : (((/* implicit */long long int) var_14)))) & (((/* implicit */long long int) (+(arr_5 [i_5] [i_6] [i_10])))))))));
                                var_27 = max((((/* implicit */unsigned short) (short)-320)), ((unsigned short)32204));
                                var_28 = ((/* implicit */unsigned short) max((min((((/* implicit */long long int) arr_21 [i_5] [(unsigned char)9] [i_12])), (arr_37 [i_12] [i_11] [i_10] [(_Bool)1] [i_6] [i_5]))), (((/* implicit */long long int) max((arr_2 [i_11]), (arr_2 [i_11]))))));
                            }
                            for (signed char i_13 = 2; i_13 < 8; i_13 += 1) 
                            {
                                arr_46 [i_5] = ((/* implicit */unsigned int) max(((-(((/* implicit */int) max(((unsigned short)52561), (((/* implicit */unsigned short) (short)252))))))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) min((arr_27 [(unsigned char)6] [3U] [i_10] [i_11] [1U] [i_13]), (((/* implicit */unsigned short) arr_11 [i_5]))))) : (((/* implicit */int) arr_34 [i_11] [i_10] [(unsigned short)1] [i_5]))))));
                                arr_47 [i_5] [i_6] [i_10] [(unsigned char)9] [i_13] = max((((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (unsigned char)131)))) && (((((/* implicit */_Bool) (short)2894)) && (((/* implicit */_Bool) (signed char)-108))))))), (174578624U));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
}
