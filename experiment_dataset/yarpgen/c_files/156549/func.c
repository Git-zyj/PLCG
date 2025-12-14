/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156549
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
    var_15 -= ((/* implicit */unsigned char) ((var_12) <= (((/* implicit */unsigned int) min(((+(((/* implicit */int) var_9)))), ((-(((/* implicit */int) (unsigned char)69)))))))));
    var_16 = ((((/* implicit */_Bool) max((min((((/* implicit */unsigned int) var_14)), (3928283215U))), (((/* implicit */unsigned int) min(((unsigned char)186), (var_14))))))) ? (((((/* implicit */_Bool) max(((unsigned char)69), (((/* implicit */unsigned char) (signed char)-99))))) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((unsigned int) var_14)) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)199)) > (((/* implicit */int) (unsigned char)69)))))))))));
    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) (!(((min((4039320156U), (3524251445U))) > (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 4008229510161955508ULL)))))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    arr_8 [i_2] [i_0] [i_0] [10U] &= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4039320135U)) ? (((/* implicit */int) (signed char)73)) : (((/* implicit */int) (signed char)91))))) ? (((/* implicit */int) arr_0 [i_1 + 1])) : (((/* implicit */int) var_9))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))), (((((/* implicit */_Bool) 4039320144U)) ? (((/* implicit */unsigned long long int) 4190381499U)) : (var_2)))))));
                    var_18 = ((/* implicit */long long int) max((((4294967295U) == (2755171068U))), ((!(((/* implicit */_Bool) arr_2 [i_0 + 1]))))));
                    var_19 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((long long int) var_13))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (3714765468754128819LL) : (arr_3 [(signed char)0] [i_2])))) : (((((/* implicit */_Bool) 2762619493U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (var_5))))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_1])) ? (((/* implicit */int) arr_5 [i_2] [i_1 + 2] [i_2])) : (((/* implicit */int) (signed char)91)))))));
                    arr_9 [i_2] [i_2] [(signed char)8] [i_2] = (+(((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 - 2]))) : (0U))));
                }
            } 
        } 
    } 
}
