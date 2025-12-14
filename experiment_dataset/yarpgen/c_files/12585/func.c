/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12585
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
    for (short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_14 += arr_3 [10U];
                /* LoopSeq 3 */
                for (long long int i_2 = 2; i_2 < 11; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 11; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                arr_11 [i_0] [i_1] [i_0] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_4 [i_2 + 1] [i_3 + 1] [i_3 - 1]), (arr_4 [i_2 - 1] [i_3 - 1] [i_3 - 1])))) ? ((-((+(arr_3 [i_0]))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1)))))));
                                var_15 = ((/* implicit */signed char) ((short) ((min((3969834957U), (((/* implicit */unsigned int) (unsigned char)241)))) > (max((3U), (3969834957U))))));
                            }
                        } 
                    } 
                    var_16 *= ((/* implicit */short) max((arr_5 [8ULL] [i_0] [i_1] [i_2]), (((unsigned char) 1122860518111633787ULL))));
                }
                for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 3) 
                {
                    arr_16 [i_0] [i_1] [i_0] = ((/* implicit */signed char) (+(min((((/* implicit */unsigned long long int) 3U)), (min((((/* implicit */unsigned long long int) (unsigned char)241)), (140737488355327ULL)))))));
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 1; i_6 < 11; i_6 += 3) 
                    {
                        for (long long int i_7 = 3; i_7 < 9; i_7 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */short) min((min((((/* implicit */unsigned long long int) var_8)), (max((((/* implicit */unsigned long long int) 3969834945U)), (var_1))))), (((/* implicit */unsigned long long int) ((arr_1 [i_0] [i_6 + 1]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)11680))))))));
                                var_18 = ((/* implicit */unsigned long long int) arr_0 [i_0]);
                                arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */int) arr_5 [i_0] [i_1] [i_7 + 2] [i_7])) & (((/* implicit */int) arr_5 [i_0] [i_5] [i_7 + 3] [i_7])))) >> (((87907400) >> (((1806594402U) - (1806594380U)))))));
                            }
                        } 
                    } 
                    arr_22 [i_0] [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (+(arr_15 [i_0] [i_0] [i_5] [i_5])))) > (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) var_5)) : (arr_13 [i_0] [i_0] [i_0])))))), (((((/* implicit */_Bool) ((unsigned short) (_Bool)1))) ? (min((3239636459060337380ULL), (((/* implicit */unsigned long long int) arr_3 [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 12; i_8 += 3) 
                {
                    arr_25 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(-1439864146)));
                    arr_26 [i_0] = ((/* implicit */signed char) ((((unsigned long long int) 18446603336221196266ULL)) < (((/* implicit */unsigned long long int) 4294967289U))));
                }
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) min(((-(((/* implicit */int) var_6)))), (((/* implicit */int) var_6))));
}
