/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146003
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
    for (short i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 17; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */int) ((((/* implicit */_Bool) min(((signed char)-12), ((signed char)-34)))) ? (min((((/* implicit */unsigned long long int) arr_4 [i_1] [i_0 + 1])), (arr_0 [i_0 + 1]))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_4 [i_1] [i_0 + 1])))))));
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    var_15 *= ((/* implicit */unsigned int) var_9);
                    var_16 = ((/* implicit */_Bool) ((((/* implicit */int) ((((((/* implicit */int) (signed char)-12)) <= (((/* implicit */int) (_Bool)1)))) || (((/* implicit */_Bool) ((var_10) / (var_0))))))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0 + 1])))))));
                }
                for (unsigned char i_3 = 2; i_3 < 17; i_3 += 2) 
                {
                    arr_12 [i_1] [i_1] [i_1 + 1] = ((/* implicit */unsigned char) ((arr_3 [i_0] [i_0] [7]) <= (((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) var_3)) : (78671269)))) ? ((~(((/* implicit */int) (signed char)-17)))) : (((/* implicit */int) (signed char)-12))))));
                    var_17 *= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (unsigned char)1)) ? (((((/* implicit */int) (signed char)127)) + (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 2147483647))))))), (((((/* implicit */_Bool) (signed char)40)) ? (2147483647) : (((/* implicit */int) (signed char)35))))));
                    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)254)) : (1070011272)))) ? (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_1 + 1]))) <= (arr_5 [i_0] [i_0])))) != (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)0))))))) : (((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_6)) ? (arr_9 [i_1] [i_1 - 3] [i_1]) : (((/* implicit */int) (signed char)-87)))) : (695297554)))));
                }
                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((min((arr_5 [i_1 - 3] [i_1 - 1]), (((/* implicit */unsigned int) var_9)))) / (((/* implicit */unsigned int) ((((/* implicit */int) min((((/* implicit */short) (signed char)1)), (arr_1 [i_0])))) ^ (((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_9)))))))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 14; i_4 += 2) 
    {
        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
        {
            {
                var_20 *= ((/* implicit */short) ((((/* implicit */int) var_7)) <= (min((1880752060), (arr_6 [i_4] [i_4] [i_4])))));
                arr_20 [i_5] [(unsigned char)2] [i_5 + 1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) min(((!(((/* implicit */_Bool) var_8)))), (((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_12)))))))) == (min((((arr_7 [i_4] [i_4] [i_4] [i_4]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-87))) : (var_2))), (((/* implicit */unsigned long long int) ((unsigned char) 1073741824)))))));
            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) var_2);
    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) -2147483620)) ? (((/* implicit */int) (unsigned char)109)) : (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)9)) : (var_8)))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_6)), (var_1)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)232)) : (-352695594)))) : (min((var_2), (((/* implicit */unsigned long long int) (signed char)90)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) >= (var_11)))), (var_13)))))));
}
