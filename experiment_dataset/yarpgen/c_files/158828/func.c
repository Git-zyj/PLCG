/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158828
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
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) : (((((/* implicit */_Bool) min((((/* implicit */int) (signed char)-115)), (var_5)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)127))))) : (var_9)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] [7LL] = ((/* implicit */unsigned int) (~(max((2065330134811758369ULL), (((/* implicit */unsigned long long int) 0U))))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_12 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((9797986847103173676ULL), (((/* implicit */unsigned long long int) var_2))))) ? (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)52410)))))), (max((((/* implicit */unsigned long long int) arr_9 [i_4])), (max((((/* implicit */unsigned long long int) (signed char)-120)), (11445098164546666833ULL)))))));
                                arr_12 [i_0] [i_1] [i_2] [12U] [(_Bool)1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (1073741823LL) : (((/* implicit */long long int) ((/* implicit */int) min((arr_0 [i_3]), (((/* implicit */unsigned char) min(((signed char)107), ((signed char)(-127 - 1)))))))))));
                                arr_13 [(_Bool)1] [i_0] [i_2] [i_3] [i_4] &= ((/* implicit */_Bool) arr_2 [i_2]);
                            }
                        } 
                    } 
                } 
                var_13 |= ((/* implicit */long long int) 18446744073709551615ULL);
                /* LoopSeq 3 */
                for (int i_5 = 0; i_5 < 13; i_5 += 2) 
                {
                    var_14 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_3) : (((/* implicit */unsigned long long int) arr_7 [i_1] [i_1] [i_5] [i_0]))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_5] [i_1]))) + (arr_2 [i_5]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))));
                    arr_17 [i_0] [i_0] [(short)3] = ((/* implicit */_Bool) var_6);
                    arr_18 [i_0] = ((/* implicit */long long int) 711639884U);
                }
                /* vectorizable */
                for (unsigned short i_6 = 3; i_6 < 12; i_6 += 2) 
                {
                    /* LoopSeq 3 */
                    for (long long int i_7 = 1; i_7 < 12; i_7 += 2) 
                    {
                        arr_25 [i_0] [9U] [(unsigned char)2] [i_6 - 3] [i_7] = ((/* implicit */unsigned int) ((unsigned long long int) -3747812663049429766LL));
                        var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) arr_2 [i_0]))));
                    }
                    for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 3) 
                    {
                        arr_30 [i_8] [i_6] [i_6] = ((/* implicit */unsigned int) ((signed char) (short)-12347));
                        arr_31 [(_Bool)1] [i_1] [11LL] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_8)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_24 [i_1] [i_1] [4] [2LL] [12LL])))) : (var_9)));
                    }
                    for (unsigned int i_9 = 1; i_9 < 10; i_9 += 1) 
                    {
                        arr_35 [i_0] [(signed char)11] [i_9] [i_9] [i_0] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 14803839034701927600ULL)) ? (363131638) : (((/* implicit */int) (signed char)99))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (1477013047)))) : (((long long int) arr_24 [i_1] [i_1] [i_1] [(signed char)0] [8U])));
                        arr_36 [(short)3] [i_1] [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) ((arr_1 [i_9 + 2]) >= (((/* implicit */int) arr_14 [i_0] [(unsigned short)8] [i_6 - 1])))))));
                    }
                    arr_37 [i_6] [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-127)) ? (((/* implicit */int) (signed char)51)) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_32 [9U]))))));
                    var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-127)) / (2147483628)));
                }
                for (unsigned int i_10 = 0; i_10 < 13; i_10 += 4) 
                {
                    var_17 = ((/* implicit */unsigned int) -1);
                    var_18 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (9226550567658750683ULL)))) ? (((/* implicit */int) (signed char)92)) : (((/* implicit */int) arr_14 [i_1] [i_1] [i_10]))))));
                }
            }
        } 
    } 
}
