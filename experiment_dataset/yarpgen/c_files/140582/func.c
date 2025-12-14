/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140582
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned short)0))))) ? ((-(((/* implicit */int) var_7)))) : (((((/* implicit */_Bool) (unsigned short)20)) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_1])) : (((/* implicit */int) var_4))))));
                var_14 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((arr_2 [i_0] [2ULL]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) 14015891544419436660ULL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_1))))))));
                var_15 ^= ((/* implicit */unsigned long long int) arr_4 [i_0] [(_Bool)1] [i_0]);
                var_16 |= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((((/* implicit */_Bool) 334198964)) && (((/* implicit */_Bool) (short)-32760))))) : (1922696546))), (((/* implicit */int) min(((unsigned short)51582), (((/* implicit */unsigned short) (short)-1)))))));
                var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_6)))) ? ((+(9287860643306173300ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_2 [i_0] [i_1])) : (((/* implicit */int) arr_2 [i_0] [i_0]))))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_2 = 2; i_2 < 16; i_2 += 3) 
    {
        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(530547870)))) ? (((((/* implicit */_Bool) (unsigned short)40583)) ? (arr_1 [i_2 + 2]) : (((/* implicit */int) var_3)))) : ((-(arr_1 [i_2 + 2])))));
        var_19 = ((/* implicit */short) (unsigned short)0);
    }
}
