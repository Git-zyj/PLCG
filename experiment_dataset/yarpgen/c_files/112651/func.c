/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112651
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
        for (short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 3; i_3 < 14; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_10 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) == (((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65529)) * (((/* implicit */int) (unsigned short)18))))) / (var_8)))));
                                var_11 = ((/* implicit */_Bool) ((unsigned short) (unsigned short)65520));
                            }
                        } 
                    } 
                    var_12 = ((/* implicit */unsigned short) (+(min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [1LL] [(signed char)7] [(signed char)7] [(signed char)7])) ? (((/* implicit */int) (unsigned short)6)) : (((/* implicit */int) (unsigned short)18))))), (arr_3 [i_0])))));
                    arr_14 [i_0] [i_2] = ((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)65509)), ((+(((/* implicit */int) var_7))))));
                    arr_15 [i_0] [i_0] [i_2] |= ((/* implicit */short) arr_3 [i_1]);
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (long long int i_5 = 1; i_5 < 13; i_5 += 4) 
    {
        arr_18 [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((-1541416310084269914LL), (((/* implicit */long long int) (signed char)-1))))) ? (((/* implicit */int) (unsigned short)65529)) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)15)) ? (arr_7 [i_5] [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)27588)))))))));
        var_13 = ((/* implicit */short) var_7);
        var_14 = ((/* implicit */long long int) arr_3 [i_5]);
    }
    /* vectorizable */
    for (short i_6 = 0; i_6 < 24; i_6 += 4) 
    {
        arr_23 [i_6] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_22 [i_6])) ? (((((/* implicit */int) (unsigned short)65505)) << (((759213415U) - (759213402U))))) : (((/* implicit */int) arr_20 [i_6]))));
        var_15 = ((((/* implicit */_Bool) arr_22 [i_6])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_22 [i_6])));
    }
}
