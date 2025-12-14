/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14755
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
    var_12 = ((/* implicit */unsigned long long int) ((((long long int) (+(((/* implicit */int) (unsigned char)222))))) << (((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)174))) / (var_11))) << (((((/* implicit */int) max(((short)-32227), (((/* implicit */short) (unsigned char)81))))) - (78)))))));
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)-32230)) ? (-8352770813825727258LL) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) / (max((((/* implicit */long long int) (unsigned char)81)), (var_5)))))) ? (((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) 18446744073709551615ULL)) || (((/* implicit */_Bool) var_5)))))) : (var_2)));
    var_14 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)26)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-122))) : (var_9)))) || (((/* implicit */_Bool) ((signed char) var_5))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (!(((((/* implicit */_Bool) 1492198722U)) || (((/* implicit */_Bool) 2802768571U)))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 3; i_2 < 9; i_2 += 2) 
            {
                {
                    arr_7 [i_1] = ((/* implicit */unsigned short) ((unsigned int) (!(((/* implicit */_Bool) max((var_1), (((/* implicit */long long int) var_0))))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 4; i_3 < 7; i_3 += 2) 
                    {
                        arr_11 [i_1] [5ULL] [i_1] [5ULL] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)12119))) <= (24U)));
                        var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) ((_Bool) 6U)))));
                        arr_12 [(_Bool)1] [(_Bool)1] [i_2] [i_2 + 2] [i_1] = ((/* implicit */int) (((((_Bool)1) && (((/* implicit */_Bool) var_11)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (67108863LL) : (((/* implicit */long long int) var_9)))))));
                        arr_13 [i_2] [i_2 - 3] [i_1] [i_2] = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) (unsigned char)95)) ? (var_5) : (arr_0 [i_1]))));
                    }
                    for (signed char i_4 = 3; i_4 < 9; i_4 += 2) 
                    {
                        var_16 = ((/* implicit */unsigned long long int) ((long long int) ((long long int) min((arr_5 [6U]), (((/* implicit */unsigned int) (signed char)-25))))));
                        arr_16 [i_1] [i_1] [i_4 + 2] [i_4] = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((148602520U) << (((((/* implicit */int) (unsigned short)14562)) - (14536)))))) * (8960437768546266900ULL))) * (((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) (signed char)-1)), (var_5))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)21451)) <= (((/* implicit */int) arr_10 [i_0 + 1] [i_0] [i_0 + 3] [i_0 + 1]))))))))));
                    }
                }
            } 
        } 
    } 
}
