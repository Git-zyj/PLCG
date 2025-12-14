/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108803
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
    var_12 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_6)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 13596952681135736161ULL)))))))), (((/* implicit */unsigned int) ((((/* implicit */int) ((var_3) || (((/* implicit */_Bool) var_8))))) ^ (((/* implicit */int) var_5)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_1] [i_1] [i_1] = ((/* implicit */signed char) (+(((/* implicit */int) min(((unsigned short)6188), (((/* implicit */unsigned short) ((-1349606818) > (((/* implicit */int) (unsigned char)154))))))))));
                var_13 = ((/* implicit */_Bool) (((~(3519718161U))) << (((max((((/* implicit */unsigned int) arr_0 [i_0])), (4037737760U))) - (4037737750U)))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 4; i_2 < 19; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        {
                            arr_13 [i_1] [i_2 - 4] [i_1] = (_Bool)1;
                            /* LoopSeq 4 */
                            for (signed char i_4 = 0; i_4 < 21; i_4 += 4) 
                            {
                                arr_17 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) (+((+(((/* implicit */int) max(((unsigned char)205), (((/* implicit */unsigned char) arr_5 [i_0] [i_1] [i_4])))))))));
                                arr_18 [5U] [i_1] [i_1] [i_2 - 4] [i_1] [i_4] [i_4] = ((/* implicit */unsigned char) ((((arr_15 [i_2] [i_2 + 2] [i_2] [i_2 - 4] [i_2 - 1] [i_2]) << (((((((-12914360) + (((/* implicit */int) (_Bool)1)))) + (12914406))) - (47))))) << ((((((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (short)-18941))) : (5767887167449671326LL))) + (19000LL))) - (59LL)))));
                                var_14 = arr_15 [i_0] [i_3] [i_2 + 2] [i_3] [i_3] [i_2 - 3];
                                arr_19 [i_0] [(short)20] [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) (((((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)27783))) : (arr_14 [i_0] [i_4] [i_3] [i_2] [i_2 + 2] [i_1] [i_0]))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-61)) ? (((/* implicit */int) arr_5 [(unsigned char)10] [i_1] [(unsigned char)10])) : (((/* implicit */int) (unsigned char)23))))))) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)28510)))));
                            }
                            /* vectorizable */
                            for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 2) 
                            {
                                arr_22 [i_0] [12U] [12U] [i_1] [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (-6642147684705268507LL)))) ? (7281908851208332907ULL) : (((2688788774973009774ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-6)))))));
                                arr_23 [i_0] [i_1] [i_1] = ((unsigned long long int) arr_11 [i_1] [i_1] [i_2 + 2]);
                                var_15 ^= ((/* implicit */signed char) arr_16 [i_0] [i_0] [18LL] [i_3] [i_5] [i_0]);
                                var_16 = ((((/* implicit */_Bool) (unsigned char)4)) ? (4294967285U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))));
                                var_17 -= var_5;
                            }
                            /* vectorizable */
                            for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                            {
                                var_18 = ((/* implicit */unsigned long long int) max((var_18), (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (arr_20 [i_6 + 1] [i_6] [i_3] [i_2] [i_2] [i_1] [i_0])))));
                                var_19 ^= ((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned char)139)) ? (var_7) : (((/* implicit */unsigned long long int) 1139311277U)))) + (((/* implicit */unsigned long long int) ((unsigned int) (unsigned char)126)))));
                                var_20 += ((unsigned long long int) arr_12 [i_3]);
                            }
                            for (unsigned int i_7 = 1; i_7 < 17; i_7 += 4) 
                            {
                                arr_28 [i_7] [i_1] [i_3] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)51792))));
                                arr_29 [i_2] [14LL] [i_1] [i_3] [i_7] [i_0] = ((/* implicit */unsigned long long int) -3273682008537737495LL);
                                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) arr_11 [i_3] [i_3] [i_3]))));
                                arr_30 [i_0] [i_1] [i_2] [i_2] [i_3] [i_3] [(unsigned char)19] = ((/* implicit */unsigned char) ((((_Bool) (!(((/* implicit */_Bool) (unsigned char)192))))) ? ((((!(((/* implicit */_Bool) arr_20 [i_7 - 1] [i_3] [(_Bool)1] [i_2] [i_1] [i_0] [i_0])))) ? (var_1) : (((/* implicit */unsigned long long int) ((unsigned int) arr_16 [i_0] [i_1] [i_1] [i_1] [7ULL] [i_7]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                            }
                            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) (_Bool)1)))))) ? (((/* implicit */unsigned int) ((arr_7 [i_0]) ? (((/* implicit */int) ((_Bool) arr_21 [i_0] [i_1] [i_1] [i_3]))) : (((((/* implicit */int) (unsigned char)114)) * (((/* implicit */int) (_Bool)1))))))) : (((3155656020U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)187)))))));
                            arr_31 [i_1] [i_1] [i_1] [i_1] = (!((!(((/* implicit */_Bool) -536870912LL)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 += ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 32736)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-54))) : (var_4)))) ? (((((/* implicit */int) (unsigned short)224)) + (((/* implicit */int) (signed char)67)))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-49))) != (var_9))))))) * (var_1)));
}
