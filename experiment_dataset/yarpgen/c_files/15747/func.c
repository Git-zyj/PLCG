/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15747
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)34753))))) ? (((/* implicit */unsigned int) min((((/* implicit */int) (unsigned short)34753)), (max((((/* implicit */int) arr_2 [i_0])), (arr_1 [i_0])))))) : (((((/* implicit */unsigned int) ((/* implicit */int) min((arr_3 [0U]), (((/* implicit */unsigned short) (short)7936)))))) & (max((((/* implicit */unsigned int) arr_2 [i_0])), (arr_0 [5ULL])))))));
        var_11 = ((/* implicit */int) max((((unsigned int) min((((/* implicit */unsigned int) (signed char)118)), (var_5)))), (arr_0 [i_0])));
    }
    for (unsigned long long int i_1 = 1; i_1 < 12; i_1 += 3) 
    {
        var_12 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (+(((/* implicit */int) (short)7936))))) ? (arr_7 [i_1 + 2] [i_1 + 2]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-119))))) >= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_2 [i_1 + 2])) <= (((1022) + (((/* implicit */int) (signed char)84))))))))));
        arr_9 [i_1] = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : (((/* implicit */int) ((716177371547623201ULL) > (((/* implicit */unsigned long long int) arr_7 [i_1 + 2] [i_1 + 2])))))));
        var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) arr_3 [i_1]))));
    }
    for (unsigned long long int i_2 = 2; i_2 < 22; i_2 += 1) 
    {
        var_14 = ((/* implicit */unsigned long long int) max((var_14), (min((((/* implicit */unsigned long long int) arr_0 [i_2])), (min((((/* implicit */unsigned long long int) arr_1 [i_2])), (max((((/* implicit */unsigned long long int) arr_10 [i_2])), (arr_11 [i_2] [i_2])))))))));
        var_15 = ((/* implicit */int) arr_0 [i_2 + 1]);
        var_16 = ((/* implicit */unsigned int) ((signed char) ((int) arr_1 [i_2 - 1])));
    }
    var_17 &= ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */int) (signed char)114)) | (2147483647)))) ? (var_1) : (((/* implicit */unsigned long long int) ((var_5) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))) ^ (((/* implicit */unsigned long long int) var_8))));
}
