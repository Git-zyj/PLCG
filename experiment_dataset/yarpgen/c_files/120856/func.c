/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120856
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
    var_12 |= ((/* implicit */signed char) var_9);
    var_13 = max((((unsigned long long int) ((unsigned long long int) var_3))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)212)) : (var_2)))) ? (12027825338754262600ULL) : (((/* implicit */unsigned long long int) ((var_7) >> (((6418918734955289024ULL) - (6418918734955288999ULL)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned long long int) var_9))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)163))))) : (max((arr_2 [i_0] [i_1 - 2]), (((/* implicit */int) var_11)))))))))));
                var_15 += (~(max((max((5598392943649017301ULL), (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) arr_6 [9U] [9U] [9U])))));
                arr_7 [i_1] [i_0] = ((/* implicit */unsigned long long int) arr_4 [(unsigned char)0] [13ULL] [i_1]);
                arr_8 [i_1] = ((/* implicit */signed char) (~(((unsigned long long int) ((unsigned long long int) var_3)))));
            }
        } 
    } 
}
