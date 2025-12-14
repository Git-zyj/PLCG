/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133822
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) ((var_9) ? (((/* implicit */int) ((16404822767269091787ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (short)19846)))))) : (((/* implicit */int) var_8))));
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_0 [i_0])));
    }
    for (int i_1 = 3; i_1 < 7; i_1 += 2) 
    {
        var_16 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) -284983158)) || (((((/* implicit */int) var_10)) < (((/* implicit */int) (signed char)-80)))))) ? (((((/* implicit */unsigned int) arr_5 [i_1] [i_1 - 2])) - (arr_6 [(_Bool)1] [i_1 + 2]))) : (arr_6 [i_1] [i_1])));
        arr_8 [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_1])))))));
    }
    for (signed char i_2 = 0; i_2 < 21; i_2 += 4) 
    {
        arr_11 [i_2] = ((/* implicit */unsigned int) (signed char)(-127 - 1));
        var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((max((arr_10 [i_2]), (arr_10 [i_2]))), (((/* implicit */signed char) ((var_7) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)-53))))))))) ? (((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) var_1)))))) : (((((/* implicit */int) min((arr_1 [(signed char)16]), ((unsigned short)40142)))) << (((((/* implicit */int) max(((signed char)-115), ((signed char)-80)))) + (80))))))))));
        /* LoopNest 2 */
        for (unsigned int i_3 = 0; i_3 < 21; i_3 += 2) 
        {
            for (signed char i_4 = 4; i_4 < 19; i_4 += 3) 
            {
                {
                    var_18 = ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_12 [i_4]))))) == (((1945307141U) << (((/* implicit */int) var_15)))));
                    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((unsigned short)48388), (((/* implicit */unsigned short) (short)8190))))) ? (((((((/* implicit */int) (signed char)-9)) + (2147483647))) >> (((((/* implicit */int) (unsigned short)40142)) - (40130))))) : (((/* implicit */int) (!((_Bool)1))))))) ? ((-(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)119))))))) : (((/* implicit */int) ((unsigned char) (short)-8191)))));
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 21; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 1; i_6 < 19; i_6 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)12673))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)110)) || (((/* implicit */_Bool) (signed char)-89))))) : (((/* implicit */int) arr_18 [i_4 + 2] [i_4])))));
                                var_21 = ((/* implicit */short) min(((+(arr_24 [i_4] [i_6] [i_6] [i_6 - 1] [i_6]))), (arr_24 [i_4] [16U] [i_6 + 2] [i_6 + 2] [i_4])));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_7 = 0; i_7 < 21; i_7 += 1) 
    {
        arr_28 [i_7] = ((/* implicit */int) ((((/* implicit */int) ((4044186380U) >= (((/* implicit */unsigned int) 268369920))))) >= (((/* implicit */int) ((var_14) || (((/* implicit */_Bool) 1452269563859598025LL)))))));
        /* LoopNest 2 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (int i_9 = 3; i_9 < 17; i_9 += 3) 
            {
                {
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)31)) || (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)42801)) - (((/* implicit */int) (unsigned short)10665)))))));
                    var_23 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_9 + 1])) ? (3707986087U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-110)))));
                    /* LoopNest 2 */
                    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                    {
                        for (unsigned int i_11 = 2; i_11 < 19; i_11 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */_Bool) min((var_24), ((!(((/* implicit */_Bool) arr_24 [16] [i_10 - 1] [i_8] [i_11 + 1] [i_9 - 1]))))));
                                var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((4294967293U) - (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_10] [i_11 - 1]))) : (arr_0 [i_9 - 3])));
                                var_26 = ((/* implicit */unsigned int) ((-6042790385297492554LL) - (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_11])))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_27 = ((/* implicit */_Bool) ((unsigned long long int) (unsigned char)251));
        var_28 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U))))) & (((/* implicit */int) ((unsigned char) var_8)))));
    }
    var_29 = ((/* implicit */_Bool) (+(min(((+(1250119380U))), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_8)))))))));
    var_30 = ((/* implicit */short) var_14);
}
