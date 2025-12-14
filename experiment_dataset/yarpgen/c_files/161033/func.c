/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161033
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
    var_12 = ((/* implicit */unsigned int) var_3);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [12] [i_0] [10LL] |= ((/* implicit */signed char) max((((/* implicit */long long int) max((arr_5 [i_1]), (arr_5 [i_1])))), (min((8985567680252997012LL), (-8985567680252997013LL)))));
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    arr_9 [i_0] [i_2] [i_2] = ((/* implicit */unsigned int) (!(((((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [(signed char)5] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [(signed char)4]))) : (var_1)))) < (-8985567680252997013LL)))));
                    arr_10 [i_2] [i_1] [i_2] |= ((/* implicit */long long int) arr_8 [(_Bool)1] [i_1] [(_Bool)1] [(signed char)4]);
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                arr_17 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) var_7)) / (((((/* implicit */_Bool) max(((short)-29023), (((/* implicit */short) arr_16 [i_1] [i_4] [i_2] [i_1] [i_4]))))) ? (((/* implicit */int) arr_16 [i_4] [i_3] [i_2] [i_1] [i_0])) : (((/* implicit */int) max(((short)-21272), (((/* implicit */short) arr_3 [(signed char)10])))))))));
                                arr_18 [i_4] [i_1] [i_1] [i_2] [i_3] [(unsigned char)12] = ((/* implicit */int) min(((short)-10680), ((short)-1)));
                                arr_19 [i_0] [(signed char)10] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_5 [i_2]);
                                arr_20 [i_0] [(short)5] [(_Bool)1] [7U] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) 838877991734925675ULL)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (_Bool)1))));
                                arr_21 [0ULL] [i_0] [i_2] [(unsigned short)6] [i_2] [i_3] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (arr_8 [i_4] [i_3] [i_2] [i_1])))) ? (max((min((arr_1 [(signed char)0] [i_4]), (((/* implicit */unsigned long long int) -1)))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (short)-1146)), (-8985567680252996990LL)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0] [(_Bool)1] [i_2] [7U])) ? (((unsigned int) arr_12 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */unsigned int) ((var_5) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_0))))))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_2))));
    var_14 = ((/* implicit */short) min(((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)7287)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))))), (min(((_Bool)0), (((((/* implicit */int) var_0)) >= (((/* implicit */int) (_Bool)1))))))));
    var_15 = ((/* implicit */short) var_4);
}
