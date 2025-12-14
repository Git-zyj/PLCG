/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120288
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
    var_12 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) max((((/* implicit */unsigned int) var_7)), (2762326446U)))), (var_2)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : ((-(((unsigned long long int) var_2))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */int) (+(max((arr_0 [i_0]), (arr_0 [i_0])))));
                arr_4 [(unsigned char)7] |= ((/* implicit */short) ((min((((/* implicit */unsigned int) arr_2 [i_0])), (1532640849U))) + (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-1)) - (((/* implicit */int) arr_2 [i_0])))))));
                arr_5 [i_0] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((unsigned char) (unsigned char)106))))) ? (min((((/* implicit */int) arr_3 [i_0] [i_1])), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_3)))))) : ((+(((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) || (((/* implicit */_Bool) arr_1 [i_0])))))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_3])) ? (arr_0 [i_2]) : (arr_0 [i_0])))) ? (min((arr_0 [i_2]), (((/* implicit */long long int) var_7)))) : (((((/* implicit */_Bool) (unsigned char)126)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_0 [i_0])))));
                            arr_11 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) min((arr_3 [i_0] [i_1]), (((/* implicit */short) (unsigned char)224))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)155)) && (((/* implicit */_Bool) arr_10 [(unsigned char)10] [(unsigned char)10] [9] [i_3]))))) : (((/* implicit */int) arr_6 [8ULL] [8ULL] [i_3])))) < (max((((/* implicit */int) ((arr_9 [i_0] [i_1]) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [(unsigned char)7])))))), ((+(((/* implicit */int) var_8))))))));
                            arr_12 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_8 [i_3])) ? (((/* implicit */int) (unsigned short)65531)) : (((/* implicit */int) var_5))))));
                            arr_13 [i_3] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2] [i_2]))) < (((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_2] [i_3]))) - (((((/* implicit */_Bool) arr_3 [i_1] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-36))) : (var_10)))))));
                        }
                    } 
                } 
                var_15 &= ((/* implicit */unsigned int) ((var_9) | (((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_3)), (var_0)))) ? (((/* implicit */int) arr_7 [i_0] [(unsigned char)0] [i_1])) : (((/* implicit */int) arr_3 [i_0] [i_0]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 1) 
    {
        for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 1) 
        {
            {
                arr_21 [i_4] [(unsigned char)15] |= ((/* implicit */short) ((((arr_16 [i_4]) & (arr_16 [i_4]))) | (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
                var_16 += ((/* implicit */unsigned char) ((((/* implicit */unsigned int) min((((/* implicit */int) arr_19 [i_5] [i_4])), (((var_1) ^ (32983224)))))) | (min((arr_16 [i_4]), (((1532640849U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65514)))))))));
            }
        } 
    } 
    var_17 ^= ((/* implicit */unsigned int) var_5);
}
