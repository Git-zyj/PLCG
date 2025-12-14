/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116419
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
    var_15 = ((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)-1)) + (2147483647))) >> (((((/* implicit */int) (unsigned char)100)) - (71)))));
    var_16 |= ((/* implicit */unsigned int) (_Bool)0);
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 0LL)), (15296978334703808272ULL)))) ? (((/* implicit */int) ((signed char) -719233980))) : (-719233980)));
                var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */unsigned long long int) max(((~(((/* implicit */int) (_Bool)0)))), (((/* implicit */int) ((((/* implicit */int) var_3)) > (((/* implicit */int) (short)18006)))))))) : (max((15525416147347484522ULL), (((/* implicit */unsigned long long int) arr_3 [i_0 + 1] [i_1 + 1] [i_1])))))))));
                var_19 = ((/* implicit */unsigned int) 7839108488645996930ULL);
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned short i_2 = 0; i_2 < 22; i_2 += 3) 
    {
        var_20 = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_2] [i_2] [i_2]))))) ? (((/* implicit */long long int) (-((+(719233964)))))) : (min((0LL), (arr_10 [i_2]))));
        var_21 = ((/* implicit */unsigned int) ((((_Bool) arr_6 [i_2])) && (((((/* implicit */_Bool) 2147483647)) || (((/* implicit */_Bool) -1059393605))))));
        var_22 = ((/* implicit */unsigned char) ((signed char) 1059393605));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_4 = 1; i_4 < 22; i_4 += 1) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_6 = 0; i_6 < 24; i_6 += 1) 
                    {
                        var_23 ^= ((((max((((/* implicit */unsigned long long int) arr_13 [(short)14] [i_4 + 1])), (8238679900389337750ULL))) > (((/* implicit */unsigned long long int) -1059393605)))) ? (((((/* implicit */_Bool) arr_13 [12ULL] [12ULL])) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) (unsigned short)19125)) ? (((/* implicit */int) (signed char)-7)) : (((/* implicit */int) (signed char)-1)))))) : (((/* implicit */int) min((min((((/* implicit */unsigned short) arr_16 [(unsigned short)2] [i_5])), (var_8))), (((/* implicit */unsigned short) (signed char)63))))));
                        var_24 = ((((/* implicit */_Bool) (~(8360051178937329715ULL)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [i_5] [i_4 - 1] [(unsigned char)19])) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) arr_19 [i_4 + 2] [i_5] [i_5]))))) : (((((/* implicit */_Bool) var_5)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)56632))))));
                        arr_22 [i_3] [i_3] [i_4] [11] [i_3] = (i_3 % 2 == 0) ? (((/* implicit */unsigned long long int) ((((min((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)111))))), (((((/* implicit */long long int) ((/* implicit */int) var_13))) / (6LL))))) + (9223372036854775807LL))) << (((((/* implicit */int) ((signed char) arr_21 [i_4 + 2] [i_4 + 2] [i_4 + 2] [i_3] [i_4 - 1] [i_4 + 2]))) - (119)))))) : (((/* implicit */unsigned long long int) ((((min((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)111))))), (((((/* implicit */long long int) ((/* implicit */int) var_13))) / (6LL))))) + (9223372036854775807LL))) << (((((((((/* implicit */int) ((signed char) arr_21 [i_4 + 2] [i_4 + 2] [i_4 + 2] [i_3] [i_4 - 1] [i_4 + 2]))) - (119))) + (251))) - (12))))));
                        var_25 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((0ULL) <= (0ULL))) ? (((var_11) / (2121750210))) : (((/* implicit */int) ((unsigned char) (short)8988)))))) * (min((arr_17 [i_4 - 1]), (((/* implicit */unsigned long long int) ((_Bool) var_4)))))));
                        arr_23 [i_3] [i_3] [i_5] [i_3] [i_4 - 1] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) var_8)) ? (max((((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)48801))))), (min((((/* implicit */long long int) arr_15 [i_3] [i_4])), (var_6))))) : (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) 1610612736)) : (arr_11 [i_5])))), (min((-1LL), (((/* implicit */long long int) var_4))))))));
                    }
                    /* LoopNest 2 */
                    for (short i_7 = 0; i_7 < 24; i_7 += 4) 
                    {
                        for (unsigned short i_8 = 1; i_8 < 23; i_8 += 3) 
                        {
                            {
                                var_26 -= ((/* implicit */unsigned long long int) var_10);
                                arr_29 [i_3] [i_4] [i_3] [i_5] [i_3] [i_8] = ((/* implicit */long long int) arr_11 [i_8 + 1]);
                                var_27 = ((/* implicit */unsigned short) min((((/* implicit */long long int) -1585421861)), ((-9223372036854775807LL - 1LL))));
                                arr_30 [15LL] [15LL] [i_5] [i_3] = ((/* implicit */unsigned int) 1016943964);
                                var_28 += ((/* implicit */unsigned int) 9220285559269514534LL);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 1) 
                    {
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            {
                                arr_36 [i_10] [i_3] [5] [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_33 [i_4 - 1] [i_4 - 1] [i_4] [i_4] [i_4 + 2] [i_4 + 1]))))) >> (((min((var_1), (((/* implicit */long long int) arr_25 [i_4 + 1] [i_4 - 1] [(unsigned char)12] [i_9] [i_9] [i_9])))) - (47LL)))));
                                var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_19 [5ULL] [20LL] [i_4 - 1])), (var_6)))) ? (((/* implicit */int) (((~(((/* implicit */int) (signed char)111)))) >= (((/* implicit */int) (signed char)-26))))) : (min((((/* implicit */int) (signed char)-99)), (-560368862)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned short i_11 = 4; i_11 < 23; i_11 += 1) 
        {
            var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1433161584)) ? (((/* implicit */int) arr_26 [i_11 - 4] [i_11 - 2] [i_11 + 1] [i_11 - 4] [i_11 - 4] [i_11 - 4])) : (var_11)))) ? (min((arr_24 [i_11 + 1] [i_11 - 4] [i_11 - 4] [i_11 - 4]), (((/* implicit */int) (unsigned short)12400)))) : ((-(1016943949)))));
            var_31 &= ((/* implicit */int) ((((/* implicit */_Bool) 1016943983)) ? (((/* implicit */unsigned long long int) 560368861)) : (2943763736414409033ULL)));
        }
        arr_40 [i_3] [i_3] = (!(((/* implicit */_Bool) var_11)));
    }
    var_32 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((var_5) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)40)))))))))));
}
