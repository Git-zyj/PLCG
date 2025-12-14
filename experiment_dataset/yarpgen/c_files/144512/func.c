/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144512
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((arr_0 [i_0]) - (((/* implicit */int) (short)32759))))) : ((~(arr_2 [i_0] [i_0])))));
        var_15 = max(((+(((/* implicit */int) var_11)))), (((/* implicit */int) var_8)));
        arr_3 [i_0] = ((/* implicit */_Bool) ((unsigned int) 18446744073709551615ULL));
        var_16 = ((/* implicit */unsigned int) ((short) (unsigned char)21));
    }
    var_17 ^= ((/* implicit */short) var_3);
    /* LoopNest 2 */
    for (unsigned char i_1 = 1; i_1 < 19; i_1 += 3) 
    {
        for (long long int i_2 = 0; i_2 < 23; i_2 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (long long int i_3 = 2; i_3 < 21; i_3 += 3) 
                {
                    arr_11 [i_3] [i_2] [i_1 + 3] [i_3] = ((/* implicit */short) ((((((/* implicit */_Bool) 793239964)) ? (8871290605486267336ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)235))))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)33158)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)17245))) : (4294967295U))))));
                    var_18 = ((int) ((arr_10 [i_3 + 2] [i_1 + 1]) & (((/* implicit */int) arr_6 [i_1 + 2] [i_3 - 2]))));
                    var_19 = ((/* implicit */unsigned int) (-((-(((((/* implicit */_Bool) (unsigned char)246)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2] [i_3 - 2]))) : (var_0)))))));
                    var_20 += ((/* implicit */long long int) ((((/* implicit */_Bool) max((var_10), (((/* implicit */short) var_12))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_2])) ? (((/* implicit */int) min((var_12), (arr_9 [i_1 + 3] [i_2])))) : (((((/* implicit */_Bool) var_9)) ? (var_6) : (((/* implicit */int) arr_9 [i_3 - 2] [i_1 + 3]))))))) : (max((((/* implicit */unsigned long long int) arr_4 [i_3 - 2] [i_1 + 2])), (((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)48))) : (18445710758858280569ULL)))))));
                }
                for (unsigned char i_4 = 0; i_4 < 23; i_4 += 3) 
                {
                    arr_14 [i_1 + 1] [i_4] [i_4] = ((/* implicit */unsigned long long int) max((((((var_9) - (var_9))) > (14ULL))), ((!(((/* implicit */_Bool) (short)-1))))));
                    var_21 = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_7 [i_1 + 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (arr_7 [i_1 + 4]))), (min((((/* implicit */unsigned long long int) arr_9 [i_1 + 4] [i_1 + 1])), (arr_7 [i_1 + 3])))));
                }
                for (unsigned int i_5 = 1; i_5 < 22; i_5 += 3) 
                {
                    var_22 = ((/* implicit */int) arr_16 [i_1 + 2] [i_5 - 1] [i_5 - 1]);
                    var_23 *= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (unsigned char)215)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) ((((/* implicit */int) (short)0)) <= (((/* implicit */int) var_2))))))), (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
                    arr_17 [i_1 + 2] [i_2] [i_5 + 1] [i_5 + 1] = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) arr_13 [i_1 + 1] [i_2] [i_5 - 1])) ? (min((((/* implicit */unsigned int) arr_16 [i_1 + 1] [i_2] [i_5 - 1])), (2097150U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_1 + 3] [i_1 + 1])) ? (((/* implicit */int) arr_12 [i_5 + 1] [i_5 + 1])) : (((/* implicit */int) var_10))))))));
                }
                var_24 = ((/* implicit */unsigned int) (unsigned short)65513);
            }
        } 
    } 
}
