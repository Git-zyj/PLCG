/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136984
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
    var_15 *= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)-11644)) : (((/* implicit */int) max(((unsigned short)27069), (((/* implicit */unsigned short) (short)-309))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        arr_2 [i_0] |= var_11;
        var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (((((var_3) + (9223372036854775807LL))) << (((((/* implicit */int) arr_0 [i_0] [i_0])) - (1))))) : (((((/* implicit */long long int) ((/* implicit */int) var_4))) / (-7977993456867919943LL))))))));
        arr_3 [i_0 - 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)230))))) : (2785559053U)));
        var_17 = (!(((/* implicit */_Bool) (short)308)));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 23; i_1 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned int i_2 = 0; i_2 < 23; i_2 += 4) 
        {
            for (long long int i_3 = 3; i_3 < 21; i_3 += 3) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_18 *= ((/* implicit */signed char) arr_8 [i_2] [i_2] [i_2]);
                        arr_18 [i_4] [i_3] [i_3] [i_2] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) var_11)) / (((/* implicit */int) arr_14 [i_3] [i_3] [i_3 + 2] [i_2] [i_2] [i_2]))));
                        var_19 *= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
                        arr_19 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (+((-(((/* implicit */int) (short)-333))))));
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */unsigned short) arr_8 [i_1] [i_1] [i_1]);
    }
    var_21 = ((/* implicit */unsigned long long int) ((unsigned char) var_1));
    /* LoopNest 3 */
    for (unsigned int i_5 = 0; i_5 < 11; i_5 += 3) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (long long int i_7 = 0; i_7 < 11; i_7 += 4) 
            {
                {
                    var_22 = arr_0 [i_5] [i_5];
                    /* LoopNest 2 */
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        for (long long int i_9 = 1; i_9 < 10; i_9 += 2) 
                        {
                            {
                                var_23 += ((/* implicit */long long int) min((((((/* implicit */unsigned long long int) (-(var_10)))) % (((((/* implicit */_Bool) (signed char)0)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)30851))))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned char) (short)-333))))))));
                                arr_32 [i_5] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */long long int) arr_27 [i_5] [i_6] [i_9 - 1] [i_9 - 1] [i_9] [i_9]);
                                arr_33 [i_5] = ((((((/* implicit */_Bool) arr_27 [i_8 - 1] [i_9 - 1] [i_9 - 1] [i_9] [i_9 - 1] [i_8 - 1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1)))) % (((/* implicit */int) arr_0 [i_6] [i_7])));
                                var_24 = ((/* implicit */unsigned long long int) ((unsigned char) arr_22 [i_5] [i_7]));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_6])) ? (((/* implicit */long long int) var_10)) : (((((/* implicit */_Bool) ((var_11) ? (((/* implicit */int) arr_29 [i_5] [i_5] [i_7] [i_7])) : (((/* implicit */int) (short)333))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_5)))) : (min((((/* implicit */long long int) (unsigned char)172)), (var_3))))))))));
                    var_26 += ((/* implicit */short) arr_9 [i_5] [i_5] [i_7]);
                    var_27 = ((/* implicit */signed char) (unsigned char)172);
                }
            } 
        } 
    } 
}
