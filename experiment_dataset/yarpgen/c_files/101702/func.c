/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101702
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
    var_17 = ((/* implicit */unsigned int) max(((-(min((((/* implicit */long long int) 1457800904U)), (-1LL))))), (((/* implicit */long long int) var_11))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            {
                arr_5 [i_1] = ((/* implicit */short) arr_0 [i_1 + 1] [i_1 + 1]);
                var_18 = ((/* implicit */short) min((var_2), (((/* implicit */unsigned short) ((signed char) arr_4 [i_0] [i_0] [i_0])))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        var_19 &= ((/* implicit */signed char) var_13);
        /* LoopNest 2 */
        for (long long int i_3 = 2; i_3 < 11; i_3 += 1) 
        {
            for (unsigned int i_4 = 2; i_4 < 13; i_4 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 15; i_5 += 2) 
                    {
                        for (long long int i_6 = 0; i_6 < 15; i_6 += 1) 
                        {
                            {
                                var_20 -= ((/* implicit */int) max((((/* implicit */unsigned long long int) (unsigned char)177)), (((18446744073709551615ULL) + (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [13ULL] [13ULL] [13ULL] [(unsigned char)13] [i_6])))))))));
                                var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_0 [i_2 - 1] [i_2])))) ? (((((/* implicit */_Bool) arr_13 [i_2] [i_4 - 2] [i_2 - 1] [i_2])) ? (6272225206530825355ULL) : (arr_13 [i_2] [i_4 - 2] [i_2 - 1] [i_2]))) : (min((arr_13 [i_2] [i_4 - 2] [i_2 - 1] [i_2]), (((/* implicit */unsigned long long int) arr_8 [i_2]))))));
                                var_22 = ((/* implicit */_Bool) max((var_22), (min(((!(((/* implicit */_Bool) arr_2 [i_2 - 1] [i_4])))), ((_Bool)0)))));
                                var_23 = ((/* implicit */unsigned int) 18446744073709551615ULL);
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned long long int i_7 = 1; i_7 < 14; i_7 += 1) 
                    {
                        var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((unsigned short) min((((/* implicit */unsigned int) (unsigned char)184)), (arr_15 [i_7 + 1] [i_3 + 4] [(signed char)5] [11] [i_4])))))));
                        var_25 -= ((/* implicit */long long int) min((min((((((/* implicit */_Bool) arr_1 [9ULL] [i_3])) ? (0ULL) : (((/* implicit */unsigned long long int) arr_15 [i_2] [i_2] [i_2] [(signed char)10] [14LL])))), (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) arr_8 [i_3 + 2]))));
                    }
                    for (unsigned int i_8 = 4; i_8 < 14; i_8 += 2) 
                    {
                        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_2 - 1])) + (((/* implicit */int) arr_9 [i_2 - 1]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_2 - 1])) ? (((/* implicit */int) arr_9 [i_2 - 1])) : (((/* implicit */int) arr_9 [i_2 - 1]))))) : (((((/* implicit */_Bool) arr_9 [i_2 - 1])) ? (5168194596168031485LL) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))));
                        /* LoopSeq 2 */
                        for (long long int i_9 = 0; i_9 < 15; i_9 += 2) 
                        {
                            var_27 &= ((/* implicit */unsigned char) min(((+(((/* implicit */int) var_6)))), (((/* implicit */int) (unsigned char)72))));
                            var_28 = ((/* implicit */unsigned long long int) ((unsigned int) arr_4 [4U] [i_2 - 1] [i_2 - 1]));
                        }
                        for (unsigned int i_10 = 3; i_10 < 14; i_10 += 4) 
                        {
                            var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) 2470400978783134581LL))));
                            var_30 = ((/* implicit */int) (+(((((/* implicit */_Bool) arr_25 [(unsigned char)5] [i_3] [i_3] [i_2])) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_1 [i_4] [0U]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_25 [i_2] [i_8] [3ULL] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_12))))))));
                            var_31 = ((/* implicit */unsigned char) ((unsigned long long int) -6389878133893862136LL));
                            arr_30 [(_Bool)1] [i_3] [i_4] [(unsigned char)4] [i_2] = ((/* implicit */signed char) ((-5168194596168031486LL) - (arr_8 [0])));
                        }
                        arr_31 [i_2] = (i_2 % 2 == 0) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) max((var_15), (var_4)))) >> (((min((arr_29 [i_2 - 1] [i_2] [i_2 - 1] [i_2] [(_Bool)1] [i_2]), (arr_23 [i_8] [i_4 - 2] [i_3 + 3] [i_2]))) - (3639633440734300848ULL)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : ((+(((((/* implicit */_Bool) (short)19449)) ? (2470400978783134581LL) : (((/* implicit */long long int) 0U))))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) max((var_15), (var_4)))) >> (((((min((arr_29 [i_2 - 1] [i_2] [i_2 - 1] [i_2] [(_Bool)1] [i_2]), (arr_23 [i_8] [i_4 - 2] [i_3 + 3] [i_2]))) - (3639633440734300848ULL))) - (2923043079882480694ULL)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : ((+(((((/* implicit */_Bool) (short)19449)) ? (2470400978783134581LL) : (((/* implicit */long long int) 0U)))))))));
                    }
                }
            } 
        } 
    }
    var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) + (var_1)));
}
