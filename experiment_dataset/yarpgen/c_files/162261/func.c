/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162261
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (signed char i_2 = 3; i_2 < 16; i_2 += 1) 
            {
                {
                    var_15 ^= ((/* implicit */signed char) max((min((min((((/* implicit */long long int) arr_10 [i_0] [i_1] [i_0])), (-9223372036854775788LL))), (((/* implicit */long long int) max(((short)26014), (((/* implicit */short) arr_3 [i_1] [i_1]))))))), (((/* implicit */long long int) var_3))));
                    var_16 ^= ((/* implicit */int) var_7);
                    /* LoopSeq 4 */
                    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        var_17 = ((/* implicit */short) ((17632533675165540630ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)-26038), ((short)-26038)))))));
                        arr_15 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */long long int) (short)-10812);
                    }
                    /* vectorizable */
                    for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 2) 
                    {
                        var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_1]))));
                        var_19 |= ((/* implicit */short) ((unsigned char) 17632533675165540652ULL));
                        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-26014)) ? (-8110599078013202593LL) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_2] [0] [i_2] [i_4] [i_2 - 2] [(short)8])))));
                    }
                    for (int i_5 = 1; i_5 < 17; i_5 += 3) 
                    {
                        var_21 = ((/* implicit */unsigned long long int) ((((long long int) max((((/* implicit */unsigned long long int) var_7)), (arr_18 [i_1] [i_1] [i_0] [i_5] [i_2] [i_5])))) * (((((/* implicit */long long int) ((/* implicit */int) (signed char)72))) / (-9013894237750152609LL)))));
                        arr_23 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((short) 15589173297664403052ULL));
                    }
                    /* vectorizable */
                    for (signed char i_6 = 4; i_6 < 16; i_6 += 1) 
                    {
                        var_22 = ((/* implicit */signed char) var_13);
                        var_23 = ((/* implicit */int) ((((/* implicit */_Bool) 3105683275475894159ULL)) ? (((((/* implicit */_Bool) var_9)) ? (arr_9 [i_0] [i_1] [i_0] [i_6 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)26043))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))));
                        var_24 = ((/* implicit */unsigned long long int) ((int) arr_9 [i_6 + 2] [i_2 - 1] [(short)14] [i_2 - 1]));
                        var_25 = ((/* implicit */int) arr_7 [i_6 - 2] [i_1] [i_2 - 1]);
                        var_26 = -256;
                    }
                    var_27 = ((/* implicit */int) (!(((/* implicit */_Bool) -524175752))));
                }
            } 
        } 
    } 
    var_28 |= ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) max((-7766554428845380160LL), (((/* implicit */long long int) (signed char)-60)))))))) < (((int) (short)-22658))));
    var_29 = ((/* implicit */int) ((((max((var_14), (((/* implicit */unsigned long long int) var_3)))) + (((((/* implicit */unsigned long long int) var_12)) - (var_14))))) & (((/* implicit */unsigned long long int) ((var_11) / (min((var_12), (var_12))))))));
    var_30 = var_3;
    /* LoopNest 3 */
    for (int i_7 = 2; i_7 < 16; i_7 += 4) 
    {
        for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 2) 
        {
            for (int i_9 = 2; i_9 < 14; i_9 += 4) 
            {
                {
                    var_31 = ((/* implicit */unsigned long long int) ((int) 17632533675165540628ULL));
                    var_32 = ((/* implicit */int) ((((/* implicit */unsigned long long int) max((-1415560994), (((/* implicit */int) (unsigned char)120))))) - (((unsigned long long int) (signed char)59))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 17; i_10 += 3) 
                    {
                        for (short i_11 = 0; i_11 < 17; i_11 += 3) 
                        {
                            {
                                var_33 ^= ((/* implicit */unsigned char) (+(min((((/* implicit */unsigned long long int) var_6)), (arr_1 [i_8])))));
                                var_34 = ((/* implicit */int) var_5);
                                var_35 |= ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) (signed char)31)) ? (arr_18 [i_7 - 1] [i_7] [i_8] [i_7 - 1] [i_7 - 1] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-29859))))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) (signed char)(-127 - 1))), (1572760830))))));
                            }
                        } 
                    } 
                    var_36 = ((/* implicit */short) ((long long int) ((arr_22 [i_7] [16] [i_8] [i_9]) < (((/* implicit */int) (signed char)60)))));
                }
            } 
        } 
    } 
}
