/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107672
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) 15876649667265688384ULL)))))));
                    var_14 ^= ((/* implicit */_Bool) ((unsigned int) -2065333613));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_3 = 0; i_3 < 12; i_3 += 2) 
    {
        for (int i_4 = 0; i_4 < 12; i_4 += 2) 
        {
            {
                arr_16 [i_3] [i_4] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) 15876649667265688368ULL))) ? (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_3]))) : (var_7))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) (signed char)123))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)1018)))))) : (((((/* implicit */_Bool) var_8)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (short)30663))))))))));
                arr_17 [i_3] [i_3] [i_3] = ((arr_1 [i_4]) ? (((/* implicit */long long int) max((arr_4 [i_3] [i_4]), (arr_4 [i_3] [i_4])))) : (var_5));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (signed char)127)) ? (60809342U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))));
    /* LoopNest 2 */
    for (unsigned int i_5 = 3; i_5 < 21; i_5 += 1) 
    {
        for (signed char i_6 = 0; i_6 < 22; i_6 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_7 = 3; i_7 < 19; i_7 += 1) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 4) 
                    {
                        for (short i_9 = 0; i_9 < 22; i_9 += 4) 
                        {
                            {
                                arr_32 [i_5] [i_6] [i_6] [i_7] [i_8] [i_9] [i_9] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_27 [i_7] [i_8] [i_7])) ? (arr_31 [i_5] [i_5] [(signed char)6] [i_5] [i_5] [(signed char)10] [i_5]) : (((/* implicit */long long int) 60809342U))))))) < (((long long int) 15876649667265688368ULL))));
                                var_16 = ((/* implicit */unsigned int) (((~(arr_29 [10LL] [i_5 - 3] [i_7] [i_7 - 2] [(signed char)12] [(_Bool)1]))) != ((+(arr_29 [i_5 + 1] [i_5 - 1] [i_7] [i_7 + 3] [i_5 - 1] [i_7 + 3])))));
                            }
                        } 
                    } 
                } 
                arr_33 [i_6] = ((/* implicit */signed char) arr_26 [i_5 - 1] [i_5 - 1] [i_5] [(signed char)0]);
                var_17 = ((/* implicit */unsigned int) ((2570094406443863247ULL) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_25 [i_5 + 1] [i_6])) ? (((/* implicit */int) var_8)) : ((~(((/* implicit */int) (signed char)-10)))))))));
                arr_34 [i_5] [i_5] = ((/* implicit */unsigned int) (short)-29602);
            }
        } 
    } 
}
