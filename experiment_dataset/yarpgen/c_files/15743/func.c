/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15743
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
    for (int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    arr_6 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_5 [i_0] [i_1] [i_2]), (arr_0 [i_0] [i_1])))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)35903)) < (((/* implicit */int) arr_3 [i_0] [i_1]))))) : (((((/* implicit */_Bool) (signed char)-6)) ? (-1) : (((/* implicit */int) (unsigned short)48816))))))) && (((/* implicit */_Bool) min((((18446744073709551602ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))))), (((/* implicit */unsigned long long int) max((var_14), (var_14)))))))));
                    arr_7 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_0 [6U] [i_1])) ? (665949445523763894ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) <= (((/* implicit */int) (signed char)-13)))))))) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 14710253809726099948ULL)) || (((/* implicit */_Bool) 31ULL)))))) % (min((var_0), (((/* implicit */unsigned long long int) arr_1 [i_2])))))))));
                    arr_8 [i_0] [0] [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65516)) - (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)39)) + (((/* implicit */int) (_Bool)1))))) : (((var_0) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)178))))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((arr_1 [i_0]) % (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) > (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))) - (arr_5 [2] [i_1] [i_2]))))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */long long int) ((((((/* implicit */_Bool) min((1975431152), (1758134997)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (var_12) : (((/* implicit */int) var_13))))) : (min((var_9), (((/* implicit */unsigned int) var_7)))))) >> (((((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned short)39365)))) - (((((/* implicit */int) (short)-1)) / (((/* implicit */int) (unsigned short)50026)))))) - (60919)))));
}
