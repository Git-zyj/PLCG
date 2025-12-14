/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183655
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
    var_15 ^= ((unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (-1160446973) : (((/* implicit */int) var_9)))))));
    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_3) << (((var_10) - (4753809720652426028ULL)))))) ? (((((/* implicit */_Bool) -1160446973)) ? (((/* implicit */unsigned long long int) 2103445809147140350LL)) : (var_10))) : (((/* implicit */unsigned long long int) -67828728))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        arr_11 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (+(((var_1) & (((/* implicit */int) arr_4 [i_0] [i_1] [i_2]))))));
                        var_17 ^= ((/* implicit */unsigned long long int) ((var_7) >= (((/* implicit */unsigned long long int) var_4))));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 1) 
                    {
                        var_18 = ((((((/* implicit */_Bool) var_3)) ? (var_5) : (-2111452776))) / (((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_0] [i_4])) ? (var_6) : (((/* implicit */int) var_9)))));
                        arr_15 [i_0] [i_1] &= ((/* implicit */long long int) ((((/* implicit */_Bool) 32767)) ? (((/* implicit */int) ((unsigned short) arr_5 [i_4]))) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_2]))));
                        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) arr_9 [i_0] [i_2] [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)15694)) : (((/* implicit */int) (short)32767))))))));
                        var_20 = ((/* implicit */_Bool) var_6);
                        var_21 |= ((/* implicit */unsigned char) 15762598695796736ULL);
                    }
                    var_22 += ((/* implicit */long long int) (~(arr_1 [i_0])));
                    var_23 = ((unsigned short) arr_2 [i_2]);
                }
            } 
        } 
        var_24 *= ((/* implicit */unsigned long long int) var_6);
        arr_16 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */int) (_Bool)0)) % (((/* implicit */int) var_14)))) | (((/* implicit */int) var_12))));
    }
    for (int i_5 = 0; i_5 < 18; i_5 += 1) 
    {
        arr_19 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (var_3) : (((unsigned long long int) var_14))));
        arr_20 [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)136)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-5067))) : (16917749995026377254ULL)));
        arr_21 [i_5] [i_5] = ((/* implicit */unsigned short) arr_17 [i_5]);
    }
    var_25 = ((/* implicit */int) ((((/* implicit */_Bool) (-(var_6)))) ? (min((((/* implicit */long long int) ((var_6) / (var_1)))), ((-(-2103445809147140350LL))))) : (((/* implicit */long long int) ((/* implicit */int) var_12)))));
}
