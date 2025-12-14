/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126669
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
    var_12 = ((/* implicit */unsigned long long int) min((((/* implicit */int) var_3)), (((((/* implicit */int) max(((_Bool)1), (var_8)))) % (((/* implicit */int) (signed char)-2))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((short) (-(((/* implicit */int) (signed char)9)))))), (((arr_1 [i_0 + 1]) / (((((/* implicit */_Bool) var_4)) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    var_14 &= ((/* implicit */int) max((((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */int) (signed char)15)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_0])))))))), (((((/* implicit */long long int) ((((/* implicit */int) var_2)) * (((/* implicit */int) (signed char)24))))) / (((-4131777523847140615LL) - (((/* implicit */long long int) ((/* implicit */int) var_10)))))))));
                    arr_9 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_2))));
                }
                /* vectorizable */
                for (unsigned short i_3 = 1; i_3 < 21; i_3 += 4) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_4 = 0; i_4 < 23; i_4 += 2) 
                    {
                        var_15 ^= ((/* implicit */unsigned long long int) (~(1975830178)));
                        arr_15 [i_0 - 1] [i_4] [i_0] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) arr_10 [i_0 + 1] [i_1])) : (((/* implicit */int) arr_10 [i_0 + 1] [i_1]))));
                    }
                    var_16 *= ((/* implicit */unsigned int) ((((((/* implicit */int) var_2)) ^ (((/* implicit */int) (signed char)-46)))) - (((/* implicit */int) var_9))));
                    /* LoopSeq 2 */
                    for (short i_5 = 0; i_5 < 23; i_5 += 2) 
                    {
                        var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(4U))))));
                        arr_19 [(short)22] [i_1] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (arr_7 [i_0 + 1] [i_3 + 2] [i_5] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
                        var_18 *= ((/* implicit */signed char) ((((/* implicit */int) (signed char)59)) & (((/* implicit */int) arr_18 [i_0 + 1]))));
                        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) arr_12 [i_3 + 2] [i_3 + 2] [i_3 + 1] [i_0 - 1]))));
                        var_20 = ((/* implicit */long long int) (~(((/* implicit */int) ((short) var_3)))));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        arr_22 [i_0] [20] [i_3] [i_6] |= ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))) < (var_0))));
                        var_21 = ((/* implicit */unsigned int) ((577077622U) > (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_3 - 1] [i_1] [i_0 - 2] [i_6])))));
                    }
                }
                arr_23 [i_0] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) arr_5 [i_0] [i_1])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_7))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_0]))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-11594))) : (arr_1 [i_0 - 1])))))));
                /* LoopSeq 1 */
                for (signed char i_7 = 1; i_7 < 22; i_7 += 4) 
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 23; i_8 += 4) 
                    {
                        for (int i_9 = 0; i_9 < 23; i_9 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) max((((((/* implicit */_Bool) (signed char)4)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) min((((/* implicit */short) (_Bool)0)), ((short)-6199)))))), (((((/* implicit */int) var_8)) << (((/* implicit */int) arr_17 [i_8] [i_8])))))))));
                                var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((unsigned int) (short)-1675)))));
                                arr_30 [i_0 + 1] [i_0] [i_7] = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)161))));
                                var_24 = ((/* implicit */_Bool) var_0);
                                var_25 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((int) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)1674)))))), (((long long int) var_7))));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */signed char) (-(((/* implicit */int) min(((!(((/* implicit */_Bool) var_6)))), (((_Bool) var_6)))))));
                }
            }
        } 
    } 
}
