/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142174
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
    var_12 = ((/* implicit */short) var_0);
    var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) var_5))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (short)511))) : (arr_4 [i_1] [i_1] [i_0]))) ^ (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)15)), ((short)14452)))))));
                /* LoopNest 2 */
                for (signed char i_2 = 3; i_2 < 23; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 21; i_3 += 1) 
                    {
                        {
                            arr_11 [i_3] [i_2] [i_0] [i_0] = ((min((((((/* implicit */_Bool) var_7)) ? (16970271488534108547ULL) : (((/* implicit */unsigned long long int) 6796650986193365903LL)))), (arr_7 [i_0] [i_1] [i_2] [i_2 - 1]))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) -6796650986193365917LL)) ? (arr_8 [i_0] [i_2]) : (((/* implicit */unsigned long long int) arr_10 [i_0] [i_1] [i_2] [i_0] [i_0] [i_2]))))))));
                            var_15 -= ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_2 - 2] [i_2 - 2] [i_3 + 2] [(short)22])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
    {
        for (signed char i_5 = 0; i_5 < 15; i_5 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_6 = 2; i_6 < 14; i_6 += 4) 
                {
                    for (int i_7 = 0; i_7 < 15; i_7 += 2) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 15; i_8 += 1) 
                        {
                            {
                                var_16 -= ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-17707)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (12829546265753460467ULL)))) || (((/* implicit */_Bool) ((unsigned int) arr_6 [(unsigned char)4] [i_5] [i_6 + 1])))))), ((~(arr_15 [i_7] [i_5] [i_4 - 1])))));
                                arr_28 [i_4] [i_5] [i_6] [i_6] [i_8] [i_8] [i_8] = ((/* implicit */unsigned short) (_Bool)1);
                                var_17 += ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_4])) % (((/* implicit */int) (short)32748))))) > (min((((/* implicit */unsigned long long int) arr_17 [i_4 - 1] [i_4 - 1] [i_8])), (11052842746555577321ULL))))) ? (arr_8 [i_4] [i_4]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_26 [i_4] [i_5] [i_6 - 2] [i_4] [8ULL])) ? (((/* implicit */int) (short)-496)) : (((/* implicit */int) (_Bool)1)))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_9 = 0; i_9 < 15; i_9 += 4) 
                {
                    for (unsigned char i_10 = 0; i_10 < 15; i_10 += 3) 
                    {
                        {
                            arr_33 [i_10] [i_5] [i_5] [(_Bool)1] [7] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1476472585175443069ULL)) ? (((/* implicit */int) (signed char)113)) : (arr_32 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4] [i_4 - 1])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (2637545536606227623ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_4 - 1]))))))));
                            var_18 = ((/* implicit */unsigned char) (-(((arr_12 [i_4 - 1] [i_4 - 1]) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1))))));
                            var_19 |= ((/* implicit */unsigned int) ((var_5) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-17731)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-615929002412191365LL))))));
                        }
                    } 
                } 
                arr_34 [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((unsigned short)42965), (((/* implicit */unsigned short) (_Bool)1))))) ? (((/* implicit */int) arr_31 [i_4 - 1] [i_4 - 1] [i_4] [i_4 - 1] [i_4 - 1] [i_4 - 1])) : (((/* implicit */int) ((((/* implicit */_Bool) 11103529158134683461ULL)) && (((/* implicit */_Bool) var_11)))))));
            }
        } 
    } 
    var_20 ^= ((/* implicit */int) var_7);
}
