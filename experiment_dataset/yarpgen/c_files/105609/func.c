/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105609
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    var_19 -= ((/* implicit */unsigned char) ((((/* implicit */int) (short)-1)) > (((/* implicit */int) max(((short)-1), (((/* implicit */short) (_Bool)1)))))));
                    var_20 = ((/* implicit */unsigned short) var_2);
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned char) var_6);
    var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) max((((((/* implicit */long long int) ((/* implicit */int) (short)-9))) + (((((/* implicit */_Bool) 14595094318067915798ULL)) ? (var_7) : (var_7))))), (((/* implicit */long long int) max((max((var_2), (var_2))), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_1)))))))))))));
    /* LoopNest 2 */
    for (signed char i_3 = 0; i_3 < 21; i_3 += 3) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            {
                var_23 |= max((((/* implicit */unsigned int) ((((2022700095) > (((/* implicit */int) arr_10 [i_3])))) || (((/* implicit */_Bool) (+(var_11))))))), (var_13));
                var_24 += ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((-6321660934679673381LL) & (((/* implicit */long long int) 2154667002U))))) <= (var_12)));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 21; i_5 += 1) 
                {
                    for (int i_6 = 0; i_6 < 21; i_6 += 4) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_6))))), (((15577679464574840575ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_3]))))))) * (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) * (var_13))))));
                            /* LoopSeq 3 */
                            for (short i_7 = 0; i_7 < 21; i_7 += 4) 
                            {
                                var_26 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (5581395957155044372LL)));
                                var_27 = ((/* implicit */int) ((_Bool) max((var_1), (((/* implicit */unsigned short) arr_9 [i_3])))));
                                var_28 += ((/* implicit */unsigned long long int) max((max((arr_16 [(_Bool)1] [i_6] [i_5] [i_5] [i_4] [i_3]), (arr_16 [i_3] [(signed char)4] [13LL] [i_5] [i_6] [i_7]))), (((arr_10 [19LL]) ? (arr_16 [(signed char)9] [i_4] [i_5] [(signed char)16] [i_4] [i_6]) : (arr_16 [i_3] [i_4] [i_5] [17ULL] [i_6] [i_7])))));
                                var_29 *= max((((((/* implicit */_Bool) ((((((/* implicit */int) (short)-30517)) + (2147483647))) >> (((((/* implicit */int) var_2)) - (43)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_6]))) : (max((2154667002U), (var_13))))), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) (short)-30523)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)35982)))), (((((/* implicit */int) arr_9 [(short)0])) + (((/* implicit */int) var_0))))))));
                            }
                            /* vectorizable */
                            for (unsigned char i_8 = 3; i_8 < 18; i_8 += 2) 
                            {
                                arr_22 [i_4] [i_4] [(_Bool)1] = ((/* implicit */int) (!(((/* implicit */_Bool) var_15))));
                                var_30 += ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 2140300280U)) ? (((/* implicit */unsigned int) arr_16 [15ULL] [i_4] [i_4] [i_4] [i_4] [i_4])) : (var_6))) <= (((/* implicit */unsigned int) (-(((/* implicit */int) arr_19 [i_3] [(signed char)19] [i_5])))))));
                                var_31 = ((/* implicit */unsigned short) (-(var_5)));
                            }
                            for (unsigned short i_9 = 1; i_9 < 18; i_9 += 3) 
                            {
                                var_32 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_24 [i_9 + 2] [i_9 + 2] [i_4] [i_9 + 2] [i_4] [i_9 + 2] [i_9 + 2])) ? (arr_24 [i_9 - 1] [i_9 + 2] [i_4] [i_9 + 1] [i_4] [i_9 - 1] [i_9 + 2]) : (arr_24 [i_9 + 1] [i_9 - 1] [i_4] [i_9 - 1] [i_4] [i_9 + 1] [i_9 + 3])))));
                                var_33 = ((/* implicit */signed char) max((((/* implicit */short) (!(((/* implicit */_Bool) arr_11 [i_9 + 2] [i_4] [i_9 + 2]))))), (min(((short)-9074), (((/* implicit */short) (unsigned char)71))))));
                                arr_25 [i_3] [i_4] [i_5] [i_6] [i_4] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned short)23656)))) <= (min((15577679464574840571ULL), (((/* implicit */unsigned long long int) arr_17 [i_6] [i_4] [i_6] [(short)13] [i_6] [i_6] [(unsigned short)20]))))))), (max((arr_21 [i_9 - 1]), (((/* implicit */unsigned int) var_2))))));
                                var_34 = ((/* implicit */unsigned int) ((long long int) ((((int) (unsigned short)35986)) + (((/* implicit */int) arr_10 [i_6])))));
                                arr_26 [i_3] [i_4] [i_4] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (signed char)78))));
                            }
                            var_35 -= ((/* implicit */short) arr_17 [i_3] [i_6] [i_5] [i_6] [i_3] [i_4] [(_Bool)0]);
                            arr_27 [i_3] [i_4] [i_4] [i_6] = ((/* implicit */int) (!(((/* implicit */_Bool) var_7))));
                        }
                    } 
                } 
            }
        } 
    } 
}
