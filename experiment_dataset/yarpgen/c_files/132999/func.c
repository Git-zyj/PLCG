/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132999
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
    var_12 += ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (signed char)18)) : (((/* implicit */int) (signed char)-14)))));
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_11)), ((-(var_9)))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)15))) : (var_1)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */long long int) 691643376);
                arr_5 [i_0] [i_1] &= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */int) max(((signed char)-10), ((signed char)-19)))) - (((((/* implicit */int) (unsigned short)3072)) + (-691643376)))))), (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_6) == (1551427278025283776ULL))))) : (((((/* implicit */_Bool) (signed char)64)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))) : (0ULL)))))));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((unsigned char)0), ((unsigned char)1)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (1551427278025283769ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))))) : ((-(arr_1 [i_0 - 1])))));
            }
        } 
    } 
}
